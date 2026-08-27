// Function: FUN_14009b200
// Addr: 14009b200
// Size: 283 bytes


void FUN_14009b200(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_48 [4];
  longlong local_38;
  
  if (*(int *)(param_1 + 0x30) != param_3) {
    *(int *)(param_1 + 0x30) = param_3;
    if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x138) + 0x10))();
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x138);
  if (lVar3 == 0) {
    local_48[1] = 2;
    local_48[3] = 0x10000;
    local_48[2] = 4;
    local_48[0] = param_3;
    local_38 = lVar3;
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0x18))
              ((longlong *)**(undefined8 **)(param_1 + 0x70),local_48,0,param_1 + 0x138);
    lVar3 = *(longlong *)(param_1 + 0x138);
    if (lVar3 == 0) {
      return;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
  iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,lVar3,0,4,0,&local_58);
  if (-1 < iVar2) {
    FUN_1404210f0(local_58,param_2,param_3);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x138),0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
  (**(code **)(*plVar1 + 0x80))(plVar1,3,1,param_1 + 0x138);
  return;
}

