// Function: FUN_1404a945c
// Addr: 1404a945c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a945c(char *param_1)

{
  longlong unaff_RBX;
  int unaff_ESP;
  
  *(int *)(unaff_RBX + -0x6c9ffff4) = *(int *)(unaff_RBX + -0x6c9ffff4) - unaff_ESP;
  *param_1 = *param_1 + (char)unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

