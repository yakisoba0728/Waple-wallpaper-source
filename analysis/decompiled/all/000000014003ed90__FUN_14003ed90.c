// Function: FUN_14003ed90
// Addr: 14003ed90
// Size: 130 bytes


undefined1 FUN_14003ed90(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 local_38;
  uint local_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_30 = CONCAT31(local_30._1_3_,3);
  local_30 = local_30 & 0xfffffeff;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_38 = param_2;
  uVar2 = FUN_14003f1b0(0,&local_38);
  FUN_140086d30(&local_38);
  lVar1 = local_28;
  if (local_28 != 0) {
    FUN_140017240(local_28 + 0x40);
    FUN_140017240(lVar1 + 0x20);
    FUN_140017240(lVar1);
    thunk_FUN_14028af80(lVar1,0x60);
  }
  return uVar2;
}

