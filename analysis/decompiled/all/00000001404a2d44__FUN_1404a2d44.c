// Function: FUN_1404a2d44
// Addr: 1404a2d44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2d44(char *param_1,longlong param_2)

{
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) ^ (byte)((ulonglong)param_2 >> 8);
  *(char *)((longlong)in_RAX + 0x72) = *(char *)((longlong)in_RAX + 0x72) + (char)param_1;
  *param_1 = *param_1 + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

