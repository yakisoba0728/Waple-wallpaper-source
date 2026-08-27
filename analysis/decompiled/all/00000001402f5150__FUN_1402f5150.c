// Function: FUN_1402f5150
// Addr: 1402f5150
// Size: 53 bytes


void FUN_1402f5150(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_1402f4fe0();
  if (iVar1 == 0) {
    *param_3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

