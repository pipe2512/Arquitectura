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
static const char *ng0 = "C:/Users/pipe/Desktop/procesador/procesador/Procesador2/RF.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_0953353097_3212880686_p_0(char *t0)
{
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
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 6256U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t16 = (t15 - 0);
    t9 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t15);
    t17 = (32U * t9);
    t18 = (0 + t17);
    t6 = (t2 + t18);
    t7 = (t0 + 3776);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t1 = (t0 + 6272U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t16 = (t15 - 0);
    t9 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 39, 1, t15);
    t17 = (32U * t9);
    t18 = (0 + t17);
    t6 = (t2 + t18);
    t7 = (t0 + 3840);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t6, 32U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t1 = (t0 + 6288U);
    t15 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t5, t1);
    t16 = (t15 - 0);
    t9 = (t16 * 1);
    t17 = (32U * t9);
    t18 = (0U + t17);
    t6 = (t0 + 3712);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 32U);
    xsi_driver_first_trans_delta(t6, t18, 32U, 0LL);

LAB3:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t1 = xsi_get_transient_memory(1280U);
    memset(t1, 0, 1280U);
    t5 = t1;
    t6 = (t0 + 7720);
    t8 = (32U != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 3712);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 1280U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 7752);
    t5 = (t0 + 3776);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 7784);
    t5 = (t0 + 3840);
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

}


extern void work_a_0953353097_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0953353097_3212880686_p_0};
	xsi_register_didat("work_a_0953353097_3212880686", "isim/TBProcesador2_isim_beh.exe.sim/work/a_0953353097_3212880686.didat");
	xsi_register_executes(pe);
}
