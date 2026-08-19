// Function: FUN_1404be2d4
// Addr: 1404be2d4
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404be2eb) overlaps instruction at (ram,0x0001404be2e9)
    */

void FUN_1404be2d4(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  uint3 uVar4;
  uint uVar5;
  char cVar11;
  char *in_RAX;
  uint *puVar6;
  int *piVar7;
  byte bVar12;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar13;
  char cVar14;
  char cVar15;
  undefined2 uVar16;
  undefined4 uVar17;
  byte *unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char cVar10;
  
  uVar17 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar16 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar15 = (char)((ulonglong)param_2 >> 8);
  cVar14 = (char)param_2;
  uVar1 = *(uint *)(unaff_RBP + 0x4b08d400);
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x4c] = in_RAX[-0x4c] + cVar14;
  uVar5 = (uint)in_RAX & 0x25b46300;
  uVar3 = (undefined2)(uVar5 >> 0x10);
  cVar10 = (char)(uVar5 >> 8) + cVar14;
  uVar4 = CONCAT21(uVar3,cVar10);
  puVar6 = (uint *)((ulonglong)uVar4 << 8);
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *puVar6 = *puVar6 & (uint)uVar4 << 8;
  *(char *)puVar6 = (char)*puVar6;
  cVar10 = cVar10 + cVar15;
  puVar8 = (undefined1 *)((ulonglong)CONCAT21(uVar3,cVar10) << 8);
  *puVar8 = *puVar8;
  cVar10 = cVar10 * '\x02';
  uVar4 = CONCAT21(uVar3,cVar10);
  puVar6 = (uint *)((ulonglong)uVar4 << 8);
  *puVar6 = *puVar6 | (uint)uVar4 << 8;
  cVar10 = cVar10 + cVar14;
  cVar11 = *(char *)((ulonglong)CONCAT21(uVar3,cVar10) << 8);
  uVar5 = CONCAT22(uVar3,CONCAT11(cVar10 + cVar11,cVar11));
  uVar5 = uVar5 | *(uint *)(ulonglong)uVar5;
  param_1[CONCAT71(unaff_00000021,unaff_SPL)] = param_1[CONCAT71(unaff_00000021,unaff_SPL)] + cVar15
  ;
  param_1[param_2] = param_1[param_2] + (char)(uVar5 >> 8);
  pcVar9 = (char *)((ulonglong)uVar5 + param_2);
  *pcVar9 = *pcVar9 + cVar14;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar15;
  pcVar9 = (char *)((ulonglong)uVar5 - 0x4c);
  *pcVar9 = *pcVar9 + cVar14;
  uVar3 = (undefined2)((uVar5 & 0x25b46300) >> 0x10);
  cVar11 = (char)((uVar5 & 0x25b46300) >> 8) + cVar14;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *(uint *)(param_1 + param_2) = *(uint *)(param_1 + param_2) & (uint)param_2;
  pcVar9 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (ulonglong)uVar1 * 8);
  *pcVar9 = *pcVar9 + cVar14;
  uVar1 = CONCAT22(uVar3,CONCAT11(cVar11 * '\x02',
                                  *(undefined1 *)((ulonglong)CONCAT21(uVar3,cVar11) << 8)));
  piVar7 = (int *)((ulonglong)(uVar1 | *(uint *)(ulonglong)uVar1) | 0x74);
  iVar2 = (int)piVar7 + *piVar7;
  bVar12 = (byte)((uint)iVar2 >> 8);
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar12;
  uVar4 = (uint3)((uint)iVar2 >> 8);
  cVar11 = (byte)iVar2 + 0x54;
  uVar1 = CONCAT31(uVar4,cVar11);
  piVar7 = (int *)(ulonglong)uVar1;
  *piVar7 = *piVar7 + uVar1 + (uint)(0xab < (byte)iVar2);
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || *piVar7 == 0) {
    puVar8 = (undefined1 *)((ulonglong)(uVar4 & 0x25b609) * 0x100);
    cVar11 = (char)(uVar4 & 0x25b609);
    puVar8[9] = puVar8[9] + cVar11;
    *param_4 = *param_4 + unaff_SPL;
    *puVar8 = *puVar8;
    pcVar9 = (char *)(ulonglong)(CONCAT31(uVar4,cVar11) & 0x25b609ff);
    cVar10 = (char)param_1;
    pcVar13 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x25,cVar10));
    *pcVar13 = *pcVar13 + cVar10;
    pcVar9[9] = pcVar9[9] + cVar11;
    *param_4 = *param_4 + unaff_SPL;
    *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(0x25,cVar14))) =
         *(char *)CONCAT44(uVar17,CONCAT22(uVar16,CONCAT11(0x25,cVar14))) + cVar10;
    *pcVar9 = *pcVar9 + cVar11;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = *param_1 + bVar12;
  *(char *)piVar7 = (char)*piVar7 + cVar14;
  *(char *)piVar7 = (char)*piVar7 + cVar11;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

