// Function: FUN_1402dbb7c
// Addr: 1402dbb7c
// Size: 90 bytes


BOOL FUN_1402dbb7c(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  BOOL BVar1;
  
  __acrt_lock(*param_2);
  DAT_1404e4d58 = *(undefined8 *)*param_3;
  BVar1 = EnumSystemLocalesW((LOCALE_ENUMPROCW)&LAB_1402dbb68,1);
  DAT_1404e4d58 = 0;
  __acrt_unlock(*param_4);
  return BVar1;
}

