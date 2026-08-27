// Function: FUN_140316130
// Addr: 140316130
// Size: 1308 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140316130(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  undefined1 auStack_838 [32];
  undefined8 local_818;
  undefined8 local_810;
  undefined1 local_808;
  uint local_800;
  code *local_7f8;
  char local_7e8;
  char local_7e7;
  uint local_7e4;
  uint local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined1 local_7b8 [32];
  longlong local_798;
  undefined4 local_780;
  undefined4 local_778;
  undefined4 local_774;
  undefined1 local_75b;
  longlong local_758;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  ulonglong local_118;
  undefined8 local_98;
  undefined4 local_90;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_838;
  lVar2 = *(longlong *)(param_1 + 8);
  local_7e8 = '\0';
  if ((param_3 < *(uint *)(lVar2 + 0x10)) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0xd0) + 0x50) != 0)) {
    puVar3 = *(undefined8 **)(*(longlong *)(lVar2 + 0x2a0) + 0x18);
    if ((param_4 >> 10 & 1) != 0) {
      param_4 = param_4 | 3;
    }
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0x10000;
      uVar5 = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
      uVar5 = *(undefined4 *)(param_2 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x100) = uVar5;
    uVar10 = param_4 & 1;
    if ((uVar10 == 0) && ((param_4 & 2) == 0)) {
      local_808 = 1;
    }
    else {
      local_808 = 0;
    }
    *(undefined1 *)(param_1 + 0xf8) = local_808;
    local_7f8 = FUN_14031a280;
    *(byte *)(param_1 + 0xf9) = (byte)uVar10 ^ 1;
    local_800 = (int)param_4 >> 0x10 & 0xf;
    local_810 = *(undefined8 *)(lVar2 + 0x2e0);
    local_818 = *(undefined8 *)(lVar2 + 0x248);
    uVar7 = (*(code *)*puVar3)(local_7b8,lVar2,param_2,param_1);
    if ((int)uVar7 == 0) {
      local_7e0 = param_4 & 0x400;
      local_75b = local_7e0 != 0;
      local_144 = *(undefined4 *)(lVar2 + 0x220);
      local_140 = *(undefined8 *)(lVar2 + 0x228);
      local_138 = *(undefined8 *)(lVar2 + 0x230);
      local_130 = *(undefined8 *)(lVar2 + 0x238);
      local_98 = *(undefined8 *)(lVar2 + 0x2f8);
      local_90 = *(undefined4 *)(lVar2 + 0x2f0);
      local_7e4 = FUN_14031a2e0(local_7b8,param_3,&local_7d0,&local_7e8);
      uVar7 = (ulonglong)local_7e4;
      if (local_7e4 == 0) {
        local_7e7 = *(char *)(param_1 + 0xf8);
        local_78 = local_128;
        iStack_74 = local_124;
        iStack_70 = local_120;
        iStack_6c = local_11c;
        local_7d8 = local_118;
        (*(code *)puVar3[1])(local_7b8);
        if (local_7e0 == 0) {
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) & 1;
          *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 4;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
            *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 0x100;
          }
          iVar6 = FUN_1402f4b60(local_778);
          *(int *)(param_1 + 0x40) = iVar6 >> 0x10;
          iVar6 = FUN_1402f4b60(local_778);
          *(int *)(param_1 + 0x50) = iVar6 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          if ((param_4 & 0x10) == 0) {
            iVar6 = FUN_1402f4b60(local_774);
            *(int *)(param_1 + 0x4c) = iVar6 >> 0x10;
            iVar6 = FUN_1402f4b60(local_774);
            iVar6 = iVar6 >> 0x10;
          }
          else {
            iVar6 = *(int *)(lVar2 + 0x288) - *(int *)(lVar2 + 0x280) >> 0x10;
            *(int *)(param_1 + 0x4c) = iVar6;
          }
          *(int *)(param_1 + 0x54) = iVar6;
          if ((((local_78 != 0x10000) || (iStack_6c != 0x10000)) || (iStack_74 != 0)) ||
             (iStack_70 != 0)) {
            FUN_1402f36a0(param_1 + 0x98,&local_78);
            lVar8 = (longlong)*(int *)(param_1 + 0x40) * (longlong)local_78;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
            lVar8 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iStack_6c;
            *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
          }
          iVar6 = local_7d8._4_4_;
          if (((int)local_118 != 0) || (local_7d8._4_4_ != 0)) {
            FUN_1402f3790(param_1 + 0x98,local_118 & 0xffffffff,local_7d8._4_4_);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + (int)local_118;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar6;
          }
          if ((uVar10 == 0) || (local_7e8 != '\0')) {
            iVar6 = *(int *)(param_1 + 0xfc);
            iVar1 = *(int *)(param_1 + 0x100);
            if ((local_7e7 == '\0') || (local_758 == 0)) {
              uVar10 = (uint)*(ushort *)(local_798 + 2);
              piVar9 = *(int **)(local_798 + 8);
              if (*(ushort *)(local_798 + 2) != 0) {
                do {
                  lVar8 = (longlong)*piVar9 * (longlong)iVar6;
                  uVar10 = uVar10 - 1;
                  *piVar9 = (int)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
                  lVar8 = (longlong)piVar9[1] * (longlong)iVar1;
                  piVar9[1] = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
                  piVar9 = piVar9 + 2;
                } while (0 < (int)uVar10);
              }
            }
            lVar8 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar6;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
            lVar8 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iVar1;
            *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
          }
          FUN_1402f3050(param_1 + 0x98,&local_68);
          *(int *)(param_1 + 0x38) = local_68;
          *(int *)(param_1 + 0x30) = local_60 - local_68;
          *(int *)(param_1 + 0x34) = local_5c - local_64;
          *(int *)(param_1 + 0x3c) = local_5c;
          if ((param_4 & 0x10) != 0) {
            FUN_1402f8f80(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0xf0);
          iVar6 = FUN_1402f4b60(local_780);
          *(int *)(param_1 + 0x38) = iVar6 >> 0x10;
          iVar6 = FUN_1402f4b60(local_778);
          *(int *)(param_1 + 0x40) = iVar6 >> 0x10;
          *(int *)(lVar8 + 0x10) = local_78;
          *(int *)(lVar8 + 0x14) = iStack_74;
          *(int *)(lVar8 + 0x18) = iStack_70;
          *(int *)(lVar8 + 0x1c) = iStack_6c;
          *(ulonglong *)(lVar8 + 0x20) = local_118;
          *(undefined1 *)(lVar8 + 0xc) = 1;
        }
        *(undefined8 *)(param_1 + 0xd0) = local_7d0;
        *(undefined4 *)(param_1 + 0xd8) = local_7c8;
        plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0xd0) + 0x50);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4[1],&local_7d0);
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 0xd8) = 0;
        }
        uVar7 = (ulonglong)local_7e4;
      }
      else {
        (*(code *)puVar3[1])(local_7b8);
      }
    }
  }
  else {
    uVar7 = 6;
  }
  return uVar7;
}

