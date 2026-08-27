// Function: FUN_14013fe30
// Addr: 14013fe30
// Size: 137 bytes


undefined8 FUN_14013fe30(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined1 local_a8 [32];
  undefined1 local_88 [48];
  undefined1 local_58 [32];
  undefined1 local_38 [48];
  
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_14013b040(local_58,param_3);
    FUN_14013b040(local_a8,param_4);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),local_58,local_a8);
    FUN_140017240(local_88);
    FUN_140017240(local_a8);
    FUN_140017240(local_38);
    FUN_140017240(local_58);
  }
  return 0;
}

