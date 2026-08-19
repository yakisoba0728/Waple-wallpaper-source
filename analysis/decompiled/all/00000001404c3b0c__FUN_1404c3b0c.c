// Function: FUN_1404c3b0c
// Addr: 1404c3b0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3b0c(char param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint *in_RAX;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  uVar1 = (uint)in_RAX - *in_RAX;
  out((short)param_2,uVar1 - *(int *)(ulonglong)uVar1);
  *param_4 = *param_4 + param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

