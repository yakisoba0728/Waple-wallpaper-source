// Function: FUN_14013ff00
// Addr: 14013ff00
// Size: 104 bytes


undefined8 FUN_14013ff00(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined1 local_a8 [32];
  undefined1 local_88 [48];
  undefined1 local_58 [80];
  
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_14013b110(local_58,param_3);
    FUN_14013b110(local_a8,param_4);
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
              (*(longlong **)(param_1 + 0x18),local_58,local_a8);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_88);
  }
  return 0;
}

