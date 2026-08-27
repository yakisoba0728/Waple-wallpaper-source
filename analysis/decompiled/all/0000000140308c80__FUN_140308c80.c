// Function: FUN_140308c80
// Addr: 140308c80
// Size: 207 bytes


undefined8 FUN_140308c80(longlong param_1,char *param_2,int *param_3,char param_4)

{
  int iVar1;
  
  iVar1 = strcmp(param_2,"interpreter-version");
  if (iVar1 != 0) {
    return 0xc;
  }
  if (param_4 == '\0') {
    iVar1 = *param_3;
  }
  else {
    iVar1 = FUN_1402c0f34(param_3,0,10);
  }
  if (iVar1 != 0x23) {
    if ((iVar1 - 0x26U & 0xfffffffd) != 0) {
      return 7;
    }
    *(undefined4 *)(param_1 + 0x70) = 0x28;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x70) = 0x23;
  return 0;
}

