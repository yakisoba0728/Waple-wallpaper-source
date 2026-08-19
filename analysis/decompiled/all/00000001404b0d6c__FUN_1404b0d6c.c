// Function: FUN_1404b0d6c
// Addr: 1404b0d6c
// Size: 1 bytes


void FUN_1404b0d6c(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte bVar10;
  uint *in_RAX;
  uint *puVar5;
  int *piVar6;
  byte *pbVar7;
  char *pcVar8;
  byte bVar11;
  char cVar12;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  int unaff_EBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char cVar9;
  
  cVar12 = (char)((ulonglong)param_2 >> 8);
  bVar11 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  iVar3 = unaff_EBP + 0x1595a300 + (uint)CARRY1((byte)uVar4,(byte)in_RAX);
  uVar1 = (undefined2)((uint)iVar3 >> 0x10);
  bVar2 = (byte)iVar3;
  cVar9 = (char)((uint)iVar3 >> 8) + bVar11;
  uVar4 = CONCAT22(uVar1,CONCAT11(cVar9,bVar2));
  puVar5 = (uint *)(ulonglong)uVar4;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *puVar5 = *puVar5 & uVar4;
  *(byte *)puVar5 = (char)*puVar5 + bVar2;
  cVar9 = cVar9 + cVar12;
  pbVar7 = (byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar9,bVar2));
  *pbVar7 = *pbVar7 | bVar2;
  cVar9 = cVar9 * '\x02';
  uVar4 = CONCAT22(uVar1,CONCAT11(cVar9,bVar2));
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  cVar9 = cVar9 + bVar11;
  bVar2 = bVar2 | *(byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar9,bVar2));
  uVar4 = CONCAT22(uVar1,CONCAT11(cVar9 + bVar2,bVar2));
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  param_1[CONCAT71(unaff_00000021,unaff_SPL)] = param_1[CONCAT71(unaff_00000021,unaff_SPL)] + cVar12
  ;
  param_1[(longlong)param_2] = param_1[(longlong)param_2] + (char)(uVar4 >> 8);
  param_2[uVar4] = param_2[uVar4] + bVar11;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar12;
  pbVar7 = (byte *)((ulonglong)uVar4 - 0x5cffea6b);
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar11;
  iVar3 = (uint)in_RAX + 0x4b08d400 + (uint)CARRY1(bVar2,bVar11);
  bVar2 = *param_1;
  bVar10 = (byte)((uint)iVar3 >> 8);
  *param_1 = *param_1 + bVar10;
  bVar2 = (char)iVar3 + '\n' + CARRY1(bVar2,bVar10);
  pcVar8 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar8 = *pcVar8 + bVar11;
  uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                   CONCAT11(bVar10 * '\x02',
                            bVar2 | *(byte *)(ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),bVar2)));
  piVar6 = (int *)((ulonglong)(uVar4 | *(uint *)(ulonglong)uVar4) | 0x74);
  iVar3 = (int)piVar6 + *piVar6;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar3 >> 8);
  uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),(byte)iVar3 + 0x54);
  *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4 + (uint)(0xab < (byte)iVar3);
  *(byte *)(unaff_RDI + -0x68b6ffeb) = *(byte *)(unaff_RDI + -0x68b6ffeb) & bVar11;
  uVar4 = uVar4 + 0x4b096000;
  pbVar7 = (byte *)(ulonglong)uVar4;
  bVar10 = (byte)(uVar4 >> 8);
  *param_1 = *param_1 + bVar10;
  *pbVar7 = *pbVar7 + (char)uVar4;
  bVar2 = *pbVar7;
  *pbVar7 = *pbVar7 + bVar10;
  uVar4 = (int)unaff_RDI + 0x15974900 + (uint)CARRY1(bVar2,bVar10);
  pcVar8 = (char *)(ulonglong)uVar4;
  pcVar8[9] = pcVar8[9] + (char)(uVar4 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + (byte)param_1;
  *pcVar8 = *pcVar8 + (char)uVar4;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

