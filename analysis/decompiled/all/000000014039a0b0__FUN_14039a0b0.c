// Function: FUN_14039a0b0
// Addr: 14039a0b0
// Size: 42 bytes


undefined8
FUN_14039a0b0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 *param_5)

{
  if ((ulonglong)*(uint *)(param_1 + 0x20) < (ulonglong)(param_4 + param_3)) {
    return 0x80004005;
  }
  *param_2 = *(longlong *)(param_1 + 0x18) + param_3;
  *param_5 = 0;
  return 0;
}

