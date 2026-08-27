// Function: FUN_1401f6fb0
// Addr: 1401f6fb0
// Size: 218 bytes


void FUN_1401f6fb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  byte *in_stack_00000028;
  
  if (*(char *)(param_1 + 0x30c) == '\x02') {
    if (*(float *)(param_1 + 0x300) <= 0.0) {
      *in_stack_00000028 = 0;
      return;
    }
  }
  else if ((*(char *)(param_1 + 0x30c) == '\x01') && (*(float *)(param_1 + 0x2fc) <= 0.0)) {
    *in_stack_00000028 = 0;
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x2c0);
  lVar1 = *(longlong *)(param_1 + 0x2c8);
  while( true ) {
    if (lVar3 == lVar1) {
      *in_stack_00000028 = 0;
      return;
    }
    if ((*(longlong *)(lVar3 + 0x28) != 0) &&
       (cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x158) + 0xb0))(),
       cVar2 == '\0')) break;
    lVar3 = lVar3 + 0x38;
  }
  *in_stack_00000028 = ~(byte)((uint)*(undefined4 *)(param_1 + 0x310) >> 0x1e) & 1;
  return;
}

