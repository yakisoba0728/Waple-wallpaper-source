// Function: FUN_14039d570
// Addr: 14039d570
// Size: 395 bytes


void FUN_14039d570(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 uVar3;
  int *piVar4;
  bool bVar5;
  
  if ((*(longlong *)(param_2 + 0x88) == 0) ||
     (*(int *)(*(longlong *)(param_2 + 0x88) + 8) != 0x73796d62)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  puVar1 = (undefined4 *)_calloc_base(1,0x440);
  if (puVar1 != (undefined4 *)0x0) {
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
    *(longlong *)(puVar1 + 0xc) = param_2;
    *(undefined1 *)(puVar1 + 1) = uVar3;
    *(undefined1 *)((longlong)puVar1 + 5) = param_3;
    *puVar1 = 2;
    puVar1[0xe] = 0xffffffff;
    if (puVar1 + 0xf <= puVar1 + 0x10f) {
      FUN_1404217a0(puVar1 + 0xf,0xffffffff,0x400);
    }
    while (piVar4 = DAT_1404e51d8, DAT_1404e51d8 = piVar4, piVar4 == (int *)0x0) {
      piVar2 = (int *)FUN_1403baa70();
      piVar4 = &DAT_1404df428;
      if (piVar2 != (int *)0x0) {
        piVar4 = piVar2;
      }
      LOCK();
      bVar5 = DAT_1404e51d8 == (int *)0x0;
      piVar2 = piVar4;
      if (!bVar5) {
        piVar2 = DAT_1404e51d8;
      }
      DAT_1404e51d8 = piVar2;
      UNLOCK();
      if (bVar5) break;
      if ((piVar4 != (int *)0x0) && (piVar4 != &DAT_1404df428)) {
        FUN_1404160c0(piVar4);
      }
    }
    if (*(char *)(param_1 + 4) == '\0') {
      if (*(char *)((longlong)puVar1 + 5) != '\0') {
        FUN_1402efa80(*(undefined8 *)(puVar1 + 0xc));
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(puVar1 + 2));
      thunk_FUN_1402d9040(puVar1);
    }
    else {
      if (*(code **)(param_1 + 0xa0) != (code *)0x0) {
        (**(code **)(param_1 + 0xa0))(*(undefined8 *)(param_1 + 0x98));
      }
      piVar2 = &DAT_1404df428;
      if (piVar4 != (int *)0x0) {
        piVar2 = piVar4;
      }
      if (*piVar2 != 0) {
        LOCK();
        *piVar2 = *piVar2 + 1;
        UNLOCK();
      }
      FUN_1404160c0(*(undefined8 *)(param_1 + 0x90));
      *(int **)(param_1 + 0x90) = piVar2;
      *(code **)(param_1 + 0xa0) = FUN_14039d540;
      *(undefined4 **)(param_1 + 0x98) = puVar1;
      FUN_1403b2f70(param_1);
    }
  }
  return;
}

