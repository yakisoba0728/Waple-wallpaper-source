// Function: FUN_1400e9f40
// Addr: 1400e9f40
// Size: 25 bytes


undefined8 * FUN_1400e9f40(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_UNWIND_INFO_1400e9e29_UnwindCodes_33__UnwindOpCode_140486cd8;
  puVar2 = (undefined8 *)param_1[4];
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)puVar2[2];
    puVar2[2] = 0;
    (**(code **)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  *param_1 = &DAT_140486d00;
  if ((param_2 & 1) != 0) {
    func_0x00014028b040(param_1,0x28);
  }
  return param_1;
}

