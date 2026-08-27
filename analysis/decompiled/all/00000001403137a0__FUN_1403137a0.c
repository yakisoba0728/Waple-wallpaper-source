// Function: FUN_1403137a0
// Addr: 1403137a0
// Size: 374 bytes


undefined8 FUN_1403137a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  sbyte sVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint local_res8 [2];
  
  uVar5 = (**(code **)(param_1 + 0x2a0))(param_1,0x676c7966,param_2,param_1 + 0x3f8);
  if ((char)uVar5 == -0x72) {
    *(undefined4 *)(param_1 + 0x3f8) = 0;
    uVar2 = 0;
  }
  else {
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) == 0) {
      uVar2 = FUN_1402f54a0(param_2);
    }
    else {
      uVar2 = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x3fc) = uVar2;
  iVar3 = (**(code **)(param_1 + 0x2a0))(param_1,0x6c6f6361,param_2,local_res8);
  if (iVar3 != 0) {
    return 0x90;
  }
  sVar6 = (*(short *)(param_1 + 0x132) != 0) + 1;
  if ((uint)(0x10000 << sVar6) < local_res8[0]) {
    local_res8[0] = 0x10000 << sVar6;
  }
  uVar4 = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x438) = local_res8[0] >> sVar6;
  if (uVar4 <= local_res8[0] >> sVar6) goto LAB_1403138f7;
  uVar9 = *(ulonglong *)(param_1 + 0xf8);
  uVar4 = uVar4 << sVar6;
  uVar10 = (ulonglong)*(ushort *)(param_1 + 0xf4) * 0x10 + uVar9;
  iVar3 = FUN_1402f54a0(param_2);
  bVar1 = false;
  uVar8 = 0x7fffffff;
  if (uVar9 < uVar10) {
    do {
      uVar7 = *(int *)(uVar9 + 8) - iVar3;
      if ((0 < (int)uVar7) && ((int)uVar7 < (int)uVar8)) {
        bVar1 = true;
        uVar8 = uVar7;
      }
      uVar9 = uVar9 + 0x10;
    } while (uVar9 < uVar10);
    if (!bVar1) goto LAB_1403138c0;
  }
  else {
LAB_1403138c0:
    uVar8 = *(int *)(param_2 + 8) - iVar3;
  }
  if (uVar8 < uVar4) {
    iVar3 = *(int *)(param_1 + 0x438) + -1;
    if (*(int *)(param_1 + 0x438) == 0) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x10) = iVar3;
  }
  else {
    *(int *)(param_1 + 0x438) = *(int *)(param_1 + 0x10) + 1;
    local_res8[0] = uVar4;
  }
LAB_1403138f7:
  uVar5 = FUN_1402f5150(param_2,local_res8[0],param_1 + 0x440);
  return uVar5;
}

