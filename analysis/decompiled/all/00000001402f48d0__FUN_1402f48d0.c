// Function: FUN_1402f48d0
// Addr: 1402f48d0
// Size: 644 bytes


undefined8 FUN_1402f48d0(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0x24;
  }
  if ((((param_2 == (int *)0x0) || (param_2[1] < 0)) || (param_2[2] < 0)) || (4 < *param_2)) {
    return 6;
  }
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38) + 0x10) = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar3 + 0x98);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f4961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE_00)(*(undefined8 *)(param_1 + 0x80));
    return uVar6;
  }
  if (((*(uint *)(param_1 + 8) & 1) == 0) && ((*(uint *)(param_1 + 8) & 2) != 0)) {
    if (*param_2 != 0) {
      return 7;
    }
    iVar1 = param_2[1];
    iVar10 = iVar1;
    if (param_2[3] != 0) {
      iVar10 = (iVar1 * param_2[3] + 0x24) / 0x48;
    }
    iVar2 = param_2[2];
    iVar8 = iVar2;
    if (param_2[4] != 0) {
      iVar8 = (iVar2 * param_2[4] + 0x24) / 0x48;
    }
    if (iVar1 == 0) {
      if (iVar2 != 0) {
        iVar10 = iVar8;
      }
    }
    else if (iVar2 == 0) {
      iVar8 = iVar10;
    }
    uVar11 = iVar10 + 0x20U & 0xffffffc0;
    if (((uVar11 != 0) && (uVar12 = iVar8 + 0x20U & 0xffffffc0, uVar12 != 0)) &&
       (0 < *(int *)(param_1 + 0x28))) {
      lVar4 = *(longlong *)(param_1 + 0x30);
      uVar7 = 0;
      do {
        if ((uVar12 == (*(int *)(lVar4 + 0xc + (ulonglong)uVar7 * 0x10) + 0x20U & 0xffffffc0)) &&
           (uVar11 == (*(int *)(lVar4 + 8 + (ulonglong)uVar7 * 0x10) + 0x20U & 0xffffffc0))) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar3 + 0xa0);
          lVar3 = *(longlong *)(param_1 + 0x80);
          if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001402f4a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar6 = (*UNRECOVERED_JUMPTABLE_00)(lVar3,uVar7);
            return uVar6;
          }
          psVar9 = (short *)((ulonglong)uVar7 * 0x10 + lVar4);
          *(short *)(lVar3 + 0x18) = (short)(*(int *)(psVar9 + 4) + 0x20 >> 6);
          *(short *)(lVar3 + 0x1a) = (short)(*(int *)(psVar9 + 6) + 0x20 >> 6);
          if ((*(byte *)(param_1 + 8) & 1) == 0) {
            *(undefined4 *)(lVar3 + 0x1c) = 0x10000;
            *(undefined4 *)(lVar3 + 0x20) = 0x10000;
            *(undefined4 *)(lVar3 + 0x24) = *(undefined4 *)(psVar9 + 6);
            *(undefined4 *)(lVar3 + 0x28) = 0;
            *(int *)(lVar3 + 0x2c) = (int)*psVar9 << 6;
            *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(psVar9 + 4);
            return 0;
          }
          uVar5 = FUN_1402efa10(*(undefined4 *)(psVar9 + 4),*(undefined2 *)(param_1 + 0x68));
          *(undefined4 *)(lVar3 + 0x1c) = uVar5;
          uVar5 = FUN_1402efa10(*(undefined4 *)(psVar9 + 6),*(undefined2 *)(param_1 + 0x68));
          *(undefined4 *)(lVar3 + 0x20) = uVar5;
          FUN_1402f8e60(param_1,lVar3 + 0x18);
          return 0;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < *(int *)(param_1 + 0x28));
    }
    return 0x17;
  }
  uVar6 = FUN_1402f4580();
  return uVar6;
}

