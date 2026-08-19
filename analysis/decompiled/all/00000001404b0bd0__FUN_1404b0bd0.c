// Function: FUN_1404b0bd0
// Addr: 1404b0bd0
// Size: 1 bytes


void FUN_1404b0bd0(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  char cVar12;
  undefined8 in_RAX;
  undefined6 uVar13;
  int *piVar9;
  uint *puVar10;
  char *pcVar11;
  char cVar14;
  char cVar15;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar15 = (char)((ulonglong)param_2 >> 8);
  cVar14 = (char)param_2;
  uVar13 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar12 = (char)((ulonglong)in_RAX >> 8) + cVar14;
  bVar6 = (byte)in_RAX | *(byte *)CONCAT62(uVar13,CONCAT11(cVar12,(byte)in_RAX));
  puVar10 = (uint *)CONCAT62(uVar13,CONCAT11(cVar12 + bVar6,bVar6));
  uVar8 = (uint)puVar10 | *puVar10;
  param_1[CONCAT71(unaff_00000021,unaff_SPL)] = param_1[CONCAT71(unaff_00000021,unaff_SPL)] + cVar15
  ;
  bVar7 = (byte)(uVar8 >> 8);
  param_1[(longlong)param_2] = param_1[(longlong)param_2] + bVar7;
  param_2[uVar8] = param_2[uVar8] + cVar14;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar15;
  pcVar11 = (char *)((ulonglong)uVar8 - 0x3cffea72);
  *pcVar11 = *pcVar11 + cVar15;
  bVar6 = *param_1;
  *param_1 = *param_1 + bVar7;
  bVar6 = (char)uVar8 + '\n' + CARRY1(bVar6,bVar7);
  pcVar11 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar11 = *pcVar11 + cVar14;
  uVar8 = CONCAT22((short)(uVar8 >> 0x10),
                   CONCAT11(bVar7 * '\x02',
                            bVar6 | *(byte *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),bVar6)));
  piVar9 = (int *)((ulonglong)(uVar8 | *(uint *)(ulonglong)uVar8) | 0x74);
  iVar4 = (int)piVar9 + *piVar9;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar4 >> 8);
  uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),(byte)iVar4 + 0x54);
  puVar10 = (uint *)(ulonglong)uVar5;
  uVar3 = (uint)(0xab < (byte)iVar4);
  uVar8 = *puVar10;
  uVar2 = *puVar10;
  *puVar10 = uVar2 + uVar5 + uVar3;
  uVar8 = uVar5 + 0x15906900 + (uint)(CARRY4(uVar8,uVar5) || CARRY4(uVar2 + uVar5,uVar3));
  pcVar11 = (char *)(ulonglong)uVar8;
  pcVar11[9] = pcVar11[9] + (char)(uVar8 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  bVar7 = (byte)uVar8;
  *pcVar11 = *pcVar11 + bVar7;
  pbVar1 = (byte *)(pcVar11 + -0x70);
  bVar6 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar7;
  uVar8 = uVar8 + 0x15906900 + (uint)CARRY1(bVar6,bVar7);
  pcVar11 = (char *)(ulonglong)uVar8;
  pcVar11[9] = pcVar11[9] + (char)(uVar8 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + (char)param_1;
  *pcVar11 = *pcVar11 + (char)uVar8;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

