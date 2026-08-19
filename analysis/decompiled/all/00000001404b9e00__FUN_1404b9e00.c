// Function: FUN_1404b9e00
// Addr: 1404b9e00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9e00(void)

{
  byte in_AL;
  
  bRam00000001564c9e50 = bRam00000001564c9e50 ^ in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

