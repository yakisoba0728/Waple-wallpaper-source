// Function: FUN_1402f93c0
// Addr: 1402f93c0
// Size: 39 bytes


undefined8 FUN_1402f93c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  if (*(char *)*param_1 == *(char *)*param_2) {
    iVar1 = strcmp((char *)*param_1,(char *)*param_2);
    return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
  }
  return 0;
}

