// Function: FUN_1404c63c8
// Addr: 1404c63c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c63c8(void)

{
  longlong unaff_RBP;
  
  *(undefined1 *)(unaff_RBP + 0x2f) = *(undefined1 *)(unaff_RBP + 0x2f);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

