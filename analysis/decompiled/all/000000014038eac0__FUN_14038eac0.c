// Function: FUN_14038eac0
// Addr: 14038eac0
// Size: 1212 bytes


undefined8 * FUN_14038eac0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  int *piVar11;
  ulonglong uVar12;
  undefined8 in_stack_ffffffffffffff40;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar16;
  byte *pbVar15;
  undefined4 local_88 [2];
  byte *local_80;
  byte *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined1 local_60;
  int *local_58;
  int local_50;
  undefined2 local_4c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  *param_1 = 0;
  local_88[0] = 0;
  local_80 = (byte *)0x0;
  local_78 = (byte *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (int *)0x0;
  local_50 = 0x10000;
  local_4c = 0x100;
  iVar6 = *(int *)(param_2 + 0x18);
  if (iVar6 == -1) {
    lVar4 = FUN_140398a10(param_2 + 0x80);
    iVar6 = (uint)*(byte *)(lVar4 + 5) + (uint)*(byte *)(lVar4 + 4) * 0x100;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar6;
  }
  local_4c = CONCAT11(local_4c._1_1_,1);
  local_50 = iVar6;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar11 = (int *)&DAT_14045dd10;
  }
  else {
    piVar5 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x47535542,*(undefined8 *)(param_2 + 0x28));
    piVar11 = (int *)&DAT_14045dd10;
    if (piVar5 != (int *)0x0) {
      piVar11 = piVar5;
    }
  }
  if (*piVar11 != 0) {
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  local_60 = 0;
  local_80 = *(byte **)(piVar11 + 4);
  local_78 = local_80 + (uint)piVar11[6];
  uVar9 = (int)local_78 - (int)local_80;
  if (uVar9 < 0x3ffffff) {
    uVar7 = 0x4000;
    if (0x3fff < uVar9 * 0x40) {
      uVar7 = uVar9 * 0x40;
    }
    uVar3 = 0x3fffffff;
    if (uVar7 < 0x40000000) {
      uVar3 = uVar7;
    }
  }
  else {
    uVar3 = 0x3fffffff;
  }
  local_70 = CONCAT44(uVar3,uVar9);
  local_88[0] = 0;
  local_68 = local_68 & 0xffffffff;
  uVar13 = CONCAT44(uVar14,1);
  iVar6 = 1;
  local_58 = piVar11;
  FUN_1402fc370("SANITIZE",local_80,0,1,0,uVar13,"start [%p..%p] (%lu bytes)",local_80,local_78,
                CONCAT44(uVar16,uVar9));
  if (local_80 == (byte *)0x0) {
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    FUN_1402fc370("SANITIZE",0);
    piVar5 = local_58;
    if ((local_58 != (int *)0x0) && (*local_58 != 0)) {
      LOCK();
      iVar1 = *local_58;
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (iVar1 == iVar6) {
        *local_58 = -0xdead;
        lVar4 = *(longlong *)(local_58 + 2);
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
    local_70 = local_70 & 0xffffffff00000000;
  }
  else {
    uVar12 = local_70 & 0xffffffff;
    pcVar8 = "OUT-OF-RANGE";
    if (3 < uVar12) {
      pcVar8 = "OK";
    }
    uVar14 = 0;
    pbVar10 = local_80;
    pbVar15 = local_78;
    FUN_1402fc370("SANITIZE",local_80 + 4,0);
    if (uVar12 < 4) {
      cVar2 = '\0';
    }
    else if ((uint)*pbVar10 * 0x100 + (uint)pbVar10[1] == iVar6) {
      cVar2 = FUN_14038bf90(pbVar10,local_88);
    }
    else {
      cVar2 = (char)iVar6;
    }
    uVar13 = CONCAT44(uVar14,0xffffffff);
    iVar6 = 1;
    FUN_1402fc370("SANITIZE",local_80,0,1,0,uVar13,"end [%p..%p]",local_80,local_78,pbVar15,pcVar8);
    piVar5 = local_58;
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    if ((local_58 != (int *)0x0) && (*local_58 != 0)) {
      LOCK();
      iVar1 = *local_58;
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (iVar1 == iVar6) {
        *local_58 = -0xdead;
        lVar4 = *(longlong *)(local_58 + 2);
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
    local_58 = (int *)0x0;
    local_78 = (byte *)0x0;
    local_80 = (byte *)0x0;
    local_70 = local_70 & 0xffffffff00000000;
    if (cVar2 == '\0') {
      FUN_140414150(piVar11);
      piVar11 = (int *)&DAT_14045dd10;
      *param_1 = &DAT_14045dd10;
      goto LAB_14038ee55;
    }
    if ((char)piVar11[1] != '\0') {
      *(undefined1 *)(piVar11 + 1) = 0;
    }
  }
  local_58 = (int *)0x0;
  *param_1 = piVar11;
  local_80 = (byte *)local_58;
  local_78 = (byte *)local_58;
  if (piVar11 == (int *)0x0) {
    piVar11 = (int *)&DAT_14045dd10;
  }
LAB_14038ee55:
  iVar6 = 0;
  pbVar10 = (byte *)&DAT_14045dd10;
  if (3 < (uint)piVar11[6]) {
    pbVar10 = *(byte **)(piVar11 + 4);
  }
  if ((uint)*pbVar10 * 0x100 + (uint)pbVar10[1] == 1) {
    uVar9 = (uint)pbVar10[8] * 0x100 + (uint)pbVar10[9];
    if (uVar9 == 0) {
      pbVar10 = (byte *)&DAT_14045dd10;
    }
    else {
      pbVar10 = pbVar10 + uVar9;
    }
    iVar6 = (uint)pbVar10[1] + (uint)*pbVar10 * 0x100;
  }
  *(int *)(param_1 + 1) = iVar6;
  lVar4 = _calloc_base(iVar6,8);
  param_1[2] = lVar4;
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1403bde80(param_1);
    *param_1 = &DAT_14045dd10;
  }
  if (local_58 != (int *)0x0) {
    iVar6 = 1;
    FUN_1402fc370("SANITIZE",local_80,0,1,0,CONCAT44(uVar14,0xffffffff),"end [%p..%p]",local_80,
                  local_78);
    piVar11 = local_58;
    if ((local_58 != (int *)0x0) && (*local_58 != 0)) {
      LOCK();
      iVar1 = *local_58;
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (iVar1 == iVar6) {
        *local_58 = -0xdead;
        lVar4 = *(longlong *)(local_58 + 2);
        if (lVar4 != 0) {
          FUN_1403c3220(lVar4);
          thunk_FUN_1402d9040(lVar4);
          piVar11[2] = 0;
          piVar11[3] = 0;
        }
        if (*(code **)(piVar11 + 10) != (code *)0x0) {
          (**(code **)(piVar11 + 10))(*(undefined8 *)(piVar11 + 8));
          piVar11[8] = 0;
          piVar11[9] = 0;
          piVar11[10] = 0;
          piVar11[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar11);
      }
    }
  }
  return param_1;
}

