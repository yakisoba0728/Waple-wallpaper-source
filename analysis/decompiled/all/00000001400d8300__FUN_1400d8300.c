// Function: FUN_1400d8300
// Addr: 1400d8300
// Size: 9858 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d8300(longlong param_1,longlong param_2,byte param_3,longlong param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined4 *puVar23;
  float *pfVar24;
  longlong *plVar25;
  float fVar26;
  float fVar27;
  int iVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  longlong lVar34;
  int iVar35;
  longlong lVar36;
  int iVar37;
  float fVar38;
  undefined1 auVar39 [16];
  float fVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float local_res18;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  
  fVar27 = DAT_140492704;
  fVar26 = DAT_1404926c0;
  if (param_3 != 0) {
    iVar37 = 0;
    do {
      lVar36 = (longlong)iVar37;
      uVar29 = (ulonglong)*(ushort *)(param_4 + lVar36 * 2);
      switch(uVar29) {
      case 0:
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x120);
        break;
      case 1:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x124);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 300);
        break;
      case 2:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        uVar6 = *(undefined4 *)(lVar32 + 0x128);
        uVar7 = *(undefined4 *)(lVar32 + 300);
        uVar8 = *(undefined4 *)(lVar32 + 0x120);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0x124);
        *(undefined4 *)(param_5 + 4 + uVar29) = uVar6;
        *(undefined4 *)(param_5 + 8 + uVar29) = uVar7;
        *(undefined4 *)(param_5 + 0xc + uVar29) = uVar8;
        break;
      case 3:
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x130);
        break;
      case 4:
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x14c);
        break;
      case 5:
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x140);
        break;
      case 6:
        auVar39._8_8_ = 0;
        auVar39._0_8_ = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x74);
        auVar41 = divps(_DAT_140492dd0,auVar39);
        *(longlong *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) = auVar41._0_8_;
        break;
      case 7:
        auVar41._8_8_ = 0;
        auVar41._0_8_ = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x74);
        auVar41 = divps(_DAT_140492e30,auVar41);
        *(longlong *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) = auVar41._0_8_;
        break;
      case 8:
        fVar38 = *(float *)(*(longlong *)(param_1 + 8) + 0x74);
        fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x78);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(float *)(param_5 + uVar29) = fVar38;
        *(float *)(param_5 + 4 + uVar29) = fVar1;
        *(float *)(param_5 + 8 + uVar29) = fVar38 / fVar1;
        break;
      case 9:
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        puVar23 = *(undefined4 **)(*(longlong *)(param_1 + 8) + 0x30);
        *(undefined4 *)(param_5 + uVar29) = *puVar23;
        *(undefined4 *)(param_5 + 0x10 + uVar29) = puVar23[1];
        *(undefined4 *)(param_5 + 0x20 + uVar29) = puVar23[2];
        *(undefined4 *)(param_5 + 0x30 + uVar29) = puVar23[3];
        *(undefined4 *)(param_5 + 4 + uVar29) = puVar23[4];
        *(undefined4 *)(param_5 + 0x14 + uVar29) = puVar23[5];
        *(undefined4 *)(param_5 + 0x24 + uVar29) = puVar23[6];
        *(undefined4 *)(param_5 + 0x34 + uVar29) = puVar23[7];
        *(undefined4 *)(param_5 + 8 + uVar29) = puVar23[8];
        *(undefined4 *)(param_5 + 0x18 + uVar29) = puVar23[9];
        *(undefined4 *)(param_5 + 0x28 + uVar29) = puVar23[10];
        *(undefined4 *)(param_5 + 0x38 + uVar29) = puVar23[0xb];
        *(undefined4 *)(param_5 + 0xc + uVar29) = puVar23[0xc];
        *(undefined4 *)(param_5 + 0x1c + uVar29) = puVar23[0xd];
        *(undefined4 *)(param_5 + 0x2c + uVar29) = puVar23[0xe];
        *(undefined4 *)(param_5 + 0x3c + uVar29) = puVar23[0xf];
        break;
      case 10:
        lVar32 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30);
        goto LAB_1400d859e;
      case 0xb:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        if (*(char *)(lVar32 + 0x1ca) != '\0') {
          FUN_1400d4200();
        }
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0x930);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0x934);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0x938);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0x93c);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0x940);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0x944);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0x948);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0x94c);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0x950);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0x954);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0x958);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0x95c);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0x960);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0x964);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0x968);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0x96c);
        break;
      case 0xc:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar19 = *(ushort *)(param_4 + 2 + lVar36 * 2);
        if (*(char *)(lVar32 + 0x1ca) != '\0') {
          FUN_1400d4200();
        }
        lVar32 = lVar32 + 0x8f0;
        goto LAB_1400d85a4;
      case 0xd:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        if (*(char *)(lVar32 + 0x1ca) != '\0') {
          FUN_1400d4200();
        }
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0x8f0);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0x8f4);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0x8f8);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0x8fc);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0x900);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0x904);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0x908);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0x90c);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0x910);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0x914);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0x918);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0x91c);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0x920);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0x924);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0x928);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0x92c);
        break;
      case 0xe:
        pfVar24 = *(float **)(*(longlong *)(param_1 + 8) + 0x30);
        fVar38 = *pfVar24;
        fVar1 = pfVar24[8];
        fVar2 = pfVar24[9];
        fVar3 = pfVar24[10];
        fVar4 = pfVar24[1];
        fVar5 = pfVar24[2];
        fVar44 = pfVar24[4];
        fVar45 = pfVar24[5];
        fVar46 = pfVar24[6];
        fVar42 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
        fVar47 = (float)(0x5f375a86 - ((uint)fVar42 >> 1));
        fVar47 = (DAT_140492740 - fVar42 * fVar26 * fVar47 * fVar47) * fVar47;
        fVar43 = fVar44 * fVar44 + fVar45 * fVar45 + fVar46 * fVar46;
        fVar42 = (float)(0x5f375a86 - ((uint)fVar43 >> 1));
        fVar42 = (DAT_140492740 - fVar43 * fVar26 * fVar42 * fVar42) * fVar42;
        fVar40 = fVar4 * fVar4 + fVar38 * fVar38 + fVar5 * fVar5;
        fVar43 = (float)(0x5f375a86 - ((uint)fVar40 >> 1));
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        fVar43 = (DAT_140492740 - fVar43 * fVar40 * fVar26 * fVar43) * fVar43;
        *(float *)(param_5 + uVar29) = fVar43 * fVar38;
        *(float *)(param_5 + 0x10 + uVar29) = fVar43 * fVar4;
        *(float *)(param_5 + 4 + uVar29) = fVar42 * fVar44;
        *(float *)(param_5 + 0x14 + uVar29) = fVar42 * fVar45;
        *(float *)(param_5 + 0x18 + uVar29) = fVar47 * fVar2;
        *(float *)(param_5 + 0x20 + uVar29) = fVar43 * fVar5;
        *(float *)(param_5 + 0x24 + uVar29) = fVar42 * fVar46;
        *(float *)(param_5 + 8 + uVar29) = fVar47 * fVar1;
        *(float *)(param_5 + 0x28 + uVar29) = fVar47 * fVar3;
        break;
      case 0xf:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0xa70);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0xa74);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0xa78);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0xa7c);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0xa80);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0xa84);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0xa88);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0xa8c);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0xa90);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0xa94);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0xa98);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0xa9c);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0xaa0);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0xaa4);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0xaa8);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0xaac);
        break;
      case 0x10:
        lVar32 = *(longlong *)(param_1 + 8);
        fVar38 = *(float *)(lVar32 + 0xa70);
        fVar1 = *(float *)(lVar32 + 0xa74);
        fVar2 = *(float *)(lVar32 + 0xa90);
        fVar3 = *(float *)(lVar32 + 0xa94);
        fVar4 = *(float *)(lVar32 + 0xa98);
        fVar5 = *(float *)(lVar32 + 0xa78);
        fVar44 = *(float *)(lVar32 + 0xa80);
        fVar45 = *(float *)(lVar32 + 0xa84);
        fVar46 = *(float *)(lVar32 + 0xa88);
        fVar42 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
        fVar47 = (float)(0x5f375a86 - ((uint)fVar42 >> 1));
        fVar47 = (DAT_140492740 - fVar42 * fVar26 * fVar47 * fVar47) * fVar47;
        fVar43 = fVar44 * fVar44 + fVar45 * fVar45 + fVar46 * fVar46;
        fVar42 = (float)(0x5f375a86 - ((uint)fVar43 >> 1));
        fVar42 = (DAT_140492740 - fVar42 * fVar43 * fVar26 * fVar42) * fVar42;
        fVar40 = fVar1 * fVar1 + fVar38 * fVar38 + fVar5 * fVar5;
        fVar43 = (float)(0x5f375a86 - ((uint)fVar40 >> 1));
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        fVar43 = (DAT_140492740 - fVar40 * fVar26 * fVar43 * fVar43) * fVar43;
        *(float *)(param_5 + uVar29) = fVar38 * fVar43;
        *(float *)(param_5 + 0x10 + uVar29) = fVar1 * fVar43;
        *(float *)(param_5 + 0x14 + uVar29) = fVar42 * fVar45;
        *(float *)(param_5 + 0x18 + uVar29) = fVar47 * fVar3;
        *(float *)(param_5 + 0x20 + uVar29) = fVar5 * fVar43;
        *(float *)(param_5 + 4 + uVar29) = fVar44 * fVar42;
        *(float *)(param_5 + 0x24 + uVar29) = fVar42 * fVar46;
        *(float *)(param_5 + 8 + uVar29) = fVar2 * fVar47;
        *(float *)(param_5 + 0x28 + uVar29) = fVar47 * fVar4;
        break;
      case 0x11:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0xab0);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0xab4);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0xab8);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0xabc);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0xac0);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0xac4);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0xac8);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0xacc);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0xad0);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0xad4);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0xad8);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0xadc);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0xae0);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0xae4);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0xae8);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0xaec);
        break;
      case 0x12:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        lVar36 = *(longlong *)(param_1 + 0xd0);
        lVar34 = (longlong)(int)((*(uint *)(lVar36 + 0x4c) & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0xb30 + lVar34);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0xb34 + lVar34);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0xb38 + lVar34);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0xb3c + lVar34);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0xb40 + lVar34);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0xb44 + lVar34);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0xb48 + lVar34);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0xb4c + lVar34);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0xb50 + lVar34);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0xb54 + lVar34);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0xb58 + lVar34);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0xb5c + lVar34);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0xb60 + lVar34);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0xb64 + lVar34);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0xb68 + lVar34);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0xb6c + lVar34);
        lVar34 = (longlong)(int)((*(uint *)(lVar36 + 0x4c) >> 3 & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0x40 + uVar29) = *(undefined4 *)(lVar32 + 0xb30 + lVar34);
        *(undefined4 *)(param_5 + 0x50 + uVar29) = *(undefined4 *)(lVar32 + 0xb34 + lVar34);
        *(undefined4 *)(param_5 + 0x60 + uVar29) = *(undefined4 *)(lVar32 + 0xb38 + lVar34);
        *(undefined4 *)(param_5 + 0x70 + uVar29) = *(undefined4 *)(lVar32 + 0xb3c + lVar34);
        *(undefined4 *)(param_5 + 0x44 + uVar29) = *(undefined4 *)(lVar32 + 0xb40 + lVar34);
        *(undefined4 *)(param_5 + 0x54 + uVar29) = *(undefined4 *)(lVar32 + 0xb44 + lVar34);
        *(undefined4 *)(param_5 + 100 + uVar29) = *(undefined4 *)(lVar32 + 0xb48 + lVar34);
        *(undefined4 *)(param_5 + 0x74 + uVar29) = *(undefined4 *)(lVar32 + 0xb4c + lVar34);
        *(undefined4 *)(param_5 + 0x48 + uVar29) = *(undefined4 *)(lVar32 + 0xb50 + lVar34);
        *(undefined4 *)(param_5 + 0x58 + uVar29) = *(undefined4 *)(lVar32 + 0xb54 + lVar34);
        *(undefined4 *)(param_5 + 0x68 + uVar29) = *(undefined4 *)(lVar32 + 0xb58 + lVar34);
        *(undefined4 *)(param_5 + 0x78 + uVar29) = *(undefined4 *)(lVar32 + 0xb5c + lVar34);
        *(undefined4 *)(param_5 + 0x4c + uVar29) = *(undefined4 *)(lVar32 + 0xb60 + lVar34);
        *(undefined4 *)(param_5 + 0x5c + uVar29) = *(undefined4 *)(lVar32 + 0xb64 + lVar34);
        *(undefined4 *)(param_5 + 0x6c + uVar29) = *(undefined4 *)(lVar32 + 0xb68 + lVar34);
        *(undefined4 *)(param_5 + 0x7c + uVar29) = *(undefined4 *)(lVar32 + 0xb6c + lVar34);
        lVar34 = (longlong)(int)((*(uint *)(lVar36 + 0x4c) >> 6 & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0x80 + uVar29) = *(undefined4 *)(lVar32 + 0xb30 + lVar34);
        *(undefined4 *)(param_5 + 0x90 + uVar29) = *(undefined4 *)(lVar32 + 0xb34 + lVar34);
        *(undefined4 *)(param_5 + 0xa0 + uVar29) = *(undefined4 *)(lVar32 + 0xb38 + lVar34);
        *(undefined4 *)(param_5 + 0xb0 + uVar29) = *(undefined4 *)(lVar32 + 0xb3c + lVar34);
        *(undefined4 *)(param_5 + 0x84 + uVar29) = *(undefined4 *)(lVar32 + 0xb40 + lVar34);
        *(undefined4 *)(param_5 + 0x94 + uVar29) = *(undefined4 *)(lVar32 + 0xb44 + lVar34);
        *(undefined4 *)(param_5 + 0xa4 + uVar29) = *(undefined4 *)(lVar32 + 0xb48 + lVar34);
        *(undefined4 *)(param_5 + 0xb4 + uVar29) = *(undefined4 *)(lVar32 + 0xb4c + lVar34);
        *(undefined4 *)(param_5 + 0x88 + uVar29) = *(undefined4 *)(lVar32 + 0xb50 + lVar34);
        *(undefined4 *)(param_5 + 0x98 + uVar29) = *(undefined4 *)(lVar32 + 0xb54 + lVar34);
        *(undefined4 *)(param_5 + 0xa8 + uVar29) = *(undefined4 *)(lVar32 + 0xb58 + lVar34);
        *(undefined4 *)(param_5 + 0xb8 + uVar29) = *(undefined4 *)(lVar32 + 0xb5c + lVar34);
        *(undefined4 *)(param_5 + 0x8c + uVar29) = *(undefined4 *)(lVar32 + 0xb60 + lVar34);
        *(undefined4 *)(param_5 + 0x9c + uVar29) = *(undefined4 *)(lVar32 + 0xb64 + lVar34);
        *(undefined4 *)(param_5 + 0xac + uVar29) = *(undefined4 *)(lVar32 + 0xb68 + lVar34);
        *(undefined4 *)(param_5 + 0xbc + uVar29) = *(undefined4 *)(lVar32 + 0xb6c + lVar34);
        lVar34 = (longlong)(int)((*(uint *)(lVar36 + 0x4c) >> 9 & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0xc0 + uVar29) = *(undefined4 *)(lVar32 + 0xb30 + lVar34);
        *(undefined4 *)(param_5 + 0xd0 + uVar29) = *(undefined4 *)(lVar32 + 0xb34 + lVar34);
        *(undefined4 *)(param_5 + 0xe0 + uVar29) = *(undefined4 *)(lVar32 + 0xb38 + lVar34);
        *(undefined4 *)(param_5 + 0xf0 + uVar29) = *(undefined4 *)(lVar32 + 0xb3c + lVar34);
        *(undefined4 *)(param_5 + 0xc4 + uVar29) = *(undefined4 *)(lVar32 + 0xb40 + lVar34);
        *(undefined4 *)(param_5 + 0xd4 + uVar29) = *(undefined4 *)(lVar32 + 0xb44 + lVar34);
        *(undefined4 *)(param_5 + 0xe4 + uVar29) = *(undefined4 *)(lVar32 + 0xb48 + lVar34);
        *(undefined4 *)(param_5 + 0xf4 + uVar29) = *(undefined4 *)(lVar32 + 0xb4c + lVar34);
        *(undefined4 *)(param_5 + 200 + uVar29) = *(undefined4 *)(lVar32 + 0xb50 + lVar34);
        *(undefined4 *)(param_5 + 0xd8 + uVar29) = *(undefined4 *)(lVar32 + 0xb54 + lVar34);
        *(undefined4 *)(param_5 + 0xe8 + uVar29) = *(undefined4 *)(lVar32 + 0xb58 + lVar34);
        *(undefined4 *)(param_5 + 0xf8 + uVar29) = *(undefined4 *)(lVar32 + 0xb5c + lVar34);
        *(undefined4 *)(param_5 + 0xcc + uVar29) = *(undefined4 *)(lVar32 + 0xb60 + lVar34);
        *(undefined4 *)(param_5 + 0xdc + uVar29) = *(undefined4 *)(lVar32 + 0xb64 + lVar34);
        *(undefined4 *)(param_5 + 0xec + uVar29) = *(undefined4 *)(lVar32 + 0xb68 + lVar34);
        *(undefined4 *)(param_5 + 0xfc + uVar29) = *(undefined4 *)(lVar32 + 0xb6c + lVar34);
        lVar34 = (longlong)(int)((*(uint *)(lVar36 + 0x4c) >> 0xc & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0x100 + uVar29) = *(undefined4 *)(lVar32 + 0xb30 + lVar34);
        *(undefined4 *)(param_5 + 0x110 + uVar29) = *(undefined4 *)(lVar32 + 0xb34 + lVar34);
        *(undefined4 *)(param_5 + 0x120 + uVar29) = *(undefined4 *)(lVar32 + 0xb38 + lVar34);
        *(undefined4 *)(param_5 + 0x130 + uVar29) = *(undefined4 *)(lVar32 + 0xb3c + lVar34);
        *(undefined4 *)(param_5 + 0x104 + uVar29) = *(undefined4 *)(lVar32 + 0xb40 + lVar34);
        *(undefined4 *)(param_5 + 0x114 + uVar29) = *(undefined4 *)(lVar32 + 0xb44 + lVar34);
        *(undefined4 *)(param_5 + 0x124 + uVar29) = *(undefined4 *)(lVar32 + 0xb48 + lVar34);
        *(undefined4 *)(param_5 + 0x134 + uVar29) = *(undefined4 *)(lVar32 + 0xb4c + lVar34);
        *(undefined4 *)(param_5 + 0x108 + uVar29) = *(undefined4 *)(lVar32 + 0xb50 + lVar34);
        *(undefined4 *)(param_5 + 0x118 + uVar29) = *(undefined4 *)(lVar32 + 0xb54 + lVar34);
        *(undefined4 *)(param_5 + 0x128 + uVar29) = *(undefined4 *)(lVar32 + 0xb58 + lVar34);
        *(undefined4 *)(param_5 + 0x138 + uVar29) = *(undefined4 *)(lVar32 + 0xb5c + lVar34);
        *(undefined4 *)(param_5 + 0x10c + uVar29) = *(undefined4 *)(lVar32 + 0xb60 + lVar34);
        *(undefined4 *)(param_5 + 0x11c + uVar29) = *(undefined4 *)(lVar32 + 0xb64 + lVar34);
        *(undefined4 *)(param_5 + 300 + uVar29) = *(undefined4 *)(lVar32 + 0xb68 + lVar34);
        *(undefined4 *)(param_5 + 0x13c + uVar29) = *(undefined4 *)(lVar32 + 0xb6c + lVar34);
        lVar36 = (longlong)(int)((*(uint *)(lVar36 + 0x4c) >> 0xf & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0x140 + uVar29) = *(undefined4 *)(lVar32 + 0xb30 + lVar36);
        *(undefined4 *)(param_5 + 0x150 + uVar29) = *(undefined4 *)(lVar32 + 0xb34 + lVar36);
        *(undefined4 *)(param_5 + 0x160 + uVar29) = *(undefined4 *)(lVar32 + 0xb38 + lVar36);
        *(undefined4 *)(param_5 + 0x170 + uVar29) = *(undefined4 *)(lVar32 + 0xb3c + lVar36);
        *(undefined4 *)(param_5 + 0x144 + uVar29) = *(undefined4 *)(lVar32 + 0xb40 + lVar36);
        *(undefined4 *)(param_5 + 0x154 + uVar29) = *(undefined4 *)(lVar32 + 0xb44 + lVar36);
        *(undefined4 *)(param_5 + 0x164 + uVar29) = *(undefined4 *)(lVar32 + 0xb48 + lVar36);
        *(undefined4 *)(param_5 + 0x174 + uVar29) = *(undefined4 *)(lVar32 + 0xb4c + lVar36);
        *(undefined4 *)(param_5 + 0x148 + uVar29) = *(undefined4 *)(lVar32 + 0xb50 + lVar36);
        *(undefined4 *)(param_5 + 0x158 + uVar29) = *(undefined4 *)(lVar32 + 0xb54 + lVar36);
        *(undefined4 *)(param_5 + 0x168 + uVar29) = *(undefined4 *)(lVar32 + 0xb58 + lVar36);
        *(undefined4 *)(param_5 + 0x178 + uVar29) = *(undefined4 *)(lVar32 + 0xb5c + lVar36);
        *(undefined4 *)(param_5 + 0x14c + uVar29) = *(undefined4 *)(lVar32 + 0xb60 + lVar36);
        *(undefined4 *)(param_5 + 0x15c + uVar29) = *(undefined4 *)(lVar32 + 0xb64 + lVar36);
        *(undefined4 *)(param_5 + 0x16c + uVar29) = *(undefined4 *)(lVar32 + 0xb68 + lVar36);
        *(undefined4 *)(param_5 + 0x17c + uVar29) = *(undefined4 *)(lVar32 + 0xb6c + lVar36);
        break;
      case 0x13:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0x970);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0x974);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0x978);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0x97c);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0x980);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0x984);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0x988);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0x98c);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0x990);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0x994);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0x998);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0x99c);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0x9a0);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0x9a4);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0x9a8);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0x9ac);
        break;
      case 0x14:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0x9b0);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0x9b4);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0x9b8);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0x9bc);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0x9c0);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0x9c4);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0x9c8);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0x9cc);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0x9d0);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0x9d4);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0x9d8);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0x9dc);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0x9e0);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0x9e4);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0x9e8);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0x9ec);
        break;
      case 0x15:
        lVar32 = *(longlong *)(param_1 + 8) + 0x9b0;
        goto LAB_1400d859e;
      case 0x16:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0x9f0);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0x9f4);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0x9f8);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0x9fc);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0xa00);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0xa04);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0xa08);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0xa0c);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0xa10);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0xa14);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0xa18);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0xa1c);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0xa20);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0xa24);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0xa28);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0xa2c);
        break;
      case 0x17:
        lVar32 = *(longlong *)(param_1 + 8) + 0x9f0;
