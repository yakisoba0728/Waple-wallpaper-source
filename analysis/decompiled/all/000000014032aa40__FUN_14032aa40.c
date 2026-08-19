// Function: FUN_14032aa40
// Addr: 14032aa40
// Size: 76 bytes


undefined8 FUN_14032aa40(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1402f4cc0(lVar1);
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x150) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x154) * -0x40;
  *(int *)(param_1 + 6) = (int)*(short *)(lVar1 + 0x170) << 6;
  return 0;
}

