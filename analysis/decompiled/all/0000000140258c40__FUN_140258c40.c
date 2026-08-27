// Function: FUN_140258c40
// Addr: 140258c40
// Size: 93 bytes


void FUN_140258c40(longlong param_1)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  lVar1 = *(longlong *)(param_1 + 0x5a8);
  if (lVar1 != 0) {
    local_28 = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_10 = 0;
    uStack_20 = 0;
    uStack_18 = 0;
    FUN_140258b80(0,&local_38);
    *(undefined8 *)(lVar1 + 0x1c) = local_38;
    *(undefined8 *)(lVar1 + 0x24) = uStack_30;
    *(undefined8 *)(lVar1 + 0x2c) = local_28;
    *(undefined8 *)(lVar1 + 0x34) = uStack_20;
    *(undefined8 *)(lVar1 + 0x3c) = uStack_18;
    *(undefined8 *)(lVar1 + 0x44) = uStack_10;
  }
  return;
}

