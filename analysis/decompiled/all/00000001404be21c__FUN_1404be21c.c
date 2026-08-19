// Function: FUN_1404be21c
// Addr: 1404be21c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be21c(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  uint3 uVar4;
  uint uVar5;
  undefined2 uVar6;
  byte bVar7;
  uint uVar8;
  char cVar12;
  undefined8 in_RAX;
  undefined6 uVar13;
  uint *puVar9;
  int *piVar10;
  undefined1 *puVar11;
  char cVar14;
  char cVar15;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  cVar15 = (char)((ulonglong)param_2 >> 8);
  cVar14 = (char)param_2;
  uVar13 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar12 = (char)((ulonglong)in_RAX >> 8) + cVar14;
  bVar7 = (byte)in_RAX | *(byte *)CONCAT62(uVar13,CONCAT11(cVar12,(byte)in_RAX));
  puVar9 = (uint *)CONCAT62(uVar13,CONCAT11(cVar12 + bVar7,bVar7));
  uVar8 = (uint)puVar9 | *puVar9;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + param_1);
  *pcVar1 = *pcVar1 + cVar15;
  cVar12 = (char)(uVar8 >> 8);
  param_2[param_1] = param_2[param_1] + cVar12;
  param_2[uVar8] = param_2[uVar8] + cVar14;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar15;
  uVar6 = (undefined2)(uVar8 >> 0x10);
  cVar12 = cVar12 + cVar14;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL + cVar15) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL + cVar15) | (byte)param_1;
  *(uint *)(param_2 + param_1) = *(uint *)(param_2 + param_1) & (uint)param_2;
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar14;
  puVar9 = (uint *)((ulonglong)
                    CONCAT22(uVar6,CONCAT11(cVar12 * '\x02',
                                            *(undefined1 *)
                                             (ulonglong)CONCAT22(uVar6,CONCAT11(cVar12,0x25)))) |
                   0x25);
  piVar10 = (int *)((ulonglong)((uint)puVar9 | *puVar9) | 0x74);
  iVar3 = (int)piVar10 + *piVar10;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar3 >> 8);
  uVar4 = (uint3)((uint)iVar3 >> 8);
  uVar5 = CONCAT31(uVar4,(byte)iVar3 + 0x54);
  piVar10 = (int *)(ulonglong)uVar5;
  uVar8 = (uint)(0xab < (byte)iVar3);
  iVar3 = *piVar10;
  iVar2 = *piVar10;
  *piVar10 = iVar2 + uVar5 + uVar8;
  if (SCARRY4(iVar3,uVar5) == SCARRY4(iVar2 + uVar5,uVar8)) {
    uVar4 = uVar4 & 0x25b299;
    puVar11 = (undefined1 *)((ulonglong)uVar4 * 0x100);
    puVar11[9] = puVar11[9] + (char)uVar4;
    *param_4 = *param_4 + unaff_SPL;
    *puVar11 = *puVar11;
    puVar11[-0x4e] = puVar11[-0x4e] + cVar15;
    puVar11 = (undefined1 *)((ulonglong)uVar4 * 0x100);
    puVar11[9] = puVar11[9] + (char)uVar4;
    *param_4 = *param_4 + unaff_SPL;
    *param_2 = *param_2 + (byte)param_1;
    *puVar11 = *puVar11;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

