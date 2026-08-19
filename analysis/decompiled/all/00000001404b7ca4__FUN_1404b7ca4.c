// Function: FUN_1404b7ca4
// Addr: 1404b7ca4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7ca4(void)

{
  char *pcVar1;
  char in_AH;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(undefined1 *)(unaff_RBP + -0x49f2ffe3) = 0;
  pcVar1 = (char *)(unaff_RBX + 0x21004b + unaff_RDI * 2);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

