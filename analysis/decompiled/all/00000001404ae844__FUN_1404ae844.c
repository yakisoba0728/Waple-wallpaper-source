// Function: FUN_1404ae844
// Addr: 1404ae844
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae844(char *param_1,byte param_2)

{
  byte *pbVar1;
  byte bVar2;
  int *in_RAX;
  
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pbVar1 = (byte *)((longlong)in_RAX + 0x5f);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_2;
  *param_1 = *param_1 + (char)((int)in_RAX + *in_RAX + (uint)CARRY1(bVar2,param_2) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

