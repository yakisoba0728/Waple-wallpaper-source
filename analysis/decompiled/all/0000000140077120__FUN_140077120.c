// Function: FUN_140077120
// Addr: 140077120
// Size: 282 bytes


longlong * FUN_140077120(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  
  if ((ulonglong)param_3[5] < 0x10) {
    plVar6 = param_3 + 2;
  }
  else {
    plVar6 = (longlong *)param_3[2];
  }
  uVar4 = 0;
  uVar5 = 0xcbf29ce484222325;
  if (param_3[4] != 0) {
    do {
      pbVar1 = (byte *)((longlong)plVar6 + uVar4);
      uVar4 = uVar4 + 1;
      uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
    } while (uVar4 < (ulonglong)param_3[4]);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar5 = *(ulonglong *)(param_1 + 0x30) & uVar5;
  plVar6 = *(longlong **)(lVar2 + uVar5 * 0x10);
  if (*(longlong **)(lVar2 + 8 + uVar5 * 0x10) == param_3) {
    if (plVar6 == param_3) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(lVar2 + uVar5 * 0x10) = uVar3;
      *(undefined8 *)(lVar2 + 8 + uVar5 * 0x10) = uVar3;
    }
    else {
      *(longlong *)(lVar2 + 8 + uVar5 * 0x10) = param_3[1];
    }
  }
  else if (plVar6 == param_3) {
    *(longlong *)(lVar2 + uVar5 * 0x10) = *param_3;
  }
  lVar2 = *param_3;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
  *(longlong *)param_3[1] = lVar2;
  *(longlong *)(lVar2 + 8) = param_3[1];
  FUN_140017240(param_3 + 0x18);
  FUN_140017240(param_3 + 0x14);
  FUN_140031b80(param_3 + 0x11);
  FUN_140031170(param_3 + 10);
  FUN_140031170(param_3 + 7);
  FUN_140017240(param_3 + 2);
  thunk_FUN_14028af80(param_3,0xe8);
  *param_2 = lVar2;
  return param_2;
}

