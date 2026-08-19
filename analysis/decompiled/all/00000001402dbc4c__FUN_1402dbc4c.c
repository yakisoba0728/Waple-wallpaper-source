// Function: FUN_1402dbc4c
// Addr: 1402dbc4c
// Size: 90 bytes


undefined4
FUN_1402dbc4c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  FUN_1402d6370(*param_2);
  DAT_1404e4e28 = *(undefined8 *)*param_3;
  uVar1 = (*DAT_140426468)(&LAB_1402dbc38,1);
  DAT_1404e4e28 = 0;
  __acrt_unlock(*param_4);
  return uVar1;
}

