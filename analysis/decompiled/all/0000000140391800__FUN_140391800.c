// Function: FUN_140391800
// Addr: 140391800
// Size: 942 bytes


uint * FUN_140391800(uint *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
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
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_88[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (int *)0x0;
  local_50 = 0x10000;
  local_4c = 0;
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar5 == 0xffffffff) {
    lVar2 = FUN_140398a10(param_2 + 0x80);
    uVar5 = (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100;
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    *(uint *)(param_2 + 0x18) = uVar5;
  }
  local_4c = CONCAT11(local_4c._1_1_,1);
  local_50 = uVar5;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar9 = (int *)&DAT_14045dd10;
  }
  else {
    piVar3 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x766d7478,*(undefined8 *)(param_2 + 0x28));
    piVar9 = (int *)&DAT_14045dd10;
    if (piVar3 != (int *)0x0) {
      piVar9 = piVar3;
    }
  }
  if (*piVar9 != 0) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  local_60 = 0;
  local_58 = piVar9;
  FUN_14040c230(local_88,0,0);
  if (local_80 == 0) {
    FUN_1403beff0(local_88);
  }
  else {
    FUN_1403beff0(local_88);
    if ((char)piVar9[1] != '\0') {
      *(undefined1 *)(piVar9 + 1) = 0;
    }
  }
  piVar3 = local_58;
  *(int **)(param_1 + 6) = piVar9;
  if (local_58 != (int *)0x0) {
    iVar10 = 1;
    FUN_1402fc370("SANITIZE",local_80,0,1,0,0xffffffff,"end [%p..%p]",local_80,uStack_78);
    if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == iVar10) {
        *piVar3 = -0xdead;
        lVar2 = *(longlong *)(piVar3 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
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
  uVar4 = FUN_14038b450(local_88,param_2,0x56564152);
  piVar9 = local_58;
  *(undefined8 *)(param_1 + 8) = uVar4;
  if (local_58 != (int *)0x0) {
    iVar10 = 1;
    FUN_1402fc370("SANITIZE",local_80,0,1,0,0xffffffff,"end [%p..%p]",local_80,uStack_78);
    if ((piVar9 != (int *)0x0) && (*piVar9 != 0)) {
      LOCK();
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar1 == iVar10) {
        *piVar9 = -0xdead;
        lVar2 = *(longlong *)(piVar9 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
          piVar9[2] = 0;
          piVar9[3] = 0;
        }
        if (*(code **)(piVar9 + 10) != (code *)0x0) {
          (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
          piVar9[8] = 0;
          piVar9[9] = 0;
          piVar9[10] = 0;
          piVar9[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar9);
      }
    }
  }
  uVar5 = *(uint *)(param_2 + 0x14);
  if (uVar5 == 0) {
    lVar2 = FUN_1403c5340(param_2 + 0x78);
    uVar6 = (uint)*(byte *)(lVar2 + 0x12) * 0x100 + (uint)*(byte *)(lVar2 + 0x13);
    uVar5 = 1000;
    if (uVar6 - 0x10 < 0x3ff1) {
      uVar5 = uVar6;
    }
    *(uint *)(param_2 + 0x14) = uVar5;
  }
  param_1[4] = uVar5;
  puVar11 = &DAT_14045dd10;
  if (*(undefined8 **)(param_1 + 6) != (undefined8 *)0x0) {
    puVar11 = *(undefined8 **)(param_1 + 6);
  }
  uVar5 = *(uint *)(puVar11 + 3);
  uVar6 = uVar5 - 1;
  if ((uVar5 & 1) == 0) {
    uVar6 = uVar5;
  }
  lVar2 = FUN_140398c40(param_2 + 200);
  uVar5 = (uint)*(byte *)(lVar2 + 0x22) * 0x100 + (uint)*(byte *)(lVar2 + 0x23);
  *param_1 = uVar5;
  if (uVar6 < uVar5 * 4) {
    uVar5 = uVar6 >> 2;
    *param_1 = uVar5;
  }
  uVar6 = uVar6 + uVar5 * -4;
  lVar2 = FUN_140398a10(param_2 + 0x80);
  uVar7 = (uint)*(byte *)(lVar2 + 4) * 0x100 + (uint)*(byte *)(lVar2 + 5);
  param_1[1] = uVar7;
  uVar5 = *param_1;
  if (uVar7 < uVar5) {
    param_1[1] = uVar5;
    uVar7 = uVar5;
  }
  if (uVar6 < (uVar7 - uVar5) * 2) {
    uVar7 = (uVar6 >> 1) + uVar5;
    param_1[1] = uVar7;
  }
  uVar8 = uVar7;
  if (uVar5 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    uVar8 = 0;
  }
  param_1[2] = (uVar6 + (uVar5 - uVar7) * 2 >> 1) + uVar8;
  uVar5 = *(uint *)(param_2 + 0x18);
  if (uVar5 == 0xffffffff) {
    lVar2 = FUN_140398a10(param_2 + 0x80);
    uVar5 = (uint)*(byte *)(lVar2 + 4) * 0x100 + (uint)*(byte *)(lVar2 + 5);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    *(uint *)(param_2 + 0x18) = uVar5;
  }
  param_1[3] = uVar5;
  if (uVar5 < param_1[2]) {
    param_1[3] = param_1[2];
  }
  return param_1;
}

