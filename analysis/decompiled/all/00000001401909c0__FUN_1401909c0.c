// Function: FUN_1401909c0
// Addr: 1401909c0
// Size: 697 bytes


void FUN_1401909c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *local_res10 [3];
  
  plVar1 = *(longlong **)(param_1 + 0x158);
  do {
    plVar3 = plVar1;
    local_res10[0] = param_2;
    if (plVar3 == *(longlong **)(param_1 + 0x160)) goto LAB_140190a13;
    plVar1 = plVar3 + 1;
  } while ((undefined8 *)*plVar3 != param_2);
  FUN_1404210f0(plVar3,plVar1,(longlong)*(longlong **)(param_1 + 0x160) - (longlong)plVar1);
  *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + -8;
LAB_140190a13:
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  do {
    plVar3 = plVar1;
    if (plVar3 == *(longlong **)(param_1 + 0x1d0)) goto LAB_140190a49;
    plVar1 = plVar3 + 1;
  } while ((undefined8 *)*plVar3 != param_2);
  FUN_1404210f0(plVar3,plVar1,(longlong)*(longlong **)(param_1 + 0x1d0) - (longlong)plVar1);
  *(longlong *)(param_1 + 0x1d0) = *(longlong *)(param_1 + 0x1d0) + -8;
LAB_140190a49:
  plVar1 = *(longlong **)(param_1 + 0x170);
  do {
    plVar3 = plVar1;
    if (plVar3 == *(longlong **)(param_1 + 0x178)) goto LAB_140190bbb;
    plVar1 = plVar3 + 1;
  } while ((undefined8 *)*plVar3 != param_2);
  FUN_1404210f0(plVar3,plVar1,(longlong)*(longlong **)(param_1 + 0x178) - (longlong)plVar1);
  *(longlong *)(param_1 + 0x178) = *(longlong *)(param_1 + 0x178) + -8;
  plVar1 = *(longlong **)(param_1 + 400);
  lVar2 = *(longlong *)(param_1 + 0x1a0);
  uVar7 = (((((((((ulonglong)param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (longlong)param_2 >> 8 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x10 & 0xffU)
               * 0x100000001b3 ^ (longlong)param_2 >> 0x18 & 0xffU) * 0x100000001b3 ^
             (longlong)param_2 >> 0x20 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x28 & 0xffU)
            * 0x100000001b3 ^ (longlong)param_2 >> 0x30 & 0xffU) * 0x100000001b3 ^
          (longlong)param_2 >> 0x38 & 0xffU) * 0x100000001b3 & *(ulonglong *)(param_1 + 0x1b8);
  plVar3 = *(longlong **)(lVar2 + 8 + uVar7 * 0x10);
  if (plVar3 == plVar1) {
LAB_140190b61:
    plVar6 = (longlong *)0x0;
  }
  else {
    puVar4 = (undefined8 *)plVar3[2];
    plVar6 = plVar3;
    while (param_2 != puVar4) {
      if (plVar6 == *(longlong **)(lVar2 + uVar7 * 0x10)) goto LAB_140190b61;
      plVar6 = (longlong *)plVar6[1];
      puVar4 = (undefined8 *)plVar6[2];
    }
  }
  if (plVar6 != (longlong *)0x0) {
    plVar5 = *(longlong **)(lVar2 + uVar7 * 0x10);
    if (plVar3 == plVar6) {
      if (plVar5 == plVar6) {
        *(longlong **)(lVar2 + uVar7 * 0x10) = plVar1;
        *(longlong **)(lVar2 + 8 + uVar7 * 0x10) = plVar1;
      }
      else {
        *(longlong *)(lVar2 + 8 + uVar7 * 0x10) = plVar6[1];
      }
    }
    else if (plVar5 == plVar6) {
      *(longlong *)(lVar2 + uVar7 * 0x10) = *plVar6;
    }
    lVar2 = *plVar6;
    *(longlong *)(param_1 + 0x198) = *(longlong *)(param_1 + 0x198) + -1;
    *(longlong *)plVar6[1] = lVar2;
    *(longlong *)(lVar2 + 8) = plVar6[1];
    thunk_FUN_14028af80(plVar6,0x18);
  }
LAB_140190bbb:
  plVar1 = *(longlong **)(param_1 + 0x1e0);
  do {
    plVar3 = plVar1;
    if (plVar3 == *(longlong **)(param_1 + 0x1e8)) goto LAB_140190bf3;
    plVar1 = plVar3 + 1;
  } while ((undefined8 *)*plVar3 != param_2);
  FUN_1404210f0(plVar3,plVar1,(longlong)*(longlong **)(param_1 + 0x1e8) - (longlong)plVar1);
  *(longlong *)(param_1 + 0x1e8) = *(longlong *)(param_1 + 0x1e8) + -8;
LAB_140190bf3:
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  do {
    plVar3 = plVar1;
    if (plVar3 == *(longlong **)(param_1 + 0x200)) goto LAB_140190c29;
    plVar1 = plVar3 + 1;
  } while ((undefined8 *)*plVar3 != param_2);
  FUN_1404210f0(plVar3,plVar1,(longlong)*(longlong **)(param_1 + 0x200) - (longlong)plVar1);
  *(longlong *)(param_1 + 0x200) = *(longlong *)(param_1 + 0x200) + -8;
LAB_140190c29:
  FUN_14019e2a0(param_1 + 0x280,local_res10);
  FUN_14019e2a0(param_1 + 0x2c0,local_res10);
  FUN_14019e2a0(param_1 + 0x210,local_res10);
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,1);
  }
  return;
}

