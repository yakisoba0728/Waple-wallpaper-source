// Function: FUN_1400f1120
// Addr: 1400f1120
// Size: 275 bytes


void FUN_1400f1120(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (param_1[0x13] == 0) {
    lVar3 = FUN_140292400(param_2,param_3,0x40);
    if (lVar3 != 0) {
      plVar1 = param_1 + 3;
      FUN_14004c2f0(plVar1,lVar3,1);
      plVar2 = *(longlong **)(param_1[0xf] + 8);
      local_10 = plVar2;
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar4 = FUN_14004bce0(local_18);
      FUN_14004c1a0(plVar1,uVar4);
      if (plVar2 != (longlong *)0x0) {
        puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      lVar6 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
      lVar3 = *(longlong *)(lVar6 + 0x48);
      if (plVar1 != (longlong *)0x0) {
        uVar4 = 4;
        if (lVar3 != 0) {
          uVar4 = 0;
        }
        FUN_140013b50(lVar6,uVar4);
        return;
      }
      goto LAB_1400f1151;
    }
    lVar3 = *param_1;
  }
  else {
    lVar3 = *param_1;
  }
  lVar6 = (longlong)*(int *)(lVar3 + 4) + (longlong)param_1;
  lVar3 = *(longlong *)(lVar6 + 0x48);
LAB_1400f1151:
  uVar7 = 6;
  if (lVar3 != 0) {
    uVar7 = 2;
  }
  FUN_140013b50(lVar6,uVar7 | *(uint *)(lVar6 + 0x10),0);
  return;
}

