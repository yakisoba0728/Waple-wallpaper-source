// Function: FUN_1401a7f10
// Addr: 1401a7f10
// Size: 409 bytes


void FUN_1401a7f10(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  puVar1 = (undefined8 *)*param_1;
  puVar6 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar6 == puVar1) {
      if (param_2 == param_3) {
        plVar3 = (longlong *)0x0;
        plVar7 = (longlong *)0x0;
        plVar8 = plVar3;
      }
      else {
        plVar3 = (longlong *)FUN_14028af20(0x58);
        FUN_140016fc0(plVar3 + 2,param_2 + 2);
        FUN_140016fc0(plVar3 + 6,param_2 + 6);
        *(undefined4 *)(plVar3 + 10) = *(undefined4 *)(param_2 + 10);
        plVar8 = (longlong *)0x1;
        plVar7 = plVar3;
        for (param_2 = (undefined8 *)*param_2; param_2 != param_3; param_2 = (undefined8 *)*param_2)
        {
          plVar4 = (longlong *)FUN_14028af20(0x58);
          FUN_140016fc0(plVar4 + 2,param_2 + 2);
          FUN_140016fc0(plVar4 + 6,param_2 + 6);
          plVar8 = (longlong *)((longlong)plVar8 + 1);
          *(undefined4 *)(plVar4 + 10) = *(undefined4 *)(param_2 + 10);
          *plVar7 = (longlong)plVar4;
          plVar4[1] = (longlong)plVar7;
          plVar7 = plVar4;
        }
      }
      if (plVar8 != (longlong *)0x0) {
        lVar5 = *param_1;
        puVar1 = *(undefined8 **)(lVar5 + 8);
        plVar3[1] = (longlong)puVar1;
        *puVar1 = plVar3;
        *plVar7 = lVar5;
        *(longlong **)(lVar5 + 8) = plVar7;
        param_1[1] = param_1[1] + (longlong)plVar8;
      }
      return;
    }
    if (param_2 == param_3) break;
    if (puVar6 != param_2) {
      plVar8 = param_2 + 2;
      if (0xf < (ulonglong)param_2[5]) {
        plVar8 = (longlong *)*plVar8;
      }
      FUN_14000f880(puVar6 + 2,plVar8,param_2[4]);
      plVar8 = param_2 + 6;
      if (0xf < (ulonglong)param_2[9]) {
        plVar8 = (longlong *)*plVar8;
      }
      FUN_14000f880(puVar6 + 6,plVar8,param_2[8]);
    }
    *(undefined4 *)(puVar6 + 10) = *(undefined4 *)(param_2 + 10);
    puVar6 = (undefined8 *)*puVar6;
    param_2 = (undefined8 *)*param_2;
  }
  if (puVar6 == puVar1) {
    return;
  }
  plVar8 = (longlong *)puVar6[1];
  lVar5 = 0;
  *plVar8 = (longlong)puVar1;
  puVar1[1] = plVar8;
  do {
    puVar2 = (undefined8 *)*puVar6;
    FUN_140017240(puVar6 + 6);
    FUN_140017240(puVar6 + 2);
    thunk_FUN_14028af80(puVar6,0x58);
    lVar5 = lVar5 + 1;
    puVar6 = puVar2;
  } while (puVar2 != puVar1);
  param_1[1] = param_1[1] - lVar5;
  return;
}

