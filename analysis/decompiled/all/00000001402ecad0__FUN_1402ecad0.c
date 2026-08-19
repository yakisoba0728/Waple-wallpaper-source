// Function: FUN_1402ecad0
// Addr: 1402ecad0
// Size: 207 bytes


void FUN_1402ecad0(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  int param_9)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_128 [32];
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  int local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_128;
  local_f0 = 0;
  local_f8 = param_3;
  iVar3 = FUN_1402ec9c0(param_5,&local_f0);
  uVar1 = param_8;
  if (iVar3 != 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    if (param_9 == 2) {
      uStack_88 = param_8;
      uStack_78 = 3;
    }
    puStack_100 = &local_f8;
    puStack_108 = &param_7;
    FUN_1402de440(&local_b8,&local_f0,param_5,param_2);
  }
  cVar2 = FUN_1402d1fe0();
  if ((cVar2 == '\0') || (param_4 == 0)) {
    func_0x0001402de7b0(param_4);
    uVar4 = (undefined4)local_f8;
  }
  else {
    local_d8 = param_7;
    local_c8 = local_f8;
    local_e8[1] = 0;
    local_d0 = uVar1;
    local_e8[0] = param_4;
    local_e0 = param_1;
    iVar3 = FUN_1402d2010(local_e8);
    if (iVar3 == 0) {
      func_0x0001402de7b0(param_4);
    }
    uVar4 = (undefined4)local_c8;
  }
  func_0x0001402ed2f0(uVar4);
  return;
}

