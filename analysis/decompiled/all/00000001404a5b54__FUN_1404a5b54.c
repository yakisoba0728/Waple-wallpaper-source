// Function: FUN_1404a5b54
// Addr: 1404a5b54
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5b54(uint *param_1,int *param_2)

{
  char *in_RAX;
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined6 uVar4;
  uint unaff_EBX;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  *param_2 = *param_2 + (int)param_1;
  bVar2 = (byte)param_2 | *(byte *)((longlong)param_2 + 6);
  pbVar1 = (byte *)((longlong)in_RAX * 9);
  *pbVar1 = *pbVar1 << 1 | (char)*pbVar1 < '\0';
  cVar3 = (char)((ulonglong)param_2 >> 8) + *in_RAX;
  *param_1 = *param_1 & unaff_EBX;
  *(char *)CONCAT62(uVar4,CONCAT11(cVar3,bVar2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(cVar3,bVar2)) + (char)param_1;
  pbVar1 = (byte *)((ulonglong)param_1 & 0xffffffff);
  *pbVar1 = *pbVar1 | (byte)pbVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

