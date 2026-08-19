// Function: FUN_1404cd510
// Addr: 1404cd510
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd510(int param_1,longlong param_2)

{
  int *in_RAX;
  
  *in_RAX = *in_RAX + param_1;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | (byte)((uint)((int)in_RAX + *in_RAX) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

