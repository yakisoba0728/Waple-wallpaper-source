// Function: FUN_140311cf0
// Addr: 140311cf0
// Size: 684 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140311cf0(longlong param_1,longlong param_2,undefined4 param_3,ulonglong param_4)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  ushort *local_88;
  longlong local_80;
  ushort *local_78;
  short local_68 [2];
  ushort local_64 [2];
  short local_60 [2];
  ushort local_5c [2];
  ushort local_58;
  ushort local_56;
  short local_54;
  short local_52;
  ushort local_50;
  short local_4e;
  short local_4c;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_2 + 8);
  local_80 = param_2 + 0x68;
  local_78 = &local_58;
  local_88 = *(ushort **)(lVar4 + 0xa0);
  uVar3 = (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0x98))(lVar4,*(undefined4 *)(param_1 + 0x80));
  uVar6 = uVar3 & 0xffffffff;
  if ((int)uVar3 == 0) {
    *(int *)(param_2 + 0x3c) = (int)local_52 << 6;
    *(uint *)(param_2 + 0x30) = (uint)local_56 << 6;
    *(uint *)(param_2 + 0x40) = (uint)local_50 << 6;
    *(uint *)(param_2 + 0x34) = (uint)local_58 << 6;
    *(int *)(param_2 + 0x38) = (int)local_54 << 6;
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
    *(int *)(param_2 + 0x44) = (int)local_4e << 6;
    *(int *)(param_2 + 0x48) = (int)local_4c << 6;
    *(uint *)(param_2 + 0x4c) = (uint)local_4a << 6;
    iVar5 = (int)local_4e;
    if ((param_4 & 0x10) == 0) {
      iVar5 = (int)local_54;
    }
    *(int *)(param_2 + 0x90) = iVar5;
    iVar5 = (int)local_4c;
    if ((param_4 & 0x10) == 0) {
      iVar5 = (int)local_52;
    }
    *(int *)(param_2 + 0x94) = iVar5;
    uVar3 = uVar6;
  }
  else if ((((char)uVar6 == -99) &&
           (uVar3 = uVar6, (*(byte *)(*(longlong *)(param_2 + 8) + 8) & 1) == 0)) &&
          (*(int *)(lVar4 + 0x430) != 0)) {
    iVar5 = *(int *)(param_1 + 0x1c);
    local_88 = local_5c;
    iVar2 = *(int *)(param_1 + 0x20);
    local_60[0] = 0;
    local_68[0] = 0;
    local_5c[0] = 0;
    local_64[0] = 0;
    (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0x150))(lVar4,0,param_3,local_60);
    if (*(char *)(lVar4 + 400) == '\0') {
      if (*(short *)(lVar4 + 0x208) == -1) {
        local_68[0] = *(short *)(lVar4 + 0x13c);
        sVar1 = *(short *)(lVar4 + 0x13e);
      }
      else {
        local_68[0] = *(short *)(lVar4 + 0x24e);
        sVar1 = *(short *)(lVar4 + 0x250);
      }
      local_64[0] = sVar1 - local_68[0];
      if (-1 < (int)local_68[0] - (int)sVar1) {
        local_64[0] = local_68[0] - sVar1;
      }
    }
    else {
      local_88 = local_64;
      (**(code **)(*(longlong *)(lVar4 + 0x2d0) + 0x150))(lVar4,1,param_3,local_68);
    }
    lVar4 = (longlong)local_60[0] * (longlong)iVar5;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined4 *)(param_2 + 0x44) = 0;
    *(int *)(param_2 + 0x38) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
    lVar4 = (ulonglong)local_5c[0] * (longlong)iVar5;
    *(undefined8 *)(param_2 + 0x90) = 0;
    *(undefined4 *)(param_2 + 0x60) = 0x62697473;
    *(undefined1 *)(param_2 + 0x82) = 1;
    *(int *)(param_2 + 0x40) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
    lVar4 = (longlong)local_68[0] * (longlong)iVar2;
    *(int *)(param_2 + 0x48) = (int)((ulonglong)(lVar4 + (lVar4 >> 0x3f) + 0x8000) >> 0x10);
    lVar4 = (ulonglong)local_64[0] * (longlong)iVar2;
    *(int *)(param_2 + 0x4c) = (int)((ulonglong)(lVar4 + 0x8000 + (lVar4 >> 0x3f)) >> 0x10);
    uVar3 = 0;
  }
  return uVar3;
}