LAB_1400d859e:
        uVar19 = *(ushort *)(param_4 + 2 + lVar36 * 2);
LAB_1400d85a4:
        uVar29 = (ulonglong)uVar19;
        FUN_14005f730(&local_108,lVar32);
        *(undefined4 *)(param_5 + uVar29) = local_108;
        *(undefined4 *)(param_5 + 0x10 + uVar29) = local_104;
        *(undefined4 *)(param_5 + 0x20 + uVar29) = local_100;
        *(undefined4 *)(param_5 + 0x30 + uVar29) = local_fc;
        *(undefined4 *)(param_5 + 4 + uVar29) = local_f8;
        *(undefined4 *)(param_5 + 0x14 + uVar29) = local_f4;
        *(undefined4 *)(param_5 + 0x24 + uVar29) = local_f0;
        *(undefined4 *)(param_5 + 0x34 + uVar29) = local_ec;
        *(undefined4 *)(param_5 + 8 + uVar29) = local_e8;
        *(undefined4 *)(param_5 + 0x18 + uVar29) = local_e4;
        *(undefined4 *)(param_5 + 0x28 + uVar29) = local_e0;
        *(undefined4 *)(param_5 + 0x38 + uVar29) = local_dc;
        *(undefined4 *)(param_5 + 0xc + uVar29) = local_d8;
        *(undefined4 *)(param_5 + 0x1c + uVar29) = local_d4;
        *(undefined4 *)(param_5 + 0x2c + uVar29) = local_d0;
        *(undefined4 *)(param_5 + 0x3c + uVar29) = local_cc;
        break;
      case 0x18:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0xa30);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0xa34);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0xa38);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0xa3c);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0xa40);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0xa44);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0xa48);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0xa4c);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0xa50);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0xa54);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0xa58);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0xa5c);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0xa60);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0xa64);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0xa68);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0xa6c);
        break;
      case 0x19:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x68);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x70);
        break;
      case 0x1a:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x160);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x168);
        break;
      case 0x1b:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x16c);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x174);
        break;
      case 0x1c:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x178);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x180);
        break;
      case 0x1d:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x184);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x18c);
        break;
      case 0x1e:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 400);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x198);
        break;
      case 0x1f:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x19c);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x1a4);
        break;
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x71:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
        break;
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
        uVar31 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        auVar41 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + -0xd4 + uVar29 * 0x10);
        goto LAB_1400da8ea;
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xcc + uVar29 * 8);
        break;
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
        lVar32 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + -0x1f0 + uVar29 * 8);
        if (lVar32 == 0) {
          uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
          *(undefined4 *)(param_5 + uVar29) = 0x40000000;
          *(undefined4 *)(param_5 + 4 + uVar29) = 0x40000000;
LAB_1400d9858:
          *(undefined4 *)(param_5 + 8 + uVar29) = 0x40000000;
          *(undefined4 *)(param_5 + 0xc + uVar29) = 0x40000000;
        }
        else {
          uVar22 = *(uint *)(lVar32 + 0x24);
          uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
          uVar21 = *(uint *)(lVar32 + 0x2c);
          uVar20 = *(uint *)(lVar32 + 0x30);
          *(float *)(param_5 + uVar29) = (float)*(uint *)(lVar32 + 0x20);
          *(float *)(param_5 + 4 + uVar29) = (float)uVar22;
          *(float *)(param_5 + 8 + uVar29) = (float)uVar21;
          *(float *)(param_5 + 0xc + uVar29) = (float)uVar20;
        }
        break;
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
        lVar32 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + -0x240 + uVar29 * 8);
        if (lVar32 == 0) {
          uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
          *(undefined4 *)(param_5 + uVar29) = 0x3f000000;
          *(undefined4 *)(param_5 + 4 + uVar29) = 0x3f000000;
          goto LAB_1400d9858;
        }
        uVar22 = *(uint *)(lVar32 + 0x20);
        uVar21 = *(uint *)(lVar32 + 0x24);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(float *)(param_5 + uVar29) = fVar27 / (float)uVar22;
        *(float *)(param_5 + 4 + uVar29) = fVar27 / (float)uVar21;
        *(float *)(param_5 + 8 + uVar29) = (float)uVar22;
        *(float *)(param_5 + 0xc + uVar29) = (float)uVar21;
        break;
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5b:
        lVar32 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + -0x290 + uVar29 * 8);
        if (lVar32 == 0) {
          *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) = 0x3f800000;
        }
        else {
          local_res18 = (float)*(int *)(lVar32 + 0xd0);
          if (local_res18 <= 0.0) {
            local_res18 = 0.0;
          }
          *(float *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) = local_res18;
        }
        break;
      case 0x5c:
        *(float *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             (float)*(int *)(*(longlong *)(param_1 + 8) + 0x1218);
        break;
      case 0x5d:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        uVar17 = *(undefined8 *)(lVar32 + 0x1260);
        *(undefined8 *)(param_5 + uVar29) = *(undefined8 *)(lVar32 + 0x1258);
        ((undefined8 *)(param_5 + uVar29))[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar32 + 0x1270);
        puVar30 = (undefined8 *)(param_5 + 0x10 + uVar29);
        *puVar30 = *(undefined8 *)(lVar32 + 0x1268);
        puVar30[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar29) = *(undefined1 (*) [16])(lVar32 + 0x1278);
        uVar17 = *(undefined8 *)(lVar32 + 0x1290);
        puVar30 = (undefined8 *)(param_5 + 0x30 + uVar29);
        *puVar30 = *(undefined8 *)(lVar32 + 0x1288);
        puVar30[1] = uVar17;
        break;
      case 0x5e:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        uVar17 = *(undefined8 *)(lVar32 + 0x1268);
        uVar18 = *(undefined8 *)(lVar32 + 0x1278);
        fVar47 = *(float *)(lVar32 + 0x1294) * *(float *)(lVar32 + 0x1294);
        fVar44 = *(float *)(lVar32 + 0x1264) * *(float *)(lVar32 + 0x1264);
        fVar45 = *(float *)(lVar32 + 0x1274) * *(float *)(lVar32 + 0x1274);
        fVar38 = *(float *)(lVar32 + 0x1288);
        fVar1 = *(float *)(lVar32 + 0x128c);
        fVar2 = *(float *)(lVar32 + 0x1260);
        fVar3 = *(float *)(lVar32 + 0x1270);
        fVar4 = *(float *)(lVar32 + 0x1290);
        fVar46 = *(float *)(lVar32 + 0x1284) * *(float *)(lVar32 + 0x1284);
        fVar5 = *(float *)(lVar32 + 0x1280);
        *(ulonglong *)(param_5 + uVar29) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar32 + 0x1258) >> 0x20) * fVar44,
                      (float)*(undefined8 *)(lVar32 + 0x1258) * fVar44);
        *(float *)(param_5 + 8 + uVar29) = fVar44 * fVar2;
        *(float *)(param_5 + 0xc + uVar29) = fVar47 * fVar38;
        *(ulonglong *)(param_5 + 0x10 + uVar29) =
             CONCAT44((float)((ulonglong)uVar17 >> 0x20) * fVar45,(float)uVar17 * fVar45);
        *(float *)(param_5 + 0x18 + uVar29) = fVar45 * fVar3;
        *(float *)(param_5 + 0x1c + uVar29) = fVar47 * fVar1;
        *(ulonglong *)(param_5 + 0x20 + uVar29) =
             CONCAT44((float)((ulonglong)uVar18 >> 0x20) * fVar46,(float)uVar18 * fVar46);
        *(float *)(param_5 + 0x28 + uVar29) = fVar46 * fVar5;
        *(float *)(param_5 + 0x2c + uVar29) = fVar47 * fVar4;
        break;
      case 0x5f:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        uVar6 = *(undefined4 *)(lVar32 + 0x122c);
        uVar7 = *(undefined4 *)(lVar32 + 0x1230);
        uVar8 = *(undefined4 *)(lVar32 + 0x1234);
        uVar9 = *(undefined4 *)(lVar32 + 0x1238);
        uVar10 = *(undefined4 *)(lVar32 + 0x123c);
        uVar11 = *(undefined4 *)(lVar32 + 0x1240);
        uVar12 = *(undefined4 *)(lVar32 + 0x1244);
        uVar13 = *(undefined4 *)(lVar32 + 0x1248);
        uVar14 = *(undefined4 *)(lVar32 + 0x124c);
        uVar15 = *(undefined4 *)(lVar32 + 0x1250);
        uVar16 = *(undefined4 *)(lVar32 + 0x1254);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0x1228);
        *(undefined4 *)(param_5 + 4 + uVar29) = uVar6;
        *(undefined4 *)(param_5 + 8 + uVar29) = uVar7;
        *(undefined4 *)(param_5 + 0xc + uVar29) = 0;
        *(undefined4 *)(param_5 + 0x10 + uVar29) = uVar8;
        *(undefined4 *)(param_5 + 0x14 + uVar29) = uVar9;
        *(undefined4 *)(param_5 + 0x18 + uVar29) = uVar10;
        *(undefined4 *)(param_5 + 0x1c + uVar29) = 0;
        *(undefined4 *)(param_5 + 0x20 + uVar29) = uVar11;
        *(undefined4 *)(param_5 + 0x24 + uVar29) = uVar12;
        *(undefined4 *)(param_5 + 0x28 + uVar29) = uVar13;
        *(undefined4 *)(param_5 + 0x2c + uVar29) = 0;
        *(undefined4 *)(param_5 + 0x30 + uVar29) = uVar14;
        *(undefined4 *)(param_5 + 0x34 + uVar29) = uVar15;
        *(undefined4 *)(param_5 + 0x38 + uVar29) = uVar16;
        break;
      case 0x60:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x1298);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x12a0);
        break;
      case 0x61:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x12a4);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x12ac);
        break;
      case 0x62:
        puVar33 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2d0);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        uVar17 = puVar33[1];
        *(undefined8 *)(param_5 + uVar29) = *puVar33;
        ((undefined8 *)(param_5 + uVar29))[1] = uVar17;
        uVar17 = puVar33[3];
        puVar30 = (undefined8 *)(param_5 + 0x10 + uVar29);
        *puVar30 = puVar33[2];
        puVar30[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar29) = *(undefined1 (*) [16])(puVar33 + 4);
        uVar17 = puVar33[7];
        puVar30 = (undefined8 *)(param_5 + 0x30 + uVar29);
        *puVar30 = puVar33[6];
        puVar30[1] = uVar17;
        break;
      case 99:
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        lVar36 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2d0);
        uVar17 = *(undefined8 *)(lVar36 + 0x48);
        *(undefined8 *)(param_5 + uVar29) = *(undefined8 *)(lVar36 + 0x40);
        ((undefined8 *)(param_5 + uVar29))[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar36 + 0x58);
        puVar30 = (undefined8 *)(param_5 + 0x10 + uVar29);
        *puVar30 = *(undefined8 *)(lVar36 + 0x50);
        puVar30[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar29) = *(undefined1 (*) [16])(lVar36 + 0x60);
        uVar17 = *(undefined8 *)(lVar36 + 0x78);
        puVar30 = (undefined8 *)(param_5 + 0x30 + uVar29);
        *puVar30 = *(undefined8 *)(lVar36 + 0x70);
        puVar30[1] = uVar17;
        break;
      case 100:
        puVar33 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2c8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        uVar17 = puVar33[1];
        *(undefined8 *)(param_5 + uVar29) = *puVar33;
        ((undefined8 *)(param_5 + uVar29))[1] = uVar17;
        uVar17 = puVar33[3];
        puVar30 = (undefined8 *)(param_5 + 0x10 + uVar29);
        *puVar30 = puVar33[2];
        puVar30[1] = uVar17;
        uVar17 = puVar33[5];
        puVar30 = (undefined8 *)(param_5 + 0x20 + uVar29);
        *puVar30 = puVar33[4];
        puVar30[1] = uVar17;
        uVar17 = puVar33[7];
        puVar30 = (undefined8 *)(param_5 + 0x30 + uVar29);
        *puVar30 = puVar33[6];
        puVar30[1] = uVar17;
        uVar17 = puVar33[9];
        puVar30 = (undefined8 *)(param_5 + 0x40 + uVar29);
        *puVar30 = puVar33[8];
        puVar30[1] = uVar17;
        uVar17 = puVar33[0xb];
        puVar30 = (undefined8 *)(param_5 + 0x50 + uVar29);
        *puVar30 = puVar33[10];
        puVar30[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x60 + uVar29) = *(undefined1 (*) [16])(puVar33 + 0xc);
        uVar17 = puVar33[0xf];
        puVar30 = (undefined8 *)(param_5 + 0x70 + uVar29);
        *puVar30 = puVar33[0xe];
        puVar30[1] = uVar17;
        break;
      case 0x65:
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        lVar36 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2c8);
        uVar17 = *(undefined8 *)(lVar36 + 0x88);
        *(undefined8 *)(param_5 + uVar29) = *(undefined8 *)(lVar36 + 0x80);
        ((undefined8 *)(param_5 + uVar29))[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar36 + 0x98);
        puVar30 = (undefined8 *)(param_5 + 0x10 + uVar29);
        *puVar30 = *(undefined8 *)(lVar36 + 0x90);
        puVar30[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar36 + 0xa8);
        puVar30 = (undefined8 *)(param_5 + 0x20 + uVar29);
        *puVar30 = *(undefined8 *)(lVar36 + 0xa0);
        puVar30[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar36 + 0xb8);
        puVar30 = (undefined8 *)(param_5 + 0x30 + uVar29);
        *puVar30 = *(undefined8 *)(lVar36 + 0xb0);
        puVar30[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar36 + 200);
        puVar30 = (undefined8 *)(param_5 + 0x40 + uVar29);
        *puVar30 = *(undefined8 *)(lVar36 + 0xc0);
        puVar30[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar36 + 0xd8);
        puVar30 = (undefined8 *)(param_5 + 0x50 + uVar29);
        *puVar30 = *(undefined8 *)(lVar36 + 0xd0);
        puVar30[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x60 + uVar29) = *(undefined1 (*) [16])(lVar36 + 0xe0);
        uVar17 = *(undefined8 *)(lVar36 + 0xf8);
        puVar30 = (undefined8 *)(param_5 + 0x70 + uVar29);
        *puVar30 = *(undefined8 *)(lVar36 + 0xf0);
        puVar30[1] = uVar17;
        break;
      case 0x66:
        lVar32 = 2;
        puVar30 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2c0);
        puVar33 = (undefined8 *)((ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2) + param_5);
        do {
          uVar17 = puVar30[1];
          *puVar33 = *puVar30;
          puVar33[1] = uVar17;
          uVar17 = puVar30[3];
          puVar33[2] = puVar30[2];
          puVar33[3] = uVar17;
          uVar17 = puVar30[5];
          puVar33[4] = puVar30[4];
          puVar33[5] = uVar17;
          uVar17 = puVar30[7];
          puVar33[6] = puVar30[6];
          puVar33[7] = uVar17;
          uVar17 = puVar30[9];
          puVar33[8] = puVar30[8];
          puVar33[9] = uVar17;
          uVar17 = puVar30[0xb];
          puVar33[10] = puVar30[10];
          puVar33[0xb] = uVar17;
          *(undefined1 (*) [16])(puVar33 + 0xc) = *(undefined1 (*) [16])(puVar30 + 0xc);
          uVar17 = puVar30[0xf];
          puVar33[0xe] = puVar30[0xe];
          puVar33[0xf] = uVar17;
          lVar32 = lVar32 + -1;
          puVar30 = puVar30 + 0x10;
          puVar33 = puVar33 + 0x10;
        } while (lVar32 != 0);
        break;
      case 0x67:
        lVar32 = 2;
        puVar30 = (undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2));
        puVar33 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x2c0) + 0x100);
        do {
          uVar17 = puVar33[1];
          *puVar30 = *puVar33;
          puVar30[1] = uVar17;
          uVar17 = puVar33[3];
          puVar30[2] = puVar33[2];
          puVar30[3] = uVar17;
          uVar17 = puVar33[5];
          puVar30[4] = puVar33[4];
          puVar30[5] = uVar17;
          uVar17 = puVar33[7];
          puVar30[6] = puVar33[6];
          puVar30[7] = uVar17;
          uVar17 = puVar33[9];
          puVar30[8] = puVar33[8];
          puVar30[9] = uVar17;
          uVar17 = puVar33[0xb];
          puVar30[10] = puVar33[10];
          puVar30[0xb] = uVar17;
          *(undefined1 (*) [16])(puVar30 + 0xc) = *(undefined1 (*) [16])(puVar33 + 0xc);
          uVar17 = puVar33[0xf];
          puVar30[0xe] = puVar33[0xe];
          puVar30[0xf] = uVar17;
          lVar32 = lVar32 + -1;
          puVar30 = puVar30 + 0x10;
          puVar33 = puVar33 + 0x10;
        } while (lVar32 != 0);
        break;
      case 0x68:
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x94);
        break;
      case 0x69:
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x8c);
        break;
      case 0x6a:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        fVar38 = fVar27;
        if ((*(byte *)(lVar32 + 0xa4) & 1) == 0) {
          fVar38 = 0.0;
        }
        *(float *)(param_5 + 4 + uVar29) = fVar38;
        *(float *)(param_5 + uVar29) = fVar38;
        uVar22 = *(uint *)(lVar32 + 0xa4);
        if (((uVar22 & 1) == 0) || ((uVar22 & 2) != 0)) {
          *(undefined4 *)(param_5 + 0xc + uVar29) = 0;
          *(undefined4 *)(param_5 + 8 + uVar29) = 0;
        }
        else {
          *(undefined4 *)(param_5 + 0xc + uVar29) = 0;
          *(float *)(param_5 + 8 + uVar29) = fVar27;
        }
        break;
      case 0x6b:
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9c);
        break;
      case 0x6c:
        uVar31 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        auVar41 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0xa8);
        goto LAB_1400da8ea;
      case 0x6d:
        uVar31 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        auVar41 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0xb8);
        goto LAB_1400da8ea;
      case 0x6e:
        uVar31 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        auVar41 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 200);
        goto LAB_1400da8ea;
      case 0x6f:
        uVar31 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        auVar41 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0xd8);
        goto LAB_1400da8ea;
      case 0x70:
        uVar31 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        auVar41 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0xe8);
        goto LAB_1400da8ea;
      case 0x72:
        FUN_1404210f0((ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2) + param_5,
                      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x11e0),
                      (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x12e8) << 2);
        break;
      case 0x73:
        lVar32 = *(longlong *)(param_1 + 8);
        if (*(char *)(lVar32 + 0x12e9) != '\0') {
          iVar35 = 0;
          do {
            iVar28 = iVar35 * 0x10;
            lVar34 = (longlong)iVar35;
            iVar35 = iVar35 + 1;
            *(undefined1 (*) [16])
             (param_5 + (int)(iVar28 + (uint)*(ushort *)(param_4 + 2 + lVar36 * 2))) =
                 *(undefined1 (*) [16])(lVar32 + 0x12ec + lVar34 * 0x10);
            lVar32 = *(longlong *)(param_1 + 8);
          } while (iVar35 < (int)(uint)*(byte *)(lVar32 + 0x12e9));
        }
        break;
      case 0x74:
        *(uint *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             (uint)*(byte *)(*(longlong *)(param_1 + 8) + 0x12ea);
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        uVar17 = *(undefined8 *)(lVar32 + 0x133c);
        puVar30 = (undefined8 *)(param_5 + 4 + uVar29);
        *puVar30 = *(undefined8 *)(lVar32 + 0x1334);
        puVar30[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar32 + 0x134c);
        puVar30 = (undefined8 *)(param_5 + 0x14 + uVar29);
        *puVar30 = *(undefined8 *)(lVar32 + 0x1344);
        puVar30[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar29) = *(undefined1 (*) [16])(lVar32 + 0x1350);
        break;
      case 0x75:
        lVar32 = *(longlong *)(param_1 + 8);
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2)) =
             *(undefined4 *)(lVar32 + 0x1330);
        uVar17 = *(undefined8 *)(lVar32 + 0x1368);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        puVar30 = (undefined8 *)(param_5 + 4 + uVar29);
        *puVar30 = *(undefined8 *)(lVar32 + 0x1360);
        puVar30[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar32 + 0x1378);
        puVar30 = (undefined8 *)(param_5 + 0x14 + uVar29);
        *puVar30 = *(undefined8 *)(lVar32 + 0x1370);
        puVar30[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar29) = *(undefined1 (*) [16])(lVar32 + 0x137c);
        break;
      case 0x76:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined4 *)(param_5 + uVar29) = *(undefined4 *)(lVar32 + 0xcb0);
        *(undefined4 *)(param_5 + 0x10 + uVar29) = *(undefined4 *)(lVar32 + 0xcb4);
        *(undefined4 *)(param_5 + 0x20 + uVar29) = *(undefined4 *)(lVar32 + 0xcb8);
        *(undefined4 *)(param_5 + 4 + uVar29) = *(undefined4 *)(lVar32 + 0xcbc);
        *(undefined4 *)(param_5 + 0x14 + uVar29) = *(undefined4 *)(lVar32 + 0xcc0);
        *(undefined4 *)(param_5 + 0x24 + uVar29) = *(undefined4 *)(lVar32 + 0xcc4);
        *(undefined4 *)(param_5 + 8 + uVar29) = *(undefined4 *)(lVar32 + 0xcc8);
        *(undefined4 *)(param_5 + 0x18 + uVar29) = *(undefined4 *)(lVar32 + 0xccc);
        *(undefined4 *)(param_5 + 0x28 + uVar29) = *(undefined4 *)(lVar32 + 0xcd0);
        *(undefined4 *)(param_5 + 0xc + uVar29) = *(undefined4 *)(lVar32 + 0xcd4);
        *(undefined4 *)(param_5 + 0x1c + uVar29) = *(undefined4 *)(lVar32 + 0xcd8);
        *(undefined4 *)(param_5 + 0x2c + uVar29) = *(undefined4 *)(lVar32 + 0xcdc);
        *(undefined4 *)(param_5 + 0x30 + uVar29) = *(undefined4 *)(lVar32 + 0xce0);
        *(undefined4 *)(param_5 + 0x40 + uVar29) = *(undefined4 *)(lVar32 + 0xce4);
        *(undefined4 *)(param_5 + 0x50 + uVar29) = *(undefined4 *)(lVar32 + 0xce8);
        *(undefined4 *)(param_5 + 0x34 + uVar29) = *(undefined4 *)(lVar32 + 0xcec);
        *(undefined4 *)(param_5 + 0x44 + uVar29) = *(undefined4 *)(lVar32 + 0xcf0);
        *(undefined4 *)(param_5 + 0x54 + uVar29) = *(undefined4 *)(lVar32 + 0xcf4);
        *(undefined4 *)(param_5 + 0x38 + uVar29) = *(undefined4 *)(lVar32 + 0xcf8);
        *(undefined4 *)(param_5 + 0x48 + uVar29) = *(undefined4 *)(lVar32 + 0xcfc);
        *(undefined4 *)(param_5 + 0x58 + uVar29) = *(undefined4 *)(lVar32 + 0xd00);
        *(undefined4 *)(param_5 + 0x3c + uVar29) = *(undefined4 *)(lVar32 + 0xd04);
        *(undefined4 *)(param_5 + 0x4c + uVar29) = *(undefined4 *)(lVar32 + 0xd08);
        *(undefined4 *)(param_5 + 0x5c + uVar29) = *(undefined4 *)(lVar32 + 0xd0c);
        *(undefined4 *)(param_5 + 0x60 + uVar29) = *(undefined4 *)(lVar32 + 0xd10);
        *(undefined4 *)(param_5 + 0x70 + uVar29) = *(undefined4 *)(lVar32 + 0xd14);
        *(undefined4 *)(param_5 + 0x80 + uVar29) = *(undefined4 *)(lVar32 + 0xd18);
        *(undefined4 *)(param_5 + 100 + uVar29) = *(undefined4 *)(lVar32 + 0xd1c);
        *(undefined4 *)(param_5 + 0x74 + uVar29) = *(undefined4 *)(lVar32 + 0xd20);
        *(undefined4 *)(param_5 + 0x84 + uVar29) = *(undefined4 *)(lVar32 + 0xd24);
        *(undefined4 *)(param_5 + 0x68 + uVar29) = *(undefined4 *)(lVar32 + 0xd28);
        *(undefined4 *)(param_5 + 0x78 + uVar29) = *(undefined4 *)(lVar32 + 0xd2c);
        *(undefined4 *)(param_5 + 0x88 + uVar29) = *(undefined4 *)(lVar32 + 0xd30);
        *(undefined4 *)(param_5 + 0x6c + uVar29) = *(undefined4 *)(lVar32 + 0xd34);
        *(undefined4 *)(param_5 + 0x7c + uVar29) = *(undefined4 *)(lVar32 + 0xd38);
        *(undefined4 *)(param_5 + 0x8c + uVar29) = *(undefined4 *)(lVar32 + 0xd3c);
        *(undefined4 *)(param_5 + 0x90 + uVar29) = *(undefined4 *)(lVar32 + 0xd40);
        *(undefined4 *)(param_5 + 0xa0 + uVar29) = *(undefined4 *)(lVar32 + 0xd44);
        *(undefined4 *)(param_5 + 0xb0 + uVar29) = *(undefined4 *)(lVar32 + 0xd48);
        *(undefined4 *)(param_5 + 0x94 + uVar29) = *(undefined4 *)(lVar32 + 0xd4c);
        *(undefined4 *)(param_5 + 0xa4 + uVar29) = *(undefined4 *)(lVar32 + 0xd50);
        *(undefined4 *)(param_5 + 0xb4 + uVar29) = *(undefined4 *)(lVar32 + 0xd54);
        *(undefined4 *)(param_5 + 0x98 + uVar29) = *(undefined4 *)(lVar32 + 0xd58);
        *(undefined4 *)(param_5 + 0xa8 + uVar29) = *(undefined4 *)(lVar32 + 0xd5c);
        *(undefined4 *)(param_5 + 0xb8 + uVar29) = *(undefined4 *)(lVar32 + 0xd60);
        *(undefined4 *)(param_5 + 0x9c + uVar29) = *(undefined4 *)(lVar32 + 0xd64);
        *(undefined4 *)(param_5 + 0xac + uVar29) = *(undefined4 *)(lVar32 + 0xd68);
        *(undefined4 *)(param_5 + 0xbc + uVar29) = *(undefined4 *)(lVar32 + 0xd6c);
        *(undefined4 *)(param_5 + 0xc0 + uVar29) = *(undefined4 *)(lVar32 + 0xd70);
        *(undefined4 *)(param_5 + 0xd0 + uVar29) = *(undefined4 *)(lVar32 + 0xd74);
        *(undefined4 *)(param_5 + 0xe0 + uVar29) = *(undefined4 *)(lVar32 + 0xd78);
        *(undefined4 *)(param_5 + 0xc4 + uVar29) = *(undefined4 *)(lVar32 + 0xd7c);
        *(undefined4 *)(param_5 + 0xd4 + uVar29) = *(undefined4 *)(lVar32 + 0xd80);
        *(undefined4 *)(param_5 + 0xe4 + uVar29) = *(undefined4 *)(lVar32 + 0xd84);
        *(undefined4 *)(param_5 + 200 + uVar29) = *(undefined4 *)(lVar32 + 0xd88);
        *(undefined4 *)(param_5 + 0xd8 + uVar29) = *(undefined4 *)(lVar32 + 0xd8c);
        *(undefined4 *)(param_5 + 0xe8 + uVar29) = *(undefined4 *)(lVar32 + 0xd90);
        *(undefined4 *)(param_5 + 0xcc + uVar29) = *(undefined4 *)(lVar32 + 0xd94);
        *(undefined4 *)(param_5 + 0xdc + uVar29) = *(undefined4 *)(lVar32 + 0xd98);
        *(undefined4 *)(param_5 + 0xec + uVar29) = *(undefined4 *)(lVar32 + 0xd9c);
        *(undefined4 *)(param_5 + 0xf0 + uVar29) = *(undefined4 *)(lVar32 + 0xda0);
        *(undefined4 *)(param_5 + 0x100 + uVar29) = *(undefined4 *)(lVar32 + 0xda4);
        *(undefined4 *)(param_5 + 0x110 + uVar29) = *(undefined4 *)(lVar32 + 0xda8);
        *(undefined4 *)(param_5 + 0xf4 + uVar29) = *(undefined4 *)(lVar32 + 0xdac);
        *(undefined4 *)(param_5 + 0x104 + uVar29) = *(undefined4 *)(lVar32 + 0xdb0);
        *(undefined4 *)(param_5 + 0x114 + uVar29) = *(undefined4 *)(lVar32 + 0xdb4);
        *(undefined4 *)(param_5 + 0xf8 + uVar29) = *(undefined4 *)(lVar32 + 0xdb8);
        *(undefined4 *)(param_5 + 0x108 + uVar29) = *(undefined4 *)(lVar32 + 0xdbc);
        *(undefined4 *)(param_5 + 0x118 + uVar29) = *(undefined4 *)(lVar32 + 0xdc0);
        *(undefined4 *)(param_5 + 0xfc + uVar29) = *(undefined4 *)(lVar32 + 0xdc4);
        *(undefined4 *)(param_5 + 0x10c + uVar29) = *(undefined4 *)(lVar32 + 0xdc8);
        *(undefined4 *)(param_5 + 0x11c + uVar29) = *(undefined4 *)(lVar32 + 0xdcc);
        *(undefined4 *)(param_5 + 0x120 + uVar29) = *(undefined4 *)(lVar32 + 0xdd0);
        *(undefined4 *)(param_5 + 0x130 + uVar29) = *(undefined4 *)(lVar32 + 0xdd4);
        *(undefined4 *)(param_5 + 0x140 + uVar29) = *(undefined4 *)(lVar32 + 0xdd8);
        *(undefined4 *)(param_5 + 0x124 + uVar29) = *(undefined4 *)(lVar32 + 0xddc);
        *(undefined4 *)(param_5 + 0x134 + uVar29) = *(undefined4 *)(lVar32 + 0xde0);
        *(undefined4 *)(param_5 + 0x144 + uVar29) = *(undefined4 *)(lVar32 + 0xde4);
        *(undefined4 *)(param_5 + 0x128 + uVar29) = *(undefined4 *)(lVar32 + 0xde8);
        *(undefined4 *)(param_5 + 0x138 + uVar29) = *(undefined4 *)(lVar32 + 0xdec);
        *(undefined4 *)(param_5 + 0x148 + uVar29) = *(undefined4 *)(lVar32 + 0xdf0);
        *(undefined4 *)(param_5 + 300 + uVar29) = *(undefined4 *)(lVar32 + 0xdf4);
        *(undefined4 *)(param_5 + 0x13c + uVar29) = *(undefined4 *)(lVar32 + 0xdf8);
        *(undefined4 *)(param_5 + 0x14c + uVar29) = *(undefined4 *)(lVar32 + 0xdfc);
        *(undefined4 *)(param_5 + 0x150 + uVar29) = *(undefined4 *)(lVar32 + 0xe00);
        *(undefined4 *)(param_5 + 0x160 + uVar29) = *(undefined4 *)(lVar32 + 0xe04);
        *(undefined4 *)(param_5 + 0x170 + uVar29) = *(undefined4 *)(lVar32 + 0xe08);
        *(undefined4 *)(param_5 + 0x154 + uVar29) = *(undefined4 *)(lVar32 + 0xe0c);
        *(undefined4 *)(param_5 + 0x164 + uVar29) = *(undefined4 *)(lVar32 + 0xe10);
        *(undefined4 *)(param_5 + 0x174 + uVar29) = *(undefined4 *)(lVar32 + 0xe14);
        *(undefined4 *)(param_5 + 0x158 + uVar29) = *(undefined4 *)(lVar32 + 0xe18);
        *(undefined4 *)(param_5 + 0x168 + uVar29) = *(undefined4 *)(lVar32 + 0xe1c);
        *(undefined4 *)(param_5 + 0x178 + uVar29) = *(undefined4 *)(lVar32 + 0xe20);
        *(undefined4 *)(param_5 + 0x15c + uVar29) = *(undefined4 *)(lVar32 + 0xe24);
        *(undefined4 *)(param_5 + 0x16c + uVar29) = *(undefined4 *)(lVar32 + 0xe28);
        *(undefined4 *)(param_5 + 0x17c + uVar29) = *(undefined4 *)(lVar32 + 0xe2c);
        *(undefined4 *)(param_5 + 0x180 + uVar29) = *(undefined4 *)(lVar32 + 0xe30);
        *(undefined4 *)(param_5 + 400 + uVar29) = *(undefined4 *)(lVar32 + 0xe34);
        *(undefined4 *)(param_5 + 0x1a0 + uVar29) = *(undefined4 *)(lVar32 + 0xe38);
        *(undefined4 *)(param_5 + 0x184 + uVar29) = *(undefined4 *)(lVar32 + 0xe3c);
        *(undefined4 *)(param_5 + 0x194 + uVar29) = *(undefined4 *)(lVar32 + 0xe40);
        *(undefined4 *)(param_5 + 0x1a4 + uVar29) = *(undefined4 *)(lVar32 + 0xe44);
        *(undefined4 *)(param_5 + 0x188 + uVar29) = *(undefined4 *)(lVar32 + 0xe48);
        *(undefined4 *)(param_5 + 0x198 + uVar29) = *(undefined4 *)(lVar32 + 0xe4c);
        *(undefined4 *)(param_5 + 0x1a8 + uVar29) = *(undefined4 *)(lVar32 + 0xe50);
        *(undefined4 *)(param_5 + 0x18c + uVar29) = *(undefined4 *)(lVar32 + 0xe54);
        *(undefined4 *)(param_5 + 0x19c + uVar29) = *(undefined4 *)(lVar32 + 0xe58);
        *(undefined4 *)(param_5 + 0x1ac + uVar29) = *(undefined4 *)(lVar32 + 0xe5c);
        *(undefined4 *)(param_5 + 0x1b0 + uVar29) = *(undefined4 *)(lVar32 + 0xe60);
        *(undefined4 *)(param_5 + 0x1c0 + uVar29) = *(undefined4 *)(lVar32 + 0xe64);
        *(undefined4 *)(param_5 + 0x1d0 + uVar29) = *(undefined4 *)(lVar32 + 0xe68);
        *(undefined4 *)(param_5 + 0x1b4 + uVar29) = *(undefined4 *)(lVar32 + 0xe6c);
        *(undefined4 *)(param_5 + 0x1c4 + uVar29) = *(undefined4 *)(lVar32 + 0xe70);
        *(undefined4 *)(param_5 + 0x1d4 + uVar29) = *(undefined4 *)(lVar32 + 0xe74);
        *(undefined4 *)(param_5 + 0x1b8 + uVar29) = *(undefined4 *)(lVar32 + 0xe78);
        *(undefined4 *)(param_5 + 0x1c8 + uVar29) = *(undefined4 *)(lVar32 + 0xe7c);
        *(undefined4 *)(param_5 + 0x1d8 + uVar29) = *(undefined4 *)(lVar32 + 0xe80);
        *(undefined4 *)(param_5 + 0x1bc + uVar29) = *(undefined4 *)(lVar32 + 0xe84);
        *(undefined4 *)(param_5 + 0x1cc + uVar29) = *(undefined4 *)(lVar32 + 0xe88);
        *(undefined4 *)(param_5 + 0x1dc + uVar29) = *(undefined4 *)(lVar32 + 0xe8c);
        *(undefined4 *)(param_5 + 0x1e0 + uVar29) = *(undefined4 *)(lVar32 + 0xe90);
        *(undefined4 *)(param_5 + 0x1f0 + uVar29) = *(undefined4 *)(lVar32 + 0xe94);
        *(undefined4 *)(param_5 + 0x200 + uVar29) = *(undefined4 *)(lVar32 + 0xe98);
        *(undefined4 *)(param_5 + 0x1e4 + uVar29) = *(undefined4 *)(lVar32 + 0xe9c);
        *(undefined4 *)(param_5 + 500 + uVar29) = *(undefined4 *)(lVar32 + 0xea0);
        *(undefined4 *)(param_5 + 0x204 + uVar29) = *(undefined4 *)(lVar32 + 0xea4);
        *(undefined4 *)(param_5 + 0x1e8 + uVar29) = *(undefined4 *)(lVar32 + 0xea8);
        *(undefined4 *)(param_5 + 0x1f8 + uVar29) = *(undefined4 *)(lVar32 + 0xeac);
        *(undefined4 *)(param_5 + 0x208 + uVar29) = *(undefined4 *)(lVar32 + 0xeb0);
        *(undefined4 *)(param_5 + 0x1ec + uVar29) = *(undefined4 *)(lVar32 + 0xeb4);
        *(undefined4 *)(param_5 + 0x1fc + uVar29) = *(undefined4 *)(lVar32 + 0xeb8);
        *(undefined4 *)(param_5 + 0x20c + uVar29) = *(undefined4 *)(lVar32 + 0xebc);
        break;
      case 0x77:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x138c);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x1394);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x10 + param_5) = *(undefined8 *)(lVar36 + 0x1398);
        *(undefined4 *)(uVar29 + 0x18 + param_5) = *(undefined4 *)(lVar36 + 0x13a0);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x20 + param_5) = *(undefined8 *)(lVar36 + 0x13a4);
        *(undefined4 *)(uVar29 + 0x28 + param_5) = *(undefined4 *)(lVar36 + 0x13ac);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x30 + param_5) = *(undefined8 *)(lVar36 + 0x13b0);
        *(undefined4 *)(uVar29 + 0x38 + param_5) = *(undefined4 *)(lVar36 + 0x13b8);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x40 + param_5) = *(undefined8 *)(lVar36 + 0x13bc);
        *(undefined4 *)(uVar29 + 0x48 + param_5) = *(undefined4 *)(lVar36 + 0x13c4);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x50 + param_5) = *(undefined8 *)(lVar36 + 0x13c8);
        *(undefined4 *)(uVar29 + 0x58 + param_5) = *(undefined4 *)(lVar36 + 0x13d0);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x60 + param_5) = *(undefined8 *)(lVar36 + 0x13d4);
        *(undefined4 *)(uVar29 + 0x68 + param_5) = *(undefined4 *)(lVar36 + 0x13dc);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x70 + param_5) = *(undefined8 *)(lVar36 + 0x13e0);
        *(undefined4 *)(uVar29 + 0x78 + param_5) = *(undefined4 *)(lVar36 + 0x13e8);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x80 + param_5) = *(undefined8 *)(lVar36 + 0x13ec);
        *(undefined4 *)(uVar29 + 0x88 + param_5) = *(undefined4 *)(lVar36 + 0x13f4);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0x90 + param_5) = *(undefined8 *)(lVar36 + 0x13f8);
        *(undefined4 *)(uVar29 + 0x98 + param_5) = *(undefined4 *)(lVar36 + 0x1400);
        lVar36 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar29 + 0xa0 + param_5) = *(undefined8 *)(lVar36 + 0x1404);
        *(undefined4 *)(uVar29 + 0xa8 + param_5) = *(undefined4 *)(lVar36 + 0x140c);
        break;
      case 0x87:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x12b0);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x12b8);
        break;
      case 0x88:
        uVar31 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        auVar41 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0x12c8);
        goto LAB_1400da8ea;
      case 0x89:
        lVar32 = *(longlong *)(param_1 + 8);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        *(undefined8 *)(uVar29 + param_5) = *(undefined8 *)(lVar32 + 0x12bc);
        *(undefined4 *)(uVar29 + 8 + param_5) = *(undefined4 *)(lVar32 + 0x12c4);
        break;
      case 0x8a:
        uVar31 = (ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2);
        auVar41 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0x12d8);
        goto LAB_1400da8ea;
      case 0x8b:
        plVar25 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x18);
        (**(code **)(*plVar25 + 0x158))
                  (plVar25,(ulonglong)*(ushort *)(param_4 + 2 + lVar36 * 2) + param_5);
        break;
      case 0x8c:
        iVar37 = iVar37 + 1;
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + (longlong)iVar37 * 2)) =
             *(undefined4 *)(param_2 + (ulonglong)*(ushort *)(param_4 + 4 + lVar36 * 2) * 4);
        break;
      case 0x8d:
        iVar37 = iVar37 + 1;
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + (longlong)iVar37 * 2)) =
             *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(param_4 + 4 + lVar36 * 2) * 4);
        break;
      case 0x8e:
        iVar37 = iVar37 + 1;
        uVar31 = (ulonglong)*(ushort *)(param_4 + (longlong)iVar37 * 2);
        uVar29 = (ulonglong)*(ushort *)(param_4 + 4 + lVar36 * 2);
        *(undefined8 *)(uVar31 + param_5) = *(undefined8 *)(param_2 + uVar29 * 4);
        *(undefined4 *)(uVar31 + 8 + param_5) = *(undefined4 *)(param_2 + 8 + uVar29 * 4);
        break;
      case 0x8f:
        iVar37 = iVar37 + 1;
        uVar31 = (ulonglong)*(ushort *)(param_4 + (longlong)iVar37 * 2);
        auVar41 = *(undefined1 (*) [16])
                   (param_2 + (ulonglong)*(ushort *)(param_4 + 4 + lVar36 * 2) * 4);
LAB_1400da8ea:
        *(undefined1 (*) [16])(param_5 + uVar31) = auVar41;
        break;
      default:
        goto switchD_1400d83d5_default;
      }
switchD_1400d83d5_default:
      iVar37 = iVar37 + 2;
    } while (iVar37 < (int)(uint)param_3);
  }
  return;
}

