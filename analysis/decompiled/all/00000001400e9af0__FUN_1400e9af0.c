// Function: FUN_1400e9af0
// Addr: 1400e9af0
// Size: 871 bytes


undefined8 FUN_1400e9af0(longlong *param_1,int param_2)

{
  undefined8 ****ppppuVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined8 ****ppppuVar15;
  uint uVar16;
  undefined8 ****ppppuVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 ***local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  iVar6 = (int)param_1[0xe];
  lVar9 = *param_1;
  if (iVar6 == 0x3a) {
    iVar6 = 0x3a;
  }
  else {
    do {
      if (((iVar6 == 0x3d) || (iVar6 == 0x2e)) || (iVar6 == -1)) break;
      FUN_1400e5740(param_1);
      iVar6 = (int)param_1[0xe];
    } while (iVar6 != 0x3a);
  }
  if (iVar6 != param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1400e74c0(iVar6,param_2 == 0x3a);
  }
  lVar2 = *param_1;
  uVar19 = FUN_1400e5740(param_1);
  if ((int)param_1[0xe] != 0x5d) {
                    /* WARNING: Subroutine does not return */
    FUN_1400e74c0(uVar19,param_2 == 0x3a);
  }
  FUN_1400e5740(param_1);
  if (param_2 == 0x3a) {
    sVar5 = FUN_1400e5270(param_1[0xb],lVar9,lVar2,*(uint *)(param_1 + 0xd) >> 8 & 0xffffff01);
    if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400e74c0(extraout_XMM0_Da,1);
    }
    FUN_1400e8f70(param_1 + 7,sVar5,0);
    return 2;
  }
  if ((lVar9 == lVar2) || (lVar9 + 1 != lVar2)) {
    uVar19 = 0;
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (undefined8 ****)0x0;
    local_30 = 0xf;
  }
  else {
    local_38 = 0;
    local_30 = 0;
    local_48 = (undefined8 ****)0x0;
    uStack_40 = 0;
    uVar19 = FUN_140017480(&local_48,lVar9,lVar2 - lVar9);
  }
  if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400e74c0(uVar19,0);
  }
  if (0xffffffff < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_1400e74c0(uVar19,9);
  }
  ppppuVar15 = &local_48;
  if (0xf < local_30) {
    ppppuVar15 = (undefined8 ****)local_48;
  }
  if ((local_38 == 1) && (param_2 == 0x2e)) {
    *(undefined1 *)((longlong)param_1 + 0x76) = *(undefined1 *)ppppuVar15;
    if (0xf < local_30) {
      uVar11 = local_30 + 1;
      ppppuVar15 = (undefined8 ****)local_48;
      if (0xfff < uVar11) {
        ppppuVar15 = (undefined8 ****)local_48[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_48 + (-8 - (longlong)ppppuVar15))) {
LAB_1400e9e17:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar13 = auStack_60;
LAB_1400e9e1e:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar13 + -8) = &UNK_1400e9e28;
          FUN_14028c340(9);
        }
        uVar11 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar15,uVar11);
    }
    uVar7 = 1;
  }
  else {
    ppppuVar1 = (undefined8 ****)((longlong)ppppuVar15 + local_38);
    ppppuVar17 = ppppuVar15;
    if ((*(uint *)(param_1 + 0xd) & 0x100) != 0) {
      do {
        uVar4 = (**(code **)(**(longlong **)(param_1[0xb] + 8) + 0x20))
                          (*(longlong **)(param_1[0xb] + 8),*(undefined1 *)ppppuVar17);
        *(undefined1 *)ppppuVar17 = uVar4;
        ppppuVar17 = (undefined8 ****)((longlong)ppppuVar17 + 1);
      } while (ppppuVar17 != ppppuVar1);
    }
    if (param_2 == 0x3d) {
      FUN_1400e9e60();
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    puVar18 = (uint *)(param_1[8] + 0x20);
    uVar14 = (int)ppppuVar1 - (int)ppppuVar15;
    puVar12 = (uint *)0x0;
    if (*(longlong *)(param_1[8] + 0x20) != 0) {
      do {
        puVar12 = *(uint **)puVar18;
        if (*puVar12 <= uVar14) {
          if (uVar14 == *puVar12) goto LAB_1400e9d40;
          goto LAB_1400e9d18;
        }
        puVar18 = puVar12 + 6;
      } while (*(longlong *)(puVar12 + 6) != 0);
      puVar12 = (uint *)0x0;
    }
LAB_1400e9d18:
    puVar8 = (uint *)FUN_14028af20(0x20);
    *puVar8 = uVar14;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 0;
    puVar8[5] = 0;
    *(uint **)puVar18 = puVar8;
    *(uint **)(puVar8 + 6) = puVar12;
    puVar12 = *(uint **)puVar18;
LAB_1400e9d40:
    do {
      uVar4 = *(undefined1 *)ppppuVar15;
      ppppuVar15 = (undefined8 ****)((longlong)ppppuVar15 + 1);
      uVar14 = puVar12[2];
      if (uVar14 <= puVar12[3]) {
        uVar10 = uVar14 >> 1;
        if (uVar10 < 0x11) {
          uVar10 = 0x10;
LAB_1400e9e03:
          if (~uVar10 <= uVar14) goto LAB_1400e9d64;
          uVar16 = uVar14 + uVar10;
        }
        else {
          if (uVar10 != 0xffffffff) goto LAB_1400e9e03;
LAB_1400e9d64:
          uVar16 = 0xffffffff;
          uVar10 = ~uVar14;
        }
        puVar13 = auStack_68;
        if ((uVar10 == 0) ||
           (lVar9 = _realloc_base(*(undefined8 *)(puVar12 + 4),uVar16), puVar13 = auStack_68,
           lVar9 == 0)) goto LAB_1400e9e1e;
        *(longlong *)(puVar12 + 4) = lVar9;
        puVar12[2] = uVar16;
      }
      *(undefined1 *)((ulonglong)puVar12[3] + *(longlong *)(puVar12 + 4)) = uVar4;
      puVar12[3] = puVar12[3] + 1;
    } while (ppppuVar15 != ppppuVar1);
    if (0xf < local_30) {
      uVar11 = local_30 + 1;
      ppppuVar15 = (undefined8 ****)local_48;
      if (0xfff < uVar11) {
        ppppuVar15 = (undefined8 ****)local_48[-1];
        if ((undefined1 *)0x1f < (undefined1 *)((longlong)local_48 + (-8 - (longlong)ppppuVar15)))
        goto LAB_1400e9e17;
        uVar11 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar15,uVar11);
    }
    uVar7 = 2;
  }
  return uVar7;
}

