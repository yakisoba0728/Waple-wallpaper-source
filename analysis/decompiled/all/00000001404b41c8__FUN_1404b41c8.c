// Function: FUN_1404b41c8
// Addr: 1404b41c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b41c8(longlong param_1)

{
  uint unaff_ESI;
  
  *(uint *)(param_1 + -0x1b4efff4) = *(uint *)(param_1 + -0x1b4efff4) & unaff_ESI;
  verw();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

