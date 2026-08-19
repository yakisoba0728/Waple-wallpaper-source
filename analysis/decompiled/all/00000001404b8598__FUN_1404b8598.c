// Function: FUN_1404b8598
// Addr: 1404b8598
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8598(void)

{
  longlong in_RAX;
  uint unaff_ESI;
  
  *(uint *)(in_RAX + 8) = *(uint *)(in_RAX + 8) | unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

