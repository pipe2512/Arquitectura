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
static const char *ng0 = "C:/Users/pipe/Desktop/Arquitectura-pro6/Arquitectura-pro6/Procesador 6/Win_man.vhd";
extern char *IEEE_P_3499444699;
extern char *IEEE_P_3620187407;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );
unsigned char ieee_p_3620187407_sub_4058165771_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2455020893_3212880686_p_0(char *t0)
{
    char t10[16];
    char t11[16];
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    unsigned char t29;
    int t30;
    int t31;
    int t32;
    char *t33;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t3);
    t5 = (t4 * 16);
    t1 = (t0 + 5624);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t4 = *((int *)t2);
    t1 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t11, t4, 6);
    t6 = (t0 + 10000);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t10, t1, t11, t6, t12);
    t14 = (t10 + 12U);
    t13 = *((unsigned int *)t14);
    t15 = (1U * t13);
    t3 = (6U != t15);
    if (t3 == 1)
        goto LAB2;

LAB3:    t16 = (t0 + 5688);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 6U);
    xsi_driver_first_trans_fast_port(t16);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9792U);
    t6 = (t0 + 10005);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (1 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB4;

LAB6:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9792U);
    t6 = (t0 + 10013);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (1 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB13;

LAB14:    t3 = (unsigned char)0;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:
LAB11:
LAB5:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9744U);
    t6 = (t0 + 10021);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9744U);
    t6 = (t0 + 10031);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB25;

LAB26:    t3 = (unsigned char)0;

LAB27:    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9744U);
    t6 = (t0 + 10041);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB31;

LAB32:    t3 = (unsigned char)0;

LAB33:    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 9744U);
    t6 = (t0 + 10051);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB37;

LAB38:    t3 = (unsigned char)0;

LAB39:    if (t3 != 0)
        goto LAB34;

LAB36:
LAB35:
LAB29:
LAB23:
LAB17:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9760U);
    t6 = (t0 + 10061);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB43;

LAB44:    t3 = (unsigned char)0;

LAB45:    if (t3 != 0)
        goto LAB40;

LAB42:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9760U);
    t6 = (t0 + 10071);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB49;

LAB50:    t3 = (unsigned char)0;

LAB51:    if (t3 != 0)
        goto LAB46;

LAB48:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9760U);
    t6 = (t0 + 10081);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB55;

LAB56:    t3 = (unsigned char)0;

LAB57:    if (t3 != 0)
        goto LAB52;

LAB54:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 9760U);
    t6 = (t0 + 10091);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB61;

LAB62:    t3 = (unsigned char)0;

LAB63:    if (t3 != 0)
        goto LAB58;

LAB60:
LAB59:
LAB53:
LAB47:
LAB41:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9776U);
    t6 = (t0 + 10101);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB67;

LAB68:    t3 = (unsigned char)0;

LAB69:    if (t3 != 0)
        goto LAB64;

LAB66:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9776U);
    t6 = (t0 + 10111);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB73;

LAB74:    t3 = (unsigned char)0;

LAB75:    if (t3 != 0)
        goto LAB70;

LAB72:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9776U);
    t6 = (t0 + 10121);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB79;

LAB80:    t3 = (unsigned char)0;

LAB81:    if (t3 != 0)
        goto LAB76;

LAB78:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9776U);
    t6 = (t0 + 10131);
    t8 = (t10 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t4 = (4 - 0);
    t13 = (t4 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t21 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t6, t10);
    if (t21 == 1)
        goto LAB85;

LAB86:    t3 = (unsigned char)0;

LAB87:    if (t3 != 0)
        goto LAB82;

LAB84:
LAB83:
LAB77:
LAB71:
LAB65:    t1 = (t0 + 5496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(6U, t15, 0);
    goto LAB3;

LAB4:    xsi_set_current_line(40, ng0);
    t19 = (t0 + 5752);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t19);
    goto LAB5;

LAB7:    t9 = (t0 + 1672U);
    t14 = *((char **)t9);
    t9 = (t0 + 9808U);
    t16 = (t0 + 10007);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 5;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (5 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);
    t19 = (t0 + 5752);
    t20 = (t19 + 56U);
    t23 = *((char **)t20);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t19);
    goto LAB11;

