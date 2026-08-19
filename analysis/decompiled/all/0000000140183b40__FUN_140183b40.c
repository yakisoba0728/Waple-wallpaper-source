// Function: FUN_140183b40
// Addr: 140183b40
// Size: 1213 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140183b40(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar18 = DAT_1404927d4;
  fVar11 = DAT_140492790;
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x25);
  if ((*(byte *)(lVar6 + 0xe0) & 8) == 0) {
    param_1[0x21] = 0;
    fVar11 = DAT_140492a1c;
    fVar18 = DAT_140492a1c;
    uVar13 = DAT_140492aec;
    if ((*(byte *)(lVar6 + 0xe0) & 8) == 0) {
      fVar18 = *(float *)(lVar6 + 0x150);
      uVar13 = *(undefined4 *)(lVar6 + 0x14c);
    }
    (**(code **)(*(longlong *)param_1[0x2a5] + 0x10))
              ((longlong *)param_1[0x2a5],param_1[10],*(float *)(lVar6 + 0x148) * DAT_1404926f8,
               *(float *)((longlong)param_1 + 0x84) / *(float *)(param_1 + 0x11),uVar13,fVar18);
    puVar8 = (undefined8 *)param_1[10];
    fVar11 = (float)func_0x000140419e70((DAT_1404927d4 / *(float *)((longlong)puVar8 + 0x14)) /
                                        fVar11);
    *(float *)(param_1 + 0x24) = fVar11 + fVar11;
    if ((uVar4 & 0x800) == 0) {
      return;
    }
    fVar12 = (float)puVar8[1] * _UNK_140493120;
    fVar10 = (float)((ulonglong)puVar8[1] >> 0x20) * _UNK_140493124;
    *puVar8 = CONCAT44((float)((ulonglong)*puVar8 >> 0x20) * _UNK_140493124,
                       (float)*puVar8 * _UNK_140493120);
    fVar18 = _UNK_140492f04;
    fVar11 = _DAT_140492f00;
    puVar8[1] = CONCAT44(fVar10,fVar12);
    puVar8[2] = CONCAT44((float)((ulonglong)puVar8[2] >> 0x20) * fVar18,(float)puVar8[2] * fVar11);
    puVar8[3] = CONCAT44((float)((ulonglong)puVar8[3] >> 0x20) * fVar18,(float)puVar8[3] * fVar11);
    puVar8[4] = CONCAT44((float)((ulonglong)puVar8[4] >> 0x20) * fVar18,(float)puVar8[4] * fVar11);
    puVar8[5] = CONCAT44((float)((ulonglong)puVar8[5] >> 0x20) * fVar18,(float)puVar8[5] * fVar11);
    puVar8[6] = puVar8[6];
    puVar8[7] = puVar8[7];
    return;
  }
  fVar12 = *(float *)(param_1 + 0x11);
  fVar10 = *(float *)((longlong)param_1 + 0x84);
  fVar1 = *(float *)((longlong)param_1 + 0x31bc);
  fVar16 = *(float *)(param_1 + 0x639);
  iVar5 = *(int *)((longlong)param_1 + 0x124);
  fVar2 = *(float *)(lVar6 + 0x358);
  fVar15 = 0.0;
  fVar17 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar3 = *(float *)(lVar6 + 0x354);
  if (iVar5 == 1) {
    fVar18 = (DAT_1404927d4 - fVar16) + (DAT_1404927d4 - fVar16);
    if (fVar3 / fVar2 < fVar10 / fVar12) {
      fVar15 = (fVar3 - (fVar2 / fVar12) * fVar10) * DAT_140492790;
      fVar16 = fVar16 * fVar15;
      fVar15 = fVar18 * fVar15;
      fVar17 = fVar16 + fVar16;
      goto LAB_140183e27;
    }
LAB_140183e02:
    fVar17 = 0.0;
    fVar20 = (fVar2 - (fVar3 / fVar10) * fVar12) * DAT_140492790;
    fVar19 = fVar16 * fVar20 + fVar16 * fVar20;
  }
  else {
    if (iVar5 == 2) goto LAB_140183e27;
    if (iVar5 != 3) {
      if (iVar5 == 4) {
        fVar16 = DAT_1404927d4 - fVar1;
        fVar14 = DAT_1404927d4 - *(float *)(param_1 + 0x638);
        fVar17 = fVar3 - fVar1 * (fVar10 + fVar3);
        fVar19 = fVar2 - *(float *)(param_1 + 0x638) * (fVar12 + fVar2);
        fVar15 = fVar3 - fVar16 * (fVar10 + fVar3);
        fVar20 = fVar2 - fVar14 * (fVar12 + fVar2);
        fVar10 = (float)FUN_14041e420((DAT_1404927d4 - *(float *)((longlong)param_1 + 0x31c4)) +
                                      DAT_1404927d4,DAT_14049291c);
        fVar12 = DAT_140492a80;
        if (DAT_140492a80 <= fVar10 - fVar18) {
          fVar12 = fVar10 - fVar18;
        }
        fVar18 = ((fVar2 - fVar19) - fVar20) * fVar12;
        fVar12 = ((fVar3 - fVar15) - fVar17) * fVar12;
        fVar15 = fVar15 - fVar12 * fVar16;
        fVar17 = fVar17 - fVar12 * *(float *)((longlong)param_1 + 0x31bc);
        fVar19 = fVar19 - fVar18 * *(float *)(param_1 + 0x638);
        fVar20 = fVar20 - fVar18 * fVar14;
        goto LAB_140183e27;
      }
      fVar18 = (DAT_1404927d4 - fVar16) + (DAT_1404927d4 - fVar16);
      if (fVar10 / fVar12 < fVar3 / fVar2) {
        fVar17 = (fVar3 - (fVar2 / fVar12) * fVar10) * DAT_140492790;
        fVar16 = fVar16 * fVar17;
        fVar17 = fVar18 * fVar17;
        fVar15 = fVar16 + fVar16;
        goto LAB_140183e27;
      }
      goto LAB_140183e02;
    }
    fVar20 = fVar2 - fVar12;
    fVar18 = DAT_1404927d4 - *(float *)(param_1 + 0x638);
    fVar19 = *(float *)(param_1 + 0x638) * fVar20;
    fVar17 = fVar1 * (fVar3 - fVar10);
    fVar15 = (DAT_1404927d4 - fVar1) * (fVar3 - fVar10);
  }
  fVar20 = fVar18 * fVar20;
