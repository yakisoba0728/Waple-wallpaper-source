// Function: FUN_140292f20
// Addr: 140292f20
// Size: 83 bytes


longlong FUN_140292f20(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0xa8) = std::exception::vftable;
  FUN_1402bba20(param_1 + 0xb0);
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0xc0);
  }
  return param_1;
}

