// Function: FUN_1403498b0
// Addr: 1403498b0
// Size: 698 bytes


void FUN_1403498b0(longlong param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  iVar1 = (int)(param_2 + ((int)param_2 >> 0x1f & 0xfU)) >> 4;
  pbVar3 = (byte *)(param_1 + (iVar1 << 4));
  iVar12 = -iVar1;
  uVar4 = param_3;
  uVar5 = param_3;
  uVar6 = param_3;
  if (iVar12 != 0) {
    iVar1 = iVar1 * -4;
    do {
      lVar9 = (longlong)iVar1;
      iVar1 = iVar1 + 4;
      param_3 = ((uint)(*(int *)(pbVar3 + lVar9 * 4) * 0x239b961b) >> 0x11 |
                *(int *)(pbVar3 + lVar9 * 4) * -0x34f28000) * -0x54f16877 ^ param_3;
      param_3 = ((param_3 >> 0xd | param_3 << 0x13) + uVar4) * 5 + 0x561ccd1b;
      uVar4 = ((uint)(*(int *)(pbVar3 + lVar9 * 4 + 4) * -0x54f16877) >> 0x10 |
              *(int *)(pbVar3 + lVar9 * 4 + 4) * -0x68770000) * 0x38b34ae5 ^ uVar4;
      uVar4 = ((uVar4 >> 0xf | uVar4 << 0x11) + uVar5) * 5 + 0xbcaa747;
      uVar5 = ((uint)(*(int *)(pbVar3 + lVar9 * 4 + 8) * 0x38b34ae5) >> 0xf |
              *(int *)(pbVar3 + lVar9 * 4 + 8) * -0x6a360000) * -0x5e1c746d ^ uVar5;
      uVar5 = ((uVar5 >> 0x11 | uVar5 << 0xf) + 0xeaf5d271 + uVar6) * 5;
      uVar6 = ((uint)(*(int *)(pbVar3 + lVar9 * 4 + 0xc) * -0x5e1c746d) >> 0xe |
              *(int *)(pbVar3 + lVar9 * 4 + 0xc) * 0x2e4c0000) * 0x239b961b ^ uVar6;
      uVar6 = ((uVar6 >> 0x13 | uVar6 << 0xd) + param_3) * 5 + 0x32ac3b17;
      iVar12 = iVar12 + 1;
    } while (iVar12 != 0);
  }
  uVar2 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar13 = 0;
  switch(param_2 & 0xf) {
  case 0xf:
    uVar13 = (uint)pbVar3[0xe] << 0x10;
  case 0xe:
    uVar13 = uVar13 ^ (uint)pbVar3[0xd] << 8;
  case 0xd:
    uVar6 = uVar6 ^ ((pbVar3[0xc] ^ uVar13) * -0x5e1c746d >> 0xe |
                    (pbVar3[0xc] ^ uVar13) * 0x2e4c0000) * 0x239b961b;
  case 0xc:
    uVar10 = (uint)pbVar3[0xb] << 0x18;
  case 0xb:
    uVar10 = uVar10 ^ (uint)pbVar3[10] << 0x10;
  case 10:
    uVar10 = uVar10 ^ (uint)pbVar3[9] << 8;
  case 9:
    uVar5 = uVar5 ^ ((pbVar3[8] ^ uVar10) * 0x38b34ae5 >> 0xf | (pbVar3[8] ^ uVar10) * -0x6a360000)
                    * -0x5e1c746d;
  case 8:
    uVar11 = (uint)pbVar3[7] << 0x18;
  case 7:
    uVar8 = uVar11 ^ (uint)pbVar3[6] << 0x10;
  case 6:
    uVar8 = uVar8 ^ (uint)pbVar3[5] << 8;
  case 5:
    uVar4 = uVar4 ^ ((pbVar3[4] ^ uVar8) * -0x54f16877 >> 0x10 | (pbVar3[4] ^ uVar8) * -0x68770000)
                    * 0x38b34ae5;
  case 4:
    uVar7 = (uint)pbVar3[3] << 0x18;
  case 3:
    uVar2 = uVar7 ^ (uint)pbVar3[2] << 0x10;
  case 2:
    uVar2 = uVar2 ^ (uint)pbVar3[1] << 8;
  case 1:
    param_3 = param_3 ^ ((*pbVar3 ^ uVar2) * 0x239b961b >> 0x11 | (*pbVar3 ^ uVar2) * -0x34f28000) *
                        -0x54f16877;
  default:
    uVar7 = (uVar6 ^ param_2) + (param_3 ^ param_2) + (uVar5 ^ param_2) + (uVar4 ^ param_2);
    uVar2 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
    uVar11 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    uVar4 = uVar7 + (uVar4 ^ param_2);
    uVar4 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
    uVar2 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar2 = uVar2 >> 0x10 ^ uVar2;
    uVar4 = uVar7 + (uVar5 ^ param_2);
    uVar4 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    uVar7 = uVar7 + (uVar6 ^ param_2);
    uVar5 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    iVar1 = (uVar11 >> 0x10 ^ uVar11) + uVar5 + uVar4 + uVar2;
    *param_4 = iVar1;
    param_4[1] = iVar1 + uVar2;
    param_4[2] = iVar1 + uVar4;
    param_4[3] = iVar1 + uVar5;
    return;
  }
}

