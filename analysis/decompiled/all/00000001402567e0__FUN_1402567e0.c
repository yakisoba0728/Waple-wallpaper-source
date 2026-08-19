// Function: FUN_1402567e0
// Addr: 1402567e0
// Size: 110 bytes


undefined8 * FUN_1402567e0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_UNWIND_INFO_140256706_UnwindCodes_3__OffsetInProlog_140491750;
  puVar1 = (undefined8 *)param_1[0x49];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x4b];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1401de2b0(param_1);
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,0x270);
    return puVar1;
  }
  return param_1;
}

