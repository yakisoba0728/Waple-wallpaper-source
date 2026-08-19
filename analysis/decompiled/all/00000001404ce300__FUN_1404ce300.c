// Function: FUN_1404ce300
// Addr: 1404ce300
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce300(longlong param_1)

{
  char in_AH;
  longlong unaff_RBX;
  
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

