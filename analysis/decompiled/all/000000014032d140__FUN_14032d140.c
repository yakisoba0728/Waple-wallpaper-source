// Function: FUN_14032d140
// Addr: 14032d140
// Size: 71 bytes


undefined8 FUN_14032d140(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0xe8);
  FUN_1402f4bf0();
  *(int *)((longlong)param_1 + 0x24) = *(int *)(lVar1 + 0x28) << 6;
  *(int *)(param_1 + 5) = *(int *)(lVar1 + 0x2c) * -0x40;
  *(uint *)(param_1 + 6) = (uint)*(ushort *)(lVar1 + 8) << 6;
  return 0;
}

