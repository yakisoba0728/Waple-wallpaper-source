// Function: FUN_1402f26e0
// Addr: 1402f26e0
// Size: 184 bytes


undefined8 FUN_1402f26e0(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  
  if ((param_1 == (ushort *)0x0) || (param_2 == (ushort *)0x0)) {
    return 0x14;
  }
  uVar1 = param_1[1];
  if ((uVar1 == param_2[1]) && (*param_1 == *param_2)) {
    if (param_1 != param_2) {
      if (uVar1 != 0) {
        FUN_1404210f0(*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_1 + 4),
                      (ulonglong)uVar1 << 3);
        FUN_1404210f0(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 8),param_1[1]);
      }
      if (*param_1 != 0) {
        FUN_1404210f0(*(undefined8 *)(param_2 + 0xc),*(undefined8 *)(param_1 + 0xc),
                      (ulonglong)*param_1 * 2);
      }
      *(uint *)(param_2 + 0x10) =
           *(uint *)(param_2 + 0x10) ^
           (*(uint *)(param_2 + 0x10) ^ *(uint *)(param_1 + 0x10)) & 0xfffffffe;
    }
    return 0;
  }
  return 6;
}

