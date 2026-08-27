// Function: FUN_1402c9e20
// Addr: 1402c9e20
// Size: 49 bytes


undefined8 FUN_1402c9e20(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x7fffffff < param_3)) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
    FUN_1402cad8c();
  }
  return 0x7fffffff;
}

