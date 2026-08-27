// Function: FUN_1402eee50
// Addr: 1402eee50
// Size: 151 bytes


undefined8
FUN_1402eee50(longlong *param_1,undefined8 param_2,char *param_3,longlong *param_4,
             undefined4 *param_5)

{
  size_t sVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  sVar1 = strlen(param_3);
  iVar3 = (int)sVar1 + 6;
  if (iVar3 < 1) {
    lVar2 = 0;
    if (iVar3 < 0) {
      return 6;
    }
  }
  else {
    lVar2 = (**(code **)(*param_1 + 8))(*param_1);
    if (lVar2 == 0) {
      return 0x40;
    }
  }
  lVar4 = (longlong)(int)sVar1;
  FUN_1404210f0(lVar2,param_3,lVar4);
  *(undefined4 *)(lVar4 + lVar2) = DAT_1404368f0;
  *(undefined2 *)(lVar4 + 4 + lVar2) = DAT_1404368f4;
  *param_4 = lVar2;
  *param_5 = 0;
  return 0;
}

