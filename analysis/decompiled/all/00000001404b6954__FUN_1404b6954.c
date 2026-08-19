// Function: FUN_1404b6954
// Addr: 1404b6954
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6954(int *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined6 uVar6;
  uint *puVar4;
  byte *pbVar5;
  byte bVar7;
  uint unaff_EBX;
  int unaff_ESI;
  
  bVar7 = (byte)param_1;
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar1 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  puVar4 = (uint *)CONCAT62(uVar6,CONCAT11(cVar1 + (char)param_2,
                                           (byte)in_RAX |
                                           *(byte *)CONCAT62(uVar6,CONCAT11(cVar1,(byte)in_RAX))));
  *puVar4 = *puVar4 | (uint)puVar4;
  *(char *)((longlong)puVar4 + (longlong)param_1) =
       *(char *)((longlong)puVar4 + (longlong)param_1) + (char)((ulonglong)param_2 >> 8);
  pbVar5 = (byte *)((longlong)param_1 + -0x76b4ffe5);
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar7;
  uVar3 = ((uint)puVar4 - *puVar4) - (uint)CARRY1(bVar2,bVar7);
  bVar2 = (char)uVar3 + *(char *)(ulonglong)uVar3;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8) * '\x02',bVar2));
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar2 | *(byte *)(ulonglong)uVar3);
  pbVar5 = (byte *)((longlong)param_1 + -0x76b4ffe5);
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar7;
  uVar3 = (uVar3 - *(int *)(ulonglong)uVar3) - (uint)CARRY1(bVar2,bVar7);
  uVar3 = uVar3 + *(int *)(ulonglong)uVar3;
  pbVar5 = (byte *)(ulonglong)uVar3;
  *pbVar5 = *pbVar5 & (byte)((ulonglong)param_1 >> 8);
  bVar2 = (byte)uVar3;
  *param_2 = *param_2 + bVar2;
  *pbVar5 = *pbVar5 + bVar2;
  *param_1 = *param_1 + unaff_ESI;
  puVar4 = (uint *)((ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2 | *pbVar5) - 0x77dafffe);
  *puVar4 = *puVar4 ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

