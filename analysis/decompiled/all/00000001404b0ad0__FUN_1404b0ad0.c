// Function: FUN_1404b0ad0
// Addr: 1404b0ad0
// Size: 1 bytes


void FUN_1404b0ad0(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined2 uVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  char *in_RAX;
  uint *puVar7;
  byte *pbVar8;
  int *piVar9;
  char *pcVar10;
  byte bVar12;
  char cVar13;
  char cVar15;
  char *pcVar14;
  byte *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char cVar11;
  
  bVar12 = (byte)param_1;
  pcVar14 = (char *)(ulonglong)uRam000000018b53ded7;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  bVar3 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar3;
  pbVar8 = (byte *)(in_RAX + -0x75);
  bVar4 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar3;
  iVar5 = (int)in_RAX + 0x158b5300 + (uint)CARRY1(bVar4,bVar3);
  uVar1 = (undefined2)((uint)iVar5 >> 0x10);
  bVar4 = (byte)iVar5;
  cVar13 = (char)uRam000000018b53ded7;
  cVar11 = (char)((uint)iVar5 >> 8) + cVar13;
  uVar6 = CONCAT22(uVar1,CONCAT11(cVar11,bVar4));
  puVar7 = (uint *)(ulonglong)uVar6;
  *unaff_RBX = *unaff_RBX | bVar12;
  *puVar7 = *puVar7 & uVar6;
  *(byte *)puVar7 = (char)*puVar7 + bVar4;
  cVar15 = (char)(uRam000000018b53ded7 >> 8);
  cVar11 = cVar11 + cVar15;
  pbVar8 = (byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar11,bVar4));
  *pbVar8 = *pbVar8 | bVar4;
  cVar11 = cVar11 * '\x02';
  uVar6 = CONCAT22(uVar1,CONCAT11(cVar11,bVar4));
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
  cVar11 = cVar11 + cVar13;
  bVar4 = bVar4 | *(byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar11,bVar4));
  uVar6 = CONCAT22(uVar1,CONCAT11(cVar11 + bVar4,bVar4));
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
  (&stack0xfffffffffffffff8)[(longlong)param_1] =
       (&stack0xfffffffffffffff8)[(longlong)param_1] + cVar15;
  pcVar14[(longlong)param_1] = pcVar14[(longlong)param_1] + (char)(uVar6 >> 8);
  pcVar14[uVar6] = pcVar14[uVar6] + cVar13;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar15;
  pbVar8 = (byte *)((ulonglong)uVar6 - 0x75);
  bVar4 = *pbVar8;
  *pbVar8 = *pbVar8 + (byte)uVar6;
  iVar5 = uVar6 + 0x158b5300 + (uint)CARRY1(bVar4,(byte)uVar6);
  uVar1 = (undefined2)((uint)iVar5 >> 0x10);
  cVar11 = (char)((uint)iVar5 >> 8) + cVar13;
  *unaff_RBX = *unaff_RBX | bVar12;
  *(uint *)(pcVar14 + (longlong)param_1) =
       *(uint *)(pcVar14 + (longlong)param_1) & uRam000000018b53ded7;
  (&stack0xfffffffffffffff8)[unaff_RSI * 8] = (&stack0xfffffffffffffff8)[unaff_RSI * 8] + cVar13;
  uVar6 = CONCAT22(uVar1,CONCAT11(cVar11 * '\x02',
                                  (byte)iVar5 |
                                  *(byte *)(ulonglong)CONCAT22(uVar1,CONCAT11(cVar11,(byte)iVar5))))
  ;
  piVar9 = (int *)((ulonglong)(uVar6 | *(uint *)(ulonglong)uVar6) | 0x74);
  iVar5 = (int)piVar9 + *piVar9;
  bVar4 = (byte)((uint)iVar5 >> 8);
  *(byte *)((longlong)pcVar14 * 2) = *(byte *)((longlong)pcVar14 * 2) | bVar4;
  uVar2 = (undefined3)((uint)iVar5 >> 8);
  cVar11 = (byte)iVar5 + 0x54;
  uVar6 = CONCAT31(uVar2,cVar11);
  piVar9 = (int *)(ulonglong)uVar6;
  *piVar9 = *piVar9 + uVar6 + (uint)(0xab < (byte)iVar5);
  pbVar8 = (byte *)(pcVar14 + unaff_RBP + 0x158cf900);
  *pbVar8 = *pbVar8 >> 1 | *pbVar8 << 7;
  *(char *)((longlong)piVar9 + 9) = *(char *)((longlong)piVar9 + 9) + bVar4;
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
  *(char *)piVar9 = (char)*piVar9 + cVar11;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar2,cVar11 + cVar13);
  pcVar10[9] = pcVar10[9] + bVar4;
  *param_4 = *param_4 + (char)&stack0xfffffffffffffff8;
  *pcVar14 = *pcVar14 + bVar12;
  *pcVar10 = *pcVar10 + cVar11 + cVar13;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

