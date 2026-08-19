// Function: FUN_140161f90
// Addr: 140161f90
// Size: 90 bytes


undefined8 * FUN_140161f90(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_UNWIND_INFO_140161e42_UnwindCodes_61__OffsetInProlog_14048ba10;
  if (param_1[4] != 0) {
    func_0x00014014cd40(param_1[1] + 0x1520,param_1 + 4,1);
    puVar1 = (undefined8 *)param_1[4];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  if ((param_2 & 1) != 0) {
    puVar1 = (undefined8 *)func_0x00014028b040(param_1,0x40);
    return puVar1;
  }
  return param_1;
}

