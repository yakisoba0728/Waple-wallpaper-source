// Function: FUN_1400335d0
// Addr: 1400335d0
// Size: 276 bytes


undefined8 FUN_1400335d0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined1 local_18 [16];
  
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar6 = 0;
  uVar7 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar8 + uVar6);
      uVar6 = uVar6 + 1;
      uVar7 = (uVar7 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < (ulonglong)param_2[2]);
  }
  lVar5 = FUN_1400110a0(param_1,local_18,param_2,uVar7);
  plVar2 = *(longlong **)(lVar5 + 8);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x18);
  uVar7 = *(ulonglong *)(param_1 + 0x30) & uVar7;
  plVar3 = *(longlong **)(lVar5 + uVar7 * 0x10);
  if (*(longlong **)(lVar5 + 8 + uVar7 * 0x10) == plVar2) {
    if (plVar3 == plVar2) {
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(lVar5 + uVar7 * 0x10) = uVar4;
      *(undefined8 *)(lVar5 + 8 + uVar7 * 0x10) = uVar4;
    }
    else {
      *(longlong *)(lVar5 + 8 + uVar7 * 0x10) = plVar2[1];
    }
  }
  else if (plVar3 == plVar2) {
    *(longlong *)(lVar5 + uVar7 * 0x10) = *plVar2;
  }
  lVar5 = *plVar2;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)plVar2[1] = lVar5;
  *(longlong *)(lVar5 + 8) = plVar2[1];
  FUN_140017240(plVar2 + 6);
  FUN_140017240(plVar2 + 2);
  thunk_FUN_14028af80(plVar2,0x50);
  return 1;
}

