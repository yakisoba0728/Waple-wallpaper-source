// Function: FUN_14013b080
// Addr: 14013b080
// Size: 101 bytes


undefined8 FUN_14013b080(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 local_a8 [32];
  undefined1 local_88 [48];
  undefined1 local_58 [80];
  
  if ((param_2 != 0) && (param_3 != 0)) {
    FUN_140139670(local_58);
    FUN_140139670(local_a8,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),local_58,local_a8);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_88);
  }
  return 0;
}

