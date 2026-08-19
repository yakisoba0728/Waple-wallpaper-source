// Function: FUN_1404a4684
// Addr: 1404a4684
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4684(longlong param_1,undefined8 param_2)

{
  char *in_RAX;
  char in_CF;
  
  *(char *)(param_1 + 0x8e40400) =
       *(char *)(param_1 + 0x8e40400) + (char)((ulonglong)param_2 >> 8) + in_CF;
  *in_RAX = *in_RAX + (char)param_2;
  cRam00000000e44a4e22 = cRam00000000e44a4e22 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

