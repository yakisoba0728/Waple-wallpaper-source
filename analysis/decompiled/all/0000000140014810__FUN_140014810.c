// Function: FUN_140014810
// Addr: 140014810
// Size: 409 bytes


ulonglong *
FUN_140014810(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  byte bVar13;
  
  bVar12 = param_5 & 1;
  if ((bVar12 == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  bVar13 = param_5 & 2;
  if ((bVar13 == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (bVar7 || bVar8) goto LAB_140014978;
  lVar3 = **(longlong **)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    uVar10 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar10 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar10)) {
      *(ulonglong *)(param_1 + 0x68) = uVar10;
    }
  }
  else {
    uVar10 = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar5 = **(longlong **)(param_1 + 0x18);
  uVar11 = lVar4 - lVar5;
  if (param_4 == 0) {
    uVar9 = 0;
LAB_140014901:
    uVar9 = uVar9 + param_3;
    if ((uVar9 <= uVar11) &&
       ((uVar9 == 0 || (((bVar12 == 0 || (lVar3 != 0)) && ((bVar13 == 0 || (uVar10 != 0)))))))) {
      lVar1 = uVar9 + lVar5;
      if ((bVar12 != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x18) = lVar5;
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar4 - (int)lVar1;
      }
      if ((bVar13 != 0) && (uVar10 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        uVar6 = **(undefined8 **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar5;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + (int)uVar6) - (int)lVar1;
      }
      *param_2 = uVar9;
      goto LAB_14001497f;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if (bVar12 == 0) {
        if ((bVar13 != 0) && ((uVar10 != 0 || (lVar5 == 0)))) {
          uVar9 = uVar10 - lVar5;
          goto LAB_140014901;
        }
      }
      else if ((lVar3 != 0) || (lVar5 == 0)) {
        uVar9 = lVar3 - lVar5;
        goto LAB_140014901;
      }
    }
  }
  else {
    uVar9 = uVar11;
    if (param_4 == 2) goto LAB_140014901;
  }
LAB_140014978:
  *param_2 = 0xffffffffffffffff;
LAB_14001497f:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

