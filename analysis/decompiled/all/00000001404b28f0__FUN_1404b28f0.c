// Function: FUN_1404b28f0
// Addr: 1404b28f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b28f0(void)

{
  longlong in_RAX;
  uint unaff_ESI;
  
  *(uint *)(in_RAX + 8) = *(uint *)(in_RAX + 8) | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

