// Function: FUN_1404d4ea8
// Addr: 1404d4ea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4ea8(int *param_1,longlong param_2)

{
  uint in_EAX;
  bool in_OF;
  
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (int)param_1;
  *(uint *)(param_2 + 0x6003e005) = *(uint *)(param_2 + 0x6003e005) | (uint)param_2;
  uRam0000000194524ed4 = uRam0000000194524ed4 & in_EAX;
  verr();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

