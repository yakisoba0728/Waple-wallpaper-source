// Function: FUN_1402ddcc4
// Addr: 1402ddcc4
// Size: 86 bytes


undefined8 * FUN_1402ddcc4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  *param_1 = 0;
  FUN_1402d6370(8);
  puVar1 = (undefined8 *)FUN_1402ddd38(local_res8);
  puVar1 = (undefined8 *)*puVar1;
  *param_1 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1[5] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 3) = 0xffffffff;
  }
  __acrt_unlock(8);
  return param_1;
}

