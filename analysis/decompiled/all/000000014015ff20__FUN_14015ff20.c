// Function: FUN_14015ff20
// Addr: 14015ff20
// Size: 175 bytes


void FUN_14015ff20(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_140176f70(*(longlong *)(param_1 + 8) + 0x1708,*(longlong *)(param_1 + 0x130),0);
    lVar1 = *(longlong *)(param_1 + 0x130);
    puVar2 = *(undefined8 **)(lVar1 + 0xd0);
    for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
      lVar4 = puVar3[2];
      if (lVar4 != 0) {
        FUN_140017240(lVar4 + 0x38);
        thunk_FUN_14028af80(lVar4,0x58);
      }
    }
    FUN_140160a70(lVar1 + 200);
    FUN_140039a60(lVar1 + 0x108);
  }
  return;
}

