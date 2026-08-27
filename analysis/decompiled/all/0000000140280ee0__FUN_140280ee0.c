// Function: FUN_140280ee0
// Addr: 140280ee0
// Size: 226 bytes


void FUN_140280ee0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_1402843b0(param_1 + 1);
  lVar8 = param_1[9];
  if (param_1[9] == param_1[10]) {
    lVar8 = 0;
  }
  plVar5 = *(longlong **)*param_1;
  if (plVar5 != (longlong *)((longlong *)*param_1)[1]) {
    do {
      puVar1 = (undefined8 *)plVar5[1];
      puVar3 = (undefined8 *)*plVar5;
      if (puVar3 != puVar1) {
        if ((ulonglong)((longlong)puVar1 - (longlong)puVar3) < 0x10) {
          uVar6 = *puVar3;
          uVar2 = puVar1[-1];
          lVar7 = lVar8;
        }
        else {
          uVar2 = puVar1[-1];
          uVar6 = puVar1[-2];
          lVar7 = lVar8;
        }
        do {
          uVar4 = uVar2;
          uVar2 = *puVar3;
          lVar8 = lVar7 + 0x38;
          FUN_140284480(param_1 + 1,lVar7,uVar6,uVar4,uVar2);
          puVar3 = puVar3 + 1;
          uVar6 = uVar4;
          lVar7 = lVar8;
        } while (puVar3 != (undefined8 *)plVar5[1]);
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != *(longlong **)(*param_1 + 8));
  }
  FUN_140284a20(param_1 + 1);
  return;
}

