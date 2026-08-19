// Function: FUN_1400d2bf0
// Addr: 1400d2bf0
// Size: 84 bytes


undefined8
FUN_1400d2bf0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
             undefined8 *param_6,uint param_7,uint param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint local_20;
  undefined8 local_1c;
  
  if ((0x37 < param_1) ||
     (local_20 = 0x40, (0xa0318000000000U >> ((ulonglong)param_1 & 0x3f) & 1) == 0)) {
    local_20 = 0x20;
  }
  local_20 = local_20 | param_8;
  local_28 = 0;
  uStack_24 = 0;
  local_1c = (ulonglong)(1 < param_4) << 0x20;
  lVar2 = local_1c;
  uStack_34 = 1;
  local_1c._4_4_ = (uint)(1 < param_4);
  if ((param_7 & 2) == 0) {
    if ((param_7 & 4) != 0) {
      uStack_24 = 3;
      local_20 = 0;
      local_1c = CONCAT44(local_1c._4_4_,0x20000);
      lVar2 = local_1c;
    }
  }
  else {
    uStack_24 = 2;
    local_1c = CONCAT44(local_1c._4_4_,0x10000);
    local_20 = 8;
    lVar2 = local_1c;
  }
  local_1c = lVar2;
  uStack_48 = 0;
  uStack_40 = param_2;
  uStack_3c = param_3;
  iStack_38 = param_4;
  uStack_30 = param_1;
  if (param_5 == 0) {
    uStack_2c = 1;
    (**(code **)(*(longlong *)*param_6 + 0x28))((longlong *)*param_6,&uStack_40,0,&uStack_48);
  }
  else {
    param_8 = 0;
    uVar1 = param_6[7];
    uStack_2c = (undefined4)uVar1;
    local_28 = (undefined4)(uVar1 >> 0x20);
    iVar3 = (**(code **)(*(longlong *)*param_6 + 0xf0))
                      ((longlong *)*param_6,(ulonglong)param_1,uVar1 & 0xffffffff,&param_8);
    if (((iVar3 < 0) || (param_8 == 0)) ||
       (iVar3 = (**(code **)(*(longlong *)*param_6 + 0x28))
                          ((longlong *)*param_6,&uStack_40,0,&uStack_48), iVar3 < 0)) {
      uStack_2c = 1;
      local_28 = 0;
      (**(code **)(*(longlong *)*param_6 + 0x28))((longlong *)*param_6,&uStack_40,0,&uStack_48);
    }
  }
  return uStack_48;
}

