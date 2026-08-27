// Function: FUN_14035ef80
// Addr: 14035ef80
// Size: 196 bytes


longlong FUN_14035ef80(undefined8 param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  
  piVar4 = (int *)FUN_14039bac0();
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_14039b930(param_1);
    if (piVar4 == (int *)0x0) {
      return 0;
    }
  }
  uVar3 = FUN_1404150d0(piVar4);
  if (param_2 < uVar3) {
    lVar5 = FUN_1404152b0(piVar4,param_2);
    if (*(char *)(lVar5 + 4) == '\0') {
      lVar5 = 0;
    }
  }
  else {
    lVar5 = 0;
  }
  if (*piVar4 != 0) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *piVar4 = -0xdead;
      lVar2 = *(longlong *)(piVar4 + 2);
      if (lVar2 != 0) {
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      if (*(code **)(piVar4 + 10) != (code *)0x0) {
        (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
        piVar4[8] = 0;
        piVar4[9] = 0;
        piVar4[10] = 0;
        piVar4[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar4);
    }
  }
  return lVar5;
}

