// Function: FUN_1404ac5d0
// Addr: 1404ac5d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac5d0(char *param_1)

{
  int in_EAX;
  uint uVar1;
  char *pcVar2;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  uVar1 = in_EAX + 0xf4050002;
  pcVar2 = (char *)((ulonglong)CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 | *(byte *)(ulonglong)uVar1)
                   & 0xffffffffffffff39);
  *pcVar2 = *pcVar2 + (char)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

