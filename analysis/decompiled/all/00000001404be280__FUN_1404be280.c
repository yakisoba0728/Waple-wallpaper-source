// Function: FUN_1404be280
// Addr: 1404be280
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404be2eb) overlaps instruction at (ram,0x0001404be2e9)
    */

void FUN_1404be280(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  undefined2 uVar5;
  uint uVar6;
  char cVar11;
  uint *puVar7;
  int *piVar8;
  undefined1 *puVar9;
  byte *in_RAX;
  char cVar12;
  byte bVar13;
  char *pcVar10;
  char *pcVar14;
  byte bVar15;
  char cVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte unaff_retaddr;
  uint *puStack_8;
  
  uVar18 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar17 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar16 = (char)((ulonglong)param_2 >> 8);
  bVar15 = (byte)param_2;
  param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + cVar16;
  cVar12 = (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)param_2 * 2) = *(char *)((longlong)param_2 * 2) + cVar12;
  pcVar10 = param_1 + (longlong)param_2;
  cVar11 = *pcVar10;
  *pcVar10 = *pcVar10 + bVar15;
  bVar13 = (byte)param_1;
  if (SCARRY1(cVar11,bVar15)) {
    *(uint *)(param_1 + (longlong)param_2) = *(uint *)(param_1 + (longlong)param_2) & (uint)param_2;
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + bVar15;
    puVar7 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11(cVar12 * '\x02',(byte)in_RAX | *in_RAX));
    piVar8 = (int *)((ulonglong)((uint)puVar7 | *puVar7) | 0x74);
    iVar2 = (int)piVar8 + *piVar8;
    *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar2 >> 8);
    uVar3 = (uint3)((uint)iVar2 >> 8);
    uVar4 = CONCAT31(uVar3,(byte)iVar2 + 0x54);
    piVar8 = (int *)(ulonglong)uVar4;
    uVar6 = (uint)(0xab < (byte)iVar2);
    iVar2 = *piVar8;
    iVar1 = *piVar8;
    *piVar8 = iVar1 + uVar4 + uVar6;
    if (SCARRY4(iVar2,uVar4) == SCARRY4(iVar1 + uVar4,uVar6)) {
      uVar3 = uVar3 & 0x25b299;
      puVar9 = (undefined1 *)((ulonglong)uVar3 * 0x100);
      puVar9[9] = puVar9[9] + (char)uVar3;
      *param_4 = *param_4;
      *puVar9 = *puVar9;
      puVar9[-0x4e] = puVar9[-0x4e] + cVar16;
      puVar9 = (undefined1 *)((ulonglong)uVar3 * 0x100);
      puVar9[9] = puVar9[9] + (char)uVar3;
      *param_4 = *param_4;
      *param_2 = *param_2 + bVar13;
      *puVar9 = *puVar9;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (uint)in_RAX & 0x25b29900;
  piVar8 = (int *)(ulonglong)uVar6;
  *(char *)((longlong)piVar8 + 9) = *(char *)((longlong)piVar8 + 9) + (char)(uVar6 >> 8);
  *param_4 = *param_4;
  if ((POPCOUNT(*param_4) & 1U) != 0) {
    param_2[-0x3c] = param_2[-0x3c] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)piVar8 = (char)*piVar8 + bVar15;
  if ((char)*piVar8 == '\0') {
    *(byte *)(piVar8 + -0x13) = (char)piVar8[-0x13] + bVar15;
  }
  *piVar8 = *piVar8 + uVar6 + (uint)CARRY1(unaff_retaddr,bVar13);
  *(byte *)((longlong)piVar8 + (longlong)param_2) =
       *(byte *)((longlong)piVar8 + (longlong)param_2) | bVar15;
  uVar3 = (uint3)(uVar6 >> 8);
  LocalDescriptorTableRegister(*(undefined2 *)((ulonglong)CONCAT31(uVar3,0x34) - 0x4c));
  uVar6 = uVar3 & 0x25b463;
  uVar5 = (undefined2)(uVar6 >> 8);
  cVar11 = (char)uVar6 + bVar15;
  uVar3 = CONCAT21(uVar5,cVar11);
  puVar7 = (uint *)((ulonglong)uVar3 << 8);
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar13;
  *puVar7 = *puVar7 & (uint)uVar3 << 8;
  uVar6 = CONCAT22(uVar5,CONCAT11(cVar11 * '\x02',(char)*puVar7));
  puStack_8 = (uint *)(ulonglong)uVar6;
  *puStack_8 = *puStack_8 | uVar6;
  pcVar10 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x4c);
  *pcVar10 = *pcVar10 + '%';
  uVar6 = CONCAT22(uVar5,0x2500) & 0x4b08d400;
  puVar9 = (undefined1 *)(ulonglong)uVar6;
  *param_1 = *param_1 + (char)(uVar6 >> 8);
  *puVar9 = *puVar9;
  puVar9[-0x4c] = puVar9[-0x4c] + bVar15;
  uVar3 = CONCAT21(uVar5,bVar15) & 0x100ff;
  puVar7 = (uint *)((ulonglong)uVar3 << 8);
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar13;
  *puVar7 = *puVar7 & (uint)uVar3 << 8;
  *(char *)puVar7 = (char)*puVar7;
  puVar9 = (undefined1 *)((ulonglong)(CONCAT21(uVar5,bVar15 + cVar16) & 0x100ff) << 8);
  *puVar9 = *puVar9;
  cVar12 = (bVar15 + cVar16) * '\x02';
  uVar3 = CONCAT21(uVar5,cVar12) & 0x100ff;
  puVar7 = (uint *)((ulonglong)uVar3 << 8);
  *puVar7 = *puVar7 | (uint)uVar3 << 8;
  cVar12 = cVar12 + bVar15;
  cVar11 = *(char *)((ulonglong)(CONCAT21(uVar5,cVar12) & 0x100ff) << 8);
  uVar6 = CONCAT22(uVar5,CONCAT11(cVar12 + cVar11,cVar11)) & 0x100ffff;
  uVar6 = uVar6 | *(uint *)(ulonglong)uVar6;
  *(char *)((longlong)&puStack_8 + (longlong)param_1) =
       *(char *)((longlong)&puStack_8 + (longlong)param_1) + cVar16;
  param_1[(longlong)param_2] = param_1[(longlong)param_2] + (char)(uVar6 >> 8);
  param_2[uVar6] = param_2[uVar6] + bVar15;
  param_1[unaff_RDI] = param_1[unaff_RDI] + cVar16;
  pcVar10 = (char *)((ulonglong)uVar6 - 0x4c);
  *pcVar10 = *pcVar10 + bVar15;
  uVar5 = (undefined2)((uVar6 & 0x25b46300) >> 0x10);
  cVar11 = (char)((uVar6 & 0x25b46300) >> 8) + bVar15;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar13;
  *(uint *)(param_1 + (longlong)param_2) = *(uint *)(param_1 + (longlong)param_2) & (uint)param_2;
  *(byte *)(&puStack_8 + unaff_RSI) = *(char *)(&puStack_8 + unaff_RSI) + bVar15;
  uVar6 = CONCAT22(uVar5,CONCAT11(cVar11 * '\x02',
                                  *(undefined1 *)((ulonglong)CONCAT21(uVar5,cVar11) << 8)));
  piVar8 = (int *)((ulonglong)(uVar6 | *(uint *)(ulonglong)uVar6) | 0x74);
  iVar2 = (int)piVar8 + *piVar8;
  bVar13 = (byte)((uint)iVar2 >> 8);
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | bVar13;
  uVar3 = (uint3)((uint)iVar2 >> 8);
  cVar11 = (byte)iVar2 + 0x54;
  uVar6 = CONCAT31(uVar3,cVar11);
  piVar8 = (int *)(ulonglong)uVar6;
  *piVar8 = *piVar8 + uVar6 + (uint)(0xab < (byte)iVar2);
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || *piVar8 == 0) {
    puVar9 = (undefined1 *)((ulonglong)(uVar3 & 0x25b609) * 0x100);
    cVar11 = (char)(uVar3 & 0x25b609);
    puVar9[9] = puVar9[9] + cVar11;
    *param_4 = *param_4 + (char)&puStack_8;
    *puVar9 = *puVar9;
    pcVar10 = (char *)(ulonglong)(CONCAT31(uVar3,cVar11) & 0x25b609ff);
    cVar12 = (char)param_1;
    pcVar14 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x25,cVar12));
    *pcVar14 = *pcVar14 + cVar12;
    pcVar10[9] = pcVar10[9] + cVar11;
    *param_4 = *param_4 + (char)&puStack_8;
    *(char *)CONCAT44(uVar18,CONCAT22(uVar17,CONCAT11(0x25,bVar15))) =
         *(char *)CONCAT44(uVar18,CONCAT22(uVar17,CONCAT11(0x25,bVar15))) + cVar12;
    *pcVar10 = *pcVar10 + cVar11;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = *param_1 + bVar13;
  *(byte *)piVar8 = (char)*piVar8 + bVar15;
  *(char *)piVar8 = (char)*piVar8 + cVar11;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

