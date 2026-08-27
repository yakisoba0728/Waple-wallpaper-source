// Function: FUN_140322390
// Addr: 140322390
// Size: 1118 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140322390(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  undefined1 auStack_828 [32];
  undefined8 local_808;
  undefined8 local_800;
  undefined1 local_7f8;
  uint local_7f0;
  code *local_7e8;
  char local_7d8;
  char local_7d7;
  int local_7d4;
  uint local_7d0;
  undefined8 local_7c8;
  undefined1 local_7b8 [32];
  longlong local_798;
  undefined4 local_780;
  undefined4 local_778;
  undefined1 local_75b;
  longlong local_758;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 uStack_114;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_828;
  lVar7 = *(longlong *)(param_1 + 8);
  if (param_3 < *(uint *)(lVar7 + 0x10)) {
    lVar2 = *(longlong *)(lVar7 + 0xe0);
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x20);
    uVar3 = param_4 | 3;
    if ((param_4 >> 10 & 1) == 0) {
      uVar3 = param_4;
    }
    local_7d0 = uVar3 & 1;
    if ((local_7d0 == 0) && ((uVar3 & 2) == 0)) {
      local_7f8 = 1;
    }
    else {
      local_7f8 = 0;
    }
    *(undefined1 *)(param_1 + 0xf8) = local_7f8;
    *(byte *)(param_1 + 0xf9) = (byte)local_7d0 ^ 1;
    local_7e8 = FUN_140323130;
    local_7f0 = (int)uVar3 >> 0x10 & 0xf;
    local_800 = 0;
    local_808 = 0;
    local_68 = lVar2;
    uVar6 = (*(code *)**(undefined8 **)(lVar2 + 0x18))(local_7b8,lVar7,param_2,param_1);
    if ((int)uVar6 == 0) {
      local_75b = (uVar3 & 0x400) != 0;
      uVar4 = FUN_140323130(local_7b8,param_3);
      uVar6 = (ulonglong)uVar4;
      if (uVar4 == 0) {
        local_7d7 = *(char *)(param_1 + 0xf8);
        local_78 = local_128;
        local_7d8 = *(char *)(param_1 + 0xf9);
        iStack_74 = local_124;
        iStack_70 = local_120;
        local_7d4 = local_118;
        iStack_6c = local_11c;
        local_7c8 = CONCAT44(uStack_114,local_118);
        (**(code **)(*(longlong *)(local_68 + 0x18) + 8))(local_7b8);
        if ((uVar3 & 0x400) == 0) {
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 1;
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          if (*(ushort *)(param_2 + 0x1a) < 0x18) {
            *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x100;
          }
          iVar5 = FUN_1402f4b60(local_778);
          *(int *)(param_1 + 0x40) = iVar5 >> 0x10;
          iVar5 = FUN_1402f4b60(local_778);
          *(int *)(param_1 + 0x50) = iVar5 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          iVar5 = *(int *)(lVar7 + 0x154) - *(int *)(lVar7 + 0x14c) >> 0x10;
          *(int *)(param_1 + 0x4c) = iVar5;
          *(int *)(param_1 + 0x54) = iVar5;
          if ((((local_78 != 0x10000) || (iStack_6c != 0x10000)) || (iStack_74 != 0)) ||
             (iStack_70 != 0)) {
            FUN_1402f36a0(param_1 + 0x98,&local_78);
            lVar7 = (longlong)*(int *)(param_1 + 0x40) * (longlong)local_78;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
            lVar7 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iStack_6c;
            *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
          }
          if ((local_118 != 0) || (local_7c8._4_4_ != 0)) {
            FUN_1402f3790(param_1 + 0x98,local_118,local_7c8._4_4_);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + local_7d4;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + local_7c8._4_4_;
          }
          if ((local_7d0 == 0) || (local_7d8 != '\0')) {
            iVar5 = *(int *)(param_1 + 0xfc);
            iVar1 = *(int *)(param_1 + 0x100);
            if ((local_7d7 == '\0') || (local_758 == 0)) {
              uVar4 = (uint)*(ushort *)(local_798 + 2);
              piVar8 = *(int **)(local_798 + 8);
              if (*(ushort *)(local_798 + 2) != 0) {
                do {
                  lVar7 = (longlong)*piVar8 * (longlong)iVar5;
                  uVar4 = uVar4 - 1;
                  *piVar8 = (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10);
                  lVar7 = (longlong)piVar8[1] * (longlong)iVar1;
                  piVar8[1] = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
                  piVar8 = piVar8 + 2;
                } while (0 < (int)uVar4);
              }
            }
            lVar7 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar5;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
            lVar7 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iVar1;
            *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
          }
          FUN_1402f3050(param_1 + 0x98,&local_68);
          *(int *)(param_1 + 0x38) = (int)local_68;
          *(int *)(param_1 + 0x30) = local_60 - (int)local_68;
          *(int *)(param_1 + 0x34) = local_5c - local_68._4_4_;
          *(int *)(param_1 + 0x3c) = local_5c;
          if ((uVar3 & 0x10) != 0) {
            FUN_1402f8f80(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar7 = *(longlong *)(param_1 + 0xf0);
          iVar5 = FUN_1402f4b60(local_780);
          *(int *)(param_1 + 0x38) = iVar5 >> 0x10;
          iVar5 = FUN_1402f4b60(local_778);
          *(int *)(param_1 + 0x40) = iVar5 >> 0x10;
          *(ulonglong *)(lVar7 + 0x10) = CONCAT44(iStack_74,local_78);
          *(ulonglong *)(lVar7 + 0x18) = CONCAT44(iStack_6c,iStack_70);
          *(ulonglong *)(lVar7 + 0x20) = CONCAT44(uStack_114,local_118);
          *(undefined1 *)(lVar7 + 0xc) = 1;
        }
      }
      else {
        (**(code **)(*(longlong *)(lVar2 + 0x18) + 8))(local_7b8);
      }
    }
  }
  else {
    uVar6 = 6;
  }
  return uVar6;
}

