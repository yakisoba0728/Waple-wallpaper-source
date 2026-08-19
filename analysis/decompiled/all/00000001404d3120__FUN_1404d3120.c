// Function: FUN_1404d3120
// Addr: 1404d3120
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3120(void)

{
  char *pcVar1;
  longlong in_RAX;
  char unaff_BL;
  longlong unaff_RBP;
  
  pcVar1 = (char *)(in_RAX + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

