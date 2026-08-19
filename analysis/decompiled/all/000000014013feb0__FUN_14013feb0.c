// Function: FUN_14013feb0
// Addr: 14013feb0
// Size: 9 bytes


undefined8 FUN_14013feb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [48];
  
  if (param_3 != 0) {
    FUN_14013b110(auStack_58,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(*(longlong **)(param_1 + 0x18),auStack_58)
    ;
                    /* WARNING: Subroutine does not return */
    FUN_140017310(auStack_38);
  }
  return 0;
}

