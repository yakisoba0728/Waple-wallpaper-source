// Function: FUN_14013d130
// Addr: 14013d130
// Size: 52 bytes


undefined8 FUN_14013d130(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 local_a8 [32];
  undefined1 auStack_88 [48];
  undefined1 local_58 [80];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_14013b5e0(local_58);
    FUN_14013b5e0(local_a8,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),local_58,local_a8);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(auStack_88);
  }
  return 0;
}

