// Function: FUN_1400ce3b0
// Addr: 1400ce3b0
// Size: 137 bytes


undefined8 * FUN_1400ce3b0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)param_1[0x21];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x1a);
    param_1[0x21] = 0;
  }
  *param_1 = &PTR_DAT_140486080;
  if ((*(char *)((longlong)param_1 + 0xc1) != '\0') && (*(int *)((longlong)param_1 + 0xbc) == 0)) {
    FUN_1402922e0(param_1 + 4);
  }
  FUN_140292ec0(param_1 + 2);
  if ((param_2 & 1) != 0) {
    puVar2 = (undefined8 *)func_0x00014028b040(param_1,0x110);
    return puVar2;
  }
  return param_1;
}

