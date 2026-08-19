// Function: FUN_1404ace08
// Addr: 1404ace08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ace08(byte *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar4;
  byte *pbVar5;
  byte bVar6;
  char cVar7;
  byte bVar10;
  int in_EAX;
  longlong lVar8;
  char *pcVar9;
  char *pcVar11;
  byte bVar12;
  undefined6 uVar13;
  char unaff_BH;
  byte bVar3;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  cVar7 = (char)param_2;
  *(char *)(ulonglong)(in_EAX + 0x500008c4) = *(char *)(ulonglong)(in_EAX + 0x500008c4) + '\x01';
  param_1[0x280010fe] = param_1[0x280010fe] + (char)param_1;
  pcVar4 = (code *)swi(0x4a);
  lVar8 = (*pcVar4)();
  *param_1 = *param_1 + (char)((ulonglong)lVar8 >> 8);
  bVar12 = bVar12 | *(byte *)((longlong)param_1 * 2);
  pcVar9 = (char *)(ulonglong)
                   ((int)CONCAT71((int7)((ulonglong)lVar8 >> 8),(byte)lVar8 | *(byte *)(lVar8 * 2))
                   + 0x89000f34);
  *pcVar9 = *pcVar9 + '\x01';
  param_1[0x340010fe] = param_1[0x340010fe] + unaff_BH;
  pcVar4 = (code *)swi(0x4a);
  pcVar9 = (char *)(*pcVar4)();
  bVar1 = *param_1;
  bVar10 = (byte)((ulonglong)pcVar9 >> 8);
  *param_1 = *param_1 + bVar10;
  pbVar5 = (byte *)((longlong)pcVar9 * 2);
  bVar2 = *pbVar5;
  bVar6 = (byte)pcVar9;
  bVar3 = *pbVar5;
  *pbVar5 = bVar3 + bVar6 + CARRY1(bVar1,bVar10);
  pcVar9[CONCAT62(uVar13,CONCAT11(bVar12,cVar7))] =
       pcVar9[CONCAT62(uVar13,CONCAT11(bVar12,cVar7))] + cVar7 +
       (CARRY1(bVar2,bVar6) || CARRY1(bVar3 + bVar6,CARRY1(bVar1,bVar10)));
  param_1[CONCAT62(uVar13,CONCAT11(bVar12,cVar7))] =
       param_1[CONCAT62(uVar13,CONCAT11(bVar12,cVar7))] | bVar10;
  pcVar11 = (char *)0xd50010fe;
  *pcVar9 = *pcVar9 + '\x01';
  pcVar9[-0x33] = pcVar9[-0x33] + -2;
  cRam00000000d50010fe = cRam00000000d50010fe + '\x10';
  *pcVar9 = *pcVar9 + bVar6;
  cRam00000000aa0021fc = cRam00000000aa0021fc + unaff_BH;
  *pcVar9 = *pcVar9 + '\x01';
  pcVar9[-0x33] = pcVar9[-0x33] + -2;
  cRam00000000d50010fe = cRam00000000d50010fe + '\x10';
  *pcVar9 = *pcVar9 + bVar6;
  cRam000000008e0021fc = cRam000000008e0021fc + -2;
  *pcVar9 = *pcVar9 + '\x01';
  cRam00000006a821883a = cRam00000006a821883a + bVar12;
  *pcVar9 = *pcVar9 + bVar6;
  *pcVar9 = *pcVar9 + '\x01';
  cRam00000000fd0021fc = cRam00000000fd0021fc + -2;
  pcVar4 = (code *)swi(0x4a);
  cVar7 = (*pcVar4)();
  *pcVar11 = *pcVar11 + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

