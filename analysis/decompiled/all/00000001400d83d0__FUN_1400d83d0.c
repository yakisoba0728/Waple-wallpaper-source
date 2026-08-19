// Function: FUN_1400d83d0
// Addr: 1400d83d0
// Size: 9435 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d83d0(longlong param_1,longlong param_2,byte param_3,longlong param_4,longlong param_5)

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
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  float *pfVar23;
  longlong *plVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined8 *puVar32;
  longlong lVar33;
  int iVar34;
  longlong lVar35;
  int iVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_res18;
  undefined1 local_108 [224];
  
  fVar26 = DAT_1404927d4;
  fVar25 = DAT_140492790;
  if (param_3 != 0) {
    iVar36 = 0;
    do {
      lVar35 = (longlong)iVar36;
      uVar28 = (ulonglong)*(ushort *)(param_4 + lVar35 * 2);
      switch(uVar28) {
      case 0:
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x120);
        break;
      case 1:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x124);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 300);
        break;
      case 2:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        uVar6 = *(undefined4 *)(lVar31 + 0x128);
        uVar7 = *(undefined4 *)(lVar31 + 300);
        uVar8 = *(undefined4 *)(lVar31 + 0x120);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0x124);
        *(undefined4 *)(param_5 + 4 + uVar28) = uVar6;
        *(undefined4 *)(param_5 + 8 + uVar28) = uVar7;
        *(undefined4 *)(param_5 + 0xc + uVar28) = uVar8;
        break;
      case 3:
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x130);
        break;
      case 4:
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x14c);
        break;
      case 5:
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x140);
        break;
      case 6:
        auVar38._8_8_ = 0;
        auVar38._0_8_ = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x74);
        auVar40 = divps(_DAT_140492ea0,auVar38);
        *(longlong *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) = auVar40._0_8_;
        break;
      case 7:
        auVar40._8_8_ = 0;
        auVar40._0_8_ = *(ulonglong *)(*(longlong *)(param_1 + 8) + 0x74);
        auVar40 = divps(_DAT_140492f00,auVar40);
        *(longlong *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) = auVar40._0_8_;
        break;
      case 8:
        fVar37 = *(float *)(*(longlong *)(param_1 + 8) + 0x74);
        fVar1 = *(float *)(*(longlong *)(param_1 + 8) + 0x78);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(float *)(param_5 + uVar28) = fVar37;
        *(float *)(param_5 + 4 + uVar28) = fVar1;
        *(float *)(param_5 + 8 + uVar28) = fVar37 / fVar1;
        break;
      case 9:
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        puVar22 = *(undefined4 **)(*(longlong *)(param_1 + 8) + 0x30);
        *(undefined4 *)(param_5 + uVar28) = *puVar22;
        *(undefined4 *)(param_5 + 0x10 + uVar28) = puVar22[1];
        *(undefined4 *)(param_5 + 0x20 + uVar28) = puVar22[2];
        *(undefined4 *)(param_5 + 0x30 + uVar28) = puVar22[3];
        *(undefined4 *)(param_5 + 4 + uVar28) = puVar22[4];
        *(undefined4 *)(param_5 + 0x14 + uVar28) = puVar22[5];
        *(undefined4 *)(param_5 + 0x24 + uVar28) = puVar22[6];
        *(undefined4 *)(param_5 + 0x34 + uVar28) = puVar22[7];
        *(undefined4 *)(param_5 + 8 + uVar28) = puVar22[8];
        *(undefined4 *)(param_5 + 0x18 + uVar28) = puVar22[9];
        *(undefined4 *)(param_5 + 0x28 + uVar28) = puVar22[10];
        *(undefined4 *)(param_5 + 0x38 + uVar28) = puVar22[0xb];
        *(undefined4 *)(param_5 + 0xc + uVar28) = puVar22[0xc];
        *(undefined4 *)(param_5 + 0x1c + uVar28) = puVar22[0xd];
        *(undefined4 *)(param_5 + 0x2c + uVar28) = puVar22[0xe];
        *(undefined4 *)(param_5 + 0x3c + uVar28) = puVar22[0xf];
        break;
      case 10:
        lVar35 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x30);
        goto LAB_1400d8674;
      case 0xb:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        if (*(char *)(lVar31 + 0x1ca) != '\0') {
          FUN_1400d42d0();
        }
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0x930);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0x934);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0x938);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0x93c);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0x940);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0x944);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0x948);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0x94c);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0x950);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0x954);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0x958);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0x95c);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0x960);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0x964);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0x968);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0x96c);
        break;
      case 0xc:
        lVar35 = *(longlong *)(param_1 + 8);
        if (*(char *)(lVar35 + 0x1ca) != '\0') {
          FUN_1400d42d0();
        }
        lVar35 = lVar35 + 0x8f0;
        goto LAB_1400d8674;
      case 0xd:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        if (*(char *)(lVar31 + 0x1ca) != '\0') {
          FUN_1400d42d0();
        }
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0x8f0);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0x8f4);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0x8f8);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0x8fc);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0x900);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0x904);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0x908);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0x90c);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0x910);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0x914);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0x918);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0x91c);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0x920);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0x924);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0x928);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0x92c);
        break;
      case 0xe:
        pfVar23 = *(float **)(*(longlong *)(param_1 + 8) + 0x30);
        fVar37 = *pfVar23;
        fVar1 = pfVar23[8];
        fVar2 = pfVar23[9];
        fVar3 = pfVar23[10];
        fVar4 = pfVar23[1];
        fVar5 = pfVar23[2];
        fVar43 = pfVar23[4];
        fVar44 = pfVar23[5];
        fVar45 = pfVar23[6];
        fVar41 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
        fVar46 = (float)(0x5f375a86 - ((uint)fVar41 >> 1));
        fVar46 = (DAT_140492810 - fVar41 * fVar25 * fVar46 * fVar46) * fVar46;
        fVar42 = fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45;
        fVar41 = (float)(0x5f375a86 - ((uint)fVar42 >> 1));
        fVar41 = (DAT_140492810 - fVar42 * fVar25 * fVar41 * fVar41) * fVar41;
        fVar39 = fVar4 * fVar4 + fVar37 * fVar37 + fVar5 * fVar5;
        fVar42 = (float)(0x5f375a86 - ((uint)fVar39 >> 1));
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        fVar42 = (DAT_140492810 - fVar42 * fVar39 * fVar25 * fVar42) * fVar42;
        *(float *)(param_5 + uVar28) = fVar42 * fVar37;
        *(float *)(param_5 + 0x10 + uVar28) = fVar42 * fVar4;
        *(float *)(param_5 + 4 + uVar28) = fVar41 * fVar43;
        *(float *)(param_5 + 0x14 + uVar28) = fVar41 * fVar44;
        *(float *)(param_5 + 0x18 + uVar28) = fVar46 * fVar2;
        *(float *)(param_5 + 0x20 + uVar28) = fVar42 * fVar5;
        *(float *)(param_5 + 0x24 + uVar28) = fVar41 * fVar45;
        *(float *)(param_5 + 8 + uVar28) = fVar46 * fVar1;
        *(float *)(param_5 + 0x28 + uVar28) = fVar46 * fVar3;
        break;
      case 0xf:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0xa70);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0xa74);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0xa78);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0xa7c);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0xa80);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0xa84);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0xa88);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0xa8c);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0xa90);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0xa94);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0xa98);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0xa9c);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0xaa0);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0xaa4);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0xaa8);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0xaac);
        break;
      case 0x10:
        lVar31 = *(longlong *)(param_1 + 8);
        fVar37 = *(float *)(lVar31 + 0xa70);
        fVar1 = *(float *)(lVar31 + 0xa74);
        fVar2 = *(float *)(lVar31 + 0xa90);
        fVar3 = *(float *)(lVar31 + 0xa94);
        fVar4 = *(float *)(lVar31 + 0xa98);
        fVar5 = *(float *)(lVar31 + 0xa78);
        fVar43 = *(float *)(lVar31 + 0xa80);
        fVar44 = *(float *)(lVar31 + 0xa84);
        fVar45 = *(float *)(lVar31 + 0xa88);
        fVar41 = fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4;
        fVar46 = (float)(0x5f375a86 - ((uint)fVar41 >> 1));
        fVar46 = (DAT_140492810 - fVar41 * fVar25 * fVar46 * fVar46) * fVar46;
        fVar42 = fVar43 * fVar43 + fVar44 * fVar44 + fVar45 * fVar45;
        fVar41 = (float)(0x5f375a86 - ((uint)fVar42 >> 1));
        fVar41 = (DAT_140492810 - fVar41 * fVar42 * fVar25 * fVar41) * fVar41;
        fVar39 = fVar1 * fVar1 + fVar37 * fVar37 + fVar5 * fVar5;
        fVar42 = (float)(0x5f375a86 - ((uint)fVar39 >> 1));
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        fVar42 = (DAT_140492810 - fVar39 * fVar25 * fVar42 * fVar42) * fVar42;
        *(float *)(param_5 + uVar28) = fVar37 * fVar42;
        *(float *)(param_5 + 0x10 + uVar28) = fVar1 * fVar42;
        *(float *)(param_5 + 0x14 + uVar28) = fVar41 * fVar44;
        *(float *)(param_5 + 0x18 + uVar28) = fVar46 * fVar3;
        *(float *)(param_5 + 0x20 + uVar28) = fVar5 * fVar42;
        *(float *)(param_5 + 4 + uVar28) = fVar43 * fVar41;
        *(float *)(param_5 + 0x24 + uVar28) = fVar41 * fVar45;
        *(float *)(param_5 + 8 + uVar28) = fVar2 * fVar46;
        *(float *)(param_5 + 0x28 + uVar28) = fVar46 * fVar4;
        break;
      case 0x11:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0xab0);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0xab4);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0xab8);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0xabc);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0xac0);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0xac4);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0xac8);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0xacc);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0xad0);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0xad4);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0xad8);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0xadc);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0xae0);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0xae4);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0xae8);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0xaec);
        break;
      case 0x12:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        lVar35 = *(longlong *)(param_1 + 0xd0);
        lVar33 = (longlong)(int)((*(uint *)(lVar35 + 0x4c) & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0xb30 + lVar33);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0xb34 + lVar33);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0xb38 + lVar33);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0xb3c + lVar33);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0xb40 + lVar33);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0xb44 + lVar33);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0xb48 + lVar33);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0xb4c + lVar33);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0xb50 + lVar33);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0xb54 + lVar33);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0xb58 + lVar33);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0xb5c + lVar33);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0xb60 + lVar33);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0xb64 + lVar33);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0xb68 + lVar33);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0xb6c + lVar33);
        lVar33 = (longlong)(int)((*(uint *)(lVar35 + 0x4c) >> 3 & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0x40 + uVar28) = *(undefined4 *)(lVar31 + 0xb30 + lVar33);
        *(undefined4 *)(param_5 + 0x50 + uVar28) = *(undefined4 *)(lVar31 + 0xb34 + lVar33);
        *(undefined4 *)(param_5 + 0x60 + uVar28) = *(undefined4 *)(lVar31 + 0xb38 + lVar33);
        *(undefined4 *)(param_5 + 0x70 + uVar28) = *(undefined4 *)(lVar31 + 0xb3c + lVar33);
        *(undefined4 *)(param_5 + 0x44 + uVar28) = *(undefined4 *)(lVar31 + 0xb40 + lVar33);
        *(undefined4 *)(param_5 + 0x54 + uVar28) = *(undefined4 *)(lVar31 + 0xb44 + lVar33);
        *(undefined4 *)(param_5 + 100 + uVar28) = *(undefined4 *)(lVar31 + 0xb48 + lVar33);
        *(undefined4 *)(param_5 + 0x74 + uVar28) = *(undefined4 *)(lVar31 + 0xb4c + lVar33);
        *(undefined4 *)(param_5 + 0x48 + uVar28) = *(undefined4 *)(lVar31 + 0xb50 + lVar33);
        *(undefined4 *)(param_5 + 0x58 + uVar28) = *(undefined4 *)(lVar31 + 0xb54 + lVar33);
        *(undefined4 *)(param_5 + 0x68 + uVar28) = *(undefined4 *)(lVar31 + 0xb58 + lVar33);
        *(undefined4 *)(param_5 + 0x78 + uVar28) = *(undefined4 *)(lVar31 + 0xb5c + lVar33);
        *(undefined4 *)(param_5 + 0x4c + uVar28) = *(undefined4 *)(lVar31 + 0xb60 + lVar33);
        *(undefined4 *)(param_5 + 0x5c + uVar28) = *(undefined4 *)(lVar31 + 0xb64 + lVar33);
        *(undefined4 *)(param_5 + 0x6c + uVar28) = *(undefined4 *)(lVar31 + 0xb68 + lVar33);
        *(undefined4 *)(param_5 + 0x7c + uVar28) = *(undefined4 *)(lVar31 + 0xb6c + lVar33);
        lVar33 = (longlong)(int)((*(uint *)(lVar35 + 0x4c) >> 6 & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0x80 + uVar28) = *(undefined4 *)(lVar31 + 0xb30 + lVar33);
        *(undefined4 *)(param_5 + 0x90 + uVar28) = *(undefined4 *)(lVar31 + 0xb34 + lVar33);
        *(undefined4 *)(param_5 + 0xa0 + uVar28) = *(undefined4 *)(lVar31 + 0xb38 + lVar33);
        *(undefined4 *)(param_5 + 0xb0 + uVar28) = *(undefined4 *)(lVar31 + 0xb3c + lVar33);
        *(undefined4 *)(param_5 + 0x84 + uVar28) = *(undefined4 *)(lVar31 + 0xb40 + lVar33);
        *(undefined4 *)(param_5 + 0x94 + uVar28) = *(undefined4 *)(lVar31 + 0xb44 + lVar33);
        *(undefined4 *)(param_5 + 0xa4 + uVar28) = *(undefined4 *)(lVar31 + 0xb48 + lVar33);
        *(undefined4 *)(param_5 + 0xb4 + uVar28) = *(undefined4 *)(lVar31 + 0xb4c + lVar33);
        *(undefined4 *)(param_5 + 0x88 + uVar28) = *(undefined4 *)(lVar31 + 0xb50 + lVar33);
        *(undefined4 *)(param_5 + 0x98 + uVar28) = *(undefined4 *)(lVar31 + 0xb54 + lVar33);
        *(undefined4 *)(param_5 + 0xa8 + uVar28) = *(undefined4 *)(lVar31 + 0xb58 + lVar33);
        *(undefined4 *)(param_5 + 0xb8 + uVar28) = *(undefined4 *)(lVar31 + 0xb5c + lVar33);
        *(undefined4 *)(param_5 + 0x8c + uVar28) = *(undefined4 *)(lVar31 + 0xb60 + lVar33);
        *(undefined4 *)(param_5 + 0x9c + uVar28) = *(undefined4 *)(lVar31 + 0xb64 + lVar33);
        *(undefined4 *)(param_5 + 0xac + uVar28) = *(undefined4 *)(lVar31 + 0xb68 + lVar33);
        *(undefined4 *)(param_5 + 0xbc + uVar28) = *(undefined4 *)(lVar31 + 0xb6c + lVar33);
        lVar33 = (longlong)(int)((*(uint *)(lVar35 + 0x4c) >> 9 & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0xc0 + uVar28) = *(undefined4 *)(lVar31 + 0xb30 + lVar33);
        *(undefined4 *)(param_5 + 0xd0 + uVar28) = *(undefined4 *)(lVar31 + 0xb34 + lVar33);
        *(undefined4 *)(param_5 + 0xe0 + uVar28) = *(undefined4 *)(lVar31 + 0xb38 + lVar33);
        *(undefined4 *)(param_5 + 0xf0 + uVar28) = *(undefined4 *)(lVar31 + 0xb3c + lVar33);
        *(undefined4 *)(param_5 + 0xc4 + uVar28) = *(undefined4 *)(lVar31 + 0xb40 + lVar33);
        *(undefined4 *)(param_5 + 0xd4 + uVar28) = *(undefined4 *)(lVar31 + 0xb44 + lVar33);
        *(undefined4 *)(param_5 + 0xe4 + uVar28) = *(undefined4 *)(lVar31 + 0xb48 + lVar33);
        *(undefined4 *)(param_5 + 0xf4 + uVar28) = *(undefined4 *)(lVar31 + 0xb4c + lVar33);
        *(undefined4 *)(param_5 + 200 + uVar28) = *(undefined4 *)(lVar31 + 0xb50 + lVar33);
        *(undefined4 *)(param_5 + 0xd8 + uVar28) = *(undefined4 *)(lVar31 + 0xb54 + lVar33);
        *(undefined4 *)(param_5 + 0xe8 + uVar28) = *(undefined4 *)(lVar31 + 0xb58 + lVar33);
        *(undefined4 *)(param_5 + 0xf8 + uVar28) = *(undefined4 *)(lVar31 + 0xb5c + lVar33);
        *(undefined4 *)(param_5 + 0xcc + uVar28) = *(undefined4 *)(lVar31 + 0xb60 + lVar33);
        *(undefined4 *)(param_5 + 0xdc + uVar28) = *(undefined4 *)(lVar31 + 0xb64 + lVar33);
        *(undefined4 *)(param_5 + 0xec + uVar28) = *(undefined4 *)(lVar31 + 0xb68 + lVar33);
        *(undefined4 *)(param_5 + 0xfc + uVar28) = *(undefined4 *)(lVar31 + 0xb6c + lVar33);
        lVar33 = (longlong)(int)((*(uint *)(lVar35 + 0x4c) >> 0xc & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0x100 + uVar28) = *(undefined4 *)(lVar31 + 0xb30 + lVar33);
        *(undefined4 *)(param_5 + 0x110 + uVar28) = *(undefined4 *)(lVar31 + 0xb34 + lVar33);
        *(undefined4 *)(param_5 + 0x120 + uVar28) = *(undefined4 *)(lVar31 + 0xb38 + lVar33);
        *(undefined4 *)(param_5 + 0x130 + uVar28) = *(undefined4 *)(lVar31 + 0xb3c + lVar33);
        *(undefined4 *)(param_5 + 0x104 + uVar28) = *(undefined4 *)(lVar31 + 0xb40 + lVar33);
        *(undefined4 *)(param_5 + 0x114 + uVar28) = *(undefined4 *)(lVar31 + 0xb44 + lVar33);
        *(undefined4 *)(param_5 + 0x124 + uVar28) = *(undefined4 *)(lVar31 + 0xb48 + lVar33);
        *(undefined4 *)(param_5 + 0x134 + uVar28) = *(undefined4 *)(lVar31 + 0xb4c + lVar33);
        *(undefined4 *)(param_5 + 0x108 + uVar28) = *(undefined4 *)(lVar31 + 0xb50 + lVar33);
        *(undefined4 *)(param_5 + 0x118 + uVar28) = *(undefined4 *)(lVar31 + 0xb54 + lVar33);
        *(undefined4 *)(param_5 + 0x128 + uVar28) = *(undefined4 *)(lVar31 + 0xb58 + lVar33);
        *(undefined4 *)(param_5 + 0x138 + uVar28) = *(undefined4 *)(lVar31 + 0xb5c + lVar33);
        *(undefined4 *)(param_5 + 0x10c + uVar28) = *(undefined4 *)(lVar31 + 0xb60 + lVar33);
        *(undefined4 *)(param_5 + 0x11c + uVar28) = *(undefined4 *)(lVar31 + 0xb64 + lVar33);
        *(undefined4 *)(param_5 + 300 + uVar28) = *(undefined4 *)(lVar31 + 0xb68 + lVar33);
        *(undefined4 *)(param_5 + 0x13c + uVar28) = *(undefined4 *)(lVar31 + 0xb6c + lVar33);
        lVar35 = (longlong)(int)((*(uint *)(lVar35 + 0x4c) >> 0xf & 7) % 6) * 0x40;
        *(undefined4 *)(param_5 + 0x140 + uVar28) = *(undefined4 *)(lVar31 + 0xb30 + lVar35);
        *(undefined4 *)(param_5 + 0x150 + uVar28) = *(undefined4 *)(lVar31 + 0xb34 + lVar35);
        *(undefined4 *)(param_5 + 0x160 + uVar28) = *(undefined4 *)(lVar31 + 0xb38 + lVar35);
        *(undefined4 *)(param_5 + 0x170 + uVar28) = *(undefined4 *)(lVar31 + 0xb3c + lVar35);
        *(undefined4 *)(param_5 + 0x144 + uVar28) = *(undefined4 *)(lVar31 + 0xb40 + lVar35);
        *(undefined4 *)(param_5 + 0x154 + uVar28) = *(undefined4 *)(lVar31 + 0xb44 + lVar35);
        *(undefined4 *)(param_5 + 0x164 + uVar28) = *(undefined4 *)(lVar31 + 0xb48 + lVar35);
        *(undefined4 *)(param_5 + 0x174 + uVar28) = *(undefined4 *)(lVar31 + 0xb4c + lVar35);
        *(undefined4 *)(param_5 + 0x148 + uVar28) = *(undefined4 *)(lVar31 + 0xb50 + lVar35);
        *(undefined4 *)(param_5 + 0x158 + uVar28) = *(undefined4 *)(lVar31 + 0xb54 + lVar35);
        *(undefined4 *)(param_5 + 0x168 + uVar28) = *(undefined4 *)(lVar31 + 0xb58 + lVar35);
        *(undefined4 *)(param_5 + 0x178 + uVar28) = *(undefined4 *)(lVar31 + 0xb5c + lVar35);
        *(undefined4 *)(param_5 + 0x14c + uVar28) = *(undefined4 *)(lVar31 + 0xb60 + lVar35);
        *(undefined4 *)(param_5 + 0x15c + uVar28) = *(undefined4 *)(lVar31 + 0xb64 + lVar35);
        *(undefined4 *)(param_5 + 0x16c + uVar28) = *(undefined4 *)(lVar31 + 0xb68 + lVar35);
        *(undefined4 *)(param_5 + 0x17c + uVar28) = *(undefined4 *)(lVar31 + 0xb6c + lVar35);
        break;
      case 0x13:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0x970);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0x974);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0x978);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0x97c);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0x980);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0x984);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0x988);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0x98c);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0x990);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0x994);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0x998);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0x99c);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0x9a0);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0x9a4);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0x9a8);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0x9ac);
        break;
      case 0x14:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0x9b0);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0x9b4);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0x9b8);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0x9bc);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0x9c0);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0x9c4);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0x9c8);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0x9cc);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0x9d0);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0x9d4);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0x9d8);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0x9dc);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0x9e0);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0x9e4);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0x9e8);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0x9ec);
        break;
      case 0x15:
        lVar35 = *(longlong *)(param_1 + 8) + 0x9b0;
        goto LAB_1400d8674;
      case 0x16:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0x9f0);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0x9f4);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0x9f8);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0x9fc);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0xa00);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0xa04);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0xa08);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0xa0c);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0xa10);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0xa14);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0xa18);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0xa1c);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0xa20);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0xa24);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0xa28);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0xa2c);
        break;
      case 0x17:
        lVar35 = *(longlong *)(param_1 + 8) + 0x9f0;
