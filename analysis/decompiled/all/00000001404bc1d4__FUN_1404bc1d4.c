// Function: FUN_1404bc1d4
// Addr: 1404bc1d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bc215) overlaps instruction at (ram,0x0001404bc213)
    */
/* WARNING: Removing unreachable block (ram,0x0001404bc23d) */

void FUN_1404bc1d4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  uint *in_RAX;
  char *pcVar4;
  undefined7 uVar8;
  byte *pbVar5;
  ulonglong uVar6;
  byte bVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SPL;
  uint *unaff_RSI;
  uint *puVar10;
  uint *unaff_RDI;
  uint *puVar11;
  uint *puVar12;
  longlong in_FS_OFFSET;
  bool bVar13;
  char cVar7;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  cVar2 = (char)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + cVar2;
  puVar11 = unaff_RDI + 1;
  bVar13 = true;
  if ((uint)in_RAX < *unaff_RDI) {
code_r0x0001404bc1fd:
    if (bVar13) goto code_r0x0001404bc221;
    in_RAX = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                              CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)in_RAX,(char)in_RAX));
code_r0x0001404bc201:
    puVar12 = unaff_RDI + 2;
    puVar10 = unaff_RSI + 1;
    *puVar11 = *unaff_RSI;
    *param_4 = *param_4 + unaff_SPL;
    bVar3 = (byte)in_RAX;
    *(byte *)puVar10 = (char)*puVar10 + bVar3;
    uVar1 = *in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar3;
    puVar11 = puVar12;
    if ((byte)*in_RAX != 0) goto code_r0x0001404bc20b;
    if (CARRY1((byte)uVar1,bVar3)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)((longlong)unaff_RSI + -0x3bffdd8a) =
         *(char *)((longlong)unaff_RSI + -0x3bffdd8a) + (char)param_2;
  }
  else {
    bVar9 = (byte)param_2;
    bVar3 = bVar9 * '\x02';
    param_2 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar3);
    if (CARRY1(bVar9,bVar9)) goto code_r0x0001404bc201;
    cVar7 = (char)((ulonglong)in_RAX >> 8) + unaff_BL;
    pcVar4 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar7,cVar2));
    *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
         *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
         *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
    *pcVar4 = *pcVar4 + cVar2;
    pbVar5 = (byte *)((longlong)unaff_RSI + -0x50ffdd8e);
    bVar9 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar3;
    uVar8 = (undefined7)((ulonglong)pcVar4 >> 8);
    if (!CARRY1(bVar9,bVar3)) {
      bVar3 = cVar2 * '\x02';
      pbVar5 = (byte *)CONCAT71(uVar8,bVar3);
      *(byte *)CONCAT71(unaff_00000019,unaff_BL) =
           *(byte *)CONCAT71(unaff_00000019,unaff_BL) >> 1 |
           *(char *)CONCAT71(unaff_00000019,unaff_BL) << 7;
      *pbVar5 = *pbVar5 + bVar3;
      pbVar5[0x72] = pbVar5[0x72] + cVar7;
      bVar13 = false;
      in_RAX = (uint *)((ulonglong)unaff_RSI & 0xffffffff);
      unaff_RSI = (uint *)(CONCAT71(uVar8,bVar3 & *pbVar5) & 0xffffffff);
      goto code_r0x0001404bc1fd;
    }
    in_RAX = (uint *)(CONCAT71(uVar8,cVar2) ^ 8);
    puVar10 = unaff_RSI;
code_r0x0001404bc20b:
    *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
    *(uint *)(in_FS_OFFSET + (longlong)in_RAX) =
         *(uint *)(in_FS_OFFSET + (longlong)in_RAX) | (uint)in_RAX;
    *(byte *)((longlong)in_RAX + param_1) =
         *(byte *)((longlong)in_RAX + param_1) + (char)((ulonglong)param_2 >> 8);
    *(byte *)((longlong)in_RAX + 0x72) =
         *(byte *)((longlong)in_RAX + 0x72) + (char)((ulonglong)in_RAX >> 8);
    uVar6 = (ulonglong)puVar10 & 0xffffffff;
    puVar10 = (uint *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX & (byte)*in_RAX) &
                      0xffffffff);
    in_RAX = (uint *)CONCAT62((int6)(uVar6 >> 0x10),
                              CONCAT11((char)(uVar6 >> 8) + (char)uVar6,(char)uVar6));
    puVar12 = puVar11;
  }
  *puVar12 = *puVar10;
  *param_4 = *param_4 + unaff_SPL;
code_r0x0001404bc221:
  *(char *)((longlong)in_RAX * 2) = *(char *)((longlong)in_RAX * 2) - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

