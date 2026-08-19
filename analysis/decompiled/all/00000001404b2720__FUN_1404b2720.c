// Function: FUN_1404b2720
// Addr: 1404b2720
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2720(void)

{
  char in_AL;
  char in_CF;
  
  cRam000000014571273d = cRam000000014571273d + in_AL + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

