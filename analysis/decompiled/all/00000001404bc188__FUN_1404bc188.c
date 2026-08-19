// Function: FUN_1404bc188
// Addr: 1404bc188
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc215) overlaps instruction at (ram,0x0001404bc213)
    */
/* WARNING: Removing unreachable block (ram,0x0001404bc23d) */

void FUN_1404bc188(longlong param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  char cVar12;
  byte *in_RAX;
  ulonglong uVar8;
  byte *pbVar9;
  char *pcVar10;
  ulonglong uVar11;
  byte bVar13;
  byte bVar14;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  longlong unaff_RSI;
  char *pcVar15;
  undefined4 *unaff_RDI;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong in_FS_OFFSET;
  bool bVar18;
  
  bVar14 = (byte)((ulonglong)param_1 >> 8);
  bVar13 = (byte)param_1;
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  uVar8 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX & *in_RAX);
  pbVar9 = (byte *)((longlong)unaff_RDI + 5);
  *param_4 = *param_4 + unaff_SPL;
  bVar18 = CARRY1(*pbVar9,bVar13);
  *pbVar9 = *pbVar9 + bVar13;
  if (*pbVar9 != 0) {
    *param_2 = *param_2 + bVar13;
    uVar7 = (uint)uVar8;
    *(uint *)(in_FS_OFFSET + uVar8) = *(uint *)(in_FS_OFFSET + uVar8) | uVar7;
    bVar18 = 0x9ffff7cb < uVar7;
    uVar8 = (ulonglong)(uVar7 + 0x60000834);
  }
  if (bVar18) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  bVar6 = (byte)param_2;
  *(char *)(unaff_RSI + -0x3bffdd8d) = *(char *)(unaff_RSI + -0x3bffdd8d) + bVar6;
  pcVar15 = (char *)(unaff_RSI + 5);
  *(undefined4 *)pbVar9 = *(undefined4 *)(unaff_RSI + 1);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)((longlong)unaff_RDI + -0x3fffdd85) =
       *(char *)((longlong)unaff_RDI + -0x3fffdd85) + bVar14;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
       *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
       *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
  uVar7 = (int)uVar8 + 0xfa7c9604;
  pbVar9 = (byte *)(ulonglong)uVar7;
  puVar16 = (undefined4 *)((longlong)unaff_RDI + 0xd);
  bVar18 = true;
  if (uVar7 < *(uint *)((longlong)unaff_RDI + 9)) {
code_r0x0001404bc1ed:
    if (!bVar18) {
      pbVar9 = (byte *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),(char)pbVar9 * '\x02');
code_r0x0001404bc1f1:
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
           *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
      *pbVar9 = *pbVar9 + (byte)pbVar9;
      pbVar9[0x72] = pbVar9[0x72] + (char)((ulonglong)pbVar9 >> 8);
      pcVar10 = (char *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),(byte)pbVar9 & *pbVar9);
      uVar8 = (ulonglong)pcVar15 & 0xffffffff;
      pbVar9 = (byte *)CONCAT62((int6)(uVar8 >> 0x10),
                                CONCAT11((char)(uVar8 >> 8) + (char)uVar8,(char)uVar8));
      goto code_r0x0001404bc201;
    }
    pbVar9 = (byte *)((ulonglong)pbVar9 ^ 8);
  }
  else {
    bVar4 = bVar6 * '\x02';
    param_2 = (char *)CONCAT71((int7)((ulonglong)param_2 >> 8),bVar4);
    if (CARRY1(bVar6,bVar6)) goto code_r0x0001404bc1f1;
    uVar3 = (undefined2)(uVar7 >> 0x10);
    cVar5 = (char)uVar7;
    cVar12 = (char)(uVar7 >> 8) + unaff_BL;
    pbVar9 = (byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar12,cVar5));
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
         *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
    *pbVar9 = *pbVar9 + cVar5;
    pbVar1 = (byte *)((longlong)unaff_RDI + -0x2dffdd81);
    bVar6 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar14;
    pcVar10 = pcVar15;
    if (!CARRY1(bVar6,bVar14)) {
      pbVar9 = (byte *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar12 + unaff_BL,cVar5));
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
           *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
      *pbVar9 = *pbVar9 + cVar5;
      pbVar1 = (byte *)(unaff_RSI + -0x50ffdd89);
      bVar18 = CARRY1(*pbVar1,bVar4);
      *pbVar1 = *pbVar1 + bVar4;
      goto code_r0x0001404bc1ed;
    }
code_r0x0001404bc201:
    puVar17 = (undefined4 *)((longlong)unaff_RDI + 0x11);
    pcVar15 = pcVar10 + 4;
    *puVar16 = *(undefined4 *)pcVar10;
    *param_4 = *param_4 + unaff_SPL;
    bVar6 = (byte)pbVar9;
    *pcVar15 = *pcVar15 + bVar6;
    bVar14 = *pbVar9;
    *pbVar9 = *pbVar9 + bVar6;
    puVar16 = puVar17;
    if (*pbVar9 == 0) {
      if (CARRY1(bVar14,bVar6)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar10[-0x3bffdd8a] = pcVar10[-0x3bffdd8a] + (char)param_2;
      goto code_r0x0001404bc21d;
    }
  }
  bVar6 = (byte)pbVar9;
  *pbVar9 = *pbVar9 + bVar6;
  *(uint *)(pbVar9 + in_FS_OFFSET) = *(uint *)(pbVar9 + in_FS_OFFSET) | (uint)pbVar9;
  pbVar9[param_1] = pbVar9[param_1] + (char)((ulonglong)param_2 >> 8);
  pbVar9[0x72] = pbVar9[0x72] + (char)((ulonglong)pbVar9 >> 8);
  bVar14 = *pbVar9;
  uVar8 = (ulonglong)pbVar9 >> 8;
  uVar11 = (ulonglong)pcVar15 & 0xffffffff;
  pbVar9 = (byte *)CONCAT62((int6)(uVar11 >> 0x10),
                            CONCAT11((char)(uVar11 >> 8) + (char)uVar11,(char)uVar11));
  pcVar15 = (char *)CONCAT71((int7)uVar8,bVar6 & bVar14);
  puVar17 = puVar16;
code_r0x0001404bc21d:
  *puVar17 = *(undefined4 *)pcVar15;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)((longlong)pbVar9 * 2) = *(char *)((longlong)pbVar9 * 2) - bVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

