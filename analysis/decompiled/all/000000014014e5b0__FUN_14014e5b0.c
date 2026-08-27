// Function: FUN_14014e5b0
// Addr: 14014e5b0
// Size: 402 bytes


void FUN_14014e5b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 local_58 [16];
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar7 = auStack_78;
  local_48[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_40 = FUN_14028af20(0x38);
  *(longlong *)local_40 = local_40;
  *(longlong *)(local_40 + 8) = local_40;
  local_30 = 0;
  local_28 = 0;
  lStack_20 = 0;
  local_18 = 7;
  local_10 = 8;
  local_48[0] = 0x3f800000;
  FUN_140037600(&local_30,0x10,local_40);
  plVar6 = (longlong *)**(longlong **)(param_1 + 8);
  if (plVar6 != *(longlong **)(param_1 + 8)) {
    do {
      puVar1 = (undefined8 *)plVar6[6];
      if ((*(byte *)(puVar1 + 2) & 1) == 0) {
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
        }
      }
      else {
        plVar4 = (longlong *)FUN_14014eb50(local_48,local_58,plVar6 + 2);
        *(undefined8 **)(*plVar4 + 0x30) = puVar1;
      }
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != (longlong *)*(longlong *)(param_1 + 8));
  }
  FUN_14014ed90(param_1,local_48);
  if (local_30 != 0) {
    lVar5 = local_30;
    puVar7 = auStack_78;
    if ((0xfff < (ulonglong)((lStack_20 - local_30 >> 3) * 8)) &&
       (lVar5 = *(longlong *)(local_30 + -8), puVar7 = auStack_78, 0x1f < (local_30 - lVar5) - 8U))
    {
      lVar5 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar7 = auStack_70;
    }
    *(undefined8 *)(puVar7 + -8) = 0x14014e6da;
    thunk_FUN_14028af80(lVar5);
    *(undefined8 *)(puVar7 + 0x48) = 0;
    *(undefined8 *)(puVar7 + 0x50) = 0;
    *(undefined8 *)(puVar7 + 0x58) = 0;
  }
  puVar1 = *(undefined8 **)(puVar7 + 0x38);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    *(undefined8 *)(puVar7 + -8) = 0x14014e70c;
    FUN_140017240(puVar1 + 2);
    *(undefined8 *)(puVar7 + -8) = 0x14014e719;
    thunk_FUN_14028af80(puVar1,0x38);
    puVar1 = puVar2;
  }
  *(undefined8 *)(puVar7 + -8) = 0x14014e730;
  thunk_FUN_14028af80(*(undefined8 *)(puVar7 + 0x38),0x38);
  return;
}

