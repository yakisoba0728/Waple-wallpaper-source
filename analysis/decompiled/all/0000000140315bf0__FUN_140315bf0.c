// Function: FUN_140315bf0
// Addr: 140315bf0
// Size: 645 bytes


ulonglong FUN_140315bf0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  undefined1 local_58 [16];
  longlong local_48;
  code *local_40;
  longlong local_38;
  
  lVar6 = *(longlong *)(param_1 + 0x2a8);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_res8[0] = 2;
  if (lVar6 != 0) {
    FUN_1402f7f90(uVar1,*(undefined8 *)(lVar6 + 0x30));
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    FUN_1402f7f90(uVar1,*(undefined8 *)(lVar6 + 0x20));
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined4 *)(lVar6 + 0x28) = 0;
    FUN_1402f7f90(uVar1,lVar6);
    *(undefined8 *)(param_1 + 0x2a8) = 0;
  }
  lVar6 = FUN_1402f7e90(uVar1,0x40,local_res8);
  uVar7 = (ulonglong)local_res8[0];
  if (local_res8[0] == 0) {
    uVar7 = FUN_1402f4fe0(param_2,*(undefined4 *)(param_2 + 8));
    local_res8[0] = (uint)uVar7;
    if (local_res8[0] == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x280);
      uVar4 = *(undefined4 *)(param_1 + 0x284);
      uVar5 = *(undefined4 *)(param_1 + 0x288);
      *(undefined4 *)(lVar6 + 4) = *(undefined4 *)(param_1 + 0x27c);
      *(undefined4 *)(lVar6 + 8) = uVar3;
      *(undefined4 *)(lVar6 + 0xc) = uVar4;
      *(undefined4 *)(lVar6 + 0x10) = uVar5;
      *(undefined4 *)(lVar6 + 0x14) = *(undefined4 *)(param_1 + 0x288);
      *(undefined4 *)(lVar6 + 0x18) = *(undefined4 *)(param_1 + 0x280);
      lVar2 = *(longlong *)(param_1 + 0x2a0);
      if ((*(undefined8 **)(lVar2 + 0x48) != (undefined8 *)0x0) &&
         (local_res8[0] =
               (*(code *)**(undefined8 **)(lVar2 + 0x48))
                         (local_58,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                          *(undefined8 *)(param_2 + 0x40)), local_res8[0] == 0)) {
        local_40 = FUN_14031af40;
        local_48 = lVar6;
        local_38 = param_1 + 0xd8;
        local_res8[0] = (**(code **)(*(longlong *)(lVar2 + 0x48) + 0x10))(local_58);
        (**(code **)(*(longlong *)(lVar2 + 0x48) + 8))(local_58);
      }
      if (((((char)local_res8[0] == '\x02') && (6 < *(uint *)(param_2 + 8))) &&
          (*(byte *)(*(longlong *)(param_2 + 0x38) + 1) < 4)) &&
         (*(uint *)(*(longlong *)(param_2 + 0x38) + 2) == *(uint *)(param_2 + 8))) {
        local_res8[0] = FUN_14031a510(param_1,param_2,lVar6);
      }
      if (local_res8[0] == 0) {
        uVar3 = *(undefined4 *)(lVar6 + 8);
        uVar4 = *(undefined4 *)(lVar6 + 0xc);
        uVar5 = *(undefined4 *)(lVar6 + 0x10);
        *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(lVar6 + 4);
        *(undefined4 *)(param_1 + 0x280) = uVar3;
        *(undefined4 *)(param_1 + 0x284) = uVar4;
        *(undefined4 *)(param_1 + 0x288) = uVar5;
        *(int *)(param_1 + 0x58) = (int)*(short *)(lVar6 + 6);
        *(int *)(param_1 + 0x5c) = (int)*(short *)(lVar6 + 10);
        *(int *)(param_1 + 0x60) = *(int *)(lVar6 + 0xc) + 0xffff >> 0x10;
        *(int *)(param_1 + 100) = *(int *)(lVar6 + 0x10) + 0xffff >> 0x10;
        if (*(int *)(lVar6 + 0x18) < *(int *)(lVar6 + 0x14)) {
          *(short *)(param_1 + 0x6a) = (short)((uint)(*(int *)(lVar6 + 0x14) + 0x8000) >> 0x10);
          *(short *)(param_1 + 0x6c) = (short)((uint)(*(int *)(lVar6 + 0x18) + 0x8000) >> 0x10);
        }
        if (*(int *)(lVar6 + 0x38) != 0) {
          *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
          *(longlong *)(param_1 + 0x2a8) = lVar6;
          lVar6 = 0;
        }
      }
      FUN_1402f5100(param_2);
      uVar7 = (ulonglong)local_res8[0];
    }
  }
  if (lVar6 != 0) {
    FUN_1402f7f90(uVar1,*(undefined8 *)(lVar6 + 0x30));
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    FUN_1402f7f90(uVar1,*(undefined8 *)(lVar6 + 0x20));
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined4 *)(lVar6 + 0x28) = 0;
    FUN_1402f7f90(uVar1,lVar6);
    uVar7 = (ulonglong)local_res8[0];
  }
  return uVar7;
}