LAB13:    t9 = (t0 + 1672U);
    t14 = *((char **)t9);
    t9 = (t0 + 9808U);
    t16 = (t0 + 10015);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 5;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (5 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB15;

LAB16:    xsi_set_current_line(50, ng0);
    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t19 = (t0 + 9744U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 5816);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    *((int *)t28) = t26;
    xsi_driver_first_trans_fast(t23);
    goto LAB17;

LAB19:    t9 = (t0 + 1032U);
    t14 = *((char **)t9);
    t9 = (t0 + 9744U);
    t16 = (t0 + 10026);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB21;

LAB22:    xsi_set_current_line(53, ng0);
    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t19 = (t0 + 9744U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 - t31);
    t23 = (t0 + 5816);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB23;

LAB25:    t9 = (t0 + 1032U);
    t14 = *((char **)t9);
    t9 = (t0 + 9744U);
    t16 = (t0 + 10036);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB27;

LAB28:    xsi_set_current_line(56, ng0);
    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t19 = (t0 + 9744U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 + t31);
    t23 = (t0 + 5816);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB29;

LAB31:    t9 = (t0 + 1032U);
    t14 = *((char **)t9);
    t9 = (t0 + 9744U);
    t16 = (t0 + 10046);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB33;

LAB34:    xsi_set_current_line(59, ng0);
    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t19 = (t0 + 9744U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 + t31);
    t23 = (t0 + 5816);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB35;

LAB37:    t9 = (t0 + 1032U);
    t14 = *((char **)t9);
    t9 = (t0 + 9744U);
    t16 = (t0 + 10056);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB39;

LAB40:    xsi_set_current_line(69, ng0);
    t19 = (t0 + 1192U);
    t20 = *((char **)t19);
    t19 = (t0 + 9760U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 5880);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    *((int *)t28) = t26;
    xsi_driver_first_trans_fast(t23);
    goto LAB41;

LAB43:    t9 = (t0 + 1192U);
    t14 = *((char **)t9);
    t9 = (t0 + 9760U);
    t16 = (t0 + 10066);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB45;

LAB46:    xsi_set_current_line(72, ng0);
    t19 = (t0 + 1192U);
    t20 = *((char **)t19);
    t19 = (t0 + 9760U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 - t31);
    t23 = (t0 + 5880);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB47;

LAB49:    t9 = (t0 + 1192U);
    t14 = *((char **)t9);
    t9 = (t0 + 9760U);
    t16 = (t0 + 10076);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB51;

LAB52:    xsi_set_current_line(75, ng0);
    t19 = (t0 + 1192U);
    t20 = *((char **)t19);
    t19 = (t0 + 9760U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 + t31);
    t23 = (t0 + 5880);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB53;

LAB55:    t9 = (t0 + 1192U);
    t14 = *((char **)t9);
    t9 = (t0 + 9760U);
    t16 = (t0 + 10086);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB57;

LAB58:    xsi_set_current_line(78, ng0);
    t19 = (t0 + 1192U);
    t20 = *((char **)t19);
    t19 = (t0 + 9760U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 + t31);
    t23 = (t0 + 5880);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB59;

LAB61:    t9 = (t0 + 1192U);
    t14 = *((char **)t9);
    t9 = (t0 + 9760U);
    t16 = (t0 + 10096);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB63;

LAB64:    xsi_set_current_line(88, ng0);
    t19 = (t0 + 1352U);
    t20 = *((char **)t19);
    t19 = (t0 + 9776U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 5944);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    *((int *)t28) = t26;
    xsi_driver_first_trans_fast(t23);
    goto LAB65;

LAB67:    t9 = (t0 + 1352U);
    t14 = *((char **)t9);
    t9 = (t0 + 9776U);
    t16 = (t0 + 10106);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB69;

LAB70:    xsi_set_current_line(91, ng0);
    t19 = (t0 + 1352U);
    t20 = *((char **)t19);
    t19 = (t0 + 9776U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 - t31);
    t23 = (t0 + 5944);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB71;

LAB73:    t9 = (t0 + 1352U);
    t14 = *((char **)t9);
    t9 = (t0 + 9776U);
    t16 = (t0 + 10116);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB75;

LAB76:    xsi_set_current_line(94, ng0);
    t19 = (t0 + 1352U);
    t20 = *((char **)t19);
    t19 = (t0 + 9776U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 + t31);
    t23 = (t0 + 5944);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB77;

LAB79:    t9 = (t0 + 1352U);
    t14 = *((char **)t9);
    t9 = (t0 + 9776U);
    t16 = (t0 + 10126);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB81;

LAB82:    xsi_set_current_line(97, ng0);
    t19 = (t0 + 1352U);
    t20 = *((char **)t19);
    t19 = (t0 + 9776U);
    t26 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t20, t19);
    t23 = (t0 + 1832U);
    t24 = *((char **)t23);
    t29 = *((unsigned char *)t24);
    t30 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t29);
    t31 = (t30 * 16);
    t32 = (t26 + t31);
    t23 = (t0 + 5944);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    t28 = (t27 + 56U);
    t33 = *((char **)t28);
    *((int *)t33) = t32;
    xsi_driver_first_trans_fast(t23);
    goto LAB83;

LAB85:    t9 = (t0 + 1352U);
    t14 = *((char **)t9);
    t9 = (t0 + 9776U);
    t16 = (t0 + 10136);
    t18 = (t11 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 4;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t5 = (4 - 0);
    t13 = (t5 * 1);
    t13 = (t13 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t13;
    t22 = ieee_p_3620187407_sub_4058165771_3965413181(IEEE_P_3620187407, t14, t9, t16, t11);
    t3 = t22;
    goto LAB87;

}

static void work_a_2455020893_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(106, ng0);

LAB3:    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t1, t4, 6);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (6U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 6008);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 6U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5512);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(6U, t6, 0);
    goto LAB6;

}

static void work_a_2455020893_3212880686_p_2(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t1, t4, 6);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (6U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 6072);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 6U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5528);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(6U, t6, 0);
    goto LAB6;

}

static void work_a_2455020893_3212880686_p_3(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    int t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(108, ng0);

LAB3:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t1, t4, 6);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (6U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 6136);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 6U);
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 5544);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(6U, t6, 0);
    goto LAB6;

}


extern void work_a_2455020893_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2455020893_3212880686_p_0,(void *)work_a_2455020893_3212880686_p_1,(void *)work_a_2455020893_3212880686_p_2,(void *)work_a_2455020893_3212880686_p_3};
	xsi_register_didat("work_a_2455020893_3212880686", "isim/tb_procesador6_isim_beh.exe.sim/work/a_2455020893_3212880686.didat");
	xsi_register_executes(pe);
}
