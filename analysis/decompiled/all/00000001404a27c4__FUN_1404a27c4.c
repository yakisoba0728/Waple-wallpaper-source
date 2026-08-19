// Function: FUN_1404a27c4
// Addr: 1404a27c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a27c4(char *param_1,byte *param_2)

{
  undefined3 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined8 in_RAX;
  byte *pbVar5;
  
  bVar2 = (byte)((ulonglong)in_RAX >> 8);
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | bVar2;
  LOCK();
  uRam00000001455450cf = uRam00000001455450cf | (uint)in_RAX;
  UNLOCK();
  pbVar5 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(bVar2 + (char)param_2,(byte)in_RAX));
  *param_1 = *param_1;
  *param_2 = *param_2 | (byte)in_RAX;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + (byte)param_1;
  *(uint *)pbVar5 = *(int *)pbVar5 + (int)pbVar5 + (uint)CARRY1(bVar2,(byte)param_1);
  *(int *)param_2 = *(int *)param_2 - (int)param_1;
  iVar4 = (int)pbVar5 + 0x50b7200;
  cVar3 = (char)((uint)iVar4 >> 8);
  uVar1 = (undefined3)((uint)iVar4 >> 8);
  bVar2 = (char)iVar4 + cVar3;
  *param_1 = *param_1 + -8;
  *(char *)(ulonglong)CONCAT31(uVar1,bVar2) = *(char *)(ulonglong)CONCAT31(uVar1,bVar2) + bVar2;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  cVar3 = (bVar2 | bRam00000001455599f3) + cVar3;
  *param_1 = *param_1 + -8;
  *(char *)(ulonglong)CONCAT31(uVar1,cVar3) = *(char *)(ulonglong)CONCAT31(uVar1,cVar3) + cVar3;
  cVar3 = cVar3 + (char)((ulonglong)param_2 >> 8);
  uRam0000000145545103 = uRam0000000145545103 | CONCAT31(uVar1,cVar3);
  *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

