// Function: FUN_1401661a0
// Addr: 1401661a0
// Size: 104 bytes


int FUN_1401661a0(uint param_1)

{
  if (99999999 < param_1) {
    return 9;
  }
  if (9999999 < param_1) {
    return 8;
  }
  if (999999 < param_1) {
    return 7;
  }
  if (99999 < param_1) {
    return 6;
  }
  if (9999 < param_1) {
    return 5;
  }
  if (999 < param_1) {
    return 4;
  }
  if (99 < param_1) {
    return 3;
  }
  return 2 - (uint)(param_1 < 10);
}

