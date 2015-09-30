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

/* This file is designed for use with ISim build 0x12940baa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Photographer/Downloads/atlys_ddr_test-20110731 (3) - Copy/atlys_ddr_test/tb_ddr2_interface.v";
static int ng1[] = {0, 0};
static int ng2[] = {0, 0, 0, 0};
static int ng3[] = {1, 0};
static const char *ng4 = "Calibration done";
static int ng5[] = {20, 0, 0, 0};
static int ng6[] = {21, 0, 0, 0};
static int ng7[] = {22, 0, 0, 0};
static int ng8[] = {23, 0, 0, 0};
static int ng9[] = {24, 0, 0, 0};
static int ng10[] = {25, 0, 0, 0};
static int ng11[] = {26, 0, 0, 0};
static const char *ng12 = "WR count: %d";
static unsigned int ng13[] = {0U, 0U};
static int ng14[] = {7, 0};
static int ng15[] = {16, 0};
static unsigned int ng16[] = {1U, 0U};
static const char *ng17 = "Read: %d, empty %d";



static void Initial_149_0(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 9384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);

LAB4:    xsi_set_current_line(151, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(155, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(157, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7184);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7344);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(169, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 200000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8464);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(173, ng0);

LAB6:    t2 = (t0 + 4224U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    if (t8 > 0)
        goto LAB8;

LAB7:    t9 = (t0 + 10200);
    *((int *)t9) = 1;
    t10 = (t0 + 9384U);
    *((char **)t10) = &&LAB6;
    goto LAB1;

LAB8:    t11 = (t0 + 10200);
    *((int *)t11) = 0;
    xsi_set_current_line(174, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(179, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 7024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(180, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(183, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 6704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 6704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(185, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 6704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 6704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 6704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 64);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 7024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 2944U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng12, 2, t0, (char)118, t3, 7);
    xsi_set_current_line(194, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 6064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(196, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 6224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(206, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 32500LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(208, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 6384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(211, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 8304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(217, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(221, ng0);

LAB25:    t2 = (t0 + 3424U);
    t3 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t7 & 1U);
    if (t8 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t2) == 0)
        goto LAB26;

LAB28:    t9 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t9) = 1;

LAB29:    t10 = (t12 + 4);
    t11 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (~(t13));
    *((unsigned int *)t12) = t14;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB31;

LAB30:    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 1U);
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 1U);
    t21 = (t12 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t12);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB33;

LAB32:    t27 = (t0 + 10216);
    *((int *)t27) = 1;
    t28 = (t0 + 9384U);
    *((char **)t28) = &&LAB25;
    goto LAB1;

LAB26:    *((unsigned int *)t12) = 1;
    goto LAB29;

LAB31:    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t12) = (t15 | t16);
    t17 = *((unsigned int *)t10);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t17 | t18);
    goto LAB30;

LAB33:    t29 = (t0 + 10216);
    *((int *)t29) = 0;
    xsi_set_current_line(222, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(224, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(224, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(225, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(226, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(228, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(233, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB48;
    goto LAB1;

LAB48:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB49:    xsi_set_current_line(238, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 12800LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 3104U);
    t3 = *((char **)t2);
    t2 = (t0 + 3424U);
    t9 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 3, t0, (char)118, t3, 64, (char)118, t9, 1);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 9192);
    xsi_process_wait(t2, 10000000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(244, ng0);
    xsi_vlog_stop(1);
    goto LAB1;

}

static void Always_247_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 9632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(247, ng0);

LAB4:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 9440);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 5904);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 5904);
    xsi_vlogvar_assign_value(t23, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng13)));
    t3 = (t0 + 10296);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000000231499839_2585087027_init()
{
	static char *pe[] = {(void *)Initial_149_0,(void *)Always_247_1,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000231499839_2585087027", "isim/tb_ddr2_interface_isim_beh.exe.sim/work/m_00000000000231499839_2585087027.didat");
	xsi_register_executes(pe);
}
