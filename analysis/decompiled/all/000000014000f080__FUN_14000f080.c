// Function: FUN_14000f080
// Addr: 14000f080
// Size: 52 bytes


undefined8 FUN_14000f080(undefined8 param_1,ulonglong param_2)

{
  FUN_14000e7e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x78);
  }
  return param_1;
}

