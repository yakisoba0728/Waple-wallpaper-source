// Function: FUN_1402f8160
// Addr: 1402f8160
// Size: 128 bytes


longlong FUN_1402f8160(longlong param_1,char *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
    lVar3 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar4 = (int)sVar2 + 1;
    if (iVar4 < 1) {
      lVar3 = 0;
      if (iVar4 < 0) {
        uVar1 = 6;
        goto LAB_1402f81cf;
      }
    }
    else {
      lVar3 = (**(code **)(param_1 + 8))(param_1,iVar4);
      uVar1 = 0x40;
      if (lVar3 == 0) goto LAB_1402f81cf;
    }
    uVar1 = 0;
    if (iVar4 != 0) {
      FUN_1404210f0(lVar3,param_2,iVar4);
    }
  }
LAB_1402f81cf:
  *param_3 = uVar1;
  return lVar3;
}

