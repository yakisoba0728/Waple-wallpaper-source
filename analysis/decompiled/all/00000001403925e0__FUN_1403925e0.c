// Function: FUN_1403925e0
// Addr: 1403925e0
// Size: 657 bytes


undefined8 * FUN_1403925e0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  int *local_58;
  int local_50;
  undefined2 local_4c;
  
  *param_1 = 0;
  param_1[1] = 0;
  local_88[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (int *)0x0;
  local_50 = 0x10000;
  local_4c = 0;
  iVar5 = *(int *)(param_2 + 0x18);
  if (iVar5 == -1) {
    lVar2 = FUN_140398a10(param_2 + 0x80);
    iVar5 = (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar5;
  }
  local_4c = CONCAT11(local_4c._1_1_,1);
  local_50 = iVar5;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    puVar7 = &DAT_14045dd10;
  }
  else {
    puVar3 = (undefined8 *)
             (**(code **)(param_2 + 0x20))(param_2,0x43424c43,*(undefined8 *)(param_2 + 0x28));
    puVar7 = &DAT_14045dd10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar7 = puVar3;
    }
  }
  uVar4 = FUN_14038c620(local_88,puVar7);
  piVar1 = local_58;
  *param_1 = uVar4;
  if (local_58 != (int *)0x0) {
    iVar5 = 1;
    FUN_1402fc370("SANITIZE",local_80,0,1,0,0xffffffff,"end [%p..%p]",local_80,uStack_78);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      LOCK();
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == iVar5) {
        *piVar1 = -0xdead;
        lVar2 = *(longlong *)(piVar1 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
          piVar1[2] = 0;
          piVar1[3] = 0;
        }
        if (*(code **)(piVar1 + 10) != (code *)0x0) {
          (**(code **)(piVar1 + 10))(*(undefined8 *)(piVar1 + 8));
          piVar1[8] = 0;
          piVar1[9] = 0;
          piVar1[10] = 0;
          piVar1[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar1);
      }
    }
  }
  local_88[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (int *)0x0;
  local_50 = 0x10000;
  local_4c = 0;
  uVar4 = FUN_14038b110(local_88,param_2,0x43424454);
  piVar1 = local_58;
  param_1[1] = uVar4;
  if (local_58 != (int *)0x0) {
    iVar5 = 1;
    FUN_1402fc370("SANITIZE",local_80,0,1,0,0xffffffff,"end [%p..%p]",local_80,uStack_78);
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      LOCK();
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == iVar5) {
        *piVar1 = -0xdead;
        lVar2 = *(longlong *)(piVar1 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
          piVar1[2] = 0;
          piVar1[3] = 0;
        }
        if (*(code **)(piVar1 + 10) != (code *)0x0) {
          (**(code **)(piVar1 + 10))(*(undefined8 *)(piVar1 + 8));
          piVar1[8] = 0;
          piVar1[9] = 0;
          piVar1[10] = 0;
          piVar1[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar1);
      }
    }
  }
  if (*(int *)(param_2 + 0x14) == 0) {
    lVar2 = FUN_1403c5340(param_2 + 0x78);
    iVar6 = (uint)*(byte *)(lVar2 + 0x13) + (uint)*(byte *)(lVar2 + 0x12) * 0x100;
    iVar5 = 1000;
    if (iVar6 - 0x10U < 0x3ff1) {
      iVar5 = iVar6;
    }
    *(int *)(param_2 + 0x14) = iVar5;
    *(int *)(param_1 + 2) = iVar5;
  }
  else {
    *(int *)(param_1 + 2) = *(int *)(param_2 + 0x14);
  }
  return param_1;
}

