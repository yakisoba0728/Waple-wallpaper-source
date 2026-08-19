// Function: FUN_1404b0d60
// Addr: 1404b0d60
// Size: 1 bytes


void FUN_1404b0d60(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  byte bVar2;
  char cVar10;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  byte bVar11;
  int *piVar7;
  byte *pbVar8;
  byte bVar12;
  byte bVar13;
  char cVar14;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  char *pcVar9;
  
  cVar14 = (char)((ulonglong)param_2 >> 8);
  bVar13 = (byte)param_2;
  bVar12 = (byte)param_1;
  iVar3 = unaff_EBP + 0x1595a300 + (uint)in_CF;
  bVar2 = (byte)iVar3;
  uVar5 = CONCAT22((short)((uint)iVar3 >> 0x10),CONCAT11((char)((uint)iVar3 >> 8) + bVar13,bVar2));
  puVar6 = (uint *)(ulonglong)uVar5;
  *unaff_RBX = *unaff_RBX | bVar12;
  *puVar6 = *puVar6 & uVar5;
  uVar4 = *puVar6;
  *(byte *)puVar6 = (byte)*puVar6 + bVar2;
  iVar3 = in_EAX + 0x1595a300 + (uint)CARRY1((byte)uVar4,bVar2);
  uVar1 = (undefined2)((uint)iVar3 >> 0x10);
  bVar2 = (byte)iVar3;
  cVar10 = (char)((uint)iVar3 >> 8) + bVar13;
  uVar4 = CONCAT22(uVar1,CONCAT11(cVar10,bVar2));
  puVar6 = (uint *)(ulonglong)uVar4;
  *unaff_RBX = *unaff_RBX | bVar12;
  *puVar6 = *puVar6 & uVar4;
  *(byte *)puVar6 = (char)*puVar6 + bVar2;
  cVar10 = cVar10 + cVar14;
  pbVar8 = (byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar10,bVar2));
  *pbVar8 = *pbVar8 | bVar2;
  cVar10 = cVar10 * '\x02';
  uVar4 = CONCAT22(uVar1,CONCAT11(cVar10,bVar2));
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  cVar10 = cVar10 + bVar13;
  bVar2 = bVar2 | *(byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar10,bVar2));
  uVar4 = CONCAT22(uVar1,CONCAT11(cVar10 + bVar2,bVar2));
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  param_1[CONCAT71(unaff_00000021,unaff_SPL)] = param_1[CONCAT71(unaff_00000021,unaff_SPL)] + cVar14
  ;
  param_1[(longlong)param_2] = param_1[(longlong)param_2] + (char)(uVar4 >> 8);
  param_2[uVar4] = param_2[uVar4] + bVar13;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar14;
  pbVar8 = (byte *)((ulonglong)uVar4 - 0x5cffea6b);
  bVar2 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar13;
  iVar3 = uVar5 + 0x4b08d400 + (uint)CARRY1(bVar2,bVar13);
  bVar2 = *param_1;
  bVar11 = (byte)((uint)iVar3 >> 8);
  *param_1 = *param_1 + bVar11;
  bVar2 = (char)iVar3 + '\n' + CARRY1(bVar2,bVar11);
  pcVar9 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar9 = *pcVar9 + bVar13;
  uVar5 = CONCAT22((short)((uint)iVar3 >> 0x10),
                   CONCAT11(bVar11 * '\x02',
                            bVar2 | *(byte *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),bVar2)));
  piVar7 = (int *)((ulonglong)(uVar5 | *(uint *)(ulonglong)uVar5) | 0x74);
  iVar3 = (int)piVar7 + *piVar7;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar3 >> 8);
  uVar5 = CONCAT31((int3)((uint)iVar3 >> 8),(byte)iVar3 + 0x54);
  *(int *)(ulonglong)uVar5 = *(int *)(ulonglong)uVar5 + uVar5 + (uint)(0xab < (byte)iVar3);
  *(byte *)(unaff_RDI + -0x68b6ffeb) = *(byte *)(unaff_RDI + -0x68b6ffeb) & bVar13;
  uVar5 = uVar5 + 0x4b096000;
  pbVar8 = (byte *)(ulonglong)uVar5;
  bVar11 = (byte)(uVar5 >> 8);
  *param_1 = *param_1 + bVar11;
  *pbVar8 = *pbVar8 + (char)uVar5;
  bVar2 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar11;
  uVar5 = (int)unaff_RDI + 0x15974900 + (uint)CARRY1(bVar2,bVar11);
  pcVar9 = (char *)(ulonglong)uVar5;
  pcVar9[9] = pcVar9[9] + (char)(uVar5 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + bVar12;
  *pcVar9 = *pcVar9 + (char)uVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

