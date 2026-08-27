// Function: FUN_1402f0710
// Addr: 1402f0710
// Size: 36 bytes


void FUN_1402f0710(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0xd0);
    if (param_2 != (undefined8 *)0x0) {
      uVar2 = puVar1[1];
      *param_2 = *puVar1;
      param_2[1] = uVar2;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = puVar1[2];
    }
  }
  return;
}

