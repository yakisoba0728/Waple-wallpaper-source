// Function: FUN_140308d50
// Addr: 140308d50
// Size: 72 bytes


undefined8 FUN_140308d50(longlong param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x70);
    return 0;
  }
  return 0xc;
}

