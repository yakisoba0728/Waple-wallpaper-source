// Function: FUN_1402f21c0
// Addr: 1402f21c0
// Size: 31 bytes


longlong FUN_1402f21c0(int param_1,int param_2)

{
  return ((longlong)param_1 * (longlong)param_2 >> 0x3f) + 0x8000 +
         (longlong)param_1 * (longlong)param_2 >> 0x10;
}

