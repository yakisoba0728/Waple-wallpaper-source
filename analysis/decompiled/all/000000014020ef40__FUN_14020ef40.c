// Function: FUN_14020ef40
// Addr: 14020ef40
// Size: 55 bytes


void FUN_14020ef40(void)

{
  uint *puVar1;
  longlong *in_stack_00000028;
  
  FUN_14020ea30();
  if (*in_stack_00000028 != 0) {
    puVar1 = (uint *)(*in_stack_00000028 + 0x104);
    *puVar1 = *puVar1 | 0x8000000;
  }
  return;
}

