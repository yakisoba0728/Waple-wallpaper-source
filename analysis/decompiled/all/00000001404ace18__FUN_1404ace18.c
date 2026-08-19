// Function: FUN_1404ace18
// Addr: 1404ace18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ace18(byte *param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar4;
  byte *pbVar5;
  byte bVar6;
  char cVar7;
  byte bVar9;
  int in_EAX;
  char *pcVar8;
  char *pcVar10;
  byte bVar11;
  undefined6 uVar12;
  char unaff_BH;
  byte bVar3;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar7 = (char)param_2;
  *param_2 = *param_2 & (uint)param_1;
  bVar11 = (byte)((ulonglong)param_2 >> 8) | *(byte *)((longlong)param_1 * 2);
  *(char *)(ulonglong)(in_EAX + 0x89000f34) = *(char *)(ulonglong)(in_EAX + 0x89000f34) + '\x01';
  param_1[0x340010fe] = param_1[0x340010fe] + unaff_BH;
  pcVar4 = (code *)swi(0x4a);
  pcVar8 = (char *)(*pcVar4)();
  bVar1 = *param_1;
  bVar9 = (byte)((ulonglong)pcVar8 >> 8);
  *param_1 = *param_1 + bVar9;
  pbVar5 = (byte *)((longlong)pcVar8 * 2);
  bVar2 = *pbVar5;
  bVar6 = (byte)pcVar8;
  bVar3 = *pbVar5;
  *pbVar5 = bVar3 + bVar6 + CARRY1(bVar1,bVar9);
  pcVar8[CONCAT62(uVar12,CONCAT11(bVar11,cVar7))] =
       pcVar8[CONCAT62(uVar12,CONCAT11(bVar11,cVar7))] + cVar7 +
       (CARRY1(bVar2,bVar6) || CARRY1(bVar3 + bVar6,CARRY1(bVar1,bVar9)));
  param_1[CONCAT62(uVar12,CONCAT11(bVar11,cVar7))] =
       param_1[CONCAT62(uVar12,CONCAT11(bVar11,cVar7))] | bVar9;
  pcVar10 = (char *)0xd50010fe;
  *pcVar8 = *pcVar8 + '\x01';
  pcVar8[-0x33] = pcVar8[-0x33] + -2;
  cRam00000000d50010fe = cRam00000000d50010fe + '\b';
  *pcVar8 = *pcVar8 + bVar6;
  cRam00000000aa0021fc = cRam00000000aa0021fc + unaff_BH;
  *pcVar8 = *pcVar8 + '\x01';
  pcVar8[-0x33] = pcVar8[-0x33] + -2;
  cRam00000000d50010fe = cRam00000000d50010fe + '\b';
  *pcVar8 = *pcVar8 + bVar6;
  cRam000000008e0021fc = cRam000000008e0021fc + -2;
  *pcVar8 = *pcVar8 + '\x01';
  cRam00000006a821883a = cRam00000006a821883a + bVar11;
  *pcVar8 = *pcVar8 + bVar6;
  *pcVar8 = *pcVar8 + '\x01';
  cRam00000000fd0021fc = cRam00000000fd0021fc + -2;
  pcVar4 = (code *)swi(0x4a);
  cVar7 = (*pcVar4)();
  *pcVar10 = *pcVar10 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

