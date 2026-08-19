// Function: FUN_1404bc1c4
// Addr: 1404bc1c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc215) overlaps instruction at (ram,0x0001404bc213)
    */
/* WARNING: Removing unreachable block (ram,0x0001404bc23d) */

void FUN_1404bc1c4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined2 uVar2;
  char cVar3;
  byte bVar4;
  char cVar10;
  uint in_EAX;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar11;
  byte bVar12;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  char *unaff_RSI;
  undefined4 *unaff_RDI;
  undefined4 *puVar13;
  longlong in_FS_OFFSET;
  bool bVar14;
  
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  uVar5 = in_EAX + 0xaf0004f4;
  pbVar6 = (byte *)(ulonglong)uVar5;
  bVar14 = true;
  if (in_EAX < 0x50fffb0c) {
    bVar12 = (byte)param_2;
    bVar4 = bVar12 * '\x02';
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar4);
    if (CARRY1(bVar12,bVar12)) goto code_r0x0001404bc1f1;
    uVar2 = (undefined2)(uVar5 >> 0x10);
    cVar3 = (char)uVar5;
    cVar10 = (char)(uVar5 >> 8) + unaff_BL;
    pbVar6 = (byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar10,cVar3));
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
         *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
    *pbVar6 = *pbVar6 + cVar3;
    pbVar1 = (byte *)((longlong)unaff_RDI + -0x2dffdd8e);
    bVar12 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar11;
    pcVar7 = unaff_RSI;
    if (!CARRY1(bVar12,bVar11)) {
      pbVar6 = (byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar10 + unaff_BL,cVar3));
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
           *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
      *pbVar6 = *pbVar6 + cVar3;
      pbVar1 = (byte *)(unaff_RSI + -0x50ffdd8e);
      bVar14 = CARRY1(*pbVar1,bVar4);
      *pbVar1 = *pbVar1 + bVar4;
      goto code_r0x0001404bc1ed;
    }
code_r0x0001404bc201:
    puVar13 = unaff_RDI + 1;
    unaff_RSI = pcVar7 + 4;
    *unaff_RDI = *(undefined4 *)pcVar7;
    *param_4 = *param_4 + unaff_SPL;
    bVar4 = (byte)pbVar6;
    *unaff_RSI = *unaff_RSI + bVar4;
    bVar11 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar4;
    unaff_RDI = puVar13;
    if (*pbVar6 == 0) {
      if (CARRY1(bVar11,bVar4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar7[-0x3bffdd8a] = pcVar7[-0x3bffdd8a] + (char)param_2;
      goto code_r0x0001404bc21d;
    }
  }
  else {
code_r0x0001404bc1ed:
    if (!bVar14) {
      pbVar6 = (byte *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),(char)pbVar6 * '\x02');
code_r0x0001404bc1f1:
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
           *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
      *pbVar6 = *pbVar6 + (byte)pbVar6;
      pbVar6[0x72] = pbVar6[0x72] + (char)((ulonglong)pbVar6 >> 8);
      pcVar7 = (char *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),(byte)pbVar6 & *pbVar6);
      uVar8 = (ulonglong)unaff_RSI & 0xffffffff;
      pbVar6 = (byte *)CONCAT62((int6)(uVar8 >> 0x10),
                                CONCAT11((char)(uVar8 >> 8) + (char)uVar8,(char)uVar8));
      goto code_r0x0001404bc201;
    }
    pbVar6 = (byte *)((ulonglong)pbVar6 ^ 8);
  }
  bVar4 = (byte)pbVar6;
  *pbVar6 = *pbVar6 + bVar4;
  *(uint *)(pbVar6 + in_FS_OFFSET) = *(uint *)(pbVar6 + in_FS_OFFSET) | (uint)pbVar6;
  pbVar6[param_1] = pbVar6[param_1] + (char)((ulonglong)param_2 >> 8);
  pbVar6[0x72] = pbVar6[0x72] + (char)((ulonglong)pbVar6 >> 8);
  bVar11 = *pbVar6;
  uVar8 = (ulonglong)pbVar6 >> 8;
  uVar9 = (ulonglong)unaff_RSI & 0xffffffff;
  pbVar6 = (byte *)CONCAT62((int6)(uVar9 >> 0x10),
                            CONCAT11((char)(uVar9 >> 8) + (char)uVar9,(char)uVar9));
  unaff_RSI = (char *)CONCAT71((int7)uVar8,bVar4 & bVar11);
  puVar13 = unaff_RDI;
code_r0x0001404bc21d:
  *puVar13 = *(undefined4 *)unaff_RSI;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)((longlong)pbVar6 * 2) = *(char *)((longlong)pbVar6 * 2) - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

