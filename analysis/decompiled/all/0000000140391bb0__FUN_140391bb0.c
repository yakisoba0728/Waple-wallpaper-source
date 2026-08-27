// Function: FUN_140391bb0
// Addr: 140391bb0
// Size: 1187 bytes


undefined8 * FUN_140391bb0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  undefined8 *puVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulonglong uVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  char *pcVar19;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar21;
  undefined8 uVar20;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar23;
  byte *pbVar22;
  undefined4 local_88 [2];
  byte *local_80;
  byte *local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined1 local_60;
  int *local_58;
  int local_50;
  undefined2 local_4c;
  
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  *param_1 = 0;
  param_1[3] = 0;
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
    piVar10 = (int *)&DAT_14045dd10;
  }
  else {
    piVar6 = (int *)(**(code **)(param_2 + 0x20))(param_2,0x6d6f7274);
    piVar10 = (int *)&DAT_14045dd10;
    if (piVar6 != (int *)0x0) {
      piVar10 = piVar6;
    }
  }
  if (*piVar10 != 0) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  local_60 = 0;
  pbVar13 = *(byte **)(piVar10 + 4);
  pbVar16 = pbVar13 + (uint)piVar10[6];
  uVar17 = (int)pbVar16 - (int)pbVar13;
  if (uVar17 < 0x3ffffff) {
    uVar18 = 0x4000;
    if (0x3fff < uVar17 * 0x40) {
      uVar18 = uVar17 * 0x40;
    }
    uVar4 = 0x3fffffff;
    if (uVar18 < 0x40000000) {
      uVar4 = uVar18;
    }
  }
  else {
    uVar4 = 0x3fffffff;
  }
  local_70 = CONCAT44(uVar4,uVar17);
  local_88[0] = 0;
  local_68 = local_68 & 0xffffffff;
  iVar8 = 1;
  uVar14 = 0;
  local_80 = pbVar13;
  local_78 = pbVar16;
  local_58 = piVar10;
  FUN_1402fc370("SANITIZE",pbVar13,0,1,0,CONCAT44(uVar21,1),"start [%p..%p] (%lu bytes)",pbVar13,
                pbVar16,CONCAT44(uVar23,uVar17));
  if (pbVar13 == (byte *)0x0) {
    iVar15 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar10 != 0) {
      LOCK();
      iVar1 = *piVar10;
      *piVar10 = *piVar10 + iVar15;
      UNLOCK();
      if (iVar1 == iVar8) {
        *piVar10 = -0xdead;
        lVar5 = *(longlong *)(piVar10 + 2);
        if (lVar5 != 0) {
          FUN_1403c3220(lVar5);
          thunk_FUN_1402d9040(lVar5);
          piVar10[2] = 0;
          piVar10[3] = 0;
        }
        if (*(code **)(piVar10 + 10) != (code *)0x0) {
          (**(code **)(piVar10 + 10))(*(undefined8 *)(piVar10 + 8));
          piVar10[8] = 0;
          piVar10[9] = 0;
          piVar10[10] = 0;
          piVar10[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar10);
      }
    }
    local_70 = local_70 & 0xffffffff00000000;
  }
  else {
    pcVar19 = "OUT-OF-RANGE";
    pcVar7 = "OUT-OF-RANGE";
    if (1 < uVar17) {
      pcVar7 = "OK";
    }
    uVar21 = 0;
    pbVar22 = pbVar16;
    FUN_1402fc370("SANITIZE");
    if ((uVar17 < 2) || ((uint)*pbVar13 * 0x100 + (uint)pbVar13[1] == 0)) {
LAB_140391f0f:
      pcVar19 = pcVar7;
      bVar2 = false;
    }
    else {
      pbVar11 = pbVar13 + 8;
      if (7 < uVar17) {
        pcVar19 = "OK";
      }
      uVar20 = 0;
      pbVar22 = pbVar16;
      FUN_1402fc370("SANITIZE",pbVar11);
      uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
      pcVar7 = pcVar19;
      if (uVar17 < 8) goto LAB_140391f0f;
      uVar17 = (uint)pbVar13[5] * 0x10000 + (uint)pbVar13[6] * 0x100 + (uint)pbVar13[4] * 0x1000000
               + (uint)pbVar13[7];
      uVar14 = uVar14 & 0xffffffff;
      pbVar12 = pbVar13;
      if (uVar17 != 0) {
        do {
          cVar3 = FUN_1403fba90(pbVar11,local_88,(uint)*pbVar13 * 0x100 + (uint)pbVar13[1]);
          uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
          pbVar16 = local_78;
          if (cVar3 == '\0') {
            bVar2 = false;
            pbVar13 = local_80;
            goto LAB_140391f12;
          }
          pbVar11 = pbVar11 + ((ulonglong)CONCAT11(pbVar11[4],pbVar11[5]) * 0x100 +
                              (ulonglong)pbVar11[6]) * 0x100 + (ulonglong)pbVar11[7];
          uVar18 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar18;
          pbVar12 = local_80;
        } while (uVar18 < uVar17);
      }
      bVar2 = true;
      pbVar13 = pbVar12;
    }
LAB_140391f12:
    iVar15 = -1;
    iVar8 = 1;
    FUN_1402fc370("SANITIZE",pbVar13,0,1,0,CONCAT44(uVar21,0xffffffff),"end [%p..%p]",pbVar13,
                  pbVar16,pbVar22,pcVar19);
    piVar6 = local_58;
    if ((local_58 != (int *)0x0) && (*local_58 != 0)) {
      LOCK();
      iVar1 = *local_58;
      *local_58 = *local_58 + iVar15;
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
    local_58 = (int *)0x0;
    local_78 = (byte *)0x0;
    local_80 = (byte *)0x0;
    local_70 = local_70 & 0xffffffff00000000;
    if (!bVar2) {
      FUN_140414150(piVar10);
      piVar10 = (int *)&DAT_14045dd10;
      *param_1 = &DAT_14045dd10;
      goto LAB_140391fea;
    }
    if ((char)piVar10[1] != '\0') {
      *(undefined1 *)(piVar10 + 1) = 0;
    }
  }
  local_58 = (int *)0x0;
  local_78 = (byte *)0x0;
  local_80 = (byte *)0x0;
  *param_1 = piVar10;
  if (piVar10 == (int *)0x0) {
    piVar10 = (int *)&DAT_14045dd10;
  }
LAB_140391fea:
  puVar9 = &DAT_14045dd10;
  if (7 < (uint)piVar10[6]) {
    puVar9 = *(undefined8 **)(piVar10 + 4);
  }
  iVar8 = (uint)*(byte *)((longlong)puVar9 + 5) * 0x10000 +
          (uint)*(byte *)((longlong)puVar9 + 6) * 0x100 +
          (uint)*(byte *)((longlong)puVar9 + 4) * 0x1000000 + (uint)*(byte *)((longlong)puVar9 + 7);
  *(int *)(param_1 + 1) = iVar8;
  lVar5 = _calloc_base(iVar8,8);
  param_1[2] = lVar5;
  if (lVar5 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1403bde80(param_1);
    *param_1 = &DAT_14045dd10;
  }
  return param_1;
}

