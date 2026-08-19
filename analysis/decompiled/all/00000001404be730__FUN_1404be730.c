// Function: FUN_1404be730
// Addr: 1404be730
// Size: 1 bytes


void FUN_1404be730(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined2 uVar5;
  uint3 uVar6;
  byte bVar7;
  uint uVar8;
  char cVar13;
  undefined8 in_RAX;
  uint *puVar9;
  undefined7 uVar14;
  int *piVar10;
  longlong lVar11;
  undefined1 *puVar12;
  byte bVar15;
  byte bVar16;
  char cVar17;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  
  cVar17 = (char)((ulonglong)param_2 >> 8);
  bVar16 = (byte)param_2;
  bVar15 = (byte)param_1;
  puVar9 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(-in_CF,(char)in_RAX));
  *puVar9 = *puVar9 | (uint)puVar9;
  bVar3 = (char)in_RAX - 0x2c;
  uVar14 = (undefined7)((ulonglong)puVar9 >> 8);
  bVar7 = *(byte *)CONCAT71(uVar14,bVar3);
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_1);
  *pcVar1 = *pcVar1 + cVar17;
  piVar10 = (int *)(CONCAT71(uVar14,bVar3 | bVar7) | 100);
  *piVar10 = *piVar10 + (int)piVar10;
  *(byte *)((longlong)piVar10 + (longlong)param_2) =
       *(byte *)((longlong)piVar10 + (longlong)param_2) | bVar16;
  lVar11 = CONCAT71(uVar14,(char)piVar10 + '4');
  uVar2 = LocalDescriptorTableRegister();
  *(undefined4 *)(lVar11 + -0x15) = uVar2;
  uVar8 = (uint)lVar11 & 0x25eb5300;
  uVar5 = (undefined2)(uVar8 >> 0x10);
  cVar13 = (char)(uVar8 >> 8) + bVar16;
  uVar6 = CONCAT21(uVar5,cVar13);
  puVar9 = (uint *)((ulonglong)uVar6 << 8);
  *unaff_RBX = *unaff_RBX | bVar15;
  *puVar9 = *puVar9 & (uint)uVar6 << 8;
  bVar7 = (byte)*puVar9;
  cVar13 = cVar13 * '\x02';
  uVar8 = CONCAT22(uVar5,CONCAT11(cVar13,bVar7));
  *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
  cVar13 = cVar13 + bVar16;
  bVar7 = bVar7 | *(byte *)(ulonglong)CONCAT22(uVar5,CONCAT11(cVar13,bVar7));
  uVar8 = CONCAT22(uVar5,CONCAT11(cVar13 + bVar7,bVar7));
  uVar8 = uVar8 | *(uint *)(ulonglong)uVar8;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_1);
  *pcVar1 = *pcVar1 + cVar17;
  param_2[param_1] = param_2[param_1] + (char)(uVar8 >> 8);
  param_2[uVar8] = param_2[uVar8] + bVar16;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar17;
  pcVar1 = (char *)((ulonglong)uVar8 - 0x15);
  *pcVar1 = *pcVar1 + (char)uVar8;
  uVar5 = (undefined2)((uVar8 & 0x25eb5300) >> 0x10);
  cVar13 = (char)((uVar8 & 0x25eb5300) >> 8) + bVar16;
  *unaff_RBX = *unaff_RBX | bVar15;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + bVar16;
  uVar8 = CONCAT22(uVar5,CONCAT11(cVar13 * '\x02',
                                  *(undefined1 *)((ulonglong)CONCAT21(uVar5,cVar13) << 8)));
  piVar10 = (int *)((ulonglong)(uVar8 | *(uint *)(ulonglong)uVar8) | 0x74);
  iVar4 = (int)piVar10 + *piVar10;
  bVar7 = (byte)((uint)iVar4 >> 8);
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | bVar7;
  uVar8 = CONCAT31((int3)((uint)iVar4 >> 8),(byte)iVar4 + 0x54);
  *(int *)(ulonglong)uVar8 = *(int *)(ulonglong)uVar8 + uVar8 + (uint)(0xab < (byte)iVar4);
  uVar6 = CONCAT21((short)((uint)iVar4 >> 0x10),bVar7 >> 1) & 0x25ecf9;
  puVar12 = (undefined1 *)((ulonglong)uVar6 * 0x100);
  puVar12[9] = puVar12[9] + (char)uVar6;
  *param_4 = *param_4 + unaff_SPL;
  *puVar12 = *puVar12;
  in((short)param_2);
  puVar12 = (undefined1 *)((ulonglong)uVar6 * 0x100);
  puVar12[9] = puVar12[9] + (char)uVar6;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + bVar15;
  *puVar12 = *puVar12;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

