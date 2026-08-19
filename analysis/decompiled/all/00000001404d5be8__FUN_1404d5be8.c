// Function: FUN_1404d5be8
// Addr: 1404d5be8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5be8(void)

{
  char in_AL;
  
  cRam00000001a04d6225 = cRam00000001a04d6225 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

