// Function: FUN_1404b21f4
// Addr: 1404b21f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b21f4(longlong param_1)

{
  char in_AH;
  longlong unaff_RBX;
  char in_CF;
  
  *(char *)(param_1 + unaff_RBX) = (*(char *)(param_1 + unaff_RBX) - in_AH) - in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

