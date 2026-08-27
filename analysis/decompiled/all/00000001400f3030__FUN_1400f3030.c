// Function: FUN_1400f3030
// Addr: 1400f3030
// Size: 136 bytes


undefined1 FUN_1400f3030(longlong param_1)

{
  undefined1 uVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x138) = 0;
  UNLOCK();
  if (*(int *)(param_1 + 0x130) != 0) {
    DVar2 = GetCurrentThreadId();
    if (*(DWORD *)(param_1 + 0x130) == DVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    local_18 = *(undefined4 *)(param_1 + 0x128);
    uStack_14 = *(undefined4 *)(param_1 + 300);
    uStack_10 = *(undefined4 *)(param_1 + 0x130);
    uStack_c = *(undefined4 *)(param_1 + 0x134);
    iVar3 = FUN_140291150(&local_18,0);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(2);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  *(undefined1 *)(param_1 + 0x91) = 0;
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x108))();
  }
  LOCK();
  uVar1 = *(undefined1 *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x90) = 0;
  UNLOCK();
  return uVar1;
}

