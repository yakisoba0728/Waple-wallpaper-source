// Function: FUN_14013fde0
// Addr: 14013fde0
// Size: 70 bytes


undefined8 FUN_14013fde0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_58 [32];
  undefined1 local_38 [48];
  
  if (param_3 != 0) {
    FUN_14013b040(local_58,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),local_58);
    FUN_140017240(local_38);
    FUN_140017240(local_58);
  }
  return 0;
}

