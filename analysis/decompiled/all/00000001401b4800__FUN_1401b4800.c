// Function: FUN_1401b4800
// Addr: 1401b4800
// Size: 48 bytes


undefined8 FUN_1401b4800(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar1 = (undefined8 *)*param_3;
  }
  FUN_1401b5e50(param_1,param_2,puVar1,param_3[2] + (longlong)puVar1);
  return param_2;
}

