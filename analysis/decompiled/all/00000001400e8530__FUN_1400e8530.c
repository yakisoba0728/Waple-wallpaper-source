// Function: FUN_1400e8530
// Addr: 1400e8530
// Size: 139 bytes


void FUN_1400e8530(uint *param_1,undefined1 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  if (param_1[1] < uVar1) {
LAB_1400e8593:
    *(undefined1 *)((ulonglong)param_1[1] + *(longlong *)(param_1 + 2)) = param_2;
    param_1[1] = param_1[1] + 1;
    return;
  }
  uVar4 = 0x10;
  if (0x10 < uVar1 >> 1) {
    uVar4 = uVar1 >> 1;
  }
  uVar3 = uVar1 + uVar4;
  if (~uVar4 <= uVar1) {
    uVar3 = 0xffffffff;
  }
  if (~uVar4 <= uVar1) {
    uVar4 = ~uVar1;
  }
  if (uVar4 != 0) {
    lVar2 = _realloc_base(*(undefined8 *)(param_1 + 2),uVar3);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 2) = lVar2;
      *param_1 = uVar3;
      goto LAB_1400e8593;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c340(9);
}

