// Function: FUN_1404a1754
// Addr: 1404a1754
// Size: 1 bytes


void FUN_1404a1754(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong in_RAX;
  char cVar2;
  longlong unaff_RBX;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + cVar2;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar2;
  *(char *)(in_RAX + -0x18) = *(char *)(in_RAX + -0x18) + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

