// Function: FUN_14008bb90
// Addr: 14008bb90
// Size: 56 bytes


void FUN_14008bb90(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    uVar1 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
    FUN_14000cbc0(uVar1,param_1 + 0x28);
    return;
  }
  return;
}

