// Function: FUN_1404b047c
// Addr: 1404b047c
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404b0503) overlaps instruction at (ram,0x0001404b0502)
    */

void FUN_1404b047c(byte *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  char cVar10;
  byte *in_RAX;
  byte *pbVar9;
  char cVar11;
  byte bVar12;
  char unaff_BH;
  byte *unaff_RDI;
  byte abStack_18 [8];
  undefined1 *puStack_10;
  char *pcVar8;
  
  bVar12 = (byte)((ulonglong)param_2 >> 8);
  cVar11 = (char)param_2;
  bVar4 = *in_RAX;
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar12;
  iVar6 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | bVar4) + 0x15313200 +
          (uint)CARRY1(bVar1,bVar12);
  uVar2 = (undefined2)((uint)iVar6 >> 0x10);
  cVar10 = (char)((uint)iVar6 >> 8) + bVar12;
  cVar3 = in(0x49);
  pcVar8 = (char *)(ulonglong)CONCAT31(CONCAT21(uVar2,cVar10),cVar3);
  *param_1 = *param_1 + cVar10;
  *pcVar8 = *pcVar8 + cVar3;
  *pcVar8 = *pcVar8 + cVar11;
  bVar4 = in(0x49);
  bVar1 = *param_1;
  *param_1 = *param_1 + bVar4;
  *param_2 = *param_2 + cVar11;
  uVar7 = CONCAT31(CONCAT21(uVar2,cVar10 + bVar12),bVar4 + 9 + CARRY1(bVar1,bVar4)) | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  cVar3 = *(char *)(ulonglong)uVar7;
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
  cVar10 = *(char *)((ulonglong)uVar7 + 1);
  uVar7 = uVar7 | uRam0000000147cd0fdb;
  pbVar9 = (byte *)(ulonglong)uVar7;
  *pbVar9 = *pbVar9 ^ (byte)uVar7;
  *param_1 = *param_1 + (char)(uVar7 >> 8);
  if ((char)*param_1 < '\0') {
    LocalDescriptorTableRegister((short)uVar7);
  }
  else {
    pbVar9[-0xc] = pbVar9[-0xc] + unaff_BH;
    *pbVar9 = *pbVar9 | (byte)uVar7;
    pbVar9 = (byte *)(ulonglong)(uVar7 + 0xd0011e4);
    if (uVar7 + 0xd0011e4 == 0) {
      *param_1 = *param_1;
    }
  }
  cVar5 = (char)pbVar9;
  abStack_18[(longlong)pbVar9] = abStack_18[(longlong)pbVar9] + cVar5;
  *param_4 = *param_4 + (char)abStack_18;
  *pbVar9 = *pbVar9 + cVar5;
  cVar5 = cVar5 + cVar11 + cVar3 + cVar10;
  pcVar8 = (char *)CONCAT71((int7)((ulonglong)pbVar9 >> 8),cVar5);
  abStack_18[(longlong)pcVar8] = abStack_18[(longlong)pcVar8] + cVar5;
  *param_4 = *param_4 + (char)abStack_18;
  *pcVar8 = *pcVar8 + (char)param_1;
  *pcVar8 = *pcVar8 + cVar5;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

