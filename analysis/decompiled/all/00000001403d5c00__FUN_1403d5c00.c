// Function: FUN_1403d5c00
// Addr: 1403d5c00
// Size: 289 bytes


undefined8
FUN_1403d5c00(undefined8 param_1,longlong *param_2,uint param_3,char *param_4,int param_5)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_48 [8];
  char *local_40;
  uint local_38;
  
  lVar3 = *param_2;
  uVar2 = FUN_140398b00(lVar3 + 0x38);
  FUN_1403c03e0(uVar2,local_48,param_3);
  if (local_38 == 0) {
    lVar3 = FUN_140398510(lVar3 + 0x80);
    if (((*(uint *)(lVar3 + 0x128) <= param_3) || (*(longlong *)(lVar3 + 0x40) == 0)) ||
       (*(int *)(lVar3 + 0xdc) != -1)) {
      return 0;
    }
    if (param_5 == 0) {
      return 1;
    }
    uVar1 = FUN_1403d04d0(lVar3,param_3,0);
    if (uVar1 < 0x187) {
      local_38 = (*(int *)(&DAT_140453bf0 + (ulonglong)(uVar1 + 1) * 4) -
                 *(uint *)(&DAT_140453bf0 + (ulonglong)uVar1 * 4)) - 1;
      local_40 = ".notdef" + *(uint *)(&DAT_140453bf0 + (ulonglong)uVar1 * 4);
    }
    else {
      FUN_140397910(*(undefined8 *)(lVar3 + 0x68),local_48,uVar1 - 0x187);
    }
    if (local_38 == 0) {
      return 0;
    }
    uVar1 = param_5 - 1U;
    if (local_38 < param_5 - 1U) {
      uVar1 = local_38;
    }
  }
  else {
    if (param_5 == 0) {
      return 1;
    }
    uVar1 = local_38;
    if (param_5 - 1U <= local_38) {
      uVar1 = param_5 - 1U;
    }
  }
  strncpy(param_4,local_40,(ulonglong)uVar1);
  param_4[uVar1] = '\0';
  return 1;
}

