// Function: FUN_140398a10
// Addr: 140398a10
// Size: 234 bytes


undefined8 * FUN_140398a10(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  do {
    if (piVar5 != (int *)0x0) {
LAB_140398ada:
      puVar4 = &DAT_14045dd10;
      if (5 < (uint)piVar5[6]) {
        puVar4 = *(undefined8 **)(piVar5 + 4);
      }
      return puVar4;
    }
    if (param_1[-2] == 0) {
      piVar5 = (int *)&DAT_14045dd10;
      goto LAB_140398ada;
    }
    piVar3 = (int *)FUN_1403b9da0();
    piVar5 = (int *)&DAT_14045dd10;
    if (piVar3 != (int *)0x0) {
      piVar5 = piVar3;
    }
    LOCK();
    lVar2 = *param_1;
    if (lVar2 == 0) {
      *param_1 = (longlong)piVar5;
    }
    UNLOCK();
    if (lVar2 == 0) goto LAB_140398ada;
    if (((piVar5 != (int *)0x0) && (piVar5 != (int *)&DAT_14045dd10)) && (*piVar5 != 0)) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        *piVar5 = -0xdead;
        lVar2 = *(longlong *)(piVar5 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
          piVar5[2] = 0;
          piVar5[3] = 0;
        }
        if (*(code **)(piVar5 + 10) != (code *)0x0) {
          (**(code **)(piVar5 + 10))(*(undefined8 *)(piVar5 + 8));
          piVar5[8] = 0;
          piVar5[9] = 0;
          piVar5[10] = 0;
          piVar5[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar5);
      }
    }
    piVar5 = (int *)*param_1;
  } while( true );
}

