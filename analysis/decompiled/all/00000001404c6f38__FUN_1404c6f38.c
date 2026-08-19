// Function: FUN_1404c6f38
// Addr: 1404c6f38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6f38(void)

{
  longlong unaff_RBX;
  
  *(byte *)(unaff_RBX + -0x53e9ffd1) = *(byte *)(unaff_RBX + -0x53e9ffd1) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

