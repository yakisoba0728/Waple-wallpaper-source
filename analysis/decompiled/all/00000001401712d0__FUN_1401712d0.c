// Function: FUN_1401712d0
// Addr: 1401712d0
// Size: 362 bytes


void FUN_1401712d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 8))();
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x130) = 0;
  if (*(undefined4 **)(param_1 + 0x140) != (undefined4 *)0x0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
    (**(code **)(*plVar1 + 0x160))(plVar1,**(undefined4 **)(param_1 + 0x140));
    lVar2 = *(longlong *)(param_1 + 0x140);
    if (lVar2 != 0) {
      FUN_1401795d0(lVar2 + 0x218);
      FUN_1400c1530(lVar2 + 0x160);
      FUN_1400c1530(lVar2 + 0x108);
      FUN_140017240(lVar2 + 0xe8);
      FUN_140017240(lVar2 + 200);
      FUN_140017240(lVar2 + 0xa8);
      FUN_140017240(lVar2 + 0x88);
      FUN_140017240(lVar2 + 0x68);
      FUN_140017240(lVar2 + 0x48);
      FUN_140017240(lVar2 + 0x28);
      FUN_140017240(lVar2 + 8);
      thunk_FUN_14028af80(lVar2,0x288);
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x148) != (undefined4 *)0x0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
    (**(code **)(*plVar1 + 0x128))(plVar1,**(undefined4 **)(param_1 + 0x148));
    lVar2 = *(longlong *)(param_1 + 0x148);
    if (lVar2 != 0) {
      FUN_14000d9e0(lVar2 + 0xe0);
      FUN_14000da50(lVar2 + 0xd0);
      FUN_1401794d0(lVar2 + 0x58);
      thunk_FUN_14028af80(lVar2,0x108);
    }
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  return;
}

