// Function: FUN_1400fb3e0
// Addr: 1400fb3e0
// Size: 99 bytes


void FUN_1400fb3e0(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_14004c4c0(param_1 + 2,param_2,param_3 | 1);
  lVar2 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
  if (lVar1 != 0) {
    uVar4 = 4;
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      uVar4 = 0;
    }
    FUN_140013b50(lVar2,uVar4,0);
    return;
  }
  uVar3 = 6;
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    uVar3 = 2;
  }
  FUN_140013b50(lVar2,uVar3 | *(uint *)(lVar2 + 0x10),0);
  return;
}

