// Function: FUN_14036c980
// Addr: 14036c980
// Size: 387 bytes


ulonglong FUN_14036c980(longlong param_1,byte *param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  bool bVar9;
  
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if ((*(int *)(lVar1 + 0x60) == 0) || (*(int *)(param_1 + 0x11c) == 0)) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar8 = (uint)param_2[2] * 0x100 + (uint)param_2[3];
  if ((uVar8 & 0x10) != 0) {
    uVar3 = (ulonglong)CONCAT11(param_2[4],param_2[5]);
    uVar8 = uVar8 + ((uint)param_2[uVar3 * 2 + 6] * 0x100 + (uint)param_2[uVar3 * 2 + 7]) * 0x10000;
  }
  uVar4 = uVar8;
  if (((uVar8 & 0x10) != 0) &&
     (uVar4 = uVar8 & 0xffffffef, uVar8 >> 0x10 < *(uint *)(*(longlong *)(param_1 + 0xf8) + 0xc))) {
    uVar4 = uVar8;
  }
  *(uint *)(param_1 + 0x124) = uVar4;
  FUN_1403e3b80(param_1);
  iVar5 = (uint)*param_2 * 0x100 + (uint)param_2[1];
  if (iVar5 == 7) {
    pbVar6 = (byte *)&DAT_14045dd10;
    if ((uint)param_2[4] * 0x100 + (uint)param_2[5] == 0) {
      pbVar7 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar7 = param_2 + 6;
    }
    uVar8 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1];
    if (uVar8 != 0) {
      pbVar6 = param_2 + uVar8;
    }
    if ((uint)*pbVar6 * 0x100 + (uint)pbVar6[1] == 1) {
      bVar9 = (uint)pbVar6[3] + (uint)pbVar6[2] * 0x100 == 8;
    }
    else {
      bVar9 = false;
    }
  }
  else {
    bVar9 = iVar5 == 8;
  }
  if (!bVar9) {
    *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar1 + 0x70);
    *(undefined2 *)(lVar1 + 0x59) = 1;
    *(undefined4 *)(lVar1 + 100) = 0;
    *(undefined4 *)(lVar1 + 0x5c) = 0;
    bVar2 = FUN_1403af6a0();
    FUN_14040c900(lVar1);
    return (ulonglong)bVar2;
  }
  *(int *)(lVar1 + 0x5c) = *(int *)(lVar1 + 0x60) + -1;
  uVar3 = FUN_1403ad650(param_1,param_3);
  return uVar3;
}

