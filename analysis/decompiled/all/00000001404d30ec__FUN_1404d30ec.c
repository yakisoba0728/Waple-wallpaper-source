// Function: FUN_1404d30ec
// Addr: 1404d30ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d30ec(void)

{
  char in_AH;
  char in_CF;
  
  cRam0000000169d43131 = cRam0000000169d43131 + in_AH + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

