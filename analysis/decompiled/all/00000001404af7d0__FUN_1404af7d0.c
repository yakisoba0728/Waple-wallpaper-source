// Function: FUN_1404af7d0
// Addr: 1404af7d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af7d0(char param_1)

{
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + -0x78fffc18) = *(char *)(unaff_RBP + -0x78fffc18) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

