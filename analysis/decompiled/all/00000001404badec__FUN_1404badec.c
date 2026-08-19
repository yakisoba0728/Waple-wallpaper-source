// Function: FUN_1404badec
// Addr: 1404badec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404badec(void)

{
  byte in_AL;
  char *in_R9;
  
  *in_R9 = *in_R9 + (in_AL & (byte)uRam00000000ecf3ae13);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

