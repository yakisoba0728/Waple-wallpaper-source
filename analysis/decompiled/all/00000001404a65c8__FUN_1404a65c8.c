// Function: FUN_1404a65c8
// Addr: 1404a65c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a65c8(void)

{
  longlong in_RAX;
  uint unaff_ESI;
  
  *(uint *)(in_RAX + 8) = *(uint *)(in_RAX + 8) | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

