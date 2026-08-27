// Function: FUN_14013cf50
// Addr: 14013cf50
// Size: 102 bytes


undefined8 FUN_14013cf50(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = DAT_140426ee8;
  if (param_3 == (undefined8 *)0x0) {
    return 0x80070057;
  }
  *param_3 = 0;
  if (((*param_2 != lVar1) || (param_2[1] != DAT_140426ef0)) &&
     ((*param_2 != DAT_14048ae60 || (param_2[1] != DAT_14048ae68)))) {
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))();
  return 0;
}

