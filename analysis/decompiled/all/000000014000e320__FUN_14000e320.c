// Function: FUN_14000e320
// Addr: 14000e320
// Size: 434 bytes


ulonglong *
FUN_14000e320(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte bVar11;
  byte bVar12;
  
  bVar12 = param_5 & 1;
  if ((bVar12 == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  bVar11 = param_5 & 2;
  if ((bVar11 == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (bVar6 || bVar7) goto LAB_14000e4a0;
  lVar3 = **(longlong **)(param_1 + 0x38);
  if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
    uVar9 = **(ulonglong **)(param_1 + 0x40);
    if ((uVar9 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar9)) {
      *(ulonglong *)(param_1 + 0x68) = uVar9;
    }
  }
  else {
    uVar9 = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar5 = **(longlong **)(param_1 + 0x18);
  uVar10 = lVar4 - lVar5 >> 1;
  if (param_4 == 0) {
    uVar8 = 0;
LAB_14000e41e:
    uVar8 = uVar8 + param_3;
    if ((uVar8 <= uVar10) &&
       ((uVar8 == 0 || (((bVar12 == 0 || (lVar3 != 0)) && ((bVar11 == 0 || (uVar9 != 0)))))))) {
      lVar1 = lVar5 + uVar8 * 2;
      if ((bVar12 != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x18) = lVar5;
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(undefined4 **)(param_1 + 0x50) = (int)(lVar4 - lVar1 >> 1);
      }
      if ((bVar11 != 0) && (uVar9 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        lVar3 = **(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar5;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(undefined4 **)(param_1 + 0x58) = (int)((lVar3 + (longlong)iVar2 * 2) - lVar1 >> 1);
      }
      *param_2 = uVar8;
      goto LAB_14000e4a7;
    }
  }
  else if (param_4 == 1) {
    if ((param_5 & 3) != 3) {
      if (bVar12 == 0) {
        if ((bVar11 != 0) && ((uVar9 != 0 || (lVar5 == 0)))) {
          uVar8 = (longlong)(uVar9 - lVar5) >> 1;
          goto LAB_14000e41e;
        }
      }
      else if ((lVar3 != 0) || (lVar5 == 0)) {
        uVar8 = lVar3 - lVar5 >> 1;
        goto LAB_14000e41e;
      }
    }
  }
  else {
    uVar8 = uVar10;
    if (param_4 == 2) goto LAB_14000e41e;
  }
LAB_14000e4a0:
  *param_2 = 0xffffffffffffffff;
LAB_14000e4a7:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

