// Function: FUN_1404a3e18
// Addr: 1404a3e18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3e18(longlong param_1,char *param_2)

{
  char *in_RAX;
  longlong unaff_RBP;
  int *unaff_RDI;
  
  *(byte *)(unaff_RBP + param_1) = *(byte *)(unaff_RBP + param_1) & (byte)((ulonglong)in_RAX >> 8);
  *param_2 = *param_2 + (char)in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_RDI = *unaff_RDI + (int)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

