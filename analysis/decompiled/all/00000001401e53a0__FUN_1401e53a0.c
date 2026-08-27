// Function: FUN_1401e53a0
// Addr: 1401e53a0
// Size: 1639 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401e53a0(undefined8 *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  char local_318 [8];
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  ulonglong local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  ulonglong local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined4 local_230;
  ulonglong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  ulonglong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  ulonglong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  ulonglong uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  ulonglong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  undefined1 local_18 [16];
  
  uVar3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e8ffc) &&
     (FUN_14028b140(&DAT_1404e8ffc), DAT_1404e8ffc == -1)) {
    uStack_2e8 = 0;
    uStack_270 = 0;
    uStack_248 = 0;
    local_308 = 8;
    local_300 = 0xf;
    local_318[0] = s_rgba8888_140490610[0];
    local_318[1] = s_rgba8888_140490610[1];
    local_318[2] = s_rgba8888_140490610[2];
    local_318[3] = s_rgba8888_140490610[3];
    local_318[4] = s_rgba8888_140490610[4];
    local_318[5] = s_rgba8888_140490610[5];
    local_318[6] = s_rgba8888_140490610[6];
    local_318[7] = s_rgba8888_140490610[7];
    uStack_2c0 = 0;
    uStack_298 = 0;
    uStack_220 = 0;
    uStack_1f8 = 0;
    uStack_1d0 = 0;
    uStack_310 = 0;
    local_2f8 = 0;
    local_2e0 = 6;
    local_2d8 = 0xf;
    local_2f0 = (ulonglong)CONCAT24(DAT_14049060c,DAT_140490608);
    local_2d0 = 1;
    local_2b8 = 4;
    local_2b0 = 0xf;
    local_2c8 = (ulonglong)DAT_14049061c;
    local_2a8 = 8;
    local_290 = 2;
    local_288 = 0xf;
    local_2a0 = (ulonglong)DAT_140490604;
    local_280 = 9;
    local_268 = 6;
    local_260 = 0xf;
    local_278 = (ulonglong)CONCAT24(DAT_1404906b0,DAT_1404906ac);
    local_258 = 2;
    local_240 = 3;
    local_238 = 0xf;
    local_250 = (ulonglong)(uint3)DAT_1404906b4;
    local_230 = 0xc;
    local_218 = 4;
    local_210 = 0xf;
    local_228 = (ulonglong)DAT_1404906b8;
    local_208 = 4;
    local_1f0 = 4;
    local_1e8 = 0xf;
    local_200 = (ulonglong)DAT_1404906c0;
    local_1e0 = 6;
    local_1c8 = 4;
    local_1c0 = 0xf;
    local_1d8 = (ulonglong)DAT_140490678;
    local_1b8 = 7;
    local_1a0 = 0xd;
    local_198 = 0xf;
    local_1b0 = DAT_140490680;
    lVar5 = 0x13;
    local_188 = DAT_140490648;
    uStack_158 = 0;
    uStack_130 = 0;
    local_110 = DAT_140490668;
    local_e8 = DAT_140490628;
    local_108 = DAT_140490670;
    local_c0 = DAT_140490690;
    local_98 = DAT_1404906a0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_1a8 = (ulonglong)CONCAT14(DAT_14049068c,DAT_140490688);
    local_190 = 0xe;
    local_178 = 10;
    local_170 = 0xf;
    uStack_180 = (ulonglong)DAT_140490650;
    local_168 = 0xf;
    local_150 = 7;
    local_148 = 0xf;
    local_160 = (ulonglong)
                CONCAT16(DAT_140490658._6_1_,CONCAT24(DAT_140490658._4_2_,(undefined4)DAT_140490658)
                        );
    local_140 = 10;
    local_128 = 4;
    local_120 = 0xf;
    local_138 = (ulonglong)DAT_140490660;
    local_118 = 0xb;
    local_100 = 0xc;
    local_f8 = 0xf;
    local_104 = 0;
    local_f0 = 0x11;
    local_d8 = 9;
    local_d0 = 0xf;
    uStack_e0 = (ulonglong)DAT_140490630;
    local_c8 = 0x12;
    local_b0 = 0xd;
    local_a8 = 0xf;
    uStack_b8 = (ulonglong)CONCAT14(DAT_14049069c,DAT_140490698);
    local_a0 = 0x13;
    local_88 = 10;
    local_80 = 0xf;
    uStack_90 = (ulonglong)DAT_1404906a8;
    local_78 = 0x14;
    local_60 = 0;
    local_58 = 0;
    FUN_140017480(&local_70,"rgba8888s",9);
    local_50 = 0x15;
    local_38 = 0;
    local_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    FUN_140017480(&local_48,"rgba1010102",0xb);
    local_28 = 0xd;
    DAT_1404e9000 = 0;
    DAT_1404e9008 = 0;
    DAT_1404e9010 = 0;
    DAT_1404e9008 = FUN_14028af20(0x38);
    *(longlong *)DAT_1404e9008 = DAT_1404e9008;
    *(longlong *)(DAT_1404e9008 + 8) = DAT_1404e9008;
    DAT_1404e9018 = 0;
    _DAT_1404e9020 = 0;
    uRam00000001404e9028 = 0;
    DAT_1404e9030 = 7;
    DAT_1404e9038 = 8;
    DAT_1404e9000 = 0x3f800000;
    uVar8 = FUN_14003e510(&DAT_1404e9018,0x10,DAT_1404e9008);
    FUN_1401f11b0(uVar8,local_318,local_20);
    puVar6 = local_20;
    do {
      puVar6 = puVar6 + -0x28;
      FUN_140017240(puVar6);
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    FUN_14028b410(FUN_140425100);
    _Init_thread_footer(&DAT_1404e8ffc);
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  uVar7 = 0xcbf29ce484222325;
  if (param_1[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar4 + uVar3);
      uVar3 = uVar3 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar3 < (ulonglong)param_1[2]);
  }
  lVar2 = FUN_1401f10d0(uVar3,local_18,param_1,uVar7);
  lVar5 = DAT_1404e9008;
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  if (lVar5 == DAT_1404e9008) {
    return 0;
  }
  return *(undefined4 *)(lVar5 + 0x30);
}

