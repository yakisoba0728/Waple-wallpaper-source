// Function: FUN_140360550
// Addr: 140360550
// Size: 128 bytes


bool FUN_140360550(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *param_6 = 0;
  *param_5 = 0;
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x90) + 0x10);
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x80);
  }
  iVar3 = (**(code **)(*(longlong *)(lVar1 + 0x90) + 0xa0))
                    (lVar1,*(undefined8 *)(lVar1 + 0x98),param_3,param_4,param_5,param_6,uVar4);
  if (iVar3 != 0) {
    FUN_1403f07f0(param_1,param_5,param_6);
  }
  return iVar3 != 0;
}

