// Function: FUN_1404b0490
// Addr: 1404b0490
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404b0503) overlaps instruction at (ram,0x0001404b0502)
    */

void FUN_1404b0490(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *in_RAX;
  byte *pbVar8;
  byte bVar10;
  char unaff_BH;
  byte *unaff_RDI;
  bool bVar11;
  byte abStack_18 [8];
  undefined1 *puStack_10;
  char *pcVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar3 = (byte)in_RAX;
  bVar11 = CARRY1((byte)*in_RAX,bVar3);
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  bVar3 = *param_1;
  bVar4 = *param_1;
  *param_1 = bVar4 + bVar10 + bVar11;
  iVar6 = (uint)in_RAX + 0x15313200 + (uint)(CARRY1(bVar3,bVar10) || CARRY1(bVar4 + bVar10,bVar11));
  bVar4 = in(0x49);
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar4;
  *param_2 = *param_2 + (char)param_2;
  uVar7 = CONCAT31(CONCAT21((short)((uint)iVar6 >> 0x10),(char)((uint)iVar6 >> 8) + bVar10),
                   bVar4 + 9 + CARRY1(bVar3,bVar4)) | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar1 = *(char *)(ulonglong)uVar7;
  *param_1 = *param_1 + (char)uVar7;
  puStack_10 = &stack0xfffffffffffffff8;
  abStack_18[0] = 0xd;
  abStack_18[1] = 0;
  abStack_18[2] = 0x19;
  abStack_18[3] = 1;
  abStack_18[4] = 0;
  abStack_18[5] = 0;
  abStack_18[6] = 0;
  abStack_18[7] = 0;
  uVar7 = uVar7 + 0xf40ff300;
  param_1 = param_1 + -1;
  if (param_1 == (byte *)0x0 || uVar7 == 0) {
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  }
  cVar2 = *(char *)((ulonglong)uVar7 + 1);
  uVar7 = uVar7 | uRam0000000147cd0fdb;
  pbVar8 = (byte *)(ulonglong)uVar7;
  *pbVar8 = *pbVar8 ^ (byte)uVar7;
  *param_1 = *param_1 + (char)(uVar7 >> 8);
  if ((char)*param_1 < '\0') {
    LocalDescriptorTableRegister((short)uVar7);
  }
  else {
    pbVar8[-0xc] = pbVar8[-0xc] + unaff_BH;
    *pbVar8 = *pbVar8 | (byte)uVar7;
    pbVar8 = (byte *)(ulonglong)(uVar7 + 0xd0011e4);
    if (uVar7 + 0xd0011e4 == 0) {
      *param_1 = *param_1;
    }
  }
  cVar5 = (char)pbVar8;
  abStack_18[(longlong)pbVar8] = abStack_18[(longlong)pbVar8] + cVar5;
  *param_4 = *param_4 + (char)abStack_18;
  *pbVar8 = *pbVar8 + cVar5;
  cVar5 = cVar5 + (char)param_2 + cVar1 + cVar2;
  pcVar9 = (char *)CONCAT71((int7)((ulonglong)pbVar8 >> 8),cVar5);
  abStack_18[(longlong)pcVar9] = abStack_18[(longlong)pcVar9] + cVar5;
  *param_4 = *param_4 + (char)abStack_18;
  *pcVar9 = *pcVar9 + (char)param_1;
  *pcVar9 = *pcVar9 + cVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

