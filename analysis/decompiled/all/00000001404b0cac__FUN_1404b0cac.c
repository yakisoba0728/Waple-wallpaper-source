// Function: FUN_1404b0cac
// Addr: 1404b0cac
// Size: 1 bytes


void FUN_1404b0cac(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint3 uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  byte bVar14;
  int iVar8;
  char cVar13;
  undefined8 in_RAX;
  undefined6 uVar15;
  int *piVar10;
  uint *puVar11;
  char *pcVar12;
  char *pcVar16;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte *pbVar9;
  
  uVar15 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar13 = (char)((ulonglong)in_RAX >> 8) + (char)param_2;
  bVar6 = (byte)in_RAX | *(byte *)CONCAT62(uVar15,CONCAT11(cVar13,(byte)in_RAX));
  puVar11 = (uint *)CONCAT62(uVar15,CONCAT11(cVar13 + bVar6,bVar6));
  uVar7 = (uint)puVar11 | *puVar11;
  pbVar9 = (byte *)(ulonglong)uVar7;
  cVar13 = (char)((ulonglong)param_2 >> 8);
  param_1[CONCAT71(unaff_00000021,unaff_SPL)] = param_1[CONCAT71(unaff_00000021,unaff_SPL)] + cVar13
  ;
  bVar14 = (byte)(uVar7 >> 8);
  param_1[param_2] = param_1[param_2] + bVar14;
  pbVar9[param_2] = pbVar9[param_2] + (char)param_2;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar13;
  bVar6 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar14;
  pcVar16 = (char *)(ulonglong)uVar7;
  iVar8 = (int)param_2 + 0x15923300 + (uint)CARRY1(bVar6,bVar14);
  uVar3 = (undefined2)((uint)iVar8 >> 0x10);
  cVar13 = (char)((uint)iVar8 >> 8) + (char)uVar7;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *(uint *)(pcVar16 + (longlong)param_1) = *(uint *)(pcVar16 + (longlong)param_1) & uVar7;
  pcVar12 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar12 = *pcVar12 + (char)uVar7;
  uVar7 = CONCAT22(uVar3,CONCAT11(cVar13 * '\x02',
                                  (byte)iVar8 |
                                  *(byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar13,(byte)iVar8))))
  ;
  piVar10 = (int *)((ulonglong)(uVar7 | *(uint *)(ulonglong)uVar7) | 0x74);
  iVar8 = (int)piVar10 + *piVar10;
  *(byte *)((longlong)pcVar16 * 2) = *(byte *)((longlong)pcVar16 * 2) | (byte)((uint)iVar8 >> 8);
  uVar4 = (uint3)((uint)iVar8 >> 8);
  uVar5 = CONCAT31(uVar4,(byte)iVar8 + 0x54);
  puVar11 = (uint *)(ulonglong)uVar5;
  uVar2 = (uint)(0xab < (byte)iVar8);
  uVar7 = *puVar11;
  uVar1 = *puVar11;
  *puVar11 = uVar1 + uVar5 + uVar2;
  uVar7 = (int)CONCAT71((uint7)uVar4,0x93) + 0x1593d900 +
          (uint)(CARRY4(uVar7,uVar5) || CARRY4(uVar1 + uVar5,uVar2));
  pcVar12 = (char *)(ulonglong)uVar7;
  pcVar12[9] = pcVar12[9] + (char)(uVar7 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar12 = *pcVar12 + (char)uVar7;
  pbVar9 = (byte *)(pcVar12 + -0x26ffea6d);
  bVar6 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar14;
  uVar7 = (int)unaff_RBX + 0x4b096000 + (uint)CARRY1(bVar6,bVar14);
  *param_1 = *param_1 + (char)(uVar7 >> 8);
  *pcVar16 = *pcVar16 + (byte)param_1;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

