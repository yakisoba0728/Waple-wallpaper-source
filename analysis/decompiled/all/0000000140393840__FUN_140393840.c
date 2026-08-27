// Function: FUN_140393840
// Addr: 140393840
// Size: 1213 bytes


/* WARNING: Removing unreachable block (ram,0x000140393c7b) */
/* WARNING: Removing unreachable block (ram,0x000140393c85) */
/* WARNING: Removing unreachable block (ram,0x000140393c92) */
/* WARNING: Removing unreachable block (ram,0x000140393ca8) */
/* WARNING: Removing unreachable block (ram,0x000140393cb5) */

undefined8 * FUN_140393840(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  byte *pbVar16;
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar17;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar19;
  byte *pbVar18;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88 [2];
  byte *local_80;
  byte *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined1 local_60;
  int *local_58;
  int local_50;
  undefined2 local_4c;
  
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff20 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_88[0] = 0;
  local_80 = (byte *)0x0;
  local_78 = (byte *)0x0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (int *)0x0;
  local_50 = 0x10000;
  local_4c = 0;
  iVar8 = *(int *)(param_2 + 0x18);
  if (iVar8 == -1) {
    lVar5 = FUN_140398a10(param_2 + 0x80);
    iVar8 = (uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x100;
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar8;
  }
  local_4c = CONCAT11(local_4c._1_1_,1);
  local_50 = iVar8;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar12 = (int *)&DAT_14045dd10;
  }
  else {
    piVar6 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x6b65726e,*(undefined8 *)(param_2 + 0x28));
    piVar12 = (int *)&DAT_14045dd10;
    if (piVar6 != (int *)0x0) {
      piVar12 = piVar6;
    }
  }
  pbVar16 = (byte *)&DAT_14045dd10;
  if (*piVar12 != 0) {
    LOCK();
    *piVar12 = *piVar12 + 1;
    UNLOCK();
  }
  local_60 = 0;
  pbVar14 = *(byte **)(piVar12 + 4);
  pbVar13 = pbVar14 + (uint)piVar12[6];
  uVar15 = (int)pbVar13 - (int)pbVar14;
  if (uVar15 < 0x3ffffff) {
    uVar9 = 0x4000;
    if (0x3fff < uVar15 * 0x40) {
      uVar9 = uVar15 * 0x40;
    }
    uVar4 = 0x3fffffff;
    if (uVar9 < 0x40000000) {
      uVar4 = uVar9;
    }
  }
  else {
    uVar4 = 0x3fffffff;
  }
  local_70 = CONCAT44(uVar4,uVar15);
  local_88[0] = 0;
  local_68 = local_68 & 0xffffffff;
  iVar8 = 1;
  local_80 = pbVar14;
  local_78 = pbVar13;
  local_58 = piVar12;
  FUN_1402fc370("SANITIZE",pbVar14,0,1,0,CONCAT44(uVar17,1),"start [%p..%p] (%lu bytes)",pbVar14,
                pbVar13,CONCAT44(uVar19,uVar15));
  if (pbVar14 == (byte *)0x0) {
    iVar10 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar12 != 0) {
      LOCK();
      iVar1 = *piVar12;
      *piVar12 = *piVar12 + iVar10;
      UNLOCK();
      if (iVar1 == iVar8) {
        *piVar12 = -0xdead;
        lVar5 = *(longlong *)(piVar12 + 2);
        if (lVar5 != 0) {
          FUN_1403c3220(lVar5);
          thunk_FUN_1402d9040(lVar5);
          piVar12[2] = 0;
          piVar12[3] = 0;
        }
        if (*(code **)(piVar12 + 10) != (code *)0x0) {
          (**(code **)(piVar12 + 10))(*(undefined8 *)(piVar12 + 8));
          piVar12[8] = 0;
          piVar12[9] = 0;
          piVar12[10] = 0;
          piVar12[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar12);
      }
    }
    local_58 = (int *)0x0;
    local_78 = (byte *)0x0;
    local_80 = (byte *)0x0;
    local_70 = local_70 & 0xffffffff00000000;
  }
  else {
    pcVar7 = "OUT-OF-RANGE";
    if (3 < uVar15) {
      pcVar7 = "OK";
    }
    uVar17 = 0;
    pbVar18 = pbVar13;
    FUN_1402fc370("SANITIZE");
    if (uVar15 < 4) {
      cVar3 = '\0';
    }
    else {
      iVar10 = (uint)pbVar14[1] + (uint)*pbVar14 * 0x100;
      if (iVar10 == 0) {
        cVar3 = FUN_1403fd6e0(pbVar14,local_88);
        pbVar13 = local_78;
        pbVar14 = local_80;
      }
      else if (iVar10 == iVar8) {
        cVar3 = FUN_1403fd270(pbVar14,local_88);
        pbVar13 = local_78;
        pbVar14 = local_80;
      }
      else {
        cVar3 = (char)iVar8;
      }
    }
    iVar10 = -1;
    iVar8 = 1;
    FUN_1402fc370("SANITIZE",pbVar14,0,1,0,CONCAT44(uVar17,0xffffffff),"end [%p..%p]",pbVar14,
                  pbVar13,pbVar18,pcVar7);
    piVar6 = local_58;
    if ((local_58 != (int *)0x0) && (*local_58 != 0)) {
      LOCK();
      iVar1 = *local_58;
      *local_58 = *local_58 + iVar10;
      UNLOCK();
      if (iVar1 == iVar8) {
        *local_58 = -0xdead;
        lVar5 = *(longlong *)(local_58 + 2);
        if (lVar5 != 0) {
          FUN_1403c3220(lVar5);
          thunk_FUN_1402d9040(lVar5);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
          piVar6[8] = 0;
          piVar6[9] = 0;
          piVar6[10] = 0;
          piVar6[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar6);
      }
    }
    local_80 = (byte *)0x0;
    local_70 = local_70 & 0xffffffff00000000;
    local_78 = local_80;
    local_58 = (int *)local_80;
    if (cVar3 == '\0') {
      FUN_140414150(piVar12);
      piVar12 = (int *)&DAT_14045dd10;
    }
    else if ((char)piVar12[1] != '\0') {
      *(undefined1 *)(piVar12 + 1) = 0;
    }
  }
  *param_1 = piVar12;
  if (*(int *)(param_2 + 0x18) == -1) {
    lVar5 = FUN_140398a10(param_2 + 0x80);
    iVar8 = (uint)*(byte *)(lVar5 + 4) * 0x100 + (uint)*(byte *)(lVar5 + 5);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar8;
  }
  puVar11 = &DAT_14045dd10;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*param_1;
  }
  if (3 < *(uint *)(puVar11 + 3)) {
    pbVar16 = (byte *)puVar11[2];
  }
  iVar8 = (uint)pbVar16[1] + (uint)*pbVar16 * 0x100;
  if (iVar8 == 0) {
    FUN_1403bc4c0(pbVar16,&local_a8);
  }
  else if (iVar8 == 1) {
    FUN_1403bc130(pbVar16,&local_a8);
  }
  else {
    local_a0 = 0;
    uStack_98 = 0;
    local_a8 = 0;
    local_a4 = 0;
  }
  iVar8 = *(int *)(param_1 + 1);
  *(int *)(param_1 + 1) = local_a8;
  uVar17 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(int *)((longlong)param_1 + 0xc) = local_a4;
  uVar2 = param_1[2];
  param_1[2] = local_a0;
  param_1[3] = uStack_98;
  uStack_98 = 0;
  if (1 < iVar8 + 1U) {
    local_a8 = iVar8;
    local_a4 = uVar17;
    local_a0 = uVar2;
    FUN_14040bfd0(&local_a8,0);
    thunk_FUN_1402d9040(local_a0);
  }
  return param_1;
}

