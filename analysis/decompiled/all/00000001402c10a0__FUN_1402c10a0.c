// Function: FUN_1402c10a0
// Addr: 1402c10a0
// Size: 40 bytes


undefined8 FUN_1402c10a0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x16;
    FUN_1402cad8c();
  }
  return 0x7fffffff;
}

