/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/pipe/Desktop/Arquitectura-pro6/Arquitectura-pro6/Procesador 6/RF.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_0953353097_3212880686_p_0(char *t0)
{
    char t15[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t16;
    unsigned char t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7020U);
    t5 = (t0 + 8568);
    t7 = (t15 + 0U);
    t10 = (t7 + 0U);
    *((int *)t10) = 0;
    t10 = (t7 + 4U);
    *((int *)t10) = 5;
    t10 = (t7 + 8U);
    *((int *)t10) = 1;
    t16 = (5 - 0);
    t9 = (t16 * 1);
    t9 = (t9 + 1);
    t10 = (t7 + 12U);
    *((unsigned int *)t10) = t9;
    t4 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t5, t15);
    if (t4 == 1)
        goto LAB10;

LAB11:    t3 = (unsigned char)0;

LAB12:    if (t3 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 6988U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t18 = (t16 - 0);
    t9 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t16);
    t20 = (32U * t9);
    t21 = (0 + t20);
    t6 = (t2 + t21);
    t7 = (t0 + 4096);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t1 = (t0 + 7004U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t18 = (t16 - 0);
    t9 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t16);
    t20 = (32U * t9);
    t21 = (0 + t20);
    t6 = (t2 + t21);
    t7 = (t0 + 4160);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 7020U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t18 = (t16 - 0);
    t9 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t16);
    t20 = (32U * t9);
    t21 = (0 + t20);
    t6 = (t2 + t21);
    t7 = (t0 + 4224);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);

LAB8:
LAB3:    t1 = (t0 + 3952);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(1280U);
    memset(t1, 0, 1280U);
    t5 = t1;
    t6 = (t0 + 8472);
    t8 = (32U != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 4032);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 1280U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 8504);
    t5 = (t0 + 4096);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 8536);
    t5 = (t0 + 4160);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    t9 = (1280U / 32U);
    xsi_mem_set_data(t5, t6, 32U, t9);
    goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t10 = (t0 + 2472U);
    t12 = *((char **)t10);
    t10 = (t0 + 1032U);
    t13 = *((char **)t10);
    t10 = (t0 + 6988U);
    t18 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t13, t10);
    t19 = (t18 - 0);
    t9 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t18);
    t20 = (32U * t9);
    t21 = (0 + t20);
    t14 = (t12 + t21);
    t22 = (t0 + 4096);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t14, 32U);
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t1 = (t0 + 7004U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t18 = (t16 - 0);
    t9 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t16);
    t20 = (32U * t9);
    t21 = (0 + t20);
    t6 = (t2 + t21);
    t7 = (t0 + 4160);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 7020U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t18 = (t16 - 0);
    t9 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t16);
    t20 = (32U * t9);
    t21 = (0 + t20);
    t6 = (t2 + t21);
    t7 = (t0 + 4224);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 7020U);
    t16 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t18 = (t16 - 0);
    t9 = (t18 * 1);
    t20 = (32U * t9);
    t21 = (0U + t20);
    t6 = (t0 + 4032);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_delta(t6, t21, 32U, 0LL);
    goto LAB8;

LAB10:    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t8 = *((unsigned char *)t11);
    t17 = (t8 == (unsigned char)3);
    t3 = t17;
    goto LAB12;

}


extern void work_a_0953353097_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0953353097_3212880686_p_0};
	xsi_register_didat("work_a_0953353097_3212880686", "isim/tb_procesador6_isim_beh.exe.sim/work/a_0953353097_3212880686.didat");
	xsi_register_executes(pe);
}
