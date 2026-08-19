// Function: FUN_1404c6d80
// Addr: 1404c6d80
// Size: 1 bytes


void FUN_1404c6d80(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  uint *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)(param_2 + -0x10) = *(char *)(param_2 + -0x10) + (char)((ulonglong)param_1 >> 8);
  pcVar1 = (char *)(unaff_RBX + 0x5210049 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

