// Function: FUN_1404b0af4
// Addr: 1404b0af4
// Size: 1 bytes


void FUN_1404b0af4(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  char cVar10;
  undefined8 in_RAX;
  undefined6 uVar11;
  uint *puVar7;
  int *piVar8;
  char *pcVar9;
  char cVar12;
  char cVar13;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar13 = (char)((ulonglong)param_2 >> 8);
  cVar12 = (char)param_2;
  uVar11 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar10 = (char)((ulonglong)in_RAX >> 8) + cVar12;
  bVar4 = (byte)in_RAX | *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,(byte)in_RAX));
  puVar7 = (uint *)CONCAT62(uVar11,CONCAT11(cVar10 + bVar4,bVar4));
  uVar5 = (uint)puVar7 | *puVar7;
  pcVar9 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_1);
  *pcVar9 = *pcVar9 + cVar13;
  param_2[param_1] = param_2[param_1] + (char)(uVar5 >> 8);
  param_2[uVar5] = param_2[uVar5] + cVar12;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar13;
  pbVar1 = (byte *)((ulonglong)uVar5 - 0x75);
  bVar4 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)uVar5;
  iVar6 = uVar5 + 0x158b5300 + (uint)CARRY1(bVar4,(byte)uVar5);
  uVar2 = (undefined2)((uint)iVar6 >> 0x10);
  cVar10 = (char)((uint)iVar6 >> 8) + cVar12;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
  pcVar9 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar9 = *pcVar9 + cVar12;
  uVar5 = CONCAT22(uVar2,CONCAT11(cVar10 * '\x02',
                                  (byte)iVar6 |
                                  *(byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar10,(byte)iVar6))))
  ;
  piVar8 = (int *)((ulonglong)(uVar5 | *(uint *)(ulonglong)uVar5) | 0x74);
  iVar6 = (int)piVar8 + *piVar8;
  bVar4 = (byte)((uint)iVar6 >> 8);
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | bVar4;
  uVar3 = (undefined3)((uint)iVar6 >> 8);
  cVar10 = (byte)iVar6 + 0x54;
  uVar5 = CONCAT31(uVar3,cVar10);
  piVar8 = (int *)(ulonglong)uVar5;
  *piVar8 = *piVar8 + uVar5 + (uint)(0xab < (byte)iVar6);
  pbVar1 = (byte *)(param_2 + unaff_RBP + 0x158cf900);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  *(char *)((longlong)piVar8 + 9) = *(char *)((longlong)piVar8 + 9) + bVar4;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)piVar8 = (char)*piVar8 + cVar10;
  pcVar9 = (char *)(ulonglong)CONCAT31(uVar3,cVar10 + cVar12);
  pcVar9[9] = pcVar9[9] + bVar4;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + (byte)param_1;
  *pcVar9 = *pcVar9 + cVar10 + cVar12;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

