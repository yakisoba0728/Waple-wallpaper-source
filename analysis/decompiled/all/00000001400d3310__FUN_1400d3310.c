// Function: FUN_1400d3310
// Addr: 1400d3310
// Size: 140 bytes


void FUN_1400d3310(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x50);
  if ((lVar2 == 0) && (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x20), lVar2 == 0)) {
    return;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    (**(code **)(*plVar1 + 0x1c8))
              (plVar1,*(longlong *)(param_1 + 0x60),0,*(undefined8 *)(lVar2 + 0x60),0,
               *(undefined4 *)(param_1 + 0x90));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400d3394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x178))
            (plVar1,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(lVar2 + 0x68));
  return;
}

