// Function: FUN_1404c8978
// Addr: 1404c8978
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8978(char *param_1,char param_2)

{
  char cVar1;
  uint *in_RAX;
  
  *(uint *)((longlong)in_RAX + 0x31) = *(uint *)((longlong)in_RAX + 0x31) | 0x4a022000;
  cVar1 = (char)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + cVar1;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)(in_RAX + 0x12) = (char)in_RAX[0x12] + param_2;
  *in_RAX = *in_RAX ^ (uint)in_RAX;
  *(uint *)((longlong)in_RAX + 0x31) = *(uint *)((longlong)in_RAX + 0x31) | 0x4a022000;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

