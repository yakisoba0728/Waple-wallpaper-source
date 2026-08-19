// Function: FUN_1404a92b0
// Addr: 1404a92b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a92b0(longlong param_1,byte param_2)

{
  char in_AL;
  
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x1701004a) = *(byte *)(param_1 + 0x1701004a) ^ param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam0000000000000000 = cRam0000000000000000 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

