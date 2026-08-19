// Function: FUN_14013b030
// Addr: 14013b030
// Size: 6 bytes


undefined8 FUN_14013b030(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [48];
  
  if (param_2 != 0) {
    FUN_140139670(auStack_58);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),auStack_58)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_140017310(auStack_38);
  }
  return 0;
}

