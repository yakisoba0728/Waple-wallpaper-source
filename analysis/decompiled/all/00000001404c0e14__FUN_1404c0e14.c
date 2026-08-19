// Function: FUN_1404c0e14
// Addr: 1404c0e14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0e14(longlong param_1,undefined8 param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined8 in_RAX;
  char cVar6;
  undefined6 uVar7;
  char unaff_R14B;
  char unaff_R15B;
  char *pcVar5;
  
  uVar7 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar6 = (char)param_2;
  cVar3 = (char)in_RAX + 'B';
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *pcVar5 = *pcVar5 + cVar3;
  pcVar5[0xd] = pcVar5[0xd] + cVar6;
  pcVar5[0x5d] = pcVar5[0x5d] + unaff_R15B;
  uVar4 = (uint)pcVar5 | 0xd60004c;
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar5[0xd] = pcVar5[0xd] + unaff_R14B;
  pbVar1 = (byte *)(pcVar5 + param_1);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_3;
  *(char *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6)) + (char)uVar4 + CARRY1(bVar2,param_3);
  *pcVar5 = *pcVar5 + (char)uVar4;
  bVar2 = *(byte *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6));
  *(byte *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(0x2b,cVar6)) + param_3;
  *(uint *)(pcVar5 + 0x4221c0) = *(int *)(pcVar5 + 0x4221c0) + uVar4 + (uint)CARRY1(bVar2,param_3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

