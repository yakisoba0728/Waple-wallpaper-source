// Function: FUN_140149100
// Addr: 140149100
// Size: 83 bytes


void FUN_140149100(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  uVar2 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if ((uVar2 & 1) == 0) {
    FUN_140146f00(param_3,param_2,param_1,0);
  }
  else {
    FUN_1401464f0();
  }
  FUN_1401474b0(param_1,param_3,uVar1);
  return;
}

