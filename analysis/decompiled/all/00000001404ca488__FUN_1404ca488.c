// Function: FUN_1404ca488
// Addr: 1404ca488
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca488(void)

{
  undefined1 in_AH;
  longlong unaff_RBX;
  
  *(undefined1 *)(unaff_RBX + 0xf01004c) = in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

