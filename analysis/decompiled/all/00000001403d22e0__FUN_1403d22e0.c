// Function: FUN_1403d22e0
// Addr: 1403d22e0
// Size: 231 bytes


void FUN_1403d22e0(undefined8 param_1,uint *param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  float fStack_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  float fStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc110 ^ (ulonglong)auStack_d8;
  func_0x00014039dc00();
  puVar1 = param_2 + 2;
  (*DAT_140426580)(puVar1);
  lVar2 = *(longlong *)(param_2 + 0xc);
  iVar4 = FUN_1402f13a0(lVar2,param_3,*param_2 | 8);
  if ((iVar4 == 0) && (*(int *)(*(longlong *)(lVar2 + 0x78) + 0x60) == 0x6f75746c)) {
    local_a8 = FUN_14039dd80;
    local_a0 = &DAT_14039dca0;
    local_98 = &DAT_14039d3a0;
    local_90 = &DAT_14039d4b0;
    uVar5 = 0;
    local_88 = 0;
    local_70 = param_5;
    local_68 = 0;
    local_60 = 0.0;
    fStack_5c = 0.0;
    local_58 = 0.0;
    uStack_54 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_78 = param_4;
    FUN_1402f2870(*(longlong *)(lVar2 + 0x78) + 0x98,&local_a8,&local_78);
    uVar3 = local_70;
    lVar2 = local_78;
    if ((int)local_68 != 0) {
      if ((local_68._4_4_ != fStack_5c) || (local_60 != local_58)) {
        uStack_b0 = uVar5;
        if (*(longlong *)(local_78 + 0x38) != 0) {
          uStack_b0 = *(undefined8 *)(*(longlong *)(local_78 + 0x38) + 8);
        }
        fStack_b8 = local_60;
        (**(code **)(local_78 + 0x18))(local_78,local_70,&local_68);
      }
      if (*(longlong *)(lVar2 + 0x38) != 0) {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x20);
      }
      (**(code **)(lVar2 + 0x30))(lVar2,uVar3,&local_68,uVar5);
    }
    local_68 = 0;
    fStack_5c = 0.0;
    local_58 = 0.0;
    local_60 = 0.0;
  }
  if (puVar1 != (uint *)0x0) {
    (*DAT_140426578)(puVar1);
  }
  func_0x0001402ed2f0(local_38 ^ (ulonglong)auStack_d8);
  return;
}

