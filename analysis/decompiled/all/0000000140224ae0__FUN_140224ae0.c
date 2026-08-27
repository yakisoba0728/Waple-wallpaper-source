// Function: FUN_140224ae0
// Addr: 140224ae0
// Size: 399 bytes


void FUN_140224ae0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x2c0) != *(longlong *)(param_1 + 0x2c8)) {
    *(longlong *)(param_1 + 0x2c8) = *(longlong *)(param_1 + 0x2c0);
  }
  lVar1 = *(longlong *)(param_1 + 0x2d8);
  if (lVar1 != 0) {
    thunk_FUN_14028af80(*(undefined8 *)(lVar1 + 0x90));
    thunk_FUN_14028af80(*(undefined8 *)(lVar1 + 0x98));
    FUN_1402d3dd0(*(undefined8 *)(lVar1 + 8));
    FUN_1402d3dd0(*(undefined8 *)(lVar1 + 0x10));
    plVar2 = *(longlong **)(lVar1 + 0x80);
    for (plVar4 = *(longlong **)(lVar1 + 0x78); plVar4 != plVar2; plVar4 = plVar4 + 1) {
      puVar3 = (undefined8 *)*plVar4;
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_140215de0(lVar1 + 0xa0);
    FUN_14000d9e0(lVar1 + 0x78);
    FUN_1402283b0(lVar1 + 0x60);
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      FUN_1402d3dd0();
      *(undefined8 *)(lVar1 + 0x48) = 0;
      *(undefined8 *)(lVar1 + 0x50) = 0;
      *(undefined8 *)(lVar1 + 0x58) = 0;
    }
    if (*(longlong *)(lVar1 + 0x30) != 0) {
      FUN_1402d3dd0();
      *(undefined8 *)(lVar1 + 0x30) = 0;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar1 + 0x40) = 0;
    }
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FUN_1402d3dd0();
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
    }
    thunk_FUN_14028af80(lVar1,0xb8);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  if (*(int *)(param_1 + 0x314) != 0) {
    FUN_1401d60b0(*(longlong *)(param_1 + 200) + 0x1a60,*(undefined8 *)(param_1 + 0x2f0));
    *(undefined4 *)(param_1 + 0x314) = 0;
  }
  FUN_1401d5f10(*(longlong *)(param_1 + 200) + 0x1a60,*(undefined8 *)(param_1 + 0x2f0));
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  return;
}

