// Function: FUN_140123140
// Addr: 140123140
// Size: 240 bytes


int FUN_140123140(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (1 < *(int *)(param_1 + 0xb0) - 4U) {
    return -0x3ff2c94e;
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) && (*(longlong *)(param_1 + 0x98) != 0)) {
    *(undefined4 *)(param_1 + 0xe8) = 4;
    *(undefined4 *)(param_1 + 0xe4) = 0xbf800000;
    local_18 = 0;
    local_28 = 0;
    uStack_20 = 0;
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    plVar1 = *(longlong **)(param_1 + 0x88);
    iVar2 = 0;
    if (plVar1 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,0,&local_28);
      if (-1 < iVar2) {
        *(undefined4 *)(param_1 + 0xb0) = 3;
        (**(code **)(**(longlong **)(param_1 + 0x88) + 0x70))
                  (*(longlong **)(param_1 + 0x88),param_1 + 0x90);
      }
    }
    PropVariantClear((PROPVARIANT *)&local_28);
    return iVar2;
  }
  return -0x7fff0001;
}

