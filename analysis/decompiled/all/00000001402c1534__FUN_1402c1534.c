// Function: FUN_1402c1534
// Addr: 1402c1534
// Size: 431 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1402c1534(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
                       longlong param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  longlong local_4e0;
  undefined1 *local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  undefined1 local_4c0;
  undefined4 local_4bf;
  undefined2 local_4bb;
  undefined1 local_4b9;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_508;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    *(undefined1 *)(param_5 + 0x30) = 1;
    local_4e0 = param_5;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    local_4e8 = 0;
    FUN_1402cacd4(0,0,0,0);
    return 0xffffffff;
  }
  local_4bf = 0;
  local_4bb = 0;
  local_4b9 = 0;
  local_4c8 = 0;
  if (((param_1 & 2) != 0) || (local_4c0 = 0, param_2 == (undefined1 *)0x0)) {
    local_4c0 = 1;
  }
  local_4b0 = param_5;
  local_58 = &local_4d8;
  local_498 = 0;
  local_4a0 = param_6;
  local_494 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_4d8 = param_2;
  local_4d0 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_1402c3edc(&local_4b8);
  uVar2 = (ulonglong)iVar1;
  if (param_2 == (undefined1 *)0x0) goto LAB_1402c1699;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if (param_3 == 0) goto LAB_1402c165e;
      if (local_4c8 == param_3) {
        uVar2 = 0xfffffffe;
LAB_1402c16dc:
        param_2[param_3 - 1] = 0;
        goto LAB_1402c1699;
      }
    }
    else {
      if (param_3 == 0) goto LAB_1402c1699;
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_1402c1699;
      }
      if (local_4c8 == param_3) goto LAB_1402c16dc;
    }
LAB_1402c1695:
    param_2[local_4c8] = 0;
  }
  else {
    if ((param_3 != 0) || (iVar1 == 0)) {
      if (local_4c8 != param_3) goto LAB_1402c1695;
      if ((iVar1 < 0) || (uVar2 <= param_3)) goto LAB_1402c1699;
    }
LAB_1402c165e:
    uVar2 = 0xffffffff;
  }
LAB_1402c1699:
  FUN_1402d9040(uStack_60);
  return uVar2 & 0xffffffff;
}

