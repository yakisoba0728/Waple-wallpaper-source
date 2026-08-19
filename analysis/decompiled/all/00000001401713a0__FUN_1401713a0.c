// Function: FUN_1401713a0
// Addr: 1401713a0
// Size: 152 bytes


void FUN_1401713a0(longlong param_1)

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
      FUN_1401796a0(lVar2 + 0x218);
      FUN_1400c1600(lVar2 + 0x160);
      FUN_1400c1600(lVar2 + 0x108);
                    /* WARNING: Subroutine does not return */
      FUN_140017310(lVar2 + 0xe8);
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x148) != (undefined4 *)0x0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
    (**(code **)(*plVar1 + 0x128))(plVar1,**(undefined4 **)(param_1 + 0x148));
    lVar2 = *(longlong *)(param_1 + 0x148);
    if (lVar2 != 0) {
      func_0x00014000dab0(lVar2 + 0xe0);
      func_0x00014000db20(lVar2 + 0xd0);
      func_0x0001401795a0(lVar2 + 0x58);
      func_0x00014028b040(lVar2,0x108);
    }
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  return;
}

