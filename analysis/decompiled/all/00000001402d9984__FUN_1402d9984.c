// Function: FUN_1402d9984
// Addr: 1402d9984
// Size: 91 bytes


PVOID FUN_1402d9984(undefined8 param_1,longlong param_2)

{
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar2 = (PVOID)0x0;
  pvVar1 = pvVar2;
  if (DAT_1404dc580 != 0xffffffff) {
    pvVar1 = FlsGetValue(DAT_1404dc580);
  }
  if ((pvVar1 != (PVOID)0xffffffffffffffff) &&
     ((pvVar1 != (PVOID)0x0 || (pvVar1 = (PVOID)FUN_1402d9774(), pvVar1 != (PVOID)0x0)))) {
    pvVar2 = (PVOID)(param_2 * 0x3c8 + (longlong)pvVar1);
  }
  return pvVar2;
}

