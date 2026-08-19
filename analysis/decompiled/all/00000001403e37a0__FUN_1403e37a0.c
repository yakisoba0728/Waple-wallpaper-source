// Function: FUN_1403e37a0
// Addr: 1403e37a0
// Size: 64 bytes


void FUN_1403e37a0(undefined8 *param_1,longlong param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uStack_28;
  longlong lStack_20;
  ulonglong uStack_18;
  
  *(undefined1 *)(param_1 + 3) = param_4;
  iVar4 = *(int *)(param_2 + 0x14) + -1;
  uVar3 = 0;
  uVar5 = uVar3;
  if (-1 < iVar4) {
    do {
      uVar2 = iVar4 + uVar5 >> 1;
      uVar1 = *(uint *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar2 * 0x24);
      if (param_3 < uVar1) {
        iVar4 = uVar2 - 1;
      }
      else {
        if (param_3 <= uVar1) {
          uVar5 = *(uint *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar2 * 0x24 + 0xc);
          goto code_r0x0001403e37fc;
        }
        uVar5 = uVar2 + 1;
      }
    } while ((int)uVar5 <= iVar4);
  }
  uVar5 = 0xffffffff;
code_r0x0001403e37fc:
  uVar1 = *(uint *)(param_2 + 0x44);
  if (uVar1 < uVar5) {
    lStack_20 = 0;
    uStack_18 = 0;
  }
  else {
    uVar2 = uVar3;
    if ((uVar5 != 0) && (uVar2 = (uint)DAT_14045dde0, uVar5 - 1 < uVar1)) {
      uVar2 = *(uint *)((ulonglong)(uVar5 - 1) * 0x10 + *(longlong *)(param_2 + 0x48));
    }
    if (uVar5 < uVar1) {
      iVar4 = *(int *)(*(longlong *)(param_2 + 0x48) + (ulonglong)uVar5 * 0x10);
    }
    else {
      iVar4 = *(int *)(param_2 + 0x24);
    }
    if (uVar2 <= *(uint *)(param_2 + 0x24)) {
      uVar3 = *(int *)(param_2 + 0x24) - uVar2;
    }
    uVar5 = iVar4 - uVar2;
    if (uVar3 <= iVar4 - uVar2) {
      uVar5 = uVar3;
    }
    uStack_18 = (ulonglong)uVar5;
    lStack_20 = *(longlong *)(param_2 + 0x28) + (ulonglong)uVar2 * 0xc;
  }
  *param_1 = uStack_28;
  param_1[1] = lStack_20;
  param_1[2] = uStack_18;
  return;
}

