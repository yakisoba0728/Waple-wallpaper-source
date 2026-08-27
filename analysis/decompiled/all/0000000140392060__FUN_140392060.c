// Function: FUN_140392060
// Addr: 140392060
// Size: 1400 bytes


undefined8 * FUN_140392060(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  ulonglong uVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  char *pcVar19;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar21;
  ulonglong uVar20;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar23;
  byte *pbVar22;
  undefined4 local_78 [2];
  byte *local_70;
  byte *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_50;
  int *local_48;
  int local_40;
  undefined2 local_3c;
  
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  *param_1 = 0;
  param_1[3] = 0;
  local_78[0] = 0;
  local_70 = (byte *)0x0;
  local_68 = (byte *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (int *)0x0;
  local_40 = 0x10000;
  local_3c = 0;
  iVar11 = *(int *)(param_2 + 0x18);
  if (iVar11 == -1) {
    lVar6 = FUN_140398a10(param_2 + 0x80);
    iVar11 = (uint)*(byte *)(lVar6 + 5) + (uint)*(byte *)(lVar6 + 4) * 0x100;
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar11;
  }
  local_3c = CONCAT11(local_3c._1_1_,1);
  local_40 = iVar11;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar14 = (int *)&DAT_14045dd10;
  }
  else {
    piVar7 = (int *)(**(code **)(param_2 + 0x20))(param_2,0x6d6f7278);
    piVar14 = (int *)&DAT_14045dd10;
    if (piVar7 != (int *)0x0) {
      piVar14 = piVar7;
    }
  }
  if (*piVar14 != 0) {
    LOCK();
    *piVar14 = *piVar14 + 1;
    UNLOCK();
  }
  local_50 = 0;
  pbVar2 = *(byte **)(piVar14 + 4);
  pbVar17 = pbVar2 + (uint)piVar14[6];
  uVar16 = (int)pbVar17 - (int)pbVar2;
  if (uVar16 < 0x3ffffff) {
    uVar18 = 0x4000;
    if (0x3fff < uVar16 * 0x40) {
      uVar18 = uVar16 * 0x40;
    }
    uVar5 = 0x3fffffff;
    if (uVar18 < 0x40000000) {
      uVar5 = uVar18;
    }
  }
  else {
    uVar5 = 0x3fffffff;
  }
  local_60 = CONCAT44(uVar5,uVar16);
  local_78[0] = 0;
  local_58 = local_58 & 0xffffffff;
  iVar11 = 1;
  uVar15 = 0;
  local_70 = pbVar2;
  local_68 = pbVar17;
  local_48 = piVar14;
  FUN_1402fc370("SANITIZE",pbVar2,0,1,0,CONCAT44(uVar21,1),"start [%p..%p] (%lu bytes)",pbVar2,
                pbVar17,CONCAT44(uVar23,uVar16));
  if (pbVar2 == (byte *)0x0) {
    FUN_1402fc370("SANITIZE");
    if (*piVar14 != 0) {
      LOCK();
      iVar1 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar1 == iVar11) {
        *piVar14 = -0xdead;
        lVar6 = *(longlong *)(piVar14 + 2);
        if (lVar6 != 0) {
          FUN_1403c3220(lVar6);
          thunk_FUN_1402d9040(lVar6);
          piVar14[2] = 0;
          piVar14[3] = 0;
        }
        if (*(code **)(piVar14 + 10) != (code *)0x0) {
          (**(code **)(piVar14 + 10))(*(undefined8 *)(piVar14 + 8));
          piVar14[8] = 0;
          piVar14[9] = 0;
          piVar14[10] = 0;
          piVar14[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar14);
      }
    }
    local_48 = (int *)0x0;
    local_68 = (byte *)0x0;
    local_70 = (byte *)0x0;
    local_60 = local_60 & 0xffffffff00000000;
    goto LAB_1403924a1;
  }
  pcVar19 = "OUT-OF-RANGE";
  pcVar8 = "OUT-OF-RANGE";
  if (1 < uVar16) {
    pcVar8 = "OK";
  }
  uVar20 = uVar15;
  pbVar22 = pbVar17;
  FUN_1402fc370("SANITIZE");
  uVar21 = (undefined4)(uVar20 >> 0x20);
  pbVar12 = pbVar2;
  if ((uVar16 < 2) || ((uint)*pbVar2 * 0x100 + (uint)pbVar2[1] == 0)) {
LAB_1403923cd:
    bVar3 = false;
  }
  else {
    pbVar13 = pbVar2 + 8;
    if (7 < uVar16) {
      pcVar19 = "OK";
    }
    uVar20 = uVar15;
    pbVar22 = pbVar17;
    FUN_1402fc370("SANITIZE",pbVar13);
    uVar21 = (undefined4)(uVar20 >> 0x20);
    pcVar8 = pcVar19;
    if (uVar16 < 8) goto LAB_1403923cd;
    uVar16 = (uint)pbVar2[5] * 0x10000 + (uint)pbVar2[6] * 0x100 + (uint)pbVar2[4] * 0x1000000 +
             (uint)pbVar2[7];
    uVar15 = uVar15 & 0xffffffff;
    if (uVar16 != 0) {
      do {
        cVar4 = FUN_1403fb6f0(pbVar13,local_78,(uint)*pbVar2 * 0x100 + (uint)pbVar2[1]);
        uVar21 = (undefined4)(uVar20 >> 0x20);
        pbVar12 = local_70;
        pbVar17 = local_68;
        if (cVar4 == '\0') goto LAB_1403923cd;
        pbVar13 = pbVar13 + ((ulonglong)CONCAT11(pbVar13[4],pbVar13[5]) * 0x100 +
                            (ulonglong)pbVar13[6]) * 0x100 + (ulonglong)pbVar13[7];
        uVar18 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar18;
      } while (uVar18 < uVar16);
    }
    bVar3 = true;
  }
  iVar11 = 1;
  FUN_1402fc370("SANITIZE",pbVar12,0,1,0,CONCAT44(uVar21,0xffffffff),"end [%p..%p]",pbVar12,pbVar17,
                pbVar22,pcVar8);
  piVar7 = local_48;
  if ((local_48 != (int *)0x0) && (*local_48 != 0)) {
    LOCK();
    iVar1 = *local_48;
    *local_48 = *local_48 + -1;
    UNLOCK();
    if (iVar1 == iVar11) {
      *local_48 = -0xdead;
      lVar6 = *(longlong *)(local_48 + 2);
      if (lVar6 != 0) {
        FUN_1403c3220(lVar6);
        thunk_FUN_1402d9040(lVar6);
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
  local_70 = (byte *)0x0;
  local_60 = local_60 & 0xffffffff00000000;
  local_68 = local_70;
  local_48 = (int *)local_70;
  if (bVar3) {
    if ((char)piVar14[1] != '\0') {
      *(undefined1 *)(piVar14 + 1) = 0;
    }
  }
  else {
    FUN_140414150(piVar14);
    piVar14 = (int *)&DAT_14045dd10;
  }
LAB_1403924a1:
  *param_1 = piVar14;
  puVar9 = (undefined8 *)FUN_1403c4f70(param_2 + 0x140);
  puVar10 = &DAT_14045dd10;
  if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar9;
  }
  uVar16 = *(uint *)(puVar10 + 3);
  puVar9 = (undefined8 *)FUN_1403c4e30(param_2 + 0x138);
  puVar10 = &DAT_14045dd10;
  if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar9;
  }
  if ((((ulonglong)(uint)piVar14[6] << 0x15 | (ulonglong)uVar16) << 0x15 |
      (ulonglong)*(uint *)(puVar10 + 3)) == 0x136d0015d400154) {
    piVar14 = (int *)*param_1;
    if ((piVar14 != (int *)0x0) && (*piVar14 != 0)) {
      LOCK();
      iVar11 = *piVar14;
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        *piVar14 = -0xdead;
        lVar6 = *(longlong *)(piVar14 + 2);
        if (lVar6 != 0) {
          FUN_1403c3220(lVar6);
          thunk_FUN_1402d9040(lVar6);
          piVar14[2] = 0;
          piVar14[3] = 0;
        }
        if (*(code **)(piVar14 + 10) != (code *)0x0) {
          (**(code **)(piVar14 + 10))(*(undefined8 *)(piVar14 + 8));
          piVar14[8] = 0;
          piVar14[9] = 0;
          piVar14[10] = 0;
          piVar14[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar14);
      }
    }
    *param_1 = &DAT_14045dd10;
  }
  puVar10 = &DAT_14045dd10;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*param_1;
  }
  puVar9 = &DAT_14045dd10;
  if (7 < *(uint *)(puVar10 + 3)) {
    puVar9 = (undefined8 *)puVar10[2];
  }
  iVar11 = (uint)*(byte *)((longlong)puVar9 + 5) * 0x10000 +
           (uint)*(byte *)((longlong)puVar9 + 6) * 0x100 +
           (uint)*(byte *)((longlong)puVar9 + 4) * 0x1000000 + (uint)*(byte *)((longlong)puVar9 + 7)
  ;
  *(int *)(param_1 + 1) = iVar11;
  lVar6 = _calloc_base(iVar11,8);
  param_1[2] = lVar6;
  if (lVar6 == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    FUN_1403bde80(param_1);
    *param_1 = &DAT_14045dd10;
  }
  return param_1;
}

