// Function: FUN_140227220
// Addr: 140227220
// Size: 49 bytes


void FUN_140227220(void)

{
  uint *puVar1;
  longlong *in_stack_00000028;
  
  FUN_140226d00();
  if (*in_stack_00000028 != 0) {
    puVar1 = (uint *)(*in_stack_00000028 + 0x104);
    *puVar1 = *puVar1 | 0x8000000;
  }
  return;
}

