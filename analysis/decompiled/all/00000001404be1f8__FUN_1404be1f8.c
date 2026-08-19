// Function: FUN_1404be1f8
// Addr: 1404be1f8
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404be20c) overlaps instruction at (ram,0x0001404be20b)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be1f8(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  uint3 uVar6;
  uint uVar7;
  uint uVar8;
  char cVar13;
  int *piVar9;
  uint *puVar10;
  undefined8 in_RAX;
  ulonglong uVar11;
  char cVar14;
  undefined1 *puVar12;
  byte bVar16;
  byte bVar18;
  byte bVar19;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined6 uVar15;
  char *pcVar17;
  
  bVar19 = (byte)((ulonglong)param_2 >> 8);
  bVar18 = (byte)param_2;
  uVar11 = CONCAT71((int7)((ulonglong)in_RAX >> 8),0x25);
  while( true ) {
    puVar10 = (uint *)CONCAT62((int6)(uVar11 >> 0x10),
                               CONCAT11((char)(uVar11 >> 8) + bVar18,(char)uVar11));
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | (byte)param_1;
    uVar8 = (uint)puVar10;
    *puVar10 = *puVar10 & uVar8;
    *(char *)puVar10 = (char)*puVar10 + (char)uVar11;
    pcVar17 = param_1 + -1;
    bVar16 = (byte)pcVar17;
    if (pcVar17 == (char *)0x0 || (char)*puVar10 == '\0') {
      uVar5 = (undefined2)((uVar8 & 0x25b0f300) >> 0x10);
      cVar13 = (char)((uVar8 & 0x25b0f300) >> 8) + bVar18;
      uVar6 = CONCAT21(uVar5,cVar13);
      puVar10 = (uint *)((ulonglong)uVar6 << 8);
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
           *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar16;
      *puVar10 = *puVar10 & (uint)uVar6 << 8;
      *(char *)puVar10 = (char)*puVar10;
      cVar13 = cVar13 + bVar19;
      puVar12 = (undefined1 *)((ulonglong)CONCAT21(uVar5,cVar13) << 8);
      *puVar12 = *puVar12;
      cVar13 = cVar13 * '\x02';
      uVar6 = CONCAT21(uVar5,cVar13);
      puVar10 = (uint *)((ulonglong)uVar6 << 8);
      *puVar10 = *puVar10 | (uint)uVar6 << 8;
      cVar13 = cVar13 + bVar18;
      cVar14 = *(char *)((ulonglong)CONCAT21(uVar5,cVar13) << 8);
      uVar8 = CONCAT22(uVar5,CONCAT11(cVar13 + cVar14,cVar14));
      uVar8 = uVar8 | *(uint *)(ulonglong)uVar8;
      pcVar17[CONCAT71(unaff_00000021,unaff_SPL)] =
           pcVar17[CONCAT71(unaff_00000021,unaff_SPL)] + bVar19;
      cVar14 = (char)(uVar8 >> 8);
      pcVar17[(longlong)param_2] = pcVar17[(longlong)param_2] + cVar14;
      param_2[uVar8] = param_2[uVar8] + bVar18;
      pcVar17[unaff_RDI] = pcVar17[unaff_RDI] + bVar19;
      uVar5 = (undefined2)(uVar8 >> 0x10);
      cVar14 = cVar14 + bVar18;
      *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL + bVar19)) =
           *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL + bVar19)) | bVar16;
      *(uint *)(pcVar17 + (longlong)param_2) =
           *(uint *)(pcVar17 + (longlong)param_2) & (uint)param_2;
      pcVar17 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
      *pcVar17 = *pcVar17 + bVar18;
      puVar10 = (uint *)((ulonglong)
                         CONCAT22(uVar5,CONCAT11(cVar14 * '\x02',
                                                 *(undefined1 *)
                                                  (ulonglong)CONCAT22(uVar5,CONCAT11(cVar14,0x25))))
                        | 0x25);
      piVar9 = (int *)((ulonglong)((uint)puVar10 | *puVar10) | 0x74);
      iVar4 = (int)piVar9 + *piVar9;
      *(byte *)((longlong)param_2 * 2) = *(byte *)((longlong)param_2 * 2) | (byte)((uint)iVar4 >> 8)
      ;
      uVar6 = (uint3)((uint)iVar4 >> 8);
      uVar7 = CONCAT31(uVar6,(byte)iVar4 + 0x54);
      piVar9 = (int *)(ulonglong)uVar7;
      uVar8 = (uint)(0xab < (byte)iVar4);
      iVar4 = *piVar9;
      iVar3 = *piVar9;
      *piVar9 = iVar3 + uVar7 + uVar8;
      if (SCARRY4(iVar4,uVar7) != SCARRY4(iVar3 + uVar7,uVar8)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar6 = uVar6 & 0x25b299;
      puVar12 = (undefined1 *)((ulonglong)uVar6 * 0x100);
      puVar12[9] = puVar12[9] + (char)uVar6;
      *param_4 = *param_4 + unaff_SPL;
      *puVar12 = *puVar12;
      puVar12[-0x4e] = puVar12[-0x4e] + bVar19;
      puVar12 = (undefined1 *)((ulonglong)uVar6 * 0x100);
      puVar12[9] = puVar12[9] + (char)uVar6;
      *param_4 = *param_4 + unaff_SPL;
      *param_2 = *param_2 + bVar16;
      *puVar12 = *puVar12;
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar8 = uVar8 & 0x4a0ab400;
    piVar9 = (int *)(ulonglong)uVar8;
    cVar14 = (char)(uVar8 >> 8);
    *pcVar17 = *pcVar17 + cVar14;
    if ((POPCOUNT(*pcVar17) & 1U) != 0) break;
    *(byte *)piVar9 = (char)*piVar9 + bVar18;
    if ((char)*piVar9 == '\0') {
      piVar9 = (int *)(ulonglong)CONCAT31((int3)(uVar8 >> 8),cVar14);
    }
    bVar2 = *(byte *)CONCAT71(unaff_00000021,unaff_SPL);
    *(byte *)CONCAT71(unaff_00000021,unaff_SPL) =
         *(char *)CONCAT71(unaff_00000021,unaff_SPL) + bVar16;
    *piVar9 = *piVar9 + (int)piVar9 + (uint)CARRY1(bVar2,bVar16);
    *(byte *)((longlong)piVar9 + (longlong)param_2) =
         *(byte *)((longlong)piVar9 + (longlong)param_2) | bVar18;
    verr();
    unaff_BL = unaff_BL + bVar19;
    uVar15 = (undefined6)((ulonglong)piVar9 >> 0x10);
    cVar14 = (char)((ulonglong)piVar9 >> 8) + bVar18;
    puVar10 = (uint *)CONCAT62(uVar15,CONCAT11(cVar14,0x25));
    *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar16;
    *puVar10 = *puVar10 & (uint)puVar10;
    puVar10 = (uint *)CONCAT62(uVar15,CONCAT11(cVar14 * '\x02',(char)*puVar10 + '%'));
    uVar8 = (uint)puVar10;
    *puVar10 = *puVar10 | uVar8;
    param_1 = param_1 + -2;
    if (param_1 != (char *)0x0 && *puVar10 != 0) {
      uVar8 = uVar8 & 0x4a0ab400;
      pcVar17 = (char *)(ulonglong)uVar8;
      cVar14 = (char)(uVar8 >> 8);
      *param_1 = *param_1 + cVar14;
      *pcVar17 = *pcVar17;
      *pcVar17 = *pcVar17 + cVar14;
      uVar8 = (uVar8 >> 8 & 0x25ac31) << 8;
      pcVar17 = (char *)(ulonglong)uVar8;
      pbVar1 = (byte *)(param_1 + (longlong)(param_2 + 0x7a21004a));
      bVar16 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar19;
      *pcVar17 = *pcVar17 + CARRY1(bVar16,bVar19);
      if ((POPCOUNT(*pcVar17) & 1U) != 0) {
        halt_baddata();
      }
      pcVar17 = (char *)(unaff_RBP + 0x1a21004b + (ulonglong)(uVar8 & 0x25ab4800));
      *pcVar17 = *pcVar17 + bVar18;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar11 = (ulonglong)(uVar8 & 0x25b0f300);
  }
  param_2[-0x3c] = param_2[-0x3c] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

