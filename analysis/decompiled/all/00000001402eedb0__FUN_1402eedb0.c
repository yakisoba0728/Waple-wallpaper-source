// Function: FUN_1402eedb0
// Addr: 1402eedb0
// Size: 153 bytes


undefined8
FUN_1402eedb0(longlong *param_1,undefined8 param_2,char *param_3,longlong *param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  size_t sVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  sVar2 = strlen(param_3);
  iVar4 = (int)sVar2 + 0x12;
  if (iVar4 < 1) {
    lVar3 = 0;
    if (iVar4 < 0) {
      return 6;
    }
  }
  else {
    lVar3 = (**(code **)(*param_1 + 8))(*param_1);
    if (lVar3 == 0) {
      return 0x40;
    }
  }
  lVar5 = (longlong)(int)sVar2;
  FUN_1404210f0(lVar3,param_3,lVar5);
  uVar1 = s____namedfork_rsrc_1404368f8._8_8_;
  *(undefined8 *)(lVar5 + lVar3) = s____namedfork_rsrc_1404368f8._0_8_;
  *(undefined8 *)((char *)(lVar5 + lVar3) + 8) = uVar1;
  *(undefined2 *)(lVar5 + 0x10 + lVar3) = s____namedfork_rsrc_1404368f8._16_2_;
  *param_4 = lVar3;
  *param_5 = 0;
  return 0;
}

