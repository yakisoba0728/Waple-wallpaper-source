// Function: FUN_1404d3618
// Addr: 1404d3618
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3618(undefined8 param_1)

{
  char in_CF;
  
  cRam00000001710a365d = cRam00000001710a365d + (char)((ulonglong)param_1 >> 8) + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

