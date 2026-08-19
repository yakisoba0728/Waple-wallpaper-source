// Function: FUN_1404d6ba0
// Addr: 1404d6ba0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6ba0(longlong param_1,longlong param_2)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)param_1;
  *(byte *)(param_1 + param_2) = *(byte *)(param_1 + param_2) | (byte)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

