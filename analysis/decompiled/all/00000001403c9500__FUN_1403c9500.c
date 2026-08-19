// Function: FUN_1403c9500
// Addr: 1403c9500
// Size: 588 bytes


undefined4 FUN_1403c9500(byte *param_1,uint param_2,uint *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint local_res8 [2];
  byte *local_38;
  byte *local_30;
  byte *local_28;
  byte *local_20;
  byte *local_18;
  uint local_10;
  uint local_c;
  
  switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
  case 0:
    if ((param_2 < 0x100) && (param_1[(ulonglong)param_2 + 6] != 0)) {
      *param_3 = (uint)param_1[(ulonglong)param_2 + 6];
      return 1;
    }
    break;
  case 4:
    if (param_4 == 0) {
      return 0;
    }
    local_38 = param_1 + 0xe;
    local_10 = (uint)param_1[7] + (uint)param_1[6] * 0x100 >> 1;
    local_30 = local_38 + (ulonglong)local_10 * 2 + 2;
    local_28 = local_30 + (ulonglong)local_10 * 2;
    local_20 = local_28 + (ulonglong)local_10 * 2;
    local_18 = local_20 + (ulonglong)local_10 * 2;
    uVar4 = local_10 * 8 + 0x10;
    if (uVar4 < param_4) {
      local_c = param_4 - uVar4 >> 1;
      uVar1 = FUN_1403c9950(&local_38,param_2);
      return uVar1;
    }
    local_c = 0;
    uVar1 = FUN_1403c9950(&local_38,param_2);
    return uVar1;
  case 6:
    uVar4 = (param_2 - param_1[7]) + (uint)param_1[6] * -0x100;
    if (uVar4 < (uint)param_1[9] + (uint)param_1[8] * 0x100) {
      lVar3 = (ulonglong)uVar4 + 5;
code_r0x0001403c9644:
      param_1 = param_1 + lVar3 * 2;
    }
    else {
      param_1 = (byte *)&DAT_14045dde0;
    }
    goto LAB_1403c9648;
  case 10:
    uVar4 = (param_2 + (uint)param_1[0xd] * -0x10000 + (uint)param_1[0xe] * -0x100 +
            (uint)param_1[0xc] * -0x1000000) - (uint)param_1[0xf];
    if (uVar4 < (uint)param_1[0x11] * 0x10000 + (uint)param_1[0x12] * 0x100 +
                (uint)param_1[0x10] * 0x1000000 + (uint)param_1[0x13]) {
      lVar3 = (ulonglong)uVar4 + 10;
      goto code_r0x0001403c9644;
    }
    param_1 = (byte *)&DAT_14045dde0;
LAB_1403c9648:
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return 1;
    }
    break;
  case 0xc:
    local_30 = (byte *)0x1403c9331;
    uVar2 = FUN_14036e150(param_1 + 0xc,&stack0x00000010,"");
    local_30 = (byte *)0x1403c933d;
    uVar4 = FUN_1403d0620(uVar2,param_2);
    if (uVar4 == 0) {
      return 0;
    }
    *param_3 = uVar4;
    return 1;
  case 0xd:
    local_res8[0] = param_2;
    lVar3 = FUN_14036e150(param_1 + 0xc,local_res8,"");
    uVar4 = (uint)*(byte *)(lVar3 + 8) * 0x1000000 +
            (uint)*(byte *)(lVar3 + 9) * 0x10000 + (uint)*(byte *)(lVar3 + 10) * 0x100 +
            (uint)*(byte *)(lVar3 + 0xb);
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return 1;
    }
  }
  return 0;
}

