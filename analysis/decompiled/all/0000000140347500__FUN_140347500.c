// Function: FUN_140347500
// Addr: 140347500
// Size: 114 bytes


void FUN_140347500(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 == '\0') {
    iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x68686561,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = 0x138;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x76686561);
    if (iVar1 != 0) {
      return;
    }
    lVar2 = 0x198;
  }
  param_1 = param_1 + lVar2;
  iVar1 = FUN_1402f5610(param_2,&DAT_1404514b0,param_1);
  if (iVar1 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}

