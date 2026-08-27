// Function: FUN_1402bc7f0
// Addr: 1402bc7f0
// Size: 179 bytes


void FUN_1402bc7f0(longlong param_1,longlong *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (-1 < *param_3) {
    param_2 = (longlong *)((longlong)param_3[2] + *param_2);
  }
  iVar1 = FUN_1402bc420();
  if (iVar1 == 1) {
    uVar2 = FUN_1402ba7a0(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1402bb570();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1402933a0(param_2,lVar3,uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = FUN_1402ba7a0(*(undefined8 *)(param_1 + 0x28),param_4 + 8);
    iVar1 = *(int *)(param_4 + 0x18);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1402bb570();
      lVar3 = lVar3 + iVar1;
    }
    FUN_1402933b0(param_2,lVar3,uVar2,1);
  }
  return;
}

