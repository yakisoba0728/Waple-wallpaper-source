// Function: FUN_1404a4004
// Addr: 1404a4004
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4004(void)

{
  uint in_EAX;
  
  uRam00000001a44f400c = uRam00000001a44f400c & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

