// Function: FUN_14013afe0
// Addr: 14013afe0
// Size: 57 bytes


undefined8 FUN_14013afe0(longlong param_1,longlong param_2)

{
  undefined1 local_58 [32];
  undefined1 local_38 [48];
  
  if (param_2 != 0) {
    FUN_140139670(local_58);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))(*(longlong **)(param_1 + 0x18),local_58);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_38);
  }
  return 0;
}

