// Function: FUN_1404b75d0
// Addr: 1404b75d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b75d0(void)

{
  char in_AH;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  *(char *)(unaff_RBP + unaff_RBX) = *(char *)(unaff_RBP + unaff_RBX) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

