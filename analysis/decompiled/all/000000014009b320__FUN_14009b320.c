// Function: FUN_14009b320
// Addr: 14009b320
// Size: 229 bytes


undefined8 FUN_14009b320(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48 [4];
  longlong local_38;
  
  if (*(uint *)(param_1 + 0x2c) < param_3) {
    *(uint *)(param_1 + 0x2c) = param_3;
    if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x130) + 0x10))();
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x130);
  if (lVar3 == 0) {
    local_48[1] = 2;
    local_48[3] = 0x10000;
    local_48[2] = 4;
    local_48[0] = param_3;
    local_38 = lVar3;
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x70) + 0x18))
              ((longlong *)**(undefined8 **)(param_1 + 0x70),local_48,0,param_1 + 0x130);
    lVar3 = *(longlong *)(param_1 + 0x130);
    if (lVar3 == 0) {
      return 0;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
  iVar2 = (**(code **)(*plVar1 + 0x70))(plVar1,lVar3,0,4,0,&local_58);
  if (iVar2 < 0) {
    return 0;
  }
  *param_2 = local_58;
  return 1;
}

