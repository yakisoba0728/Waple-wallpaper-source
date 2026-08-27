// Function: FUN_14000e1f0
// Addr: 14000e1f0
// Size: 304 bytes


ulonglong * FUN_14000e1f0(longlong param_1,ulonglong *param_2,longlong *param_3,uint param_4)

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
  uint uVar10;
  
  uVar10 = param_4 & 1;
  if ((uVar10 == 0) || ((*(byte *)(param_1 + 0x70) & 4) == 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  param_4 = param_4 & 2;
  if ((param_4 == 0) || ((*(byte *)(param_1 + 0x70) & 2) == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar6 && !bVar7) {
    uVar9 = param_3[1] + *param_3;
    lVar3 = **(longlong **)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x70) & 2) == 0) {
      uVar8 = **(ulonglong **)(param_1 + 0x40);
      if ((uVar8 != 0) && (*(ulonglong *)(param_1 + 0x68) < uVar8)) {
        *(ulonglong *)(param_1 + 0x68) = uVar8;
      }
    }
    else {
      uVar8 = 0;
    }
    lVar4 = *(longlong *)(param_1 + 0x68);
    lVar5 = **(longlong **)(param_1 + 0x18);
    if ((uVar9 <= (ulonglong)(lVar4 - lVar5 >> 1)) &&
       ((uVar9 == 0 || (((uVar10 == 0 || (lVar3 != 0)) && ((param_4 == 0 || (uVar8 != 0)))))))) {
      lVar1 = lVar5 + uVar9 * 2;
      if ((uVar10 != 0) && (lVar3 != 0)) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(undefined4 **)(param_1 + 0x50) = (int)(lVar4 - lVar1 >> 1);
      }
      if ((param_4 != 0) && (uVar8 != 0)) {
        iVar2 = **(int **)(param_1 + 0x58);
        lVar3 = **(longlong **)(param_1 + 0x40);
        **(longlong **)(param_1 + 0x20) = lVar5;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(undefined4 **)(param_1 + 0x58) = (int)((lVar3 + (longlong)iVar2 * 2) - lVar1 >> 1);
      }
      *param_2 = uVar9;
      goto LAB_14000e2fe;
    }
  }
  *param_2 = 0xffffffffffffffff;
LAB_14000e2fe:
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

