// Function: FUN_1404c9b50
// Addr: 1404c9b50
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9b50(void)

{
  byte *in_RAX;
  
  out(0x40,(byte)in_RAX ^ *in_RAX);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

