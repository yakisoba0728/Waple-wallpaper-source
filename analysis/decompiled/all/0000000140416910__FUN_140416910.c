// Function: FUN_140416910
// Addr: 140416910
// Size: 405 bytes


longlong FUN_140416910(longlong param_1,code *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  
  puVar3 = *(undefined8 **)(param_1 + 0xa0);
  if (puVar3[4] != 0) {
    lVar6 = FUN_140415600(FUN_14039ecf0,param_1,param_2);
    if (*(char *)(lVar6 + 4) != '\0') {
      if (*(code **)(lVar6 + 0x48) != (code *)0x0) {
        (**(code **)(lVar6 + 0x48))(*(undefined8 *)(lVar6 + 0x40));
      }
      *(code **)(lVar6 + 0x38) = FUN_14039d700;
      *(longlong *)(lVar6 + 0x40) = param_1;
      *(undefined8 *)(lVar6 + 0x48) = 0;
    }
    goto LAB_140416a78;
  }
  uVar2 = *(uint *)(puVar3 + 1);
  if ((uVar2 == 0) || (0x7fffffff < uVar2)) {
joined_r0x0001404169b8:
    if (param_2 != (code *)0x0) {
      (*param_2)(param_1);
    }
    piVar7 = (int *)&DAT_14045dd10;
  }
  else {
    uVar4 = *puVar3;
    piVar7 = (int *)_calloc_base(1,0x30);
    if (piVar7 == (int *)0x0) goto joined_r0x0001404169b8;
    *(undefined2 *)((longlong)piVar7 + 5) = 0;
    *(undefined1 *)((longlong)piVar7 + 7) = 0;
    *piVar7 = 0;
    *(undefined1 *)(piVar7 + 1) = 0;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    piVar7[6] = 0;
    piVar7[7] = 0;
    piVar7[8] = 0;
    piVar7[9] = 0;
    piVar7[10] = 0;
    piVar7[0xb] = 0;
    *piVar7 = 1;
    *(undefined1 *)(piVar7 + 1) = 1;
    piVar7[2] = 0;
    piVar7[3] = 0;
    *(undefined8 *)(piVar7 + 4) = uVar4;
    piVar7[6] = uVar2;
    piVar7[7] = 1;
    *(longlong *)(piVar7 + 8) = param_1;
    *(code **)(piVar7 + 10) = param_2;
  }
  lVar6 = FUN_1404152b0(piVar7,*(undefined4 *)(param_1 + 4));
  if (*piVar7 != 0) {
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      *piVar7 = -0xdead;
      lVar5 = *(longlong *)(piVar7 + 2);
      if (lVar5 != 0) {
        FUN_1403c3220(lVar5);
        thunk_FUN_1402d9040(lVar5);
        piVar7[2] = 0;
        piVar7[3] = 0;
      }
      if (*(code **)(piVar7 + 10) != (code *)0x0) {
        (**(code **)(piVar7 + 10))(*(undefined8 *)(piVar7 + 8));
        piVar7[8] = 0;
        piVar7[9] = 0;
        piVar7[10] = 0;
        piVar7[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar7);
    }
  }
LAB_140416a78:
  if (*(char *)(lVar6 + 4) != '\0') {
    *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(param_1 + 4);
  }
  if (*(char *)(lVar6 + 4) != '\0') {
    *(uint *)(lVar6 + 0x14) = (uint)*(ushort *)(param_1 + 0x68);
  }
  return lVar6;
}