LAB_140183e27:
  *(float *)(param_1 + 0x21) = (fVar3 * fVar11 - (fVar15 - fVar17) * fVar11) / fVar3;
  *(float *)((longlong)param_1 + 0x10c) =
       (*(float *)(lVar6 + 0x358) * fVar11 - (fVar19 - fVar20) * fVar11) / *(float *)(lVar6 + 0x358)
  ;
  *(float *)(param_1 + 0x24) = *(float *)(lVar6 + 0x148) * DAT_1404926f8;
  pcVar7 = *(code **)(*(longlong *)param_1[0x2a5] + 0x18);
  uVar9 = *(uint *)(lVar6 + 0xe0) & 8;
  uVar13 = DAT_140492aec;
  fVar11 = DAT_140492a1c;
  if ((uVar4 & 0x800) == 0) {
    if (uVar9 == 0) {
      uVar13 = *(undefined4 *)(lVar6 + 0x14c);
      fVar11 = *(float *)(lVar6 + 0x150);
    }
    fVar18 = *(float *)(lVar6 + 0x354) - fVar15;
  }
  else {
    fVar18 = fVar15;
    if (uVar9 == 0) {
      uVar13 = *(undefined4 *)(lVar6 + 0x14c);
      fVar11 = *(float *)(lVar6 + 0x150);
    }
  }
  (*pcVar7)((longlong *)param_1[0x2a5],param_1[10],pcVar7,fVar18,fVar20,
            *(float *)(lVar6 + 0x358) - fVar19,uVar13,fVar11);
  *(float *)(param_1 + 0x22) = fVar17;
  *(float *)((longlong)param_1 + 0x114) = fVar19;
  *(float *)(param_1 + 0x23) = fVar15;
  *(float *)((longlong)param_1 + 0x11c) = fVar20;
  return;
}

