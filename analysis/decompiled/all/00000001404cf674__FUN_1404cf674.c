// Function: FUN_1404cf674
// Addr: 1404cf674
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf674(void)

{
  char in_AL;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + -0x68) = *(char *)(unaff_RBX + -0x68) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

