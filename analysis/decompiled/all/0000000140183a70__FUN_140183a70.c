// Function: FUN_140183a70
// Addr: 140183a70
// Size: 1446 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140183a70(longlong *param_1)

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
  
  fVar18 = DAT_140492704;
  fVar11 = DAT_1404926c0;
  lVar6 = *param_1;
  if (lVar6 == 0) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x25);
  if ((*(byte *)(lVar6 + 0xe0) & 8) == 0) {
    param_1[0x21] = 0;
    fVar11 = DAT_14049294c;
    fVar18 = DAT_14049294c;
    uVar13 = DAT_140492a1c;
    if ((*(byte *)(lVar6 + 0xe0) & 8) == 0) {
      fVar18 = *(float *)(lVar6 + 0x150);
      uVar13 = *(undefined4 *)(lVar6 + 0x14c);
    }
    (**(code **)(*(longlong *)param_1[0x2a5] + 0x10))
              ((longlong *)param_1[0x2a5],param_1[10],*(float *)(lVar6 + 0x148) * DAT_140492628,
               *(float *)((longlong)param_1 + 0x84) / *(float *)(param_1 + 0x11),uVar13,fVar18);
    puVar8 = (undefined8 *)param_1[10];
    fVar11 = (float)FUN_140419da0((DAT_140492704 / *(float *)((longlong)puVar8 + 0x14)) / fVar11);
    *(float *)(param_1 + 0x24) = fVar11 + fVar11;
    if ((uVar4 & 0x800) == 0) {
      return;
    }
    fVar12 = (float)puVar8[1] * _DAT_140493050;
    fVar10 = (float)((ulonglong)puVar8[1] >> 0x20) * _UNK_140493054;
    *puVar8 = CONCAT44((float)((ulonglong)*puVar8 >> 0x20) * _UNK_140493054,
                       (float)*puVar8 * _DAT_140493050);
    fVar18 = _UNK_140492e34;
    fVar11 = _DAT_140492e30;
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
    fVar18 = (DAT_140492704 - fVar16) + (DAT_140492704 - fVar16);
    if (fVar3 / fVar2 < fVar10 / fVar12) {
      fVar15 = (fVar3 - (fVar2 / fVar12) * fVar10) * DAT_1404926c0;
      fVar16 = fVar16 * fVar15;
      fVar15 = fVar18 * fVar15;
      fVar17 = fVar16 + fVar16;
      goto LAB_140183d57;
    }
LAB_140183d32:
    fVar17 = 0.0;
    fVar20 = (fVar2 - (fVar3 / fVar10) * fVar12) * DAT_1404926c0;
    fVar19 = fVar16 * fVar20 + fVar16 * fVar20;
  }
  else {
    if (iVar5 == 2) goto LAB_140183d57;
    if (iVar5 != 3) {
      if (iVar5 == 4) {
        fVar16 = DAT_140492704 - fVar1;
        fVar14 = DAT_140492704 - *(float *)(param_1 + 0x638);
        fVar17 = fVar3 - fVar1 * (fVar10 + fVar3);
        fVar19 = fVar2 - *(float *)(param_1 + 0x638) * (fVar12 + fVar2);
        fVar15 = fVar3 - fVar16 * (fVar10 + fVar3);
        fVar20 = fVar2 - fVar14 * (fVar12 + fVar2);
        fVar10 = (float)FUN_14041e350((DAT_140492704 - *(float *)((longlong)param_1 + 0x31c4)) +
                                      DAT_140492704,DAT_14049284c);
        fVar12 = DAT_1404929b0;
        if (DAT_1404929b0 <= fVar10 - fVar18) {
          fVar12 = fVar10 - fVar18;
        }
        fVar18 = ((fVar2 - fVar19) - fVar20) * fVar12;
        fVar12 = ((fVar3 - fVar15) - fVar17) * fVar12;
        fVar15 = fVar15 - fVar12 * fVar16;
        fVar17 = fVar17 - fVar12 * *(float *)((longlong)param_1 + 0x31bc);
        fVar19 = fVar19 - fVar18 * *(float *)(param_1 + 0x638);
        fVar20 = fVar20 - fVar18 * fVar14;
        goto LAB_140183d57;
      }
      fVar18 = (DAT_140492704 - fVar16) + (DAT_140492704 - fVar16);
      if (fVar10 / fVar12 < fVar3 / fVar2) {
        fVar17 = (fVar3 - (fVar2 / fVar12) * fVar10) * DAT_1404926c0;
        fVar16 = fVar16 * fVar17;
        fVar17 = fVar18 * fVar17;
        fVar15 = fVar16 + fVar16;
        goto LAB_140183d57;
      }
      goto LAB_140183d32;
    }
    fVar20 = fVar2 - fVar12;
    fVar18 = DAT_140492704 - *(float *)(param_1 + 0x638);
    fVar19 = *(float *)(param_1 + 0x638) * fVar20;
    fVar17 = fVar1 * (fVar3 - fVar10);
    fVar15 = (DAT_140492704 - fVar1) * (fVar3 - fVar10);
  }
  fVar20 = fVar18 * fVar20;
LAB_140183d57:
  *(float *)(param_1 + 0x21) = (fVar3 * fVar11 - (fVar15 - fVar17) * fVar11) / fVar3;
  *(float *)((longlong)param_1 + 0x10c) =
       (*(float *)(lVar6 + 0x358) * fVar11 - (fVar19 - fVar20) * fVar11) / *(float *)(lVar6 + 0x358)
  ;
  *(float *)(param_1 + 0x24) = *(float *)(lVar6 + 0x148) * DAT_140492628;
  pcVar7 = *(code **)(*(longlong *)param_1[0x2a5] + 0x18);
  uVar9 = *(uint *)(lVar6 + 0xe0) & 8;
  uVar13 = DAT_140492a1c;
  fVar11 = DAT_14049294c;
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

