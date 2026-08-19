// Function: FUN_14020f010
// Addr: 14020f010
// Size: 55 bytes


void FUN_14020f010(void)

{
  uint *puVar1;
  longlong *in_stack_00000028;
  
  func_0x00014020eb00();
  if (*in_stack_00000028 != 0) {
    puVar1 = (uint *)(*in_stack_00000028 + 0x104);
    *puVar1 = *puVar1 | 0x8000000;
  }
  return;
}

