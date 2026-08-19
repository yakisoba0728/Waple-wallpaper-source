// Function: FUN_1402da74c
// Addr: 1402da74c
// Size: 3 bytes


void FUN_1402da74c(undefined8 *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_18 = 0;
  uStack_10 = 0;
  uVar1 = FUN_1402e7fd4(*param_1,param_6,0,&uStack_18,param_4,param_5);
  lVar3 = param_3 - (ulonglong)((int)uStack_18 == 0x2d);
  uVar4 = CONCAT44((int)((ulonglong)param_4 >> 0x20),uVar1);
  if (param_3 == -1) {
    lVar3 = -1;
  }
  iVar2 = func_0x0001402e7ec4(param_2 + ((int)uStack_18 == 0x2d),lVar3,uStack_18._4_4_ + param_6,
                              &uStack_18,uVar4,param_7,param_8);
  if (iVar2 == 0) {
    FUN_1402da824(param_2,param_3,param_6,&uStack_18,uVar4 & 0xffffffffffffff00,param_8);
  }
  else {
    *param_2 = 0;
  }
  return;
}

