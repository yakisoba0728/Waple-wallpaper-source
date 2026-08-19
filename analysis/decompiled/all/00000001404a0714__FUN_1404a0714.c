// Function: FUN_1404a0714
// Addr: 1404a0714
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0714(char *param_1)

{
  int in_EAX;
  uint uVar1;
  char *pcVar2;
  
  uVar1 = in_EAX + 0x80000e54U + *(int *)(ulonglong)(in_EAX + 0x80000e54U);
  pcVar2 = (char *)((ulonglong)(uVar1 + *(int *)(ulonglong)uVar1) & 0xffffffffffffff06);
  *param_1 = *param_1 + -0x10;
  *pcVar2 = *pcVar2 + (char)param_1;
  *pcVar2 = *pcVar2 + (char)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

