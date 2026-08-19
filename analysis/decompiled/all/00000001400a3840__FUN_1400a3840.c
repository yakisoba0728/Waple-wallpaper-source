// Function: FUN_1400a3840
// Addr: 1400a3840
// Size: 200 bytes


ulonglong FUN_1400a3840(ulonglong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  byte *local_res20;
  
  uVar3 = *(uint *)(param_1 + 0x28) & 0xffff;
  uVar10 = *(uint *)(param_1 + 0x28) >> 0x10;
  pbVar2 = (byte *)param_2[1];
  while (pbVar2 != (byte *)0x0) {
    pbVar11 = (byte *)*param_2;
    if (pbVar2 < (byte *)0x15b1) {
      pbVar8 = (byte *)0x0;
      pbVar9 = pbVar2;
      local_res20 = pbVar11;
    }
    else {
      pbVar1 = (byte *)0x0;
      pbVar8 = pbVar2 + -0x15b0;
      local_res20 = pbVar11 + 0x15b0;
      if (pbVar2 < (byte *)0x15b0) {
        pbVar11 = pbVar1;
        pbVar8 = pbVar1;
        local_res20 = pbVar1;
      }
      pbVar9 = (byte *)0x15b0;
      if (pbVar2 < (byte *)0x15b0) {
        pbVar9 = pbVar1;
      }
    }
    for (pbVar2 = pbVar11; pbVar2 < pbVar11 + ((ulonglong)pbVar9 & 0xfffffffffffffff8);
        pbVar2 = pbVar2 + 8) {
      iVar4 = *pbVar2 + uVar3;
      iVar7 = (uint)pbVar2[2] + (uint)pbVar2[1] + iVar4;
      iVar6 = (uint)pbVar2[4] + (uint)pbVar2[3] + iVar7;
      iVar5 = (uint)pbVar2[6] + (uint)pbVar2[5] + iVar6;
      uVar3 = (uint)pbVar2[7] + iVar5;
      uVar10 = uVar10 + (uint)pbVar2[7] + (iVar5 + iVar6 + iVar7 + iVar4) * 2 + (uint)pbVar2[5] +
                        (uint)pbVar2[3] + (uint)pbVar2[1];
    }
    for (; pbVar2 < pbVar11 + (longlong)pbVar9; pbVar2 = pbVar2 + 1) {
      uVar3 = uVar3 + *pbVar2;
      uVar10 = uVar10 + uVar3;
    }
    param_2[1] = (longlong)pbVar8;
    uVar3 = uVar3 % 0xfff1;
    uVar10 = uVar10 % 0xfff1;
    *param_2 = (longlong)local_res20;
    pbVar2 = pbVar8;
  }
  *(uint *)(param_1 + 0x28) = uVar10 << 0x10 | uVar3;
  return param_1 & 0xffffffffffffff00;
}

