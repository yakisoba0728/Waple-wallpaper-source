// Function: FUN_1404a173c
// Addr: 1404a173c
// Size: 1 bytes


void FUN_1404a173c(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong in_RAX;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + -0x18) = *(char *)(in_RAX + -0x18) + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

