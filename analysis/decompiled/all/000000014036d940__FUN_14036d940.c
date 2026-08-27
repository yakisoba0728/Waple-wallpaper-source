// Function: FUN_14036d940
// Addr: 14036d940
// Size: 1844 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong FUN_14036d940(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  undefined2 uVar1;
  short sVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  ulonglong uVar10;
  int *piVar11;
  uint *puVar12;
  undefined2 *puVar13;
  ushort uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  undefined1 auStack_1ae8 [32];
  ulonglong *local_1ac8;
  ulonglong *local_1ac0;
  ulonglong *local_1ab8;
  uint local_1aa8;
  uint local_1aa4 [3];
  longlong local_1a98;
  undefined4 local_1a90;
  undefined4 local_1a8c;
  ulonglong local_1a88;
  int *piStack_1a80;
  undefined8 local_1a78;
  undefined4 uStack_1a70;
  undefined4 uStack_1a6c;
  ulonglong local_1a68;
  int *piStack_1a60;
  ulonglong local_1a58;
  ulonglong local_1a48;
  int *piStack_1a40;
  ulonglong local_1a38;
  ulonglong local_1a28;
  int *piStack_1a20;
  ulonglong local_1a18;
  int local_1a08;
  undefined4 uStack_1a04;
  undefined2 *local_1a00;
  longlong local_19f8;
  int local_19f0;
  undefined4 uStack_19ec;
  undefined2 *local_19e8;
  uint local_19dc;
  int *local_19d8 [3];
  int *local_19c0;
  ulonglong local_1978;
  int *piStack_1970;
  uint local_1968;
  undefined4 uStack_1964;
  undefined4 uStack_1960;
  undefined4 uStack_195c;
  longlong local_1958;
  uint local_1948 [20];
  int local_18f8 [20];
  int local_18a8 [252];
  undefined2 local_14b8;
  byte local_14b6 [46];
  undefined4 local_1488;
  undefined4 local_1288;
  undefined1 local_1088 [4160];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14036d962;
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_1ae8;
  uVar10 = 0;
  local_1aa8 = 0;
  uVar17 = 0;
  local_1a98 = param_3;
  local_1a8c = param_4;
  do {
    local_1aa4[0] = 0;
    lVar18 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
    local_1ac8 = (ulonglong *)0x0;
    if (lVar18 != 0) {
      local_1ac8 = *(ulonglong **)(lVar18 + 0x10);
    }
    iVar9 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                      (param_2,*(undefined8 *)(param_2 + 0x98),
                       *(undefined2 *)(uVar17 * 0x3a + param_3),local_1aa4);
    if (iVar9 != 0) {
      *(char *)(&local_14b8 + uVar10) = (char)(local_1aa4[0] >> 8);
      *(char *)((longlong)&local_14b8 + uVar10 * 2 + 1) = (char)local_1aa4[0];
      local_18f8[uVar10] = 0;
      local_1948[uVar10] = (uint)uVar17;
      uVar10 = (ulonglong)((int)uVar10 + 1);
    }
    uVar15 = (uint)uVar17 + 1;
    uVar17 = (ulonglong)uVar15;
  } while (uVar15 < 0x12);
  local_1aa4[0] = (uint)uVar10;
  uVar15 = 1;
  if (local_1aa4[0] < 2) {
    if (local_1aa4[0] == 0) {
      return 0;
    }
  }
  else {
    do {
      if (uVar15 != 0) {
        uVar17 = (ulonglong)uVar15;
        uVar20 = (ushort)*(byte *)(&local_14b8 + uVar17) * 0x100 +
                 (ushort)*(byte *)((longlong)&local_14b8 + uVar17 * 2 + 1);
        uVar19 = uVar15;
        do {
          uVar16 = uVar19 - 1;
          uVar14 = (&local_14b8)[uVar16] * 0x100 + ((ushort)(&local_14b8)[uVar16] >> 8);
          if ((int)((uint)(uVar20 < uVar14) - (uint)(uVar14 < uVar20)) < 1) break;
          uVar19 = uVar16;
        } while (uVar16 != 0);
        if (uVar15 != uVar19) {
          uVar1 = (&local_14b8)[uVar17];
          FUN_1404210f0(&local_14b8 + (uVar19 + 1),&local_14b8 + uVar19,
                        (ulonglong)(uVar15 - uVar19) * 2);
          (&local_14b8)[uVar19] = uVar1;
          uVar16 = local_1948[uVar15];
          FUN_1404210f0(local_1948 + (uVar19 + 1),local_1948 + uVar19,
                        (ulonglong)(uVar15 - uVar19) * 4);
          local_1948[uVar19] = uVar16;
          uVar10 = (ulonglong)local_1aa4[0];
        }
      }
      uVar15 = uVar15 + 1;
      param_3 = local_1a98;
    } while (uVar15 < (uint)uVar10);
  }
  local_1aa4[2] = 0;
  uVar15 = 0;
  local_1a98 = 0;
  do {
    uVar19 = local_1948[local_1a98];
    local_1958 = (ulonglong)uVar19 * 0x3a;
    lVar18 = 0;
    do {
      local_1aa4[1] = 0;
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
      local_1ac8 = (ulonglong *)0x0;
      if (lVar3 != 0) {
        local_1ac8 = *(ulonglong **)(lVar3 + 0x10);
      }
      iVar9 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                        (param_2,*(undefined8 *)(param_2 + 0x98),
                         *(undefined2 *)(param_3 + lVar18 * 4 + 4 + local_1958),local_1aa4 + 1);
      if (iVar9 != 0) {
        uVar17 = 0;
        do {
          sVar2 = *(short *)(param_3 + 2 + ((ulonglong)uVar19 * 0x1d + lVar18 * 2 + uVar17) * 2);
          if (sVar2 == 0) goto LAB_14036dc48;
          local_1a90 = 0;
          lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
          local_1ac8 = (ulonglong *)0x0;
          if (lVar3 != 0) {
            local_1ac8 = *(ulonglong **)(lVar3 + 0x10);
          }
          iVar9 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                            (param_2,*(undefined8 *)(param_2 + 0x98),sVar2,&local_1a90);
          if (iVar9 == 0) goto LAB_14036dc48;
          uVar10 = (ulonglong)uVar15;
          uVar15 = uVar15 + 1;
          *(char *)((longlong)&local_1488 + uVar10 * 2) = (char)((uint)local_1a90 >> 8);
          *(char *)((longlong)&local_1488 + uVar10 * 2 + 1) = (char)local_1a90;
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar16;
        } while (uVar16 == 0);
        local_18a8[local_1aa8] = 2;
        lVar3 = (ulonglong)local_1aa8 * 2;
        *(char *)((longlong)&local_1288 + lVar3) = (char)(local_1aa4[1] >> 8);
        *(char *)((longlong)&local_1288 + lVar3 + 1) = (char)local_1aa4[1];
        local_18f8[local_1a98] = local_18f8[local_1a98] + 1;
        local_1aa8 = local_1aa8 + 1;
      }
LAB_14036dc48:
      uVar4 = local_1aa4[0];
      uVar16 = local_1aa8;
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0xe);
    local_1aa4[2] = local_1aa4[2] + 1;
    local_1a98 = local_1a98 + 1;
  } while (local_1aa4[2] < local_1aa4[0]);
  if (local_1aa8 == 0) {
    return 0;
  }
  FUN_140395a70(&local_1a08,local_1088,0x1040);
  lVar18 = FUN_14038e4b0(&local_1a08);
  local_1a88 = local_1a88 & 0xffffffffffffff00;
  piStack_1a80 = (int *)&local_14b8;
  local_1a78 = (ulonglong)uVar4;
  local_1ac8 = (ulonglong *)CONCAT44(local_1ac8._4_4_,1);
  cVar8 = FUN_14040b000(lVar18,&local_1a08,4,local_1a8c);
  if (cVar8 == '\0') {
LAB_14036e02e:
    FUN_1403bf0c0(&local_1a08);
  }
  else {
    local_1a68 = local_1a88;
    piStack_1a60 = &local_1488;
    local_1a58 = (ulonglong)uVar15;
    local_1a48 = local_1a88;
    piStack_1a40 = local_18a8;
    local_1a38 = (ulonglong)uVar16;
    local_1a28 = local_1a88;
    piStack_1a20 = &local_1288;
    local_1a18 = (ulonglong)uVar16;
    local_1978 = local_1a88;
    piStack_1970 = local_18f8;
    local_1968 = uVar4;
    uStack_1964 = 0;
    if (local_19dc == 0) {
      piVar11 = (int *)FUN_1403a3490(local_19d8);
      if (piVar11 == (int *)0x0) {
        if (local_19dc == 0) {
          local_19dc = 1;
        }
      }
      else {
        *(undefined2 **)piVar11 = local_1a00;
        *(longlong *)(piVar11 + 2) = local_19f8;
        *(int **)(piVar11 + 0xc) = local_19c0;
        local_19c0 = piVar11;
      }
    }
    puVar6 = local_1a00;
    piVar11 = piStack_1a80;
    uVar17 = local_1a88;
    puVar13 = local_1a00;
    if ((local_19dc != 0) || (local_1a00 + 1 < local_1a00)) {
LAB_14036dfcd:
      local_1a00 = puVar13;
      piVar11 = local_19c0;
      if (((local_19c0 != (int *)0x0) && (local_19dc < 0x11)) &&
         ((0x10105U >> (local_19dc & 0x1f) & 1) != 0)) {
        if (local_19e8 == (undefined2 *)0x0) {
          local_19e8 = *(undefined2 **)local_19c0;
        }
        piVar7 = *(int **)(local_19c0 + 0xc);
        if (local_19dc == 0) {
          local_19f8 = *(longlong *)(local_19c0 + 2);
          local_1a00 = local_19e8;
          local_19c0 = *(int **)(local_19c0 + 0xc);
          FUN_1403bdf20(&local_1a08);
          piVar7 = local_19c0;
        }
        local_19c0 = piVar7;
        local_19e8 = (undefined2 *)0x0;
        FUN_1403c29e0(piVar11);
        *(int **)piVar11 = local_19d8[0];
        local_19d8[0] = piVar11;
      }
      goto LAB_14036e02e;
    }
    if (local_19f8 - (longlong)local_1a00 < 2) {
      local_19dc = 4;
      goto LAB_14036dfcd;
    }
    *local_1a00 = 0;
    puVar13 = local_1a00 + 1;
    if ((local_1a00 == (undefined2 *)0x0) || (local_1a00 == (undefined2 *)0x0)) goto LAB_14036dfcd;
    local_1aa8 = CONCAT22(local_1aa8._2_2_,0x100);
    *local_1a00 = 0x100;
    uVar15 = (uint)local_1a78;
    uVar5 = local_1a78._4_4_;
    local_1a88 = local_1a68;
    piStack_1a80 = piStack_1a60;
    local_1a78 = local_1a58;
    local_1a68 = local_1a48;
    piStack_1a60 = piStack_1a40;
    local_1a58 = local_1a38;
    local_1a48 = local_1a28;
    piStack_1a40 = piStack_1a20;
    local_1a38 = local_1a18;
    local_1a28 = local_1978;
    piStack_1a20 = piStack_1970;
    local_1a18 = CONCAT44(uStack_1964,local_1968);
    local_1978 = uVar17;
    piStack_1970 = piVar11;
    local_1968 = uVar15;
    uStack_1964 = uVar5;
    uStack_1960 = uStack_1a70;
    uStack_195c = uStack_1a6c;
    local_1ab8 = &local_1a88;
    local_1ac0 = &local_1a68;
    local_1ac8 = &local_1a48;
    local_1a00 = puVar13;
    cVar8 = FUN_14040ab50(puVar6,&local_1a08,&local_1978,&local_1a28);
    puVar13 = local_1a00;
    if (cVar8 == '\0') goto LAB_14036dfcd;
    if ((uint)*(byte *)(lVar18 + 5) + (uint)*(byte *)(lVar18 + 4) * 0x100 == 0) {
      DAT_1404e4f20._0_2_ = (undefined2)DAT_14045dd10;
      iVar9 = 0x404e4f20;
    }
    else {
      iVar9 = (int)lVar18 + 6;
    }
    uVar15 = FUN_1403f0d30(&local_1a08,1);
    if ((local_19dc == 0) && (uVar15 != 0)) {
      puVar12 = (uint *)FUN_1403f5580(local_19c0 + 4);
      if (local_19c0[4] < 0) {
        local_19dc = local_19dc | 1;
      }
      puVar12[2] = uVar15;
      *puVar12 = *puVar12 & 0xffffffc2 | 2;
      puVar12[1] = iVar9 - *local_19c0;
      *puVar12 = 2;
    }
    FUN_1403bf0c0(&local_1a08);
    if (local_19dc == 0) {
      iVar9 = (((int)local_1a00 - (int)local_19f8) - local_1a08) + local_19f0;
      if ((iVar9 != 0) && (lVar18 = _malloc_base(iVar9), lVar18 != 0)) {
        puVar13 = (undefined2 *)CONCAT44(uStack_1a04,local_1a08);
        if (local_1a00 != puVar13) {
          FUN_1404210f0(lVar18,puVar13);
          puVar13 = (undefined2 *)CONCAT44(uStack_1a04,local_1a08);
        }
        if (CONCAT44(uStack_19ec,local_19f0) != local_19f8) {
          FUN_1404210f0((longlong)local_1a00 + (lVar18 - (longlong)puVar13));
        }
        goto LAB_14036e03a;
      }
    }
  }
  lVar18 = 0;
LAB_14036e03a:
  FUN_1403976a0(&local_1a08);
  return lVar18;
}

