// Function: FUN_1400e85b0
// Addr: 1400e85b0
// Size: 9 bytes


undefined8 * FUN_1400e85b0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)func_0x00014028aff0(0x30);
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_UNWIND_INFO_1400e99ee_CountOfUnwindCodes_140486ce0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[1] = 6;
  puVar2[3] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
  if (lVar1 != 0) {
    puVar2[2] = lVar1;
    *(undefined8 **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x18) = puVar2;
  }
  *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10) = puVar2;
  *(undefined8 **)(param_1 + 8) = puVar2;
  return puVar2;
}

