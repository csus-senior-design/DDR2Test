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
static const char *ng0 = "C:/Users/Photographer/Downloads/atlys_ddr_test-20110731 (3) - Copy/atlys_ddr_test/atlys_ddr_test.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U, 0U, 0U};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {2U, 0U, 0U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {3U, 0U, 0U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {4U, 0U, 0U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {5U, 0U, 0U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {6U, 0U, 0U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {6U, 0U};
static unsigned int ng17[] = {16U, 0U};
static int ng18[] = {8, 0};
static int ng19[] = {9, 0};
static unsigned int ng20[] = {1U, 0U};
static int ng21[] = {10, 0};
static int ng22[] = {11, 0};



static void Always_130_0(char *t0)
{
    char t4[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 9728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 10296);
    *((int *)t2) = 1;
    t3 = (t0 + 9760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(131, ng0);
    t5 = (t0 + 5368U);
    t6 = *((char **)t5);
    t5 = (t0 + 8488);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t10) = t17;
    xsi_vlogtype_concat(t4, 2, 2, 2U, t9, 1, t6, 1);
    t18 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t18, t4, 0, 0, 2, 0LL);
    goto LAB2;

}

static void Always_136_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 9976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 10312);
    *((int *)t2) = 1;
    t3 = (t0 + 10008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 8648);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 32);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 32);
    if (t8 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB2;

LAB6:    xsi_set_current_line(138, ng0);

LAB31:    xsi_set_current_line(139, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 8328);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 8488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t5) = t17;
    t9 = (t11 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB30;

LAB8:    xsi_set_current_line(142, ng0);

LAB35:    xsi_set_current_line(143, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    goto LAB30;

LAB10:    xsi_set_current_line(148, ng0);

LAB36:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB30;

LAB12:    xsi_set_current_line(152, ng0);

LAB37:    xsi_set_current_line(153, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB30;

LAB14:    xsi_set_current_line(156, ng0);

LAB38:    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB30;

LAB16:    xsi_set_current_line(160, ng0);

LAB39:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB30;

LAB18:    xsi_set_current_line(164, ng0);

LAB40:    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 64, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB30;

LAB20:    xsi_set_current_line(168, ng0);

LAB41:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6888);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(172, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 30, 0LL);
    xsi_set_current_line(173, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(174, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB30;

LAB22:    xsi_set_current_line(176, ng0);

LAB42:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB30;

LAB24:    xsi_set_current_line(180, ng0);

LAB43:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 8808);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng20)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 12, t5, 12, t7, 12);
    t9 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t9, t11, 0, 0, 12, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 8808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 11);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 11);
    t17 = (t16 & 1);
    *((unsigned int *)t5) = t17;
    t9 = (t11 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB44;

LAB45:
LAB46:    goto LAB30;

LAB26:    xsi_set_current_line(185, ng0);

LAB47:    xsi_set_current_line(186, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 12, 0LL);
    xsi_set_current_line(187, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 30, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 5928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB30;

LAB28:    xsi_set_current_line(193, ng0);

LAB48:    xsi_set_current_line(194, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 8168);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 8808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng20)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 12, t4, 12, t5, 12);
    t7 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 12, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 11);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 11);
    t17 = (t16 & 1);
    *((unsigned int *)t5) = t17;
    t9 = (t11 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB30;

LAB32:    xsi_set_current_line(140, ng0);
    t10 = ((char*)((ng2)));
    t23 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t23, t10, 0, 0, 5, 0LL);
    goto LAB34;

LAB44:    xsi_set_current_line(183, ng0);
    t10 = ((char*)((ng21)));
    t23 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t23, t10, 0, 0, 5, 0LL);
    goto LAB46;

LAB49:    xsi_set_current_line(197, ng0);
    t10 = ((char*)((ng1)));
    t23 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t23, t10, 0, 0, 5, 0LL);
    goto LAB51;

}


extern void work_m_00000000000733815941_2523677561_init()
{
	static char *pe[] = {(void *)Always_130_0,(void *)Always_136_1};
	xsi_register_didat("work_m_00000000000733815941_2523677561", "isim/atlys_ddr_test_isim_beh.exe.sim/work/m_00000000000733815941_2523677561.didat");
	xsi_register_executes(pe);
}
