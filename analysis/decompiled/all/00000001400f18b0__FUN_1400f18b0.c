// Function: FUN_1400f18b0
// Addr: 1400f18b0
// Size: 102 bytes


undefined8 FUN_1400f18b0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  if (param_3 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  if (((*param_2 != DAT_140426ee8) || (param_2[1] != DAT_140426ef0)) &&
     ((*param_2 != DAT_1404872b8 || (param_2[1] != DAT_1404872c0)))) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}

