// Function: FUN_1404be2f8
// Addr: 1404be2f8
// Size: 1 bytes


void FUN_1404be2f8(longlong param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  undefined2 uVar2;
  uint3 uVar3;
  byte bVar4;
  uint uVar5;
  char cVar10;
  undefined8 in_RAX;
  undefined6 uVar11;
  uint *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char cVar12;
  char *pcVar13;
  char cVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  cVar14 = (char)param_2;
  uVar11 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar10 = (char)((ulonglong)in_RAX >> 8) + cVar14;
  bVar4 = (byte)in_RAX | *(byte *)CONCAT62(uVar11,CONCAT11(cVar10,(byte)in_RAX));
  puVar6 = (uint *)CONCAT62(uVar11,CONCAT11(cVar10 + bVar4,bVar4));
  uVar5 = (uint)puVar6 | *puVar6;
  pcVar13 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_1);
  *pcVar13 = *pcVar13 + cVar12;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)(uVar5 >> 8);
  pcVar13 = (char *)((ulonglong)uVar5 + param_2);
  *pcVar13 = *pcVar13 + cVar14;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar12;
  pcVar13 = (char *)((ulonglong)uVar5 - 0x4c);
  *pcVar13 = *pcVar13 + cVar14;
  uVar2 = (undefined2)((uVar5 & 0x25b46300) >> 0x10);
  cVar10 = (char)((uVar5 & 0x25b46300) >> 8) + cVar14;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
  pcVar13 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar13 = *pcVar13 + cVar14;
  uVar5 = CONCAT22(uVar2,CONCAT11(cVar10 * '\x02',
                                  *(undefined1 *)((ulonglong)CONCAT21(uVar2,cVar10) << 8)));
  piVar7 = (int *)((ulonglong)(uVar5 | *(uint *)(ulonglong)uVar5) | 0x74);
  iVar1 = (int)piVar7 + *piVar7;
  bVar4 = (byte)((uint)iVar1 >> 8);
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar4;
  uVar3 = (uint3)((uint)iVar1 >> 8);
  cVar10 = (byte)iVar1 + 0x54;
  uVar5 = CONCAT31(uVar3,cVar10);
  piVar7 = (int *)(ulonglong)uVar5;
  *piVar7 = *piVar7 + uVar5 + (uint)(0xab < (byte)iVar1);
  pcVar13 = (char *)(param_1 + -1);
  if (pcVar13 == (char *)0x0 || *piVar7 == 0) {
    puVar8 = (undefined1 *)((ulonglong)(uVar3 & 0x25b609) * 0x100);
    cVar10 = (char)(uVar3 & 0x25b609);
    puVar8[9] = puVar8[9] + cVar10;
    *param_4 = *param_4 + unaff_SPL;
    *puVar8 = *puVar8;
    pcVar9 = (char *)(ulonglong)(CONCAT31(uVar3,cVar10) & 0x25b609ff);
    cVar12 = (char)pcVar13;
    pcVar13 = (char *)CONCAT62((int6)((ulonglong)pcVar13 >> 0x10),CONCAT11(0x25,cVar12));
    *pcVar13 = *pcVar13 + cVar12;
    pcVar9[9] = pcVar9[9] + cVar10;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(0x25,cVar14))) =
         *(char *)CONCAT44(uVar16,CONCAT22(uVar15,CONCAT11(0x25,cVar14))) + cVar12;
    *pcVar9 = *pcVar9 + cVar10;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *pcVar13 = *pcVar13 + bVar4;
  *(char *)piVar7 = (char)*piVar7 + cVar14;
  *(char *)piVar7 = (char)*piVar7 + cVar10;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

