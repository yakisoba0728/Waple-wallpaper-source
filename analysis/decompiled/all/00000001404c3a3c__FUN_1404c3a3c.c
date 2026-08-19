// Function: FUN_1404c3a3c
// Addr: 1404c3a3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3a3c(uint param_1,char param_2)

{
  undefined1 uVar1;
  uint in_EAX;
  char *pcVar2;
  
  pcVar2 = (char *)(ulonglong)(in_EAX | 0x50002bf0);
  *pcVar2 = *pcVar2 + (char)param_1 + (*(uint *)((longlong)pcVar2 * 2 + 0x21) < param_1);
  *pcVar2 = *pcVar2 + param_2;
  uVar1 = in(5);
  (&stack0x00000000)[(ulonglong)CONCAT31((int3)((in_EAX | 0x50002bf0) >> 8),uVar1) * 8] =
       (&stack0x00000000)[(ulonglong)CONCAT31((int3)((in_EAX | 0x50002bf0) >> 8),uVar1) * 8] +
       (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

