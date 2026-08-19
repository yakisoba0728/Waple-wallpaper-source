// Function: FUN_1404b16b0
// Addr: 1404b16b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b16b0(void)

{
  uint in_EAX;
  
  uRam00000001745016b8 = uRam00000001745016b8 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

