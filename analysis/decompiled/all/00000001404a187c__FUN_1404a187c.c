// Function: FUN_1404a187c
// Addr: 1404a187c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a187c(void)

{
  char in_AH;
  longlong unaff_RBX;
  
  *(int *)(unaff_RBX + 0xb) = *(int *)(unaff_RBX + 0xb) + (int)&stack0x00000000;
  *(char *)(unaff_RBX + -0xc) = *(char *)(unaff_RBX + -0xc) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

