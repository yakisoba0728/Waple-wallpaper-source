// Function: FUN_1404cc0d0
// Addr: 1404cc0d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc0d0(void)

{
  longlong unaff_RBX;
  
  *(uint *)(unaff_RBX + -0x746bffcc) = *(uint *)(unaff_RBX + -0x746bffcc) | 0x34;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

