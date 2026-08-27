// Function: FUN_1401df5e0
// Addr: 1401df5e0
// Size: 53 bytes


void FUN_1401df5e0(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *in_stack_00000028;
  
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x80))();
  uVar1 = puVar2[1];
  *in_stack_00000028 = *puVar2;
  in_stack_00000028[1] = uVar1;
  uVar1 = puVar2[3];
  in_stack_00000028[2] = puVar2[2];
  in_stack_00000028[3] = uVar1;
  uVar1 = puVar2[5];
  in_stack_00000028[4] = puVar2[4];
  in_stack_00000028[5] = uVar1;
  uVar1 = puVar2[7];
  in_stack_00000028[6] = puVar2[6];
  in_stack_00000028[7] = uVar1;
  return;
}

