// Function: FUN_14013af10
// Addr: 14013af10
// Size: 67 bytes


undefined8 FUN_14013af10(longlong param_1,longlong param_2)

{
  undefined1 local_58 [32];
  undefined1 local_38 [48];
  
  if (param_2 != 0) {
    FUN_1401395a0(local_58);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),local_58);
    FUN_140017240(local_38);
    FUN_140017240(local_58);
  }
  return 0;
}

