// Function: FUN_1402f4580
// Addr: 1402f4580
// Size: 846 bytes


undefined4 FUN_1402f4580(longlong param_1,int *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint local_res18;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined4 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0x10000;
    *(undefined4 *)(lVar1 + 0x20) = 0x10000;
    return 0;
  }
  iVar3 = *param_2;
  if (iVar3 == 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0x68);
    uVar8 = uVar5;
LAB_1402f465a:
    local_res18 = -uVar5;
    if ((int)-uVar5 < 0) {
      local_res18 = uVar5;
    }
    if ((int)uVar8 < 0) {
      uVar8 = -uVar8;
    }
  }
  else {
    if (iVar3 == 1) {
      uVar5 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
      uVar8 = uVar5;
      goto LAB_1402f465a;
    }
    if (iVar3 == 2) {
      uVar5 = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x58);
      uVar8 = *(int *)(param_1 + 100) - *(int *)(param_1 + 0x5c);
      goto LAB_1402f465a;
    }
    if (iVar3 == 3) {
      uVar5 = (uint)*(short *)(param_1 + 0x70);
      uVar8 = (int)*(short *)(param_1 + 0x6a) - (int)*(short *)(param_1 + 0x6c);
      goto LAB_1402f465a;
    }
    if (iVar3 == 4) {
      iVar3 = param_2[1];
      *(int *)(lVar1 + 0x1c) = iVar3;
      iVar11 = 0;
      iVar10 = param_2[2];
      iVar4 = 0;
      *(int *)(lVar1 + 0x20) = iVar10;
      if (iVar3 == 0) {
        *(int *)(lVar1 + 0x1c) = iVar10;
        iVar3 = iVar10;
        iVar11 = 0;
        iVar4 = 0;
      }
      else if (iVar10 == 0) {
        *(int *)(lVar1 + 0x20) = iVar3;
      }
      goto LAB_1402f4780;
    }
    uVar8 = 0;
    local_res18 = 0;
  }
  iVar3 = param_2[1];
  iVar11 = iVar3;
  if (param_2[3] != 0) {
    iVar11 = (iVar3 * param_2[3] + 0x24) / 0x48;
  }
  iVar10 = param_2[2];
  iVar4 = iVar10;
  if (param_2[4] != 0) {
    iVar4 = (iVar10 * param_2[4] + 0x24) / 0x48;
  }
  if ((iVar10 != 0) || (iVar3 == 0)) {
    if (uVar8 == 0) {
      return 0x85;
    }
    uVar2 = FUN_1402efa10(iVar4,uVar8);
    *(undefined4 *)(lVar1 + 0x20) = uVar2;
  }
  if (param_2[1] == 0) {
    iVar11 = FUN_1402f20b0(iVar4,local_res18,uVar8);
    iVar3 = *(int *)(lVar1 + 0x20);
  }
  else {
    if (local_res18 == 0) {
      return 0x85;
    }
    iVar3 = FUN_1402efa10(iVar11,local_res18);
  }
  piVar9 = (int *)(lVar1 + 0x20);
  *(int *)(lVar1 + 0x1c) = iVar3;
  if (param_2[2] == 0) {
    *piVar9 = iVar3;
    iVar4 = FUN_1402f20b0(iVar11,uVar8,local_res18);
  }
  if (*param_2 == 3) {
    iVar10 = *piVar9;
    if (iVar3 < iVar10) {
      *piVar9 = iVar3;
    }
    else {
      *(int *)(lVar1 + 0x1c) = iVar10;
      iVar3 = iVar10;
    }
  }
LAB_1402f4780:
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar6 = (ulonglong)*(ushort *)(param_1 + 0x68) * (longlong)iVar3;
    lVar7 = (longlong)*(int *)(lVar1 + 0x20) * (ulonglong)*(ushort *)(param_1 + 0x68);
    iVar11 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
    iVar4 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
  }
  iVar10 = iVar11 + 0x20 >> 6;
  if ((iVar10 < 0x10000) && (iVar11 = iVar4 + 0x20 >> 6, iVar11 < 0x10000)) {
    lVar7 = (longlong)*(int *)(lVar1 + 0x20);
    *(short *)(lVar1 + 0x18) = (short)iVar10;
    *(short *)(lVar1 + 0x1a) = (short)iVar11;
    lVar6 = *(short *)(param_1 + 0x6a) * lVar7;
    *(uint *)(lVar1 + 0x24) =
         (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + 0x3fU & 0xffffffc0;
    lVar6 = *(short *)(param_1 + 0x6c) * lVar7;
    *(uint *)(lVar1 + 0x28) =
         (uint)((ulonglong)(lVar6 + (lVar6 >> 0x3f) + 0x8000) >> 0x10) & 0xffffffc0;
    lVar7 = *(short *)(param_1 + 0x6e) * lVar7;
    *(uint *)(lVar1 + 0x2c) =
         (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
    lVar6 = (longlong)*(short *)(param_1 + 0x70) * (longlong)iVar3;
    *(uint *)(lVar1 + 0x30) =
         (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
  }
  else {
    uVar2 = 0x17;
  }
  return uVar2;
}

