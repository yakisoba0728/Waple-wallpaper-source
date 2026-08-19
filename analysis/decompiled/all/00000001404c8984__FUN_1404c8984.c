// Function: FUN_1404c8984
// Addr: 1404c8984
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8984(char *param_1)

{
  ulonglong *in_RAX;
  
  *in_RAX = *in_RAX ^ (ulonglong)in_RAX;
  *(uint *)((longlong)in_RAX + 0x31) = *(uint *)((longlong)in_RAX + 0x31) | 0x4a022000;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

