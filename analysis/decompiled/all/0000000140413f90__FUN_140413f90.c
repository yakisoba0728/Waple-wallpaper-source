// Function: FUN_140413f90
// Addr: 140413f90
// Size: 442 bytes


undefined8 * FUN_140413f90(int *param_1,uint param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (((param_3 == 0) || (param_1 == (int *)0x0)) || ((uint)param_1[6] <= param_2)) {
    return &DAT_14045dd10;
  }
  if ((char)param_1[1] != '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  uVar4 = param_1[6] - param_2;
  if (param_3 <= param_1[6] - param_2) {
    uVar4 = param_3;
  }
  if (uVar4 == 0) {
    if (*param_1 == 0) goto LAB_140414123;
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 != 1) goto LAB_140414123;
    *param_1 = -0xdead;
    lVar2 = *(longlong *)(param_1 + 2);
    if (lVar2 != 0) {
      FUN_1403c3220(lVar2);
      thunk_FUN_1402d9040(lVar2);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (*(code **)(param_1 + 10) != (code *)0x0) {
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
  }
  else {
    if (uVar4 < 0x80000000) {
      lVar2 = *(longlong *)(param_1 + 4);
      puVar3 = (undefined8 *)_calloc_base(1,0x30);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined2 *)((longlong)puVar3 + 5) = 0;
        *(undefined1 *)((longlong)puVar3 + 7) = 0;
        *(undefined4 *)puVar3 = 0;
        *(undefined1 *)((longlong)puVar3 + 4) = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        *(undefined4 *)puVar3 = 1;
        *(undefined1 *)((longlong)puVar3 + 4) = 1;
        puVar3[1] = 0;
        puVar3[2] = lVar2 + (ulonglong)param_2;
        *(uint *)(puVar3 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
        puVar3[4] = param_1;
        puVar3[5] = FUN_14039a930;
        return puVar3;
      }
    }
    if (*param_1 == 0) goto LAB_140414123;
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 != 1) goto LAB_140414123;
    *param_1 = -0xdead;
    lVar2 = *(longlong *)(param_1 + 2);
    if (lVar2 != 0) {
      FUN_1403c3220(lVar2);
      thunk_FUN_1402d9040(lVar2);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (*(code **)(param_1 + 10) != (code *)0x0) {
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
  }
  thunk_FUN_1402d9040(param_1);
LAB_140414123:
  return &DAT_14045dd10;
}

