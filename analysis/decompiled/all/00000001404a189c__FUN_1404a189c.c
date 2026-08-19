// Function: FUN_1404a189c
// Addr: 1404a189c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a189c(char *param_1)

{
  int in_EAX;
  uint uVar1;
  char unaff_SPL;
  char *pcVar2;
  
  uVar1 = in_EAX + 0x800005e4;
  pcVar2 = (char *)(ulonglong)uVar1;
  *(int *)((longlong)pcVar2 * 2) = *(int *)((longlong)pcVar2 * 2) + uVar1;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x8fffbff] = pcVar2[-0x8fffbff] + (char)uVar1;
  *(int *)((longlong)pcVar2 * 2) = *(int *)((longlong)pcVar2 * 2) + uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

