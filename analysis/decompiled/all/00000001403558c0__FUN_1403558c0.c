// Function: FUN_1403558c0
// Addr: 1403558c0
// Size: 567 bytes


undefined8 FUN_1403558c0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int local_res8;
  int local_resc;
  int local_res20;
  int local_res24;
  
  if (((param_1 != (undefined8 *)0x0) && (param_3 != (undefined4 *)0x0)) &&
     (*(int *)(param_1 + 4) == 1)) {
    iVar8 = (int)*param_1;
    local_res8 = (int)param_1[1] - iVar8;
    iVar11 = (int)((ulonglong)*param_1 >> 0x20);
    local_resc = (int)((ulonglong)param_1[1] >> 0x20) - iVar11;
    iVar7 = (int)((ulonglong)param_2 >> 0x20);
    iVar1 = (iVar7 - iVar11) * local_resc;
    iVar2 = ((int)param_2 - iVar8) * local_res8;
    uVar3 = FUN_1402efa10(((int)((iVar1 >> 0x1f & 0x3fU) + iVar1) >> 6) +
                          ((int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6),
                          ((int)((local_res8 * local_res8 >> 0x1f & 0x3fU) + local_res8 * local_res8
                                ) >> 6) +
                          ((int)(local_resc * local_resc + (local_resc * local_resc >> 0x1f & 0x3fU)
                                ) >> 6));
    if (0x10000 < (int)uVar3) {
      uVar3 = 0x10000;
    }
    uVar9 = 0;
    if (-1 < (int)uVar3) {
      uVar9 = uVar3;
    }
    lVar6 = (longlong)(local_res8 << 10) * (longlong)(int)uVar9;
    lVar10 = (longlong)(local_resc << 10) * (longlong)(int)uVar9;
    local_res20 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) +
                  (iVar8 - (int)param_2) * 0x400;
    local_res24 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10) +
                  (iVar11 - iVar7) * 0x400;
    uVar5 = 0xff;
    if ((int)((ulonglong)
              ((longlong)local_res20 * (longlong)local_resc + 0x8000 +
              ((longlong)local_res20 * (longlong)local_resc >> 0x3f)) >> 0x10) -
        (int)((ulonglong)
              ((longlong)local_res24 * (longlong)local_res8 + 0x8000 +
              ((longlong)local_res24 * (longlong)local_res8 >> 0x3f)) >> 0x10) < 0) {
      uVar5 = 1;
    }
    *(undefined1 *)(param_3 + 2) = uVar5;
    uVar4 = FUN_1402f5d70(&local_res20);
    *param_3 = uVar4;
    if ((uVar9 & 0xfffeffff) == 0) {
      FUN_1402f5e70(&local_res8);
      FUN_1402f5e70(&local_res20);
      param_3[1] = (int)((ulonglong)
                         ((longlong)local_res24 * (longlong)local_res8 + 0x8000 +
                         ((longlong)local_res24 * (longlong)local_res8 >> 0x3f)) >> 0x10) -
                   (int)((ulonglong)
                         ((longlong)local_res20 * (longlong)local_resc + 0x8000 +
                         ((longlong)local_res20 * (longlong)local_resc >> 0x3f)) >> 0x10);
    }
    else {
      param_3[1] = 0x10000;
    }
    return 0;
  }
  return 6;
}

