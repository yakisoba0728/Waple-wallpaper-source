// Function: FUN_1404d6678
// Addr: 1404d6678
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6678(void)

{
  char in_AL;
  
  cRam00000001604d6cb5 = cRam00000001604d6cb5 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

