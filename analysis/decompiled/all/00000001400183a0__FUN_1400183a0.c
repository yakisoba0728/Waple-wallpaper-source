// Function: FUN_1400183a0
// Addr: 1400183a0
// Size: 165 bytes


void FUN_1400183a0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_830 [2040];
  
  uVar1 = *(uint *)(param_2 + 4) / 0x3f4;
  uVar1 = (*(int *)(param_2 + 4) != uVar1 * 0x3f4) + uVar1;
  uVar2 = 1;
  if (1 < uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 != 0) {
    func_0x000140421870(local_830,0,0x3f8);
    return;
  }
  return;
}

