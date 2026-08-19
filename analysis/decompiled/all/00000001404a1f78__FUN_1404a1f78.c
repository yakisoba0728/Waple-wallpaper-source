// Function: FUN_1404a1f78
// Addr: 1404a1f78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1f78(byte *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar7;
  uint *in_RAX;
  undefined7 uVar8;
  byte *pbVar5;
  uint *puVar6;
  byte bVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  byte bVar12;
  undefined6 uVar13;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar4 = (char)in_RAX + (char)*in_RAX;
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  unaff_RSI[CONCAT71(uVar8,bVar4)] = unaff_RSI[CONCAT71(uVar8,bVar4)] + bVar12;
  pbVar11 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  *(undefined4 *)(&stack0x49e07e10 + CONCAT71(uVar8,bVar4)) = 0;
  *param_2 = *param_2 + (int)param_1;
  pbVar5 = (byte *)CONCAT71(uVar8,bVar4);
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar12 = bVar12 | param_1[(longlong)param_2];
  pbVar10 = (byte *)CONCAT62(uVar13,CONCAT11(bVar12,(char)param_2));
  bVar7 = *pbVar10;
  bVar9 = (byte)param_1;
  bVar1 = *pbVar10;
  *pbVar10 = *pbVar10 + bVar9;
  *pbVar11 = *pbVar11 << (bVar9 & 7) | *pbVar11 >> 8 - (bVar9 & 7);
  bVar2 = ((ulonglong)param_1 & 0x1f) != 0;
  bVar3 = (bVar9 & 0x1f) == 1;
  if ((bVar3 || !SCARRY1(bVar1,bVar9)) &&
      (!bVar3 ||
      (!bVar2 && CARRY1(bVar7,bVar9) || bVar2 && (*pbVar11 & 1) != 0) == (char)*pbVar11 < '\0')) {
    *pbVar10 = *pbVar10 | bVar4;
    bVar7 = *pbVar5;
    *pbVar5 = *pbVar5 + bVar9;
    pbVar5[in_FS_OFFSET] = pbVar5[in_FS_OFFSET] + bVar4 + CARRY1(bVar7,bVar9);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar12 = bVar12 + *pbVar5;
  pbVar11 = (byte *)CONCAT62(uVar13,CONCAT11(bVar12,(char)param_2));
  *(int *)pbVar5 = *(int *)pbVar5 + (int)param_1;
  *pbVar11 = *pbVar11 | bVar12;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 ^ bVar7;
  puVar6 = (uint *)CONCAT71(uVar8,(bVar4 + 0x70 | *(byte *)CONCAT71(uVar8,bVar4 + 0x70)) ^ bVar7);
  *puVar6 = *puVar6 | (uint)puVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

