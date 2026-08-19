// Function: FUN_1404a6324
// Addr: 1404a6324
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6324(byte *param_1,longlong param_2)

{
  *param_1 = *param_1 ^ (byte)param_1;
  *(char *)(param_2 + 0x38000930) = *(char *)(param_2 + 0x38000930) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

