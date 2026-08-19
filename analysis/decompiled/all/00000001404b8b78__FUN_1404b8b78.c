// Function: FUN_1404b8b78
// Addr: 1404b8b78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8b78(void)

{
  char in_AH;
  longlong unaff_RBX;
  char in_CF;
  
  *(char *)(unaff_RBX + -0x5c2affe2) = *(char *)(unaff_RBX + -0x5c2affe2) + in_AH + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

