// Function: FUN_140392cf0
// Addr: 140392cf0
// Size: 688 bytes


undefined8 * FUN_140392cf0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined4 local_68 [2];
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  int *local_38;
  int local_30;
  undefined2 local_2c;
  
  uVar9 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_68[0] = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = (int *)0x0;
  local_30 = 0x10000;
  local_2c = 0;
  iVar6 = *(int *)(param_2 + 0x18);
  if (iVar6 == -1) {
    lVar4 = FUN_140398a10(param_2 + 0x80);
    iVar6 = (uint)*(byte *)(lVar4 + 5) + (uint)*(byte *)(lVar4 + 4) * 0x100;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar6;
  }
  local_2c = CONCAT11(local_2c._1_1_,1);
  local_30 = iVar6;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar11 = (int *)&DAT_14045dd10;
  }
  else {
    piVar5 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x53564720,*(undefined8 *)(param_2 + 0x28));
    piVar11 = (int *)&DAT_14045dd10;
    if (piVar5 != (int *)0x0) {
      piVar11 = piVar5;
    }
  }
  puVar12 = &DAT_14045dd10;
  if (*piVar11 != 0) {
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  local_40 = 0;
  local_38 = piVar11;
  FUN_14040c230(local_68,0,0);
  if (local_60 == 0) {
    FUN_1403beff0(local_68);
  }
  else {
    cVar2 = FUN_140405820(local_60,local_68);
    FUN_1403beff0(local_68);
    if (cVar2 == '\0') {
      FUN_140414150(piVar11);
      piVar11 = (int *)&DAT_14045dd10;
    }
    else if ((char)piVar11[1] != '\0') {
      *(undefined1 *)(piVar11 + 1) = 0;
    }
  }
  piVar5 = local_38;
  *param_1 = piVar11;
  if (local_38 != (int *)0x0) {
    iVar10 = -1;
    iVar6 = 1;
    FUN_1402fc370("SANITIZE",local_60,0,1,0,0xffffffff,"end [%p..%p]",local_60,uStack_58);
    if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + iVar10;
      UNLOCK();
      if (iVar1 == iVar6) {
        *piVar5 = -0xdead;
        lVar4 = *(longlong *)(piVar5 + 2);
        if (lVar4 != 0) {
          FUN_1403c3220(lVar4);
          thunk_FUN_1402d9040(lVar4);
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
  }
  param_1[1] = 0;
  param_1[2] = 0;
  puVar7 = &DAT_14045dd10;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*param_1;
  }
  if (9 < *(uint *)(puVar7 + 3)) {
    puVar12 = (undefined8 *)puVar7[2];
  }
  uVar8 = (uint)*(byte *)((longlong)puVar12 + 3) * 0x10000 +
          (uint)*(byte *)((longlong)puVar12 + 4) * 0x100 +
          (uint)*(byte *)((longlong)puVar12 + 2) * 0x1000000 +
          (uint)*(byte *)((longlong)puVar12 + 5);
  if ((uVar8 != 0) &&
     (uVar8 = (uint)*(byte *)((ulonglong)uVar8 + 1 + (longlong)puVar12) +
              (uint)*(byte *)((ulonglong)uVar8 + (longlong)puVar12) * 0x100, uVar8 != 0)) {
    cVar2 = FUN_1403a47c0(param_1 + 1,uVar8,0);
    if (cVar2 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      uVar3 = *(uint *)((longlong)param_1 + 0xc);
      while (uVar3 < uVar8) {
        *(undefined8 *)(param_1[2] + (ulonglong)uVar3 * 8) = 0;
        uVar3 = *(int *)((longlong)param_1 + 0xc) + 1;
        *(uint *)((longlong)param_1 + 0xc) = uVar3;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar8;
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    do {
      *(undefined8 *)(param_1[2] + uVar9 * 8) = 0;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < *(uint *)((longlong)param_1 + 0xc));
  }
  return param_1;
}

