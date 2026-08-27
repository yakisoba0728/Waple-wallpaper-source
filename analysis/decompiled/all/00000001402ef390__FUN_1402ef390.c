// Function: FUN_1402ef390
// Addr: 1402ef390
// Size: 414 bytes


void FUN_1402ef390(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = *param_1;
  if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0x130) == param_1)) {
    *(undefined8 *)(lVar2 + 0x130) = 0;
  }
  if ((((*(byte *)*param_1 & 2) != 0) &&
      (plVar5 = (longlong *)param_1[1], plVar5 != (longlong *)0x0)) &&
     (plVar1 = plVar5 + 0x23, plVar1 != (longlong *)0x0)) {
    for (plVar6 = (longlong *)*plVar1; plVar6 != (longlong *)0x0; plVar6 = (longlong *)plVar6[1]) {
      if ((longlong *)plVar6[2] == param_1) {
        lVar2 = *plVar5;
        if (param_1[0xc] != 0) {
          (**(code **)(*(longlong *)(param_1[3] + 0x60) + 0x28))();
        }
        lVar8 = *plVar6;
        plVar6 = (longlong *)plVar6[1];
        if (lVar8 == 0) {
          *plVar1 = (longlong)plVar6;
        }
        else {
          *(longlong **)(lVar8 + 8) = plVar6;
        }
        if (plVar6 == (longlong *)0x0) {
          plVar5[0x24] = lVar8;
        }
        else {
          *plVar6 = lVar8;
        }
        (**(code **)(lVar2 + 0x10))(lVar2);
        lVar2 = *plVar1;
        while ((lVar8 = 0, lVar2 != 0 &&
               (lVar8 = *(longlong *)(lVar2 + 0x10), *(int *)(lVar8 + 0x20) != 0x6f75746c))) {
          lVar2 = *(longlong *)(lVar2 + 8);
        }
        plVar5[0x25] = lVar8;
        break;
      }
    }
  }
  if ((((*(byte *)*param_1 & 1) != 0) && (plVar5 = param_1 + 4, plVar5 != (longlong *)0x0)) &&
     (lVar2 = param_1[2], lVar2 != 0)) {
    lVar8 = *plVar5;
    while (lVar8 != 0) {
      lVar7 = *(longlong *)(lVar8 + 8);
      FUN_1402f6a90(lVar2,*(undefined8 *)(lVar8 + 0x10),param_1);
      (**(code **)(lVar2 + 0x10))(lVar2,lVar8);
      lVar8 = lVar7;
    }
    *plVar5 = 0;
    param_1[5] = 0;
  }
  if (*(code **)(lVar4 + 0x28) != (code *)0x0) {
    (**(code **)(lVar4 + 0x28))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001402ef52b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3,param_1);
  return;
}

