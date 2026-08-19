// Function: FUN_1400f9060
// Addr: 1400f9060
// Size: 14 bytes


undefined8 FUN_1400f9060(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  if (((ulonglong)param_2[1] <= (ulonglong)param_1[2]) &&
     (iVar1 = func_0x0001404210c0(puVar2,*param_2), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

