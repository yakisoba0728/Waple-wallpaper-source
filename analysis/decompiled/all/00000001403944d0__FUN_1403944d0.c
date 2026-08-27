// Function: FUN_1403944d0
// Addr: 1403944d0
// Size: 908 bytes


undefined8 * FUN_1403944d0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  int *piVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  int *local_58;
  uint local_50;
  undefined2 local_4c;
  
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = FUN_1403c5340(param_2 + 0x78);
  lVar3 = FUN_1403c5340(param_2 + 0x78);
  if (((uint)*(byte *)(lVar3 + 0x32) * 0x100 + (uint)*(byte *)(lVar3 + 0x33) < 2) &&
     ((uint)*(byte *)(lVar3 + 0x34) * 0x100 + (uint)*(byte *)(lVar3 + 0x35) < 2)) {
    *(bool *)(param_1 + 3) =
         (uint)*(byte *)(lVar2 + 0x33) + (uint)*(byte *)(lVar2 + 0x32) * 0x100 == 0;
    piVar7 = *(int **)(param_2 + 0xe0);
    while (piVar7 == (int *)0x0) {
      if (*(longlong *)(param_2 + 0x70) == 0) {
        piVar7 = (int *)&DAT_14045dd10;
        break;
      }
      piVar4 = (int *)FUN_1403b9900();
      piVar7 = (int *)&DAT_14045dd10;
      if (piVar4 != (int *)0x0) {
        piVar7 = piVar4;
      }
      LOCK();
      bVar9 = *(longlong *)(param_2 + 0xe0) == 0;
      if (bVar9) {
        *(longlong *)(param_2 + 0xe0) = (longlong)piVar7;
      }
      UNLOCK();
      if (bVar9) break;
      if (((piVar7 != (int *)0x0) && (piVar7 != (int *)&DAT_14045dd10)) && (*piVar7 != 0)) {
        LOCK();
        iVar1 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          *piVar7 = -0xdead;
          lVar2 = *(longlong *)(piVar7 + 2);
          if (lVar2 != 0) {
            FUN_1403c3220(lVar2);
            thunk_FUN_1402d9040(lVar2);
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
      piVar7 = *(int **)(param_2 + 0xe0);
    }
    param_1[4] = piVar7;
    local_88[0] = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = (int *)0x0;
    local_50 = 0x10000;
    local_4c = 0;
    uVar6 = *(uint *)(param_2 + 0x18);
    if (uVar6 == 0xffffffff) {
      lVar2 = FUN_140398a10(param_2 + 0x80);
      uVar6 = (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      *(uint *)(param_2 + 0x18) = uVar6;
    }
    local_4c = CONCAT11(local_4c._1_1_,1);
    local_50 = uVar6;
    if (*(code **)(param_2 + 0x20) == (code *)0x0) {
      piVar7 = (int *)&DAT_14045dd10;
    }
    else {
      piVar4 = (int *)(**(code **)(param_2 + 0x20))
                                (param_2,0x676c7966,*(undefined8 *)(param_2 + 0x28));
      piVar7 = (int *)&DAT_14045dd10;
      if (piVar4 != (int *)0x0) {
        piVar7 = piVar4;
      }
    }
    if (*piVar7 != 0) {
      LOCK();
      *piVar7 = *piVar7 + 1;
      UNLOCK();
    }
    local_60 = 0;
    local_58 = piVar7;
    FUN_14040c230(local_88,0,0);
    if (local_80 == 0) {
      FUN_1403beff0(local_88);
    }
    else {
      FUN_1403beff0(local_88);
      if ((char)piVar7[1] != '\0') {
        *(undefined1 *)(piVar7 + 1) = 0;
      }
    }
    piVar4 = local_58;
    param_1[5] = piVar7;
    if (((local_58 != (int *)0x0) &&
        (FUN_1402fc370("SANITIZE",local_80,0,1,0,0xffffffff,"end [%p..%p]",local_80,uStack_78),
        piVar4 != (int *)0x0)) && (*piVar4 != 0)) {
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
    uVar5 = FUN_1403c52a0(param_2 + 0x118);
    *param_1 = uVar5;
    uVar5 = FUN_1403c5430(param_2 + 0x98);
    param_1[1] = uVar5;
    uVar5 = FUN_1403c5840(param_2 + 0xd0);
    param_1[2] = uVar5;
    puVar8 = &DAT_14045dd10;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)param_1[4];
    }
    uVar6 = *(uint *)(puVar8 + 3) >> (2U - (*(char *)(param_1 + 3) != '\0') & 0x1f);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar6 - 1;
    uVar6 = *(uint *)(param_2 + 0x18);
    if (uVar6 == 0xffffffff) {
      lVar2 = FUN_140398a10(param_2 + 0x80);
      uVar6 = (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      *(uint *)(param_2 + 0x18) = uVar6;
    }
    if (*(uint *)((longlong)param_1 + 0x1c) <= uVar6) {
      uVar6 = *(uint *)((longlong)param_1 + 0x1c);
    }
    *(uint *)((longlong)param_1 + 0x1c) = uVar6;
  }
  return param_1;
}

