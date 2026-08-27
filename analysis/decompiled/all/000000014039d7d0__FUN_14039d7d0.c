// Function: FUN_14039d7d0
// Addr: 14039d7d0
// Size: 864 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14039d7d0(longlong param_1,longlong param_2)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  int local_88 [4];
  ulonglong local_78;
  ulonglong uVar16;
  
  fVar18 = DAT_140492704;
  local_78 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  if (*(code **)(param_1 + 0xa0) != FUN_14039d540) {
    return;
  }
  iVar13 = *(int *)(param_1 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0x98);
  fVar19 = DAT_140492704;
  if (iVar13 < 0) {
    fVar19 = DAT_1404929b8;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  fVar20 = DAT_140492704;
  if (iVar3 < 0) {
    fVar20 = DAT_1404929b8;
  }
  iVar7 = -iVar3;
  if (-iVar3 < 0) {
    iVar7 = iVar3;
  }
  iVar3 = -iVar13;
  if (-iVar13 < 0) {
    iVar3 = iVar13;
  }
  uVar16 = 0;
  local_98 = 0;
  iVar13 = FUN_1402f4dd0(param_2,iVar3,iVar7,0);
  if ((iVar13 != 0) && (iVar13 = *(int *)(param_2 + 0x28), iVar13 != 0)) {
    local_98 = 0;
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x30) + -8 + (longlong)iVar13 * 0x10);
    iVar13 = *(int *)(*(longlong *)(param_2 + 0x30) + -4 + (longlong)iVar13 * 0x10);
    FUN_1402f4dd0(param_2,iVar3,iVar13,0);
    fVar19 = (float)*(int *)(param_1 + 0x28) / (float)iVar3;
    fVar20 = (float)*(int *)(param_1 + 0x2c) / (float)iVar13;
  }
  fVar12 = DAT_140492968;
  if ((fVar19 == fVar18) && (fVar20 == fVar18)) {
    FUN_1402f4e60(param_2,0,0);
  }
  else {
    fVar18 = (float)FUN_14041a5c0();
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[0] = (int)fVar18;
    fVar18 = (float)FUN_14041a5c0();
    local_88[3] = (int)fVar18;
    FUN_1402f4e60(param_2,local_88,0);
    *(undefined1 *)(lVar5 + 6) = 1;
  }
  uVar4 = *(uint *)(param_1 + 0x7c);
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (uVar4 == 0) {
      return;
    }
    FUN_1402fa9f0(param_2,0,0);
    return;
  }
  uVar6 = *(ulonglong *)(param_1 + 0x88);
  uVar14 = _calloc_base(uVar4,4);
  fVar11 = _UNK_140471b0c;
  fVar20 = _UNK_140471b08;
  fVar19 = _UNK_140471b04;
  fVar18 = _DAT_140471b00;
  if (uVar14 == 0) {
    return;
  }
  if (uVar4 != 0) {
    uVar17 = uVar16;
    if ((0xf < uVar4) &&
       ((uVar6 + (ulonglong)(uVar4 - 1) * 4 < uVar14 ||
        (uVar17 = 0, uVar14 + (ulonglong)(uVar4 - 1) * 4 < uVar6)))) {
      do {
        pfVar1 = (float *)(uVar6 + uVar16 * 4);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        iVar13 = (int)uVar16;
        piVar2 = (int *)(uVar14 + uVar16 * 4);
        *piVar2 = (int)(*pfVar1 * fVar18);
        piVar2[1] = (int)(fVar8 * fVar19);
        piVar2[2] = (int)(fVar9 * fVar20);
        piVar2[3] = (int)(fVar10 * fVar11);
        pfVar1 = (float *)(uVar6 + (ulonglong)(iVar13 + 4) * 4);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        piVar2 = (int *)(uVar14 + (ulonglong)(iVar13 + 4) * 4);
        *piVar2 = (int)(*pfVar1 * fVar18);
        piVar2[1] = (int)(fVar8 * fVar19);
        piVar2[2] = (int)(fVar9 * fVar20);
        piVar2[3] = (int)(fVar10 * fVar11);
        pfVar1 = (float *)(uVar6 + (ulonglong)(iVar13 + 8) * 4);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        piVar2 = (int *)(uVar14 + (ulonglong)(iVar13 + 8) * 4);
        *piVar2 = (int)(*pfVar1 * fVar18);
        piVar2[1] = (int)(fVar8 * fVar19);
        piVar2[2] = (int)(fVar9 * fVar20);
        piVar2[3] = (int)(fVar10 * fVar11);
        uVar15 = iVar13 + 0x10;
        uVar16 = (ulonglong)uVar15;
        pfVar1 = (float *)(uVar6 + (ulonglong)(iVar13 + 0xc) * 4);
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        piVar2 = (int *)(uVar14 + (ulonglong)(iVar13 + 0xc) * 4);
        *piVar2 = (int)(*pfVar1 * fVar18);
        piVar2[1] = (int)(fVar8 * fVar19);
        piVar2[2] = (int)(fVar9 * fVar20);
        piVar2[3] = (int)(fVar10 * fVar11);
      } while (uVar15 < (uVar4 & 0xfffffff0));
      uVar17 = uVar16;
      if (uVar4 <= uVar15) goto LAB_14039dacb;
    }
    if (3 < uVar4 - (int)uVar17) {
      do {
        iVar13 = (int)uVar17;
        *(int *)(uVar14 + uVar17 * 4) = (int)(*(float *)(uVar6 + uVar17 * 4) * fVar12);
        *(int *)(uVar14 + (ulonglong)(iVar13 + 1U) * 4) =
             (int)(*(float *)(uVar6 + (ulonglong)(iVar13 + 1U) * 4) * fVar12);
        *(int *)(uVar14 + (ulonglong)(iVar13 + 2U) * 4) =
             (int)(*(float *)(uVar6 + (ulonglong)(iVar13 + 2U) * 4) * fVar12);
        uVar15 = iVar13 + 4;
        uVar17 = (ulonglong)uVar15;
        *(int *)(uVar14 + (ulonglong)(iVar13 + 3U) * 4) =
             (int)(*(float *)(uVar6 + (ulonglong)(iVar13 + 3U) * 4) * fVar12);
      } while (uVar15 < uVar4 - 3);
      if (uVar4 <= uVar15) goto LAB_14039dacb;
    }
    do {
      uVar15 = (int)uVar17 + 1;
      *(int *)(uVar14 + uVar17 * 4) = (int)(*(float *)(uVar6 + uVar17 * 4) * fVar12);
      uVar17 = (ulonglong)uVar15;
    } while (uVar15 < uVar4);
  }
LAB_14039dacb:
  FUN_1402fa9f0(param_2,uVar4,uVar14);
  thunk_FUN_1402d9040(uVar14);
  return;
}

