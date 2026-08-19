// Function: FUN_1400f1980
// Addr: 1400f1980
// Size: 31 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f1980(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  if (param_3 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  if (((*param_2 != DAT_140426fb8) || (param_2[1] != DAT_140426fc0)) &&
     ((*param_2 != _UNK_140487388 || (param_2[1] != _UNK_140487390)))) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}

