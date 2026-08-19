// Function: FUN_14049ee84
// Addr: 14049ee84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ee84(longlong param_1,char *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  int in_EAX;
  uint uVar3;
  char cVar5;
  byte *pbVar4;
  
  cVar5 = (char)((ulonglong)param_1 >> 8);
  uVar3 = in_EAX + 0x70000634;
  *(char *)((ulonglong)uVar3 + 0x10049ed) = *(char *)((ulonglong)uVar3 + 0x10049ed) + cVar5;
  uVar1 = (undefined3)(uVar3 >> 8);
  bVar2 = (char)uVar3 + 1;
  uVar3 = CONCAT31(uVar1,bVar2);
  pbVar4 = (byte *)(ulonglong)uVar3;
  *param_2 = *param_2 + bVar2;
  *pbVar4 = *pbVar4 + bVar2;
  uRam00000001744eeea4 = uRam00000001744eeea4 & uVar3;
  uVar3 = CONCAT31(uVar1,bVar2 | *pbVar4);
  *(char *)(param_1 + 0x3b) = *(char *)(param_1 + 0x3b) + cVar5;
  *(int *)(ulonglong)uVar3 = *(int *)(ulonglong)uVar3 + uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

