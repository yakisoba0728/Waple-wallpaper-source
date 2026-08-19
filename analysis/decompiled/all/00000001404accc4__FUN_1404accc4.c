// Function: FUN_1404accc4
// Addr: 1404accc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404accc4(ulonglong param_1,char *param_2)

{
  char in_AL;
  int unaff_EBP;
  int *unaff_RDI;
  
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + in_AL;
  *param_2 = *param_2 + (char)(param_1 >> 8);
  *unaff_RDI = *unaff_RDI + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

