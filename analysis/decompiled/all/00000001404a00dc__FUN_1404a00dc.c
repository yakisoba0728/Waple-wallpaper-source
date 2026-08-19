// Function: FUN_1404a00dc
// Addr: 1404a00dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a00dc(void)

{
  uint in_EAX;
  
  uRam00000001b44f00e4 = uRam00000001b44f00e4 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

