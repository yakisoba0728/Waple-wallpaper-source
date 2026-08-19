// Function: FUN_1400d3480
// Addr: 1400d3480
// Size: 88 bytes


void FUN_1400d3480(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x50);
  if ((lVar2 != 0) || (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20), lVar2 != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
    (**(code **)(*plVar1 + 0x1c8))
              (plVar1,*(undefined8 *)(lVar2 + 0x60),0,*(undefined8 *)(param_1 + 0x60),0,
               *(undefined4 *)(lVar2 + 0x90));
  }
  return;
}

