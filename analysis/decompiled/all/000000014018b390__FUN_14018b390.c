// Function: FUN_14018b390
// Addr: 14018b390
// Size: 418 bytes


void FUN_14018b390(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined4 local_48 [2];
  undefined8 *local_40;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong lStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar5 = auStack_68;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    local_48[0] = *(undefined4 *)(param_1 + 0x210);
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    local_40 = (undefined8 *)FUN_14028af20(0x18);
    *local_40 = local_40;
    local_40[1] = local_40;
    local_18 = *(undefined8 *)(param_1 + 0x240);
    local_10 = *(undefined8 *)(param_1 + 0x248);
    local_30 = 0;
    local_28 = 0;
    lStack_20 = 0;
    FUN_140037600(&local_30,*(longlong *)(param_1 + 0x230) - *(longlong *)(param_1 + 0x228) >> 3,
                  local_40);
    FUN_1401a2590(local_48,**(undefined8 **)(param_1 + 0x218),*(undefined8 **)(param_1 + 0x218));
    FUN_140077f50(param_1 + 0x210);
    puVar2 = local_40;
    for (puVar1 = (undefined8 *)*local_40; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
      FUN_1401909c0(param_1,puVar1[2]);
    }
    if (local_30 != 0) {
      lVar4 = local_30;
      puVar5 = auStack_68;
      if ((0xfff < (ulonglong)((lStack_20 - local_30 >> 3) * 8)) &&
         (lVar4 = *(longlong *)(local_30 + -8), puVar5 = auStack_68, 0x1f < (local_30 - lVar4) - 8U)
         ) {
        lVar4 = 5;
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar5 = auStack_60;
      }
      *(undefined8 *)(puVar5 + -8) = 0x14018b4c9;
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
      *(undefined8 *)(puVar5 + -8) = 0x14018b4fd;
      thunk_FUN_14028af80(puVar1,0x18);
      puVar1 = puVar2;
    }
    *(undefined8 *)(puVar5 + -8) = 0x14018b514;
    thunk_FUN_14028af80(*(undefined8 *)(puVar5 + 0x28),0x18);
  }
  FUN_14017e790(*(undefined8 *)(param_1 + 0xd8));
  return;
}

