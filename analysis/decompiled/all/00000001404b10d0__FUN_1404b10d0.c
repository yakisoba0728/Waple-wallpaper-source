// Function: FUN_1404b10d0
// Addr: 1404b10d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b10d0(void)

{
  uint in_EAX;
  
  uRam00000001145010d8 = uRam00000001145010d8 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

