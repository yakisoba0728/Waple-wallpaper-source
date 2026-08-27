// Function: FUN_1403c2a40
// Addr: 1403c2a40
// Size: 1379 bytes


void FUN_1403c2a40(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  longlong lVar4;
  
  FUN_1403be0c0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    thunk_FUN_1402d9040(puVar2[10]);
    FUN_1403bde80(puVar2 + 0xb);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396590(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396d40(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x40);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396ca0(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x50);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396500(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396590(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(param_1 + 0x70) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396e30(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x80);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    piVar3 = (int *)puVar2[0x26];
    if (piVar3 != (int *)0x0) {
      if (1 < *piVar3 + 1U) {
        piVar3[1] = 0;
        thunk_FUN_1402d9040(*(undefined8 *)(piVar3 + 2));
      }
      piVar3[0] = 0;
      piVar3[1] = 0;
      piVar3[2] = 0;
      piVar3[3] = 0;
      thunk_FUN_1402d9040(piVar3);
    }
    FUN_140395e10(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x88);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140395ee0(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x98));
  *(undefined8 *)(param_1 + 0x98) = 0;
  piVar3 = *(int **)(param_1 + 0xa0);
  if (((piVar3 != (int *)0x0) && (piVar3 != (int *)&DAT_14045dd10)) && (*piVar3 != 0)) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *piVar3 = -0xdead;
      lVar4 = *(longlong *)(piVar3 + 2);
      if (lVar4 != 0) {
        FUN_1403c3220(lVar4);
        thunk_FUN_1402d9040(lVar4);
        piVar3[2] = 0;
        piVar3[3] = 0;
      }
      if (*(code **)(piVar3 + 10) != (code *)0x0) {
        (**(code **)(piVar3 + 10))(*(undefined8 *)(piVar3 + 8));
        piVar3[8] = 0;
        piVar3[9] = 0;
        piVar3[10] = 0;
        piVar3[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar3);
    }
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396500(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0xb0));
  *(undefined8 *)(param_1 + 0xb0) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396bd0(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xc0);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396440(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  puVar2 = *(undefined8 **)(param_1 + 200);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396950(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xd0);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140395d80(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xd8);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140395d80(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0xe0));
  *(undefined8 *)(param_1 + 0xe0) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xe8);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396680(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xf0);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396680(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0xf8);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396440(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x100));
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x108));
  *(undefined8 *)(param_1 + 0x108) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x110));
  *(undefined8 *)(param_1 + 0x110) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x118));
  *(undefined8 *)(param_1 + 0x118) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x120);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396890(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x128));
  *(undefined8 *)(param_1 + 0x128) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x130);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_1403967a0(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x138);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_140396500(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x140);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2 != &DAT_14045dd10)) {
    FUN_1403969f0(puVar2);
    thunk_FUN_1402d9040(puVar2);
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  FUN_1403be0c0(*(undefined8 *)(param_1 + 0x148));
  *(undefined8 *)(param_1 + 0x148) = 0;
  return;
}

