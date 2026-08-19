// Function: FUN_14003aec0
// Addr: 14003aec0
// Size: 67 bytes


undefined8 FUN_14003aec0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_48 [40];
  
  puVar2 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
  }
  lVar1 = FUN_1402d6b70(puVar2);
  if ((lVar1 != 0) && (lVar1 == param_1[2])) {
                    /* WARNING: Subroutine does not return */
    FUN_1400166d0(local_48,param_1);
  }
  return 2;
}

