// Function: FUN_1404b61e8
// Addr: 1404b61e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404b6252) */

void FUN_1404b61e8(void)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

