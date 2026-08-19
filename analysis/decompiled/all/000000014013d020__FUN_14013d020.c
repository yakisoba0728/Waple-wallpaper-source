// Function: FUN_14013d020
// Addr: 14013d020
// Size: 51 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14013d020(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = DAT_140426fb8;
  if (param_3 == (undefined8 *)0x0) {
    return 0x80070057;
  }
  *param_3 = 0;
  if (((*param_2 != lVar1) || (param_2[1] != DAT_140426fc0)) &&
     ((*param_2 != _UNK_14048af30 || (param_2[1] != _UNK_14048af38)))) {
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}

