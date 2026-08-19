// Function: FUN_1404a5e1c
// Addr: 1404a5e1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a5e41) overlaps instruction at (ram,0x0001404a5e3d)
    */

void FUN_1404a5e1c(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint *in_RAX;
  undefined7 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined6 uVar12;
  byte unaff_BH;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [24];
  char cVar3;
  byte *pbVar7;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  bVar9 = (byte)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (char)in_RAX + (char)*in_RAX;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar11;
  param_1[CONCAT71(uVar8,bVar4) + 0x8bc8c00] = param_1[CONCAT71(uVar8,bVar4) + 0x8bc8c00] ^ unaff_BH
  ;
  pcVar1 = (char *)(CONCAT71(uVar8,bVar4) + 0xa010049 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + bVar9;
  bVar11 = bVar11 | auStackX_10[(longlong)(param_1 + -0x10)];
  bVar2 = *(byte *)CONCAT62(uVar12,CONCAT11(bVar11,bVar10));
  cVar3 = *(char *)CONCAT62(uVar12,CONCAT11(bVar11,bVar10));
  *(byte *)CONCAT62(uVar12,CONCAT11(bVar11,bVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(bVar11,bVar10)) + bVar9;
  if ((!CARRY1(bVar2,bVar9)) && (SCARRY1(cVar3,bVar9))) {
    *param_1 = *param_1 + bVar4;
    bVar4 = bVar4 | *(byte *)(CONCAT71(uVar8,bVar4) * 2);
    bVar10 = bVar10 | *(byte *)(CONCAT71(uVar8,bVar4) + CONCAT62(uVar12,CONCAT11(bVar11,bVar10)));
    bVar11 = bVar11 | *(byte *)(CONCAT62(uVar12,CONCAT11(bVar11,bVar10)) + 0xa217006);
    uVar6 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                          CONCAT11((byte)((ulonglong)in_RAX >> 8) | param_1[unaff_RDI],bVar4)) +
            0x40000e34;
    pbVar7 = (byte *)(ulonglong)uVar6;
    bVar5 = (byte)uVar6;
    *pbVar7 = *pbVar7 | bVar5;
    *param_1 = *param_1 + (char)auStackX_8;
    *pbVar7 = *pbVar7 + bVar5;
    pbVar7[-0x42] = pbVar7[-0x42] + bVar5;
    *pbVar7 = *pbVar7 | bVar5;
    *param_1 = *param_1 + (char)auStackX_10;
    *(char *)((longlong)pbVar7 * 2) = *(char *)((longlong)pbVar7 * 2) + bVar5;
    param_1[unaff_RDI] = param_1[unaff_RDI] + (char)(uVar6 >> 8);
    param_1[0x5d900008] = param_1[0x5d900008] + bVar11;
    pbVar7[-0x42] = pbVar7[-0x42] + bVar5;
    *pbVar7 = *pbVar7 | bVar5;
    bVar2 = *param_1;
    *param_1 = *param_1 + bVar5;
    cRam000000005d900008 = cRam000000005d900008 + bVar5 + CARRY1(bVar2,bVar5);
    bVar2 = *pbVar7;
    *pbVar7 = *pbVar7 + bVar10;
    pbVar7 = pbVar7 + in_FS_OFFSET;
    bVar4 = *pbVar7;
    bVar9 = *pbVar7;
    *pbVar7 = bVar9 + bVar5 + CARRY1(bVar2,bVar10);
    pcVar1 = (char *)(CONCAT62(uVar12,CONCAT11(bVar11,bVar10)) + 0x7007f009);
    *pcVar1 = *pcVar1 + bVar10 + (CARRY1(bVar4,bVar5) || CARRY1(bVar9 + bVar5,CARRY1(bVar2,bVar10)))
    ;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

