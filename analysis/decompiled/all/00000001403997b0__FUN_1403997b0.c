// Function: FUN_1403997b0
// Addr: 1403997b0
// Size: 189 bytes


undefined8 * FUN_1403997b0(undefined8 *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  *param_1 = DWriteFontFileStream::vftable;
  FUN_14039a2e0(param_1[5],param_1[6]);
  (**(code **)(*(longlong *)param_1[5] + 0x10))();
  piVar2 = (int *)param_1[2];
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *piVar2 = -0xdead;
      lVar3 = *(longlong *)(piVar2 + 2);
      if (lVar3 != 0) {
        FUN_1403c3220(lVar3);
        thunk_FUN_1402d9040(lVar3);
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      if (*(code **)(piVar2 + 10) != (code *)0x0) {
        (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
        piVar2[8] = 0;
        piVar2[9] = 0;
        piVar2[10] = 0;
        piVar2[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar2);
    }
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_14028af80(param_1,0x38);
  }
  return param_1;
}

