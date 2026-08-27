// Function: FUN_140109f80
// Addr: 140109f80
// Size: 350 bytes


void FUN_140109f80(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [24];
  undefined8 *local_38;
  undefined8 *local_30;
  longlong local_28;
  
  puVar7 = auStack_58;
  FUN_140088360(param_1,&local_38);
  for (puVar8 = local_38; puVar8 != local_30; puVar8 = puVar8 + 4) {
    puVar5 = puVar8;
    if (0xf < (ulonglong)puVar8[3]) {
      puVar5 = (undefined8 *)*puVar8;
    }
    lVar2 = FUN_140086de0(param_2,puVar5,(undefined1 *)(puVar8[2] + (longlong)puVar5));
    if (*(char *)(lVar2 + 8) == '\a') {
      puVar5 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar5 = (undefined8 *)*puVar8;
      }
      uVar3 = FUN_140086de0(param_2,puVar5,puVar8[2] + (longlong)puVar5);
      uVar3 = FUN_140086de0(uVar3,"value","");
      puVar5 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar5 = (undefined8 *)*puVar8;
      }
      uVar4 = FUN_140086de0(param_1,puVar5,puVar8[2] + (longlong)puVar5);
      uVar4 = FUN_140086de0(uVar4,"value","");
      FUN_140085520(uVar4,uVar3);
    }
  }
  puVar8 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    for (; puVar8 != local_30; puVar8 = puVar8 + 4) {
      FUN_140017240(puVar8);
    }
    uVar6 = local_28 - (longlong)local_38 & 0xffffffffffffffe0;
    puVar8 = local_38;
    if (0xfff < uVar6) {
      puVar8 = (undefined8 *)((longlong)local_38 + (-8 - local_38[-1]));
      if (puVar8 < &DAT_00000020) {
        thunk_FUN_14028af80(local_38[-1],uVar6 + 0x27);
        return;
      }
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar7 = auStack_50;
    }
    *(undefined8 *)(puVar7 + -8) = 0x14010a0d6;
    thunk_FUN_14028af80(puVar8);
  }
  return;
}

