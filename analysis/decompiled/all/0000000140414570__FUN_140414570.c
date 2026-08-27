// Function: FUN_140414570
// Addr: 140414570
// Size: 107 bytes


longlong FUN_140414570(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = FUN_1404144f0();
  FUN_140419a90(*(undefined8 *)(lVar2 + 0x10));
  piVar1 = *(int **)(param_1 + 0x10);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(int **)(lVar2 + 0x10) = piVar1;
  *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(lVar2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(lVar2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  return lVar2;
}

