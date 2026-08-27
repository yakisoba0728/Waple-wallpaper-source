// Function: FUN_14008bbd0
// Addr: 14008bbd0
// Size: 95 bytes


void FUN_14008bbd0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0xd8) & 2) == 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    uVar1 = FUN_14008cd90(*(undefined8 *)(param_1 + 8),10);
    FUN_14000cbc0(uVar1,param_1 + 0x28);
  }
  FUN_14000cbc0(*(undefined8 *)(param_1 + 8),param_2);
  *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) & 0xfd;
  return;
}

