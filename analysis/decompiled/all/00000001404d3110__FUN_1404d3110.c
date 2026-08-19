// Function: FUN_1404d3110
// Addr: 1404d3110
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3110(void)

{
  char in_AH;
  char in_CF;
  
  cRam0000000169d43155 = cRam0000000169d43155 + in_AH + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

