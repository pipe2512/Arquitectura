
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;



entity RF is
    Port ( rs1 : in  STD_LOGIC_VECTOR (5 downto 0);
           rs2 : in  STD_LOGIC_VECTOR (5 downto 0);
           rd : in  STD_LOGIC_VECTOR (5 downto 0);
           rst : in  STD_LOGIC;
           DataWrite : in  STD_LOGIC_VECTOR (31 downto 0);
           Crs1 : out  STD_LOGIC_VECTOR (31 downto 0);
           Crs2 : out  STD_LOGIC_VECTOR (31 downto 0));
end RF;

architecture Behavioral of RF is

	type ram_type is array (0 to 39) of std_logic_vector (31 downto 0);
	signal registers : ram_type :=(others => x"00000000");

begin
	
	process(rs1,rs2,rd,rst,DataWrite)
	begin
		if (rst = '1') then
			registers <= (others => x"00000000");
			Crs1 <= x"00000000";
			Crs2 <= x"00000000";
		else
			if(rd /= "000000")then
				Crs1 <= registers(conv_integer(rs1));
				Crs2 <= registers(conv_integer(rs2));
				registers(conv_integer(rd)) <= DataWrite;
			else
				Crs1 <= registers(conv_integer(rs1));
				Crs2 <= registers(conv_integer(rs2));
			end if;
		end if;
	end process;
			

end Behavioral;

