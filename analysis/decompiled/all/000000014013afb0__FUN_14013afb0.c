// Function: FUN_14013afb0
// Addr: 14013afb0
// Size: 134 bytes


undefined8 FUN_14013afb0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 local_a8 [32];
  undefined1 local_88 [48];
  undefined1 local_58 [32];
  undefined1 local_38 [48];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_1401395a0(local_58);
    FUN_1401395a0(local_a8,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),local_58,local_a8);
    FUN_140017240(local_88);
    FUN_140017240(local_a8);
    FUN_140017240(local_38);
    FUN_140017240(local_58);
  }
  return 0;
}

