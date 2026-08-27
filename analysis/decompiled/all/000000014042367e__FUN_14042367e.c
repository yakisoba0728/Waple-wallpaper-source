// Function: FUN_14042367e
// Addr: 14042367e
// Size: 42 bytes


void FUN_14042367e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_1402c9b30(*(undefined8 *)(param_2 + 0x40));
  return;
}

