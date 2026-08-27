// Function: FUN_1403c9430
// Addr: 1403c9430
// Size: 564 bytes


ulonglong FUN_1403c9430(byte *param_1,uint param_2,uint *param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  char *pcVar3;
  uint uVar4;
  uint local_res8 [2];
  byte *local_38;
  byte *local_30;
  byte *local_28;
  byte *local_20;
  byte *local_18;
  uint local_10;
  uint local_c;
  
  pcVar3 = (char *)0x0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (0xe < uVar4) goto switchD_1403c9469_caseD_1;
  pcVar3 = IMAGE_DOS_HEADER_140000000.e_magic + (&switchD_1403c9469::switchdataD_1403c9664)[uVar4];
  switch(uVar4) {
  case 0:
    if ((param_2 < 0x100) && (param_1[(ulonglong)param_2 + 6] != 0)) {
      *param_3 = (uint)param_1[(ulonglong)param_2 + 6];
      return CONCAT71((int7)((ulonglong)pcVar3 >> 8),1);
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
      uVar1 = FUN_1403c9880(&local_38,param_2);
      return uVar1;
    }
    local_c = 0;
    uVar1 = FUN_1403c9880(&local_38,param_2);
    return uVar1;
  case 6:
    uVar4 = (param_2 - param_1[7]) + (uint)param_1[6] * -0x100;
    if (uVar4 < (uint)param_1[9] + (uint)param_1[8] * 0x100) {
      lVar2 = (ulonglong)uVar4 + 5;
LAB_1403c9574:
      param_1 = param_1 + lVar2 * 2;
    }
    else {
      param_1 = (byte *)&DAT_14045dd10;
    }
    goto LAB_1403c9578;
  case 10:
    uVar4 = (param_2 + (uint)param_1[0xd] * -0x10000 + (uint)param_1[0xe] * -0x100 +
            (uint)param_1[0xc] * -0x1000000) - (uint)param_1[0xf];
    if (uVar4 < (uint)param_1[0x11] * 0x10000 + (uint)param_1[0x12] * 0x100 +
                (uint)param_1[0x10] * 0x1000000 + (uint)param_1[0x13]) {
      lVar2 = (ulonglong)uVar4 + 10;
      goto LAB_1403c9574;
    }
    param_1 = (byte *)&DAT_14045dd10;
LAB_1403c9578:
    pcVar3 = (char *)0x0;
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return 1;
    }
    break;
  case 0xc:
    uVar1 = FUN_1403c9240(param_1,(ulonglong)param_2);
    return uVar1;
  case 0xd:
    local_res8[0] = param_2;
    lVar2 = FUN_14036e080(param_1 + 0xc,local_res8,"");
    pcVar3 = (char *)0x0;
    uVar4 = (uint)*(byte *)(lVar2 + 8) * 0x1000000 +
            (uint)*(byte *)(lVar2 + 9) * 0x10000 + (uint)*(byte *)(lVar2 + 10) * 0x100 +
            (uint)*(byte *)(lVar2 + 0xb);
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return 1;
    }
  }
switchD_1403c9469_caseD_1:
  return (ulonglong)pcVar3 & 0xffffffffffffff00;
}

