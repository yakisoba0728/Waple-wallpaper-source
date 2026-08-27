// Function: FUN_140181960
// Addr: 140181960
// Size: 393 bytes


void FUN_140181960(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar5 = auStack_88;
  local_68[0] = *(undefined4 *)(param_1 + 0x1530);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  local_60 = (undefined8 *)FUN_14028af20(0x38);
  *local_60 = local_60;
  local_60[1] = local_60;
  local_38 = *(undefined8 *)(param_1 + 0x1560);
  local_30 = *(undefined8 *)(param_1 + 0x1568);
  local_50 = 0;
  local_48 = 0;
  lStack_40 = 0;
  FUN_140037600(&local_50,*(longlong *)(param_1 + 0x1550) - *(longlong *)(param_1 + 0x1548) >> 3,
                local_60);
  FUN_140152a30(local_68,**(undefined8 **)(param_1 + 0x1538),*(undefined8 **)(param_1 + 0x1538));
  puVar2 = local_60;
  for (puVar1 = (undefined8 *)*local_60; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
    if (*(longlong **)(puVar1[6] + 0xd8) != (longlong *)0x0) {
      lVar4 = **(longlong **)(puVar1[6] + 0xd8);
      if (param_2 == '\0') {
        (**(code **)(lVar4 + 0x38))();
      }
      else {
        (**(code **)(lVar4 + 0x30))();
      }
    }
  }
  if (local_50 != 0) {
    lVar4 = local_50;
    puVar5 = auStack_88;
    if ((0xfff < (ulonglong)((lStack_40 - local_50 >> 3) * 8)) &&
       (lVar4 = *(longlong *)(local_50 + -8), puVar5 = auStack_88, 0x1f < (local_50 - lVar4) - 8U))
    {
      lVar4 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar5 = auStack_80;
    }
    *(undefined8 *)(puVar5 + -8) = 0x140181a88;
    thunk_FUN_14028af80(lVar4);
    *(undefined8 *)(puVar5 + 0x38) = 0;
    *(undefined8 *)(puVar5 + 0x40) = 0;
    *(undefined8 *)(puVar5 + 0x48) = 0;
  }
  puVar1 = *(undefined8 **)(puVar5 + 0x28);
  *(undefined8 *)puVar1[1] = 0;
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    *(undefined8 *)(puVar5 + -8) = 0x140181abc;
    FUN_140017240(puVar1 + 2);
    *(undefined8 *)(puVar5 + -8) = 0x140181ac9;
    thunk_FUN_14028af80(puVar1,0x38);
    puVar1 = puVar2;
  }
  *(undefined8 *)(puVar5 + -8) = 0x140181ae0;
  thunk_FUN_14028af80(*(undefined8 *)(puVar5 + 0x28),0x38);
  return;
}

