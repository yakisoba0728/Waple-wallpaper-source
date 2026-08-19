// Function: FUN_14049eebc
// Addr: 14049eebc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eebc(void)

{
  uint in_EAX;
  
  uRam00000001a44eeec4 = uRam00000001a44eeec4 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