LAB_1400d8674:
                    /* WARNING: Subroutine does not return */
        FUN_14005f800(local_108,lVar35);
      case 0x18:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0xa30);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0xa34);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0xa38);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0xa3c);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0xa40);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0xa44);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0xa48);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0xa4c);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0xa50);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0xa54);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0xa58);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0xa5c);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0xa60);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0xa64);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0xa68);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0xa6c);
        break;
      case 0x19:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x68);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x70);
        break;
      case 0x1a:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x160);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x168);
        break;
      case 0x1b:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x16c);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x174);
        break;
      case 0x1c:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x178);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x180);
        break;
      case 0x1d:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x184);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x18c);
        break;
      case 0x1e:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 400);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x198);
        break;
      case 0x1f:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x19c);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x1a4);
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
        uVar30 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        auVar40 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + -0xd4 + uVar28 * 0x10);
        goto UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode;
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
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xcc + uVar28 * 8);
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
        lVar31 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + -0x1f0 + uVar28 * 8);
        if (lVar31 == 0) {
          uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
          *(undefined4 *)(param_5 + uVar28) = 0x40000000;
          *(undefined4 *)(param_5 + 4 + uVar28) = 0x40000000;
LAB_1400d9928:
          *(undefined4 *)(param_5 + 8 + uVar28) = 0x40000000;
          *(undefined4 *)(param_5 + 0xc + uVar28) = 0x40000000;
        }
        else {
          uVar21 = *(uint *)(lVar31 + 0x24);
          uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
          uVar20 = *(uint *)(lVar31 + 0x2c);
          uVar19 = *(uint *)(lVar31 + 0x30);
          *(float *)(param_5 + uVar28) = (float)*(uint *)(lVar31 + 0x20);
          *(float *)(param_5 + 4 + uVar28) = (float)uVar21;
          *(float *)(param_5 + 8 + uVar28) = (float)uVar20;
          *(float *)(param_5 + 0xc + uVar28) = (float)uVar19;
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
        lVar31 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + -0x240 + uVar28 * 8);
        if (lVar31 == 0) {
          uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
          *(undefined4 *)(param_5 + uVar28) = 0x3f000000;
          *(undefined4 *)(param_5 + 4 + uVar28) = 0x3f000000;
          goto LAB_1400d9928;
        }
        uVar21 = *(uint *)(lVar31 + 0x20);
        uVar20 = *(uint *)(lVar31 + 0x24);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(float *)(param_5 + uVar28) = fVar26 / (float)uVar21;
        *(float *)(param_5 + 4 + uVar28) = fVar26 / (float)uVar20;
        *(float *)(param_5 + 8 + uVar28) = (float)uVar21;
        *(float *)(param_5 + 0xc + uVar28) = (float)uVar20;
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
        lVar31 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 8) + 0x58) + -0x290 + uVar28 * 8);
        if (lVar31 == 0) {
          *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) = 0x3f800000;
        }
        else {
          local_res18 = (float)*(int *)(lVar31 + 0xd0);
          if (local_res18 <= 0.0) {
            local_res18 = 0.0;
          }
          *(float *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) = local_res18;
        }
        break;
      case 0x5c:
        *(float *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             (float)*(int *)(*(longlong *)(param_1 + 8) + 0x1218);
        break;
      case 0x5d:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        uVar17 = *(undefined8 *)(lVar31 + 0x1260);
        *(undefined8 *)(param_5 + uVar28) = *(undefined8 *)(lVar31 + 0x1258);
        ((undefined8 *)(param_5 + uVar28))[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar31 + 0x1270);
        puVar29 = (undefined8 *)(param_5 + 0x10 + uVar28);
        *puVar29 = *(undefined8 *)(lVar31 + 0x1268);
        puVar29[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar28) = *(undefined1 (*) [16])(lVar31 + 0x1278);
        uVar17 = *(undefined8 *)(lVar31 + 0x1290);
        puVar29 = (undefined8 *)(param_5 + 0x30 + uVar28);
        *puVar29 = *(undefined8 *)(lVar31 + 0x1288);
        puVar29[1] = uVar17;
        break;
      case 0x5e:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        uVar17 = *(undefined8 *)(lVar31 + 0x1268);
        uVar18 = *(undefined8 *)(lVar31 + 0x1278);
        fVar46 = *(float *)(lVar31 + 0x1294) * *(float *)(lVar31 + 0x1294);
        fVar43 = *(float *)(lVar31 + 0x1264) * *(float *)(lVar31 + 0x1264);
        fVar44 = *(float *)(lVar31 + 0x1274) * *(float *)(lVar31 + 0x1274);
        fVar37 = *(float *)(lVar31 + 0x1288);
        fVar1 = *(float *)(lVar31 + 0x128c);
        fVar2 = *(float *)(lVar31 + 0x1260);
        fVar3 = *(float *)(lVar31 + 0x1270);
        fVar4 = *(float *)(lVar31 + 0x1290);
        fVar45 = *(float *)(lVar31 + 0x1284) * *(float *)(lVar31 + 0x1284);
        fVar5 = *(float *)(lVar31 + 0x1280);
        *(ulonglong *)(param_5 + uVar28) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lVar31 + 0x1258) >> 0x20) * fVar43,
                      (float)*(undefined8 *)(lVar31 + 0x1258) * fVar43);
        *(float *)(param_5 + 8 + uVar28) = fVar43 * fVar2;
        *(float *)(param_5 + 0xc + uVar28) = fVar46 * fVar37;
        *(ulonglong *)(param_5 + 0x10 + uVar28) =
             CONCAT44((float)((ulonglong)uVar17 >> 0x20) * fVar44,(float)uVar17 * fVar44);
        *(float *)(param_5 + 0x18 + uVar28) = fVar44 * fVar3;
        *(float *)(param_5 + 0x1c + uVar28) = fVar46 * fVar1;
        *(ulonglong *)(param_5 + 0x20 + uVar28) =
             CONCAT44((float)((ulonglong)uVar18 >> 0x20) * fVar45,(float)uVar18 * fVar45);
        *(float *)(param_5 + 0x28 + uVar28) = fVar45 * fVar5;
        *(float *)(param_5 + 0x2c + uVar28) = fVar46 * fVar4;
        break;
      case 0x5f:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        uVar6 = *(undefined4 *)(lVar31 + 0x122c);
        uVar7 = *(undefined4 *)(lVar31 + 0x1230);
        uVar8 = *(undefined4 *)(lVar31 + 0x1234);
        uVar9 = *(undefined4 *)(lVar31 + 0x1238);
        uVar10 = *(undefined4 *)(lVar31 + 0x123c);
        uVar11 = *(undefined4 *)(lVar31 + 0x1240);
        uVar12 = *(undefined4 *)(lVar31 + 0x1244);
        uVar13 = *(undefined4 *)(lVar31 + 0x1248);
        uVar14 = *(undefined4 *)(lVar31 + 0x124c);
        uVar15 = *(undefined4 *)(lVar31 + 0x1250);
        uVar16 = *(undefined4 *)(lVar31 + 0x1254);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0x1228);
        *(undefined4 *)(param_5 + 4 + uVar28) = uVar6;
        *(undefined4 *)(param_5 + 8 + uVar28) = uVar7;
        *(undefined4 *)(param_5 + 0xc + uVar28) = 0;
        *(undefined4 *)(param_5 + 0x10 + uVar28) = uVar8;
        *(undefined4 *)(param_5 + 0x14 + uVar28) = uVar9;
        *(undefined4 *)(param_5 + 0x18 + uVar28) = uVar10;
        *(undefined4 *)(param_5 + 0x1c + uVar28) = 0;
        *(undefined4 *)(param_5 + 0x20 + uVar28) = uVar11;
        *(undefined4 *)(param_5 + 0x24 + uVar28) = uVar12;
        *(undefined4 *)(param_5 + 0x28 + uVar28) = uVar13;
        *(undefined4 *)(param_5 + 0x2c + uVar28) = 0;
        *(undefined4 *)(param_5 + 0x30 + uVar28) = uVar14;
        *(undefined4 *)(param_5 + 0x34 + uVar28) = uVar15;
        *(undefined4 *)(param_5 + 0x38 + uVar28) = uVar16;
        break;
      case 0x60:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x1298);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x12a0);
        break;
      case 0x61:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x12a4);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x12ac);
        break;
      case 0x62:
        puVar32 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2d0);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        uVar17 = puVar32[1];
        *(undefined8 *)(param_5 + uVar28) = *puVar32;
        ((undefined8 *)(param_5 + uVar28))[1] = uVar17;
        uVar17 = puVar32[3];
        puVar29 = (undefined8 *)(param_5 + 0x10 + uVar28);
        *puVar29 = puVar32[2];
        puVar29[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar28) = *(undefined1 (*) [16])(puVar32 + 4);
        uVar17 = puVar32[7];
        puVar29 = (undefined8 *)(param_5 + 0x30 + uVar28);
        *puVar29 = puVar32[6];
        puVar29[1] = uVar17;
        break;
      case 99:
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        lVar35 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2d0);
        uVar17 = *(undefined8 *)(lVar35 + 0x48);
        *(undefined8 *)(param_5 + uVar28) = *(undefined8 *)(lVar35 + 0x40);
        ((undefined8 *)(param_5 + uVar28))[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar35 + 0x58);
        puVar29 = (undefined8 *)(param_5 + 0x10 + uVar28);
        *puVar29 = *(undefined8 *)(lVar35 + 0x50);
        puVar29[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar28) = *(undefined1 (*) [16])(lVar35 + 0x60);
        uVar17 = *(undefined8 *)(lVar35 + 0x78);
        puVar29 = (undefined8 *)(param_5 + 0x30 + uVar28);
        *puVar29 = *(undefined8 *)(lVar35 + 0x70);
        puVar29[1] = uVar17;
        break;
      case 100:
        puVar32 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2c8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        uVar17 = puVar32[1];
        *(undefined8 *)(param_5 + uVar28) = *puVar32;
        ((undefined8 *)(param_5 + uVar28))[1] = uVar17;
        uVar17 = puVar32[3];
        puVar29 = (undefined8 *)(param_5 + 0x10 + uVar28);
        *puVar29 = puVar32[2];
        puVar29[1] = uVar17;
        uVar17 = puVar32[5];
        puVar29 = (undefined8 *)(param_5 + 0x20 + uVar28);
        *puVar29 = puVar32[4];
        puVar29[1] = uVar17;
        uVar17 = puVar32[7];
        puVar29 = (undefined8 *)(param_5 + 0x30 + uVar28);
        *puVar29 = puVar32[6];
        puVar29[1] = uVar17;
        uVar17 = puVar32[9];
        puVar29 = (undefined8 *)(param_5 + 0x40 + uVar28);
        *puVar29 = puVar32[8];
        puVar29[1] = uVar17;
        uVar17 = puVar32[0xb];
        puVar29 = (undefined8 *)(param_5 + 0x50 + uVar28);
        *puVar29 = puVar32[10];
        puVar29[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x60 + uVar28) = *(undefined1 (*) [16])(puVar32 + 0xc);
        uVar17 = puVar32[0xf];
        puVar29 = (undefined8 *)(param_5 + 0x70 + uVar28);
        *puVar29 = puVar32[0xe];
        puVar29[1] = uVar17;
        break;
      case 0x65:
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        lVar35 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x2c8);
        uVar17 = *(undefined8 *)(lVar35 + 0x88);
        *(undefined8 *)(param_5 + uVar28) = *(undefined8 *)(lVar35 + 0x80);
        ((undefined8 *)(param_5 + uVar28))[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar35 + 0x98);
        puVar29 = (undefined8 *)(param_5 + 0x10 + uVar28);
        *puVar29 = *(undefined8 *)(lVar35 + 0x90);
        puVar29[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar35 + 0xa8);
        puVar29 = (undefined8 *)(param_5 + 0x20 + uVar28);
        *puVar29 = *(undefined8 *)(lVar35 + 0xa0);
        puVar29[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar35 + 0xb8);
        puVar29 = (undefined8 *)(param_5 + 0x30 + uVar28);
        *puVar29 = *(undefined8 *)(lVar35 + 0xb0);
        puVar29[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar35 + 200);
        puVar29 = (undefined8 *)(param_5 + 0x40 + uVar28);
        *puVar29 = *(undefined8 *)(lVar35 + 0xc0);
        puVar29[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar35 + 0xd8);
        puVar29 = (undefined8 *)(param_5 + 0x50 + uVar28);
        *puVar29 = *(undefined8 *)(lVar35 + 0xd0);
        puVar29[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x60 + uVar28) = *(undefined1 (*) [16])(lVar35 + 0xe0);
        uVar17 = *(undefined8 *)(lVar35 + 0xf8);
        puVar29 = (undefined8 *)(param_5 + 0x70 + uVar28);
        *puVar29 = *(undefined8 *)(lVar35 + 0xf0);
        puVar29[1] = uVar17;
        break;
      case 0x66:
        lVar31 = 2;
        puVar29 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x2c0);
        puVar32 = (undefined8 *)((ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2) + param_5);
        do {
          uVar17 = puVar29[1];
          *puVar32 = *puVar29;
          puVar32[1] = uVar17;
          uVar17 = puVar29[3];
          puVar32[2] = puVar29[2];
          puVar32[3] = uVar17;
          uVar17 = puVar29[5];
          puVar32[4] = puVar29[4];
          puVar32[5] = uVar17;
          uVar17 = puVar29[7];
          puVar32[6] = puVar29[6];
          puVar32[7] = uVar17;
          uVar17 = puVar29[9];
          puVar32[8] = puVar29[8];
          puVar32[9] = uVar17;
          uVar17 = puVar29[0xb];
          puVar32[10] = puVar29[10];
          puVar32[0xb] = uVar17;
          *(undefined1 (*) [16])(puVar32 + 0xc) = *(undefined1 (*) [16])(puVar29 + 0xc);
          uVar17 = puVar29[0xf];
          puVar32[0xe] = puVar29[0xe];
          puVar32[0xf] = uVar17;
          lVar31 = lVar31 + -1;
          puVar29 = puVar29 + 0x10;
          puVar32 = puVar32 + 0x10;
        } while (lVar31 != 0);
        break;
      case 0x67:
        lVar31 = 2;
        puVar29 = (undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2));
        puVar32 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x2c0) + 0x100);
        do {
          uVar17 = puVar32[1];
          *puVar29 = *puVar32;
          puVar29[1] = uVar17;
          uVar17 = puVar32[3];
          puVar29[2] = puVar32[2];
          puVar29[3] = uVar17;
          uVar17 = puVar32[5];
          puVar29[4] = puVar32[4];
          puVar29[5] = uVar17;
          uVar17 = puVar32[7];
          puVar29[6] = puVar32[6];
          puVar29[7] = uVar17;
          uVar17 = puVar32[9];
          puVar29[8] = puVar32[8];
          puVar29[9] = uVar17;
          uVar17 = puVar32[0xb];
          puVar29[10] = puVar32[10];
          puVar29[0xb] = uVar17;
          *(undefined1 (*) [16])(puVar29 + 0xc) = *(undefined1 (*) [16])(puVar32 + 0xc);
          uVar17 = puVar32[0xf];
          puVar29[0xe] = puVar32[0xe];
          puVar29[0xf] = uVar17;
          lVar31 = lVar31 + -1;
          puVar29 = puVar29 + 0x10;
          puVar32 = puVar32 + 0x10;
        } while (lVar31 != 0);
        break;
      case 0x68:
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x94);
        break;
      case 0x69:
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x8c);
        break;
      case 0x6a:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        fVar37 = fVar26;
        if ((*(byte *)(lVar31 + 0xa4) & 1) == 0) {
          fVar37 = 0.0;
        }
        *(float *)(param_5 + 4 + uVar28) = fVar37;
        *(float *)(param_5 + uVar28) = fVar37;
        uVar21 = *(uint *)(lVar31 + 0xa4);
        if (((uVar21 & 1) == 0) || ((uVar21 & 2) != 0)) {
          *(undefined4 *)(param_5 + 0xc + uVar28) = 0;
          *(undefined4 *)(param_5 + 8 + uVar28) = 0;
        }
        else {
          *(undefined4 *)(param_5 + 0xc + uVar28) = 0;
          *(float *)(param_5 + 8 + uVar28) = fVar26;
        }
        break;
      case 0x6b:
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9c);
        break;
      case 0x6c:
        uVar30 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        auVar40 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0xa8);
        goto UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode;
      case 0x6d:
        uVar30 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        auVar40 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0xb8);
        goto UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode;
      case 0x6e:
        uVar30 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        auVar40 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 200);
        goto UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode;
      case 0x6f:
        uVar30 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        auVar40 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0xd8);
        goto UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode;
      case 0x70:
        uVar30 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        auVar40 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0xe8);
        goto UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode;
      case 0x72:
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0((ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2) + param_5,
                      *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x11e0),
                      (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x12e8) << 2);
      case 0x73:
        lVar31 = *(longlong *)(param_1 + 8);
        if (*(char *)(lVar31 + 0x12e9) != '\0') {
          iVar34 = 0;
          do {
            iVar27 = iVar34 * 0x10;
            lVar33 = (longlong)iVar34;
            iVar34 = iVar34 + 1;
            *(undefined1 (*) [16])
             (param_5 + (int)(iVar27 + (uint)*(ushort *)(param_4 + 2 + lVar35 * 2))) =
                 *(undefined1 (*) [16])(lVar31 + 0x12ec + lVar33 * 0x10);
            lVar31 = *(longlong *)(param_1 + 8);
          } while (iVar34 < (int)(uint)*(byte *)(lVar31 + 0x12e9));
        }
        break;
      case 0x74:
        *(uint *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             (uint)*(byte *)(*(longlong *)(param_1 + 8) + 0x12ea);
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        uVar17 = *(undefined8 *)(lVar31 + 0x133c);
        puVar29 = (undefined8 *)(param_5 + 4 + uVar28);
        *puVar29 = *(undefined8 *)(lVar31 + 0x1334);
        puVar29[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar31 + 0x134c);
        puVar29 = (undefined8 *)(param_5 + 0x14 + uVar28);
        *puVar29 = *(undefined8 *)(lVar31 + 0x1344);
        puVar29[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar28) = *(undefined1 (*) [16])(lVar31 + 0x1350);
        break;
      case 0x75:
        lVar31 = *(longlong *)(param_1 + 8);
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2)) =
             *(undefined4 *)(lVar31 + 0x1330);
        uVar17 = *(undefined8 *)(lVar31 + 0x1368);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        puVar29 = (undefined8 *)(param_5 + 4 + uVar28);
        *puVar29 = *(undefined8 *)(lVar31 + 0x1360);
        puVar29[1] = uVar17;
        uVar17 = *(undefined8 *)(lVar31 + 0x1378);
        puVar29 = (undefined8 *)(param_5 + 0x14 + uVar28);
        *puVar29 = *(undefined8 *)(lVar31 + 0x1370);
        puVar29[1] = uVar17;
        *(undefined1 (*) [16])(param_5 + 0x20 + uVar28) = *(undefined1 (*) [16])(lVar31 + 0x137c);
        break;
      case 0x76:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined4 *)(param_5 + uVar28) = *(undefined4 *)(lVar31 + 0xcb0);
        *(undefined4 *)(param_5 + 0x10 + uVar28) = *(undefined4 *)(lVar31 + 0xcb4);
        *(undefined4 *)(param_5 + 0x20 + uVar28) = *(undefined4 *)(lVar31 + 0xcb8);
        *(undefined4 *)(param_5 + 4 + uVar28) = *(undefined4 *)(lVar31 + 0xcbc);
        *(undefined4 *)(param_5 + 0x14 + uVar28) = *(undefined4 *)(lVar31 + 0xcc0);
        *(undefined4 *)(param_5 + 0x24 + uVar28) = *(undefined4 *)(lVar31 + 0xcc4);
        *(undefined4 *)(param_5 + 8 + uVar28) = *(undefined4 *)(lVar31 + 0xcc8);
        *(undefined4 *)(param_5 + 0x18 + uVar28) = *(undefined4 *)(lVar31 + 0xccc);
        *(undefined4 *)(param_5 + 0x28 + uVar28) = *(undefined4 *)(lVar31 + 0xcd0);
        *(undefined4 *)(param_5 + 0xc + uVar28) = *(undefined4 *)(lVar31 + 0xcd4);
        *(undefined4 *)(param_5 + 0x1c + uVar28) = *(undefined4 *)(lVar31 + 0xcd8);
        *(undefined4 *)(param_5 + 0x2c + uVar28) = *(undefined4 *)(lVar31 + 0xcdc);
        *(undefined4 *)(param_5 + 0x30 + uVar28) = *(undefined4 *)(lVar31 + 0xce0);
        *(undefined4 *)(param_5 + 0x40 + uVar28) = *(undefined4 *)(lVar31 + 0xce4);
        *(undefined4 *)(param_5 + 0x50 + uVar28) = *(undefined4 *)(lVar31 + 0xce8);
        *(undefined4 *)(param_5 + 0x34 + uVar28) = *(undefined4 *)(lVar31 + 0xcec);
        *(undefined4 *)(param_5 + 0x44 + uVar28) = *(undefined4 *)(lVar31 + 0xcf0);
        *(undefined4 *)(param_5 + 0x54 + uVar28) = *(undefined4 *)(lVar31 + 0xcf4);
        *(undefined4 *)(param_5 + 0x38 + uVar28) = *(undefined4 *)(lVar31 + 0xcf8);
        *(undefined4 *)(param_5 + 0x48 + uVar28) = *(undefined4 *)(lVar31 + 0xcfc);
        *(undefined4 *)(param_5 + 0x58 + uVar28) = *(undefined4 *)(lVar31 + 0xd00);
        *(undefined4 *)(param_5 + 0x3c + uVar28) = *(undefined4 *)(lVar31 + 0xd04);
        *(undefined4 *)(param_5 + 0x4c + uVar28) = *(undefined4 *)(lVar31 + 0xd08);
        *(undefined4 *)(param_5 + 0x5c + uVar28) = *(undefined4 *)(lVar31 + 0xd0c);
        *(undefined4 *)(param_5 + 0x60 + uVar28) = *(undefined4 *)(lVar31 + 0xd10);
        *(undefined4 *)(param_5 + 0x70 + uVar28) = *(undefined4 *)(lVar31 + 0xd14);
        *(undefined4 *)(param_5 + 0x80 + uVar28) = *(undefined4 *)(lVar31 + 0xd18);
        *(undefined4 *)(param_5 + 100 + uVar28) = *(undefined4 *)(lVar31 + 0xd1c);
        *(undefined4 *)(param_5 + 0x74 + uVar28) = *(undefined4 *)(lVar31 + 0xd20);
        *(undefined4 *)(param_5 + 0x84 + uVar28) = *(undefined4 *)(lVar31 + 0xd24);
        *(undefined4 *)(param_5 + 0x68 + uVar28) = *(undefined4 *)(lVar31 + 0xd28);
        *(undefined4 *)(param_5 + 0x78 + uVar28) = *(undefined4 *)(lVar31 + 0xd2c);
        *(undefined4 *)(param_5 + 0x88 + uVar28) = *(undefined4 *)(lVar31 + 0xd30);
        *(undefined4 *)(param_5 + 0x6c + uVar28) = *(undefined4 *)(lVar31 + 0xd34);
        *(undefined4 *)(param_5 + 0x7c + uVar28) = *(undefined4 *)(lVar31 + 0xd38);
        *(undefined4 *)(param_5 + 0x8c + uVar28) = *(undefined4 *)(lVar31 + 0xd3c);
        *(undefined4 *)(param_5 + 0x90 + uVar28) = *(undefined4 *)(lVar31 + 0xd40);
        *(undefined4 *)(param_5 + 0xa0 + uVar28) = *(undefined4 *)(lVar31 + 0xd44);
        *(undefined4 *)(param_5 + 0xb0 + uVar28) = *(undefined4 *)(lVar31 + 0xd48);
        *(undefined4 *)(param_5 + 0x94 + uVar28) = *(undefined4 *)(lVar31 + 0xd4c);
        *(undefined4 *)(param_5 + 0xa4 + uVar28) = *(undefined4 *)(lVar31 + 0xd50);
        *(undefined4 *)(param_5 + 0xb4 + uVar28) = *(undefined4 *)(lVar31 + 0xd54);
        *(undefined4 *)(param_5 + 0x98 + uVar28) = *(undefined4 *)(lVar31 + 0xd58);
        *(undefined4 *)(param_5 + 0xa8 + uVar28) = *(undefined4 *)(lVar31 + 0xd5c);
        *(undefined4 *)(param_5 + 0xb8 + uVar28) = *(undefined4 *)(lVar31 + 0xd60);
        *(undefined4 *)(param_5 + 0x9c + uVar28) = *(undefined4 *)(lVar31 + 0xd64);
        *(undefined4 *)(param_5 + 0xac + uVar28) = *(undefined4 *)(lVar31 + 0xd68);
        *(undefined4 *)(param_5 + 0xbc + uVar28) = *(undefined4 *)(lVar31 + 0xd6c);
        *(undefined4 *)(param_5 + 0xc0 + uVar28) = *(undefined4 *)(lVar31 + 0xd70);
        *(undefined4 *)(param_5 + 0xd0 + uVar28) = *(undefined4 *)(lVar31 + 0xd74);
        *(undefined4 *)(param_5 + 0xe0 + uVar28) = *(undefined4 *)(lVar31 + 0xd78);
        *(undefined4 *)(param_5 + 0xc4 + uVar28) = *(undefined4 *)(lVar31 + 0xd7c);
        *(undefined4 *)(param_5 + 0xd4 + uVar28) = *(undefined4 *)(lVar31 + 0xd80);
        *(undefined4 *)(param_5 + 0xe4 + uVar28) = *(undefined4 *)(lVar31 + 0xd84);
        *(undefined4 *)(param_5 + 200 + uVar28) = *(undefined4 *)(lVar31 + 0xd88);
        *(undefined4 *)(param_5 + 0xd8 + uVar28) = *(undefined4 *)(lVar31 + 0xd8c);
        *(undefined4 *)(param_5 + 0xe8 + uVar28) = *(undefined4 *)(lVar31 + 0xd90);
        *(undefined4 *)(param_5 + 0xcc + uVar28) = *(undefined4 *)(lVar31 + 0xd94);
        *(undefined4 *)(param_5 + 0xdc + uVar28) = *(undefined4 *)(lVar31 + 0xd98);
        *(undefined4 *)(param_5 + 0xec + uVar28) = *(undefined4 *)(lVar31 + 0xd9c);
        *(undefined4 *)(param_5 + 0xf0 + uVar28) = *(undefined4 *)(lVar31 + 0xda0);
        *(undefined4 *)(param_5 + 0x100 + uVar28) = *(undefined4 *)(lVar31 + 0xda4);
        *(undefined4 *)(param_5 + 0x110 + uVar28) = *(undefined4 *)(lVar31 + 0xda8);
        *(undefined4 *)(param_5 + 0xf4 + uVar28) = *(undefined4 *)(lVar31 + 0xdac);
        *(undefined4 *)(param_5 + 0x104 + uVar28) = *(undefined4 *)(lVar31 + 0xdb0);
        *(undefined4 *)(param_5 + 0x114 + uVar28) = *(undefined4 *)(lVar31 + 0xdb4);
        *(undefined4 *)(param_5 + 0xf8 + uVar28) = *(undefined4 *)(lVar31 + 0xdb8);
        *(undefined4 *)(param_5 + 0x108 + uVar28) = *(undefined4 *)(lVar31 + 0xdbc);
        *(undefined4 *)(param_5 + 0x118 + uVar28) = *(undefined4 *)(lVar31 + 0xdc0);
        *(undefined4 *)(param_5 + 0xfc + uVar28) = *(undefined4 *)(lVar31 + 0xdc4);
        *(undefined4 *)(param_5 + 0x10c + uVar28) = *(undefined4 *)(lVar31 + 0xdc8);
        *(undefined4 *)(param_5 + 0x11c + uVar28) = *(undefined4 *)(lVar31 + 0xdcc);
        *(undefined4 *)(param_5 + 0x120 + uVar28) = *(undefined4 *)(lVar31 + 0xdd0);
        *(undefined4 *)(param_5 + 0x130 + uVar28) = *(undefined4 *)(lVar31 + 0xdd4);
        *(undefined4 *)(param_5 + 0x140 + uVar28) = *(undefined4 *)(lVar31 + 0xdd8);
        *(undefined4 *)(param_5 + 0x124 + uVar28) = *(undefined4 *)(lVar31 + 0xddc);
        *(undefined4 *)(param_5 + 0x134 + uVar28) = *(undefined4 *)(lVar31 + 0xde0);
        *(undefined4 *)(param_5 + 0x144 + uVar28) = *(undefined4 *)(lVar31 + 0xde4);
        *(undefined4 *)(param_5 + 0x128 + uVar28) = *(undefined4 *)(lVar31 + 0xde8);
        *(undefined4 *)(param_5 + 0x138 + uVar28) = *(undefined4 *)(lVar31 + 0xdec);
        *(undefined4 *)(param_5 + 0x148 + uVar28) = *(undefined4 *)(lVar31 + 0xdf0);
        *(undefined4 *)(param_5 + 300 + uVar28) = *(undefined4 *)(lVar31 + 0xdf4);
        *(undefined4 *)(param_5 + 0x13c + uVar28) = *(undefined4 *)(lVar31 + 0xdf8);
        *(undefined4 *)(param_5 + 0x14c + uVar28) = *(undefined4 *)(lVar31 + 0xdfc);
        *(undefined4 *)(param_5 + 0x150 + uVar28) = *(undefined4 *)(lVar31 + 0xe00);
        *(undefined4 *)(param_5 + 0x160 + uVar28) = *(undefined4 *)(lVar31 + 0xe04);
        *(undefined4 *)(param_5 + 0x170 + uVar28) = *(undefined4 *)(lVar31 + 0xe08);
        *(undefined4 *)(param_5 + 0x154 + uVar28) = *(undefined4 *)(lVar31 + 0xe0c);
        *(undefined4 *)(param_5 + 0x164 + uVar28) = *(undefined4 *)(lVar31 + 0xe10);
        *(undefined4 *)(param_5 + 0x174 + uVar28) = *(undefined4 *)(lVar31 + 0xe14);
        *(undefined4 *)(param_5 + 0x158 + uVar28) = *(undefined4 *)(lVar31 + 0xe18);
        *(undefined4 *)(param_5 + 0x168 + uVar28) = *(undefined4 *)(lVar31 + 0xe1c);
        *(undefined4 *)(param_5 + 0x178 + uVar28) = *(undefined4 *)(lVar31 + 0xe20);
        *(undefined4 *)(param_5 + 0x15c + uVar28) = *(undefined4 *)(lVar31 + 0xe24);
        *(undefined4 *)(param_5 + 0x16c + uVar28) = *(undefined4 *)(lVar31 + 0xe28);
        *(undefined4 *)(param_5 + 0x17c + uVar28) = *(undefined4 *)(lVar31 + 0xe2c);
        *(undefined4 *)(param_5 + 0x180 + uVar28) = *(undefined4 *)(lVar31 + 0xe30);
        *(undefined4 *)(param_5 + 400 + uVar28) = *(undefined4 *)(lVar31 + 0xe34);
        *(undefined4 *)(param_5 + 0x1a0 + uVar28) = *(undefined4 *)(lVar31 + 0xe38);
        *(undefined4 *)(param_5 + 0x184 + uVar28) = *(undefined4 *)(lVar31 + 0xe3c);
        *(undefined4 *)(param_5 + 0x194 + uVar28) = *(undefined4 *)(lVar31 + 0xe40);
        *(undefined4 *)(param_5 + 0x1a4 + uVar28) = *(undefined4 *)(lVar31 + 0xe44);
        *(undefined4 *)(param_5 + 0x188 + uVar28) = *(undefined4 *)(lVar31 + 0xe48);
        *(undefined4 *)(param_5 + 0x198 + uVar28) = *(undefined4 *)(lVar31 + 0xe4c);
        *(undefined4 *)(param_5 + 0x1a8 + uVar28) = *(undefined4 *)(lVar31 + 0xe50);
        *(undefined4 *)(param_5 + 0x18c + uVar28) = *(undefined4 *)(lVar31 + 0xe54);
        *(undefined4 *)(param_5 + 0x19c + uVar28) = *(undefined4 *)(lVar31 + 0xe58);
        *(undefined4 *)(param_5 + 0x1ac + uVar28) = *(undefined4 *)(lVar31 + 0xe5c);
        *(undefined4 *)(param_5 + 0x1b0 + uVar28) = *(undefined4 *)(lVar31 + 0xe60);
        *(undefined4 *)(param_5 + 0x1c0 + uVar28) = *(undefined4 *)(lVar31 + 0xe64);
        *(undefined4 *)(param_5 + 0x1d0 + uVar28) = *(undefined4 *)(lVar31 + 0xe68);
        *(undefined4 *)(param_5 + 0x1b4 + uVar28) = *(undefined4 *)(lVar31 + 0xe6c);
        *(undefined4 *)(param_5 + 0x1c4 + uVar28) = *(undefined4 *)(lVar31 + 0xe70);
        *(undefined4 *)(param_5 + 0x1d4 + uVar28) = *(undefined4 *)(lVar31 + 0xe74);
        *(undefined4 *)(param_5 + 0x1b8 + uVar28) = *(undefined4 *)(lVar31 + 0xe78);
        *(undefined4 *)(param_5 + 0x1c8 + uVar28) = *(undefined4 *)(lVar31 + 0xe7c);
        *(undefined4 *)(param_5 + 0x1d8 + uVar28) = *(undefined4 *)(lVar31 + 0xe80);
        *(undefined4 *)(param_5 + 0x1bc + uVar28) = *(undefined4 *)(lVar31 + 0xe84);
        *(undefined4 *)(param_5 + 0x1cc + uVar28) = *(undefined4 *)(lVar31 + 0xe88);
        *(undefined4 *)(param_5 + 0x1dc + uVar28) = *(undefined4 *)(lVar31 + 0xe8c);
        *(undefined4 *)(param_5 + 0x1e0 + uVar28) = *(undefined4 *)(lVar31 + 0xe90);
        *(undefined4 *)(param_5 + 0x1f0 + uVar28) = *(undefined4 *)(lVar31 + 0xe94);
        *(undefined4 *)(param_5 + 0x200 + uVar28) = *(undefined4 *)(lVar31 + 0xe98);
        *(undefined4 *)(param_5 + 0x1e4 + uVar28) = *(undefined4 *)(lVar31 + 0xe9c);
        *(undefined4 *)(param_5 + 500 + uVar28) = *(undefined4 *)(lVar31 + 0xea0);
        *(undefined4 *)(param_5 + 0x204 + uVar28) = *(undefined4 *)(lVar31 + 0xea4);
        *(undefined4 *)(param_5 + 0x1e8 + uVar28) = *(undefined4 *)(lVar31 + 0xea8);
        *(undefined4 *)(param_5 + 0x1f8 + uVar28) = *(undefined4 *)(lVar31 + 0xeac);
        *(undefined4 *)(param_5 + 0x208 + uVar28) = *(undefined4 *)(lVar31 + 0xeb0);
        *(undefined4 *)(param_5 + 0x1ec + uVar28) = *(undefined4 *)(lVar31 + 0xeb4);
        *(undefined4 *)(param_5 + 0x1fc + uVar28) = *(undefined4 *)(lVar31 + 0xeb8);
        *(undefined4 *)(param_5 + 0x20c + uVar28) = *(undefined4 *)(lVar31 + 0xebc);
        break;
      case 0x77:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x138c);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x1394);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x10 + param_5) = *(undefined8 *)(lVar35 + 0x1398);
        *(undefined4 *)(uVar28 + 0x18 + param_5) = *(undefined4 *)(lVar35 + 0x13a0);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x20 + param_5) = *(undefined8 *)(lVar35 + 0x13a4);
        *(undefined4 *)(uVar28 + 0x28 + param_5) = *(undefined4 *)(lVar35 + 0x13ac);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x30 + param_5) = *(undefined8 *)(lVar35 + 0x13b0);
        *(undefined4 *)(uVar28 + 0x38 + param_5) = *(undefined4 *)(lVar35 + 0x13b8);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x40 + param_5) = *(undefined8 *)(lVar35 + 0x13bc);
        *(undefined4 *)(uVar28 + 0x48 + param_5) = *(undefined4 *)(lVar35 + 0x13c4);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x50 + param_5) = *(undefined8 *)(lVar35 + 0x13c8);
        *(undefined4 *)(uVar28 + 0x58 + param_5) = *(undefined4 *)(lVar35 + 0x13d0);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x60 + param_5) = *(undefined8 *)(lVar35 + 0x13d4);
        *(undefined4 *)(uVar28 + 0x68 + param_5) = *(undefined4 *)(lVar35 + 0x13dc);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x70 + param_5) = *(undefined8 *)(lVar35 + 0x13e0);
        *(undefined4 *)(uVar28 + 0x78 + param_5) = *(undefined4 *)(lVar35 + 0x13e8);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x80 + param_5) = *(undefined8 *)(lVar35 + 0x13ec);
        *(undefined4 *)(uVar28 + 0x88 + param_5) = *(undefined4 *)(lVar35 + 0x13f4);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0x90 + param_5) = *(undefined8 *)(lVar35 + 0x13f8);
        *(undefined4 *)(uVar28 + 0x98 + param_5) = *(undefined4 *)(lVar35 + 0x1400);
        lVar35 = *(longlong *)(param_1 + 8);
        *(undefined8 *)(uVar28 + 0xa0 + param_5) = *(undefined8 *)(lVar35 + 0x1404);
        *(undefined4 *)(uVar28 + 0xa8 + param_5) = *(undefined4 *)(lVar35 + 0x140c);
        break;
      case 0x87:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x12b0);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x12b8);
        break;
      case 0x88:
        uVar30 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        auVar40 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0x12c8);
        goto UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode;
      case 0x89:
        lVar31 = *(longlong *)(param_1 + 8);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        *(undefined8 *)(uVar28 + param_5) = *(undefined8 *)(lVar31 + 0x12bc);
        *(undefined4 *)(uVar28 + 8 + param_5) = *(undefined4 *)(lVar31 + 0x12c4);
        break;
      case 0x8a:
        uVar30 = (ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2);
        auVar40 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 8) + 0x12d8);
        goto UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode;
      case 0x8b:
        plVar24 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 0x18);
        (**(code **)(*plVar24 + 0x158))
                  (plVar24,(ulonglong)*(ushort *)(param_4 + 2 + lVar35 * 2) + param_5);
        break;
      case 0x8c:
        iVar36 = iVar36 + 1;
        *(undefined4 *)(param_5 + (ulonglong)*(ushort *)(param_4 + (longlong)iVar36 * 2)) =
             *(undefined4 *)(param_2 + (ulonglong)*(ushort *)(param_4 + 4 + lVar35 * 2) * 4);
        break;
      case 0x8d:
        iVar36 = iVar36 + 1;
        *(undefined8 *)(param_5 + (ulonglong)*(ushort *)(param_4 + (longlong)iVar36 * 2)) =
             *(undefined8 *)(param_2 + (ulonglong)*(ushort *)(param_4 + 4 + lVar35 * 2) * 4);
        break;
      case 0x8e:
        iVar36 = iVar36 + 1;
        uVar30 = (ulonglong)*(ushort *)(param_4 + (longlong)iVar36 * 2);
        uVar28 = (ulonglong)*(ushort *)(param_4 + 4 + lVar35 * 2);
        *(undefined8 *)(uVar30 + param_5) = *(undefined8 *)(param_2 + uVar28 * 4);
        *(undefined4 *)(uVar30 + 8 + param_5) = *(undefined4 *)(param_2 + 8 + uVar28 * 4);
        break;
      case 0x8f:
        iVar36 = iVar36 + 1;
        uVar30 = (ulonglong)*(ushort *)(param_4 + (longlong)iVar36 * 2);
        auVar40 = *(undefined1 (*) [16])
                   (param_2 + (ulonglong)*(ushort *)(param_4 + 4 + lVar35 * 2) * 4);
UNWIND_INFO_1400da981_UnwindCodes_26__UnwindOpCode:
        *(undefined1 (*) [16])(param_5 + uVar30) = auVar40;
        break;
      default:
        goto switchD_1400d84a5_default;
      }
switchD_1400d84a5_default:
      iVar36 = iVar36 + 2;
    } while (iVar36 < (int)(uint)param_3);
  }
  return;
}

