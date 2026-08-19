// Function: FUN_1404d2a44
// Addr: 1404d2a44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2a44(char *param_1)

{
  char *pcVar1;
  longlong unaff_RBX;
  char *unaff_retaddr;
  
  *unaff_retaddr = *unaff_retaddr + (char)unaff_retaddr;
  *param_1 = *param_1 + (char)((ulonglong)unaff_retaddr >> 8);
  pcVar1 = (char *)(((ulonglong)unaff_retaddr & 0xffffffffffffff08) + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)(((ulonglong)unaff_retaddr & 0xffffffffffffff08) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

