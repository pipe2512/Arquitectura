
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TB_RF IS
END TB_RF;
 
ARCHITECTURE behavior OF TB_RF IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RF
    PORT(
         rs1 : IN  std_logic_vector(4 downto 0);
         rs2 : IN  std_logic_vector(4 downto 0);
         rd : IN  std_logic_vector(4 downto 0);
         rst : IN  std_logic;
         DataWrite : IN  std_logic_vector(31 downto 0);
         Crs1 : OUT  std_logic_vector(31 downto 0);
         Crs2 : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal rs1 : std_logic_vector(4 downto 0) := (others => '0');
   signal rs2 : std_logic_vector(4 downto 0) := (others => '0');
   signal rd : std_logic_vector(4 downto 0) := (others => '0');
   signal rst : std_logic := '0';
   signal DataWrite : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal Crs1 : std_logic_vector(31 downto 0);
   signal Crs2 : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RF PORT MAP (
          rs1 => rs1,
          rs2 => rs2,
          rd => rd,
          rst => rst,
          DataWrite => DataWrite,
          Crs1 => Crs1,
          Crs2 => Crs2
        );
 

   -- Stimulus process
   stim_proc: process
   begin
		DataWrite <= x"FFFFFFFF";
		rd <= "00001";
		
      wait for 40 ns;	
		
		DataWrite <= x"FFFFFFF0";
		rd <= "00010";
		wait for 40 ns;
		
		rs1 <= "00001";
		rs2 <= "00010";
		wait for 40 ns;
		
		rst <= '1';
		
      wait;
   end process;

END;
