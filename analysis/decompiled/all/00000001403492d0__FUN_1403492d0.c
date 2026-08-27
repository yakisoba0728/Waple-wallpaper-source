// Function: FUN_1403492d0
// Addr: 1403492d0
// Size: 217 bytes


undefined8
FUN_1403492d0(longlong param_1,longlong param_2,int param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  if (param_3 == -1) {
    if (param_4 != 0) {
      FUN_1404217a0(param_5,0,(ulonglong)param_4 << 2);
      return 1;
    }
  }
  else {
    uVar4 = 0;
    lVar1 = *(longlong *)(param_1 + 0x2e0);
    if (param_4 != 0) {
      do {
        uVar5 = (int)uVar4 + param_3;
        if (*(longlong *)(param_2 + 0x78) == 0) {
          uVar3 = 0;
        }
        else {
          uVar2 = *(uint *)(param_2 + 0x68) - 1;
          if (uVar5 < *(uint *)(param_2 + 0x68)) {
            uVar2 = uVar5;
          }
          uVar5 = *(uint *)((ulonglong)uVar2 * 4 + *(longlong *)(param_2 + 0x78));
          uVar3 = *(undefined4 *)((ulonglong)uVar2 * 4 + *(longlong *)(param_2 + 0x70));
        }
        uVar3 = (**(code **)(lVar1 + 0x70))(param_1,param_2 + 0x48,uVar3,uVar5);
        *(undefined4 *)(param_5 + uVar4 * 4) = uVar3;
        uVar5 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar5;
      } while (uVar5 < param_4);
    }
  }
  return 1;
}

