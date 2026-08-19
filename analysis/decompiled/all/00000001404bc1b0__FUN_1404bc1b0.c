// Function: FUN_1404bc1b0
// Addr: 1404bc1b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc215) overlaps instruction at (ram,0x0001404bc213)
    */
/* WARNING: Removing unreachable block (ram,0x0001404bc23d) */
/* WARNING: Removing unreachable block (ram,0x0001404bc1db) */

void FUN_1404bc1b0(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  char cVar10;
  uint in_EAX;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte bVar11;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  uint *unaff_RSI;
  uint *puVar12;
  uint *unaff_RDI;
  uint *puVar13;
  longlong in_FS_OFFSET;
  bool bVar14;
  
  bVar11 = (byte)((ulonglong)param_1 >> 8);
  pbVar8 = (byte *)(ulonglong)(in_EAX + 0x960005e4);
  bVar5 = (byte)param_2;
  if (in_EAX < 0x69fffa1c) {
    *(char *)((longlong)unaff_RDI + -0x3fffdd8e) =
         *(char *)((longlong)unaff_RDI + -0x3fffdd8e) + bVar11;
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
         *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
    uVar6 = in_EAX + 0x8a0505e6;
    pbVar7 = (byte *)(ulonglong)uVar6;
    puVar13 = unaff_RDI + 1;
    bVar14 = uVar6 < *unaff_RDI;
    if (!bVar14) {
      bVar1 = bVar5 * '\x02';
      param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar1);
      if (CARRY1(bVar5,bVar5)) goto code_r0x0001404bc1f1;
      uVar2 = (undefined2)(uVar6 >> 0x10);
      cVar4 = (char)uVar6;
      cVar10 = (char)(uVar6 >> 8) + unaff_BL;
      pbVar8 = (byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar10,cVar4));
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
           *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
      *pbVar8 = *pbVar8 + cVar4;
      pbVar7 = (byte *)((longlong)unaff_RDI + -0x2dffdd8a);
      bVar5 = *pbVar7;
      *pbVar7 = *pbVar7 + bVar11;
      puVar12 = unaff_RSI;
      unaff_RDI = puVar13;
      if (!CARRY1(bVar5,bVar11)) {
        pbVar7 = (byte *)(ulonglong)CONCAT22(uVar2,CONCAT11(cVar10 + unaff_BL,cVar4));
        *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
             *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
             *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
        *pbVar7 = *pbVar7 + cVar4;
        pbVar8 = (byte *)((longlong)unaff_RSI + -0x50ffdd8e);
        bVar14 = CARRY1(*pbVar8,bVar1);
        *pbVar8 = *pbVar8 + bVar1;
        goto code_r0x0001404bc1ed;
      }
      goto code_r0x0001404bc201;
    }
code_r0x0001404bc1ed:
    if (!bVar14) {
      pbVar7 = (byte *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),(char)pbVar7 * '\x02');
code_r0x0001404bc1f1:
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
           *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
      *pbVar7 = *pbVar7 + (byte)pbVar7;
      pbVar7[0x72] = pbVar7[0x72] + (char)((ulonglong)pbVar7 >> 8);
      bVar14 = false;
      pbVar8 = (byte *)((ulonglong)unaff_RSI & 0xffffffff);
      unaff_RSI = (uint *)CONCAT71((int7)((ulonglong)pbVar7 >> 8),(byte)pbVar7 & *pbVar7);
      unaff_RDI = puVar13;
      goto code_r0x0001404bc1fd;
    }
    pbVar8 = (byte *)((ulonglong)pbVar7 ^ 8);
code_r0x0001404bc20b:
    bVar5 = (byte)pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    *(uint *)(pbVar8 + in_FS_OFFSET) = *(uint *)(pbVar8 + in_FS_OFFSET) | (uint)pbVar8;
    pbVar8[param_1] = pbVar8[param_1] + (char)((ulonglong)param_2 >> 8);
    pbVar8[0x72] = pbVar8[0x72] + (char)((ulonglong)pbVar8 >> 8);
    bVar11 = *pbVar8;
    uVar3 = (ulonglong)pbVar8 >> 8;
    uVar9 = (ulonglong)unaff_RSI & 0xffffffff;
    pbVar8 = (byte *)CONCAT62((int6)(uVar9 >> 0x10),
                              CONCAT11((char)(uVar9 >> 8) + (char)uVar9,(char)uVar9));
    unaff_RSI = (uint *)CONCAT71((int7)uVar3,bVar5 & bVar11);
  }
  else {
    bVar14 = true;
code_r0x0001404bc1fd:
    if (bVar14) goto code_r0x0001404bc221;
    pbVar8 = (byte *)CONCAT62((int6)((ulonglong)pbVar8 >> 0x10),
                              CONCAT11((char)((ulonglong)pbVar8 >> 8) + (char)pbVar8,(char)pbVar8));
    puVar12 = unaff_RSI;
code_r0x0001404bc201:
    puVar13 = unaff_RDI + 1;
    unaff_RSI = puVar12 + 1;
    *unaff_RDI = *puVar12;
    *param_4 = *param_4 + unaff_SPL;
    bVar5 = (byte)pbVar8;
    *(byte *)unaff_RSI = (char)*unaff_RSI + bVar5;
    bVar11 = *pbVar8;
    *pbVar8 = *pbVar8 + bVar5;
    if (*pbVar8 != 0) goto code_r0x0001404bc20b;
    if (CARRY1(bVar11,bVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((longlong)puVar12 + -0x3bffdd8a) =
         *(char *)((longlong)puVar12 + -0x3bffdd8a) + (char)param_2;
  }
  *puVar13 = *unaff_RSI;
  *param_4 = *param_4 + unaff_SPL;
code_r0x0001404bc221:
  *(char *)((longlong)pbVar8 * 2) = *(char *)((longlong)pbVar8 * 2) - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

