// Function: FUN_1404be35c
// Addr: 1404be35c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404be397) overlaps instruction at (ram,0x0001404be396)
    */

void FUN_1404be35c(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  int iVar1;
  uint3 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar11;
  uint *puVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  byte *in_RAX;
  byte *pbVar10;
  char cVar12;
  byte bVar13;
  char *pcVar14;
  longlong lVar15;
  byte bVar16;
  undefined2 uVar17;
  char unaff_BL;
  char cVar18;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte unaff_retaddr;
  undefined1 auStack_8 [7];
  char cStack_1;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar17 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar12 = (char)((ulonglong)param_2 >> 8);
  bVar16 = (byte)param_2;
  param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + cVar12;
  cVar11 = (char)((ulonglong)in_RAX >> 8);
  *(char *)((longlong)param_2 * 2) = *(char *)((longlong)param_2 * 2) + cVar11;
  pcVar14 = param_2 + param_1;
  *pcVar14 = *pcVar14 + bVar16;
  lVar15 = param_1 + -1;
  if (lVar15 != 0 && *pcVar14 != '\0') {
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + bVar16;
    puVar6 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11(cVar11 * '\x02',(byte)in_RAX | *in_RAX));
    piVar7 = (int *)((ulonglong)((uint)puVar6 | *puVar6) | 0x74);
    iVar1 = (int)piVar7 + *piVar7;
    bVar3 = (byte)((uint)iVar1 >> 8);
    *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | bVar3;
    uVar2 = (uint3)((uint)iVar1 >> 8);
    cVar11 = (byte)iVar1 + 0x54;
    uVar4 = CONCAT31(uVar2,cVar11);
    piVar7 = (int *)(ulonglong)uVar4;
    *piVar7 = *piVar7 + uVar4 + (uint)(0xab < (byte)iVar1);
    pcVar14 = (char *)(param_1 + -2);
    if (pcVar14 == (char *)0x0 || *piVar7 == 0) {
      puVar8 = (undefined1 *)((ulonglong)(uVar2 & 0x25b609) * 0x100);
      cVar11 = (char)(uVar2 & 0x25b609);
      puVar8[9] = puVar8[9] + cVar11;
      *param_4 = *param_4;
      *puVar8 = *puVar8;
      pcVar9 = (char *)(ulonglong)(CONCAT31(uVar2,cVar11) & 0x25b609ff);
      cVar12 = (char)pcVar14;
      pcVar14 = (char *)CONCAT62((int6)((ulonglong)pcVar14 >> 0x10),CONCAT11(0x25,cVar12));
      *pcVar14 = *pcVar14 + cVar12;
      pcVar9[9] = pcVar9[9] + cVar11;
      *param_4 = *param_4;
      *(char *)CONCAT44(uVar5,CONCAT22(uVar17,CONCAT11(0x25,bVar16))) =
           *(char *)CONCAT44(uVar5,CONCAT22(uVar17,CONCAT11(0x25,bVar16))) + cVar12;
      *pcVar9 = *pcVar9 + cVar11;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    *pcVar14 = *pcVar14 + bVar3;
    *(byte *)piVar7 = (char)*piVar7 + bVar16;
    *(char *)piVar7 = (char)*piVar7 + cVar11;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar4 = (uint)in_RAX & 0x25b60900;
  pcVar14 = (char *)(ulonglong)uVar4;
  pcVar14[9] = pcVar14[9] + (char)(uVar4 >> 8);
  *param_4 = *param_4;
  if ((POPCOUNT(*param_4) & 1U) != 0) {
    param_2[-0x3c] = param_2[-0x3c] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar14 = *pcVar14 + bVar16;
  piVar7 = (int *)(ulonglong)uVar4;
  bVar13 = (byte)lVar15;
  *piVar7 = *piVar7 + uVar4 + (uint)CARRY1(unaff_retaddr,bVar13);
  *(byte *)((longlong)piVar7 + (longlong)param_2) =
       *(byte *)((longlong)piVar7 + (longlong)param_2) | bVar16;
  uVar5 = LocalDescriptorTableRegister();
  cVar18 = unaff_BL + bVar16;
  uVar17 = (undefined2)((uint)uVar5 >> 0x10);
  cVar11 = (char)((uint)uVar5 >> 8) + bVar16;
  uVar4 = CONCAT22(uVar17,CONCAT11(cVar11,(char)uVar5));
  puVar6 = (uint *)(ulonglong)uVar4;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar18)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar18)) | bVar13;
  *puVar6 = *puVar6 & uVar4;
  bVar3 = (char)uVar5 + (char)*puVar6;
  cVar11 = cVar11 * '\x02';
  uVar4 = CONCAT22(uVar17,CONCAT11(cVar11,bVar3));
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  *(char *)(unaff_RDI + -0x482cffdb) = *(char *)(unaff_RDI + -0x482cffdb) << 5;
  cVar11 = cVar11 + bVar16;
  uVar4 = CONCAT22(uVar17,CONCAT11(cVar11,bVar3));
  puVar6 = (uint *)(ulonglong)uVar4;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar18)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar18)) | bVar13;
  *puVar6 = *puVar6 & uVar4;
  *(byte *)puVar6 = (char)*puVar6 + bVar3;
  *(char *)(unaff_RDI + -0x482cffdb) = *(char *)(unaff_RDI + -0x482cffdb) << 5;
  cVar11 = cVar11 + bVar16;
  uVar4 = CONCAT22(uVar17,CONCAT11(cVar11,bVar3));
  puVar6 = (uint *)(ulonglong)uVar4;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar18)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar18)) | bVar13;
  *puVar6 = *puVar6 & uVar4;
  *(byte *)puVar6 = (char)*puVar6 + bVar3;
  cVar11 = cVar11 + cVar12;
  pbVar10 = (byte *)(ulonglong)CONCAT22(uVar17,CONCAT11(cVar11,bVar3));
  *pbVar10 = *pbVar10 | bVar3;
  cVar11 = cVar11 * '\x02';
  uVar4 = CONCAT22(uVar17,CONCAT11(cVar11,bVar3));
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  cVar11 = cVar11 + bVar16;
  bVar3 = bVar3 | *(byte *)(ulonglong)CONCAT22(uVar17,CONCAT11(cVar11,bVar3));
  uVar4 = CONCAT22(uVar17,CONCAT11(cVar11 + bVar3,bVar3));
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  (&cStack_1)[param_1] = (&cStack_1)[param_1] + cVar12;
  cVar11 = (char)(uVar4 >> 8);
  param_2[lVar15] = param_2[lVar15] + cVar11;
  param_2[uVar4] = param_2[uVar4] + bVar16;
  *(char *)(unaff_RDI + lVar15) = *(char *)(unaff_RDI + lVar15) + cVar12;
  bVar3 = (char)uVar4 * '\x02';
  uVar17 = (undefined2)(uVar4 >> 0x10);
  cVar11 = cVar11 + bVar16;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar18 + bVar16)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(0x25,cVar18 + bVar16)) | bVar13;
  *(uint *)(param_2 + lVar15) = *(uint *)(param_2 + lVar15) & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + bVar16;
  uVar4 = CONCAT22(uVar17,CONCAT11(cVar11 * '\x02',
                                   bVar3 | *(byte *)(ulonglong)
                                                    CONCAT22(uVar17,CONCAT11(cVar11,bVar3))));
  piVar7 = (int *)((ulonglong)(uVar4 | *(uint *)(ulonglong)uVar4) | 0x74);
  iVar1 = (int)piVar7 + *piVar7;
  *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar1 >> 8);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  uVar4 = CONCAT31(uVar2,(byte)iVar1 + 0x54);
  *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4 + (uint)(0xab < (byte)iVar1);
  uVar4 = (uVar2 & 0x4b0960) << 8;
  puVar8 = (undefined1 *)(ulonglong)uVar4;
  *puVar8 = *puVar8;
  puVar8[-0x47] = puVar8[-0x47] + bVar16;
  uVar4 = uVar4 & 0x25b97900;
  puVar8 = (undefined1 *)(ulonglong)uVar4;
  puVar8[9] = puVar8[9] + (char)(uVar4 >> 8);
  *param_4 = *param_4 + (char)auStack_8;
  *param_2 = *param_2 + '%';
  *puVar8 = *puVar8;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

