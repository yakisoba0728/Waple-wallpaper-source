// Function: FUN_1404b0ef0
// Addr: 1404b0ef0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b0ef0(undefined8 param_1,byte param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  char cVar12;
  undefined6 uVar13;
  char cVar14;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  byte in_CF;
  undefined1 auStackX_8 [32];
  
  uVar13 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  bVar8 = (byte)param_1;
  pcVar4 = (code *)swi(0xa4);
  iVar5 = (*pcVar4)();
  uVar6 = iVar5 + 0x4a446c00 + (uint)in_CF;
  bVar10 = (byte)(uVar6 >> 8);
  *(byte *)CONCAT62(uVar13,CONCAT11(bVar9,bVar8)) =
       *(char *)CONCAT62(uVar13,CONCAT11(bVar9,bVar8)) + bVar10;
  bVar11 = *(byte *)((ulonglong)uVar6 * 2);
  param_2 = param_2 | bVar10;
  bVar10 = bVar9 + bVar8;
  puVar2 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  uVar6 = (CONCAT31((int3)(uVar6 >> 8),(byte)uVar6 | bVar11) | 0xcc40500) + 0x15a59c00 +
          (uint)CARRY1(bVar9,bVar8);
  puVar2[CONCAT62(uVar13,CONCAT11(bVar10,bVar8))] =
       puVar2[CONCAT62(uVar13,CONCAT11(bVar10,bVar8))] + param_2;
  cVar14 = (char)auStackX_8;
  *param_4 = *param_4 + cVar14;
  *(char *)((ulonglong)uVar6 * 2) = *(char *)((ulonglong)uVar6 * 2) + (char)uVar6;
  bVar11 = bVar10 + bVar8;
  puVar3 = unaff_RSI + 2;
  unaff_RDI[1] = *puVar2;
  uVar6 = (CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)(uVar6 >> 8) + param_2,(char)uVar6)) |
          0xcc40000) + 0x15a59c00 + (uint)CARRY1(bVar10,bVar8);
  puVar3[CONCAT62(uVar13,CONCAT11(bVar11,bVar8))] =
       puVar3[CONCAT62(uVar13,CONCAT11(bVar11,bVar8))] + param_2;
  *param_4 = *param_4 + cVar14;
  *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
  cVar12 = bVar11 + bVar8;
  unaff_RDI[2] = *puVar3;
  uVar6 = uVar6 + 0x15a59c00 + (uint)CARRY1(bVar11,bVar8);
  pcVar7 = (char *)(ulonglong)uVar6;
  unaff_RSI[CONCAT62(uVar13,CONCAT11(cVar12,bVar8)) + 3] =
       unaff_RSI[CONCAT62(uVar13,CONCAT11(cVar12,bVar8)) + 3] + param_2;
  *param_4 = *param_4 + cVar14;
  bVar10 = (byte)uVar6;
  *pcVar7 = *pcVar7 + bVar10;
  pbVar1 = (byte *)(pcVar7 + -0x5c);
  bVar11 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  uVar6 = uVar6 + 0x15a4cd00 + (uint)CARRY1(bVar11,bVar10);
  (&stack0x00000052)[(ulonglong)uVar6 * 2] = (&stack0x00000052)[(ulonglong)uVar6 * 2] + cVar12;
  *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar8)) =
       *(char *)CONCAT62(uVar13,CONCAT11(cVar12,bVar8)) + (char)(uVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

