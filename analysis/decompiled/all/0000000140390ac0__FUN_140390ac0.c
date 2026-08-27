// Function: FUN_140390ac0
// Addr: 140390ac0
// Size: 1751 bytes


/* WARNING: Removing unreachable block (ram,0x00014039102c) */
/* WARNING: Removing unreachable block (ram,0x000140391036) */
/* WARNING: Removing unreachable block (ram,0x000140391043) */
/* WARNING: Removing unreachable block (ram,0x000140391055) */
/* WARNING: Removing unreachable block (ram,0x000140391062) */

undefined8 * FUN_140390ac0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined2 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int *piVar21;
  ulonglong uVar22;
  undefined2 *puVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint local_res8;
  int local_res10;
  undefined8 *local_res20;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined4 local_88 [2];
  ulonglong local_80;
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined1 local_60;
  int *local_58;
  int local_50;
  undefined2 local_4c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_88[0] = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (int *)0x0;
  local_50 = 0x10000;
  local_4c = 0;
  iVar11 = *(int *)(param_2 + 0x18);
  if (iVar11 == -1) {
    lVar7 = FUN_140398a10(param_2 + 0x80);
    iVar11 = (uint)*(byte *)(lVar7 + 5) + (uint)*(byte *)(lVar7 + 4) * 0x100;
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar11;
  }
  local_4c = CONCAT11(local_4c._1_1_,1);
  local_50 = iVar11;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar21 = (int *)&DAT_14045dd10;
  }
  else {
    piVar8 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x6b657278,*(undefined8 *)(param_2 + 0x28));
    piVar21 = (int *)&DAT_14045dd10;
    if (piVar8 != (int *)0x0) {
      piVar21 = piVar8;
    }
  }
  if (*piVar21 != 0) {
    LOCK();
    *piVar21 = *piVar21 + 1;
    UNLOCK();
  }
  local_60 = 0;
  uVar25 = *(ulonglong *)(piVar21 + 4);
  local_78 = (uint)piVar21[6] + uVar25;
  uVar15 = (int)local_78 - (int)uVar25;
  if (uVar15 < 0x3ffffff) {
    uVar16 = 0x4000;
    if (0x3fff < uVar15 * 0x40) {
      uVar16 = uVar15 * 0x40;
    }
    uVar24 = 0x3fffffff;
    if (uVar16 < 0x40000000) {
      uVar24 = uVar16;
    }
  }
  else {
    uVar24 = 0x3fffffff;
  }
  local_70 = CONCAT44(uVar24,uVar15);
  local_88[0] = 0;
  local_68 = local_68 & 0xffffffff;
  iVar11 = 1;
  local_80 = uVar25;
  local_58 = piVar21;
  FUN_1402fc370("SANITIZE",uVar25,0,1,0,1,"start [%p..%p] (%lu bytes)",uVar25,local_78,uVar15);
  if (uVar25 == 0) {
    FUN_1402fc370("SANITIZE");
    if (*piVar21 != 0) {
      LOCK();
      iVar1 = *piVar21;
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (iVar1 == iVar11) {
        *piVar21 = -0xdead;
        lVar7 = *(longlong *)(piVar21 + 2);
        if (lVar7 != 0) {
          FUN_1403c3220(lVar7);
          thunk_FUN_1402d9040(lVar7);
          piVar21[2] = 0;
          piVar21[3] = 0;
        }
        if (*(code **)(piVar21 + 10) != (code *)0x0) {
          (**(code **)(piVar21 + 10))(*(undefined8 *)(piVar21 + 8));
          piVar21[8] = 0;
          piVar21[9] = 0;
          piVar21[10] = 0;
          piVar21[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar21);
        uVar25 = 0;
      }
    }
    local_70 = CONCAT44(local_70._4_4_,(int)uVar25);
    local_80 = uVar25;
    local_78 = uVar25;
    local_58 = (int *)uVar25;
  }
  else {
    cVar6 = FUN_1403fdad0(uVar25,local_88);
    uVar25 = 0;
    iVar11 = 1;
    FUN_1402fc370("SANITIZE",local_80,0,1,0,0xffffffff,"end [%p..%p]",local_80,local_78,uVar15);
    piVar8 = local_58;
    if ((local_58 != (int *)0x0) && (*local_58 != 0)) {
      LOCK();
      iVar1 = *local_58;
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (iVar1 == iVar11) {
        *local_58 = -0xdead;
        lVar7 = *(longlong *)(local_58 + 2);
        if (lVar7 != 0) {
          FUN_1403c3220(lVar7);
          thunk_FUN_1402d9040(lVar7);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
          piVar8[8] = 0;
          piVar8[9] = 0;
          piVar8[10] = 0;
          piVar8[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar8);
        uVar25 = 0;
      }
    }
    local_70 = CONCAT44(local_70._4_4_,(int)uVar25);
    local_80 = uVar25;
    local_78 = uVar25;
    local_58 = (int *)uVar25;
    if (cVar6 == '\0') {
      FUN_140414150(piVar21);
      piVar21 = (int *)&DAT_14045dd10;
      uVar25 = 0;
    }
    else if ((char)piVar21[1] != '\0') {
      *(undefined1 *)(piVar21 + 1) = 0;
    }
  }
  *param_1 = piVar21;
  local_res10 = *(int *)(param_2 + 0x18);
  if (local_res10 == -1) {
    lVar7 = FUN_140398a10(param_2 + 0x80);
    uVar25 = 0;
    local_res10 = (uint)*(byte *)(lVar7 + 5) + (uint)*(byte *)(lVar7 + 4) * 0x100;
    if (local_res10 == 0) {
      local_res10 = 0;
    }
    *(int *)(param_2 + 0x18) = local_res10;
  }
  puVar12 = &DAT_14045dd10;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar12 = (undefined8 *)*param_1;
  }
  if (*(uint *)(puVar12 + 3) < 8) {
    puVar12 = &DAT_14045dd10;
  }
  else {
    puVar12 = (undefined8 *)puVar12[2];
  }
  uVar24 = (uint)uVar25;
  uVar27 = uVar25 & 0xffffffff;
  local_a8 = 0;
  uVar26 = uVar25 & 0xffffffff;
  local_a0 = 0;
  uStack_98 = 0;
  local_res20 = puVar12 + 1;
  uVar16 = (uint)*(byte *)((longlong)puVar12 + 5) * 0x10000 +
           (uint)*(byte *)((longlong)puVar12 + 6) * 0x100 +
           (uint)*(byte *)((longlong)puVar12 + 4) * 0x1000000 +
           (uint)*(byte *)((longlong)puVar12 + 7);
  lVar7 = 0;
  lVar14 = lVar7;
  uVar15 = uVar24;
  local_res8 = uVar24;
  if (uVar16 != 0) {
    do {
      uVar15 = (uint)uVar26;
      uVar19 = (ulonglong)(uVar15 + 1);
      if ((int)(uVar15 + 1) < 0) {
        uVar19 = uVar25 & 0xffffffff;
      }
      uVar24 = (uint)uVar27;
      if ((int)uVar24 < 0) {
LAB_140390ede:
        lVar7 = 4;
        puVar12 = &DAT_1404e4f20;
        puVar10 = &DAT_14045dd10;
        do {
          puVar13 = puVar10;
          puVar9 = puVar12;
          uVar5 = puVar13[1];
          *puVar9 = *puVar13;
          puVar9[1] = uVar5;
          uVar5 = puVar13[3];
          puVar9[2] = puVar13[2];
          puVar9[3] = uVar5;
          uVar5 = puVar13[5];
          puVar9[4] = puVar13[4];
          puVar9[5] = uVar5;
          uVar5 = puVar13[7];
          puVar9[6] = puVar13[6];
          puVar9[7] = uVar5;
          uVar5 = puVar13[9];
          puVar9[8] = puVar13[8];
          puVar9[9] = uVar5;
          uVar5 = puVar13[0xb];
          puVar9[10] = puVar13[10];
          puVar9[0xb] = uVar5;
          uVar5 = puVar13[0xd];
          puVar9[0xc] = puVar13[0xc];
          puVar9[0xd] = uVar5;
          uVar5 = puVar13[0xf];
          puVar9[0xe] = puVar13[0xe];
          puVar9[0xf] = uVar5;
          lVar7 = lVar7 + -1;
          puVar12 = puVar9 + 0x10;
          puVar10 = puVar13 + 0x10;
        } while (lVar7 != 0);
        uVar5 = puVar13[0x11];
        puVar9[0x10] = puVar13[0x10];
        puVar9[0x11] = uVar5;
        uVar5 = puVar13[0x13];
        puVar9[0x12] = puVar13[0x12];
        puVar9[0x13] = uVar5;
        uVar5 = puVar13[0x15];
        puVar9[0x14] = puVar13[0x14];
        puVar9[0x15] = uVar5;
        uVar5 = puVar13[0x17];
        puVar9[0x16] = puVar13[0x16];
        puVar9[0x17] = uVar5;
        uVar2 = *(undefined4 *)((longlong)puVar13 + 0xc4);
        uVar3 = *(undefined4 *)(puVar13 + 0x19);
        uVar4 = *(undefined4 *)((longlong)puVar13 + 0xcc);
        *(undefined4 *)(puVar9 + 0x18) = *(undefined4 *)(puVar13 + 0x18);
        *(undefined4 *)((longlong)puVar9 + 0xc4) = uVar2;
        *(undefined4 *)(puVar9 + 0x19) = uVar3;
        *(undefined4 *)((longlong)puVar9 + 0xcc) = uVar4;
        uVar5 = puVar13[0x1b];
        puVar9[0x1a] = puVar13[0x1a];
        puVar9[0x1b] = uVar5;
        puVar12 = &DAT_1404e4f20;
        lVar7 = lVar14;
        uVar19 = uVar26;
      }
      else {
        uVar18 = (uint)uVar19;
        uVar22 = uVar27;
        lVar7 = lVar14;
        if (uVar24 < uVar18) {
          do {
            uVar20 = (int)uVar22 + 8 + (int)(uVar22 >> 1);
            uVar22 = (ulonglong)uVar20;
          } while (uVar20 < uVar18);
          if ((((int)uVar24 < 0) || (uVar20 < uVar18)) || (0x6bca19 < uVar20)) {
LAB_140390ed3:
            uVar27 = (ulonglong)(-uVar24 - 1);
            local_a8 = CONCAT44(local_a8._4_4_,-uVar24 - 1);
            goto LAB_140390ede;
          }
          lVar7 = FUN_1403a22a0(&local_a8,uVar20);
          if ((uVar20 == 0) || (lVar7 != 0)) {
            uVar27 = (ulonglong)uVar20;
            local_a8 = CONCAT44(local_a8._4_4_,uVar20);
            local_a0 = lVar7;
          }
          else {
            lVar7 = lVar14;
            if (uVar24 < uVar20) goto LAB_140390ed3;
          }
          uVar25 = 0;
        }
        if (uVar15 < uVar18) {
          do {
            lVar14 = uVar26 * 0x260;
            *(undefined2 *)(lVar14 + 1 + lVar7) = 0;
            *(undefined1 *)(lVar14 + 3 + lVar7) = 0;
            *(undefined8 *)(lVar14 + 8 + lVar7) = 0;
            *(undefined2 *)(lVar14 + 0x31 + lVar7) = 0;
            *(undefined1 *)(lVar14 + 0x33 + lVar7) = 0;
            *(undefined8 *)(lVar14 + 0x38 + lVar7) = 0;
            *(undefined1 *)(lVar14 + lVar7) = 1;
            *(int *)(lVar14 + 4 + lVar7) = (int)uVar25;
            *(undefined8 *)(lVar14 + 0x10 + lVar7) = 0;
            *(ulonglong *)(lVar14 + 0x18 + lVar7) = uVar25;
            *(undefined8 *)(lVar14 + 0x20 + lVar7) = 0;
            *(ulonglong *)(lVar14 + 0x28 + lVar7) = uVar25;
            *(undefined1 *)(lVar14 + 0x30 + lVar7) = 1;
            *(int *)(lVar14 + 0x34 + lVar7) = (int)uVar25;
            *(undefined8 *)(lVar14 + 0x40 + lVar7) = 0;
            *(ulonglong *)(lVar14 + 0x48 + lVar7) = uVar25;
            *(undefined8 *)(lVar14 + 0x50 + lVar7) = 0;
            *(ulonglong *)(lVar14 + 0x58 + lVar7) = uVar25;
            puVar17 = (undefined2 *)(lVar14 + 0x60 + lVar7);
            puVar23 = puVar17;
            for (lVar14 = 0x100; lVar14 != 0; lVar14 = lVar14 + -1) {
              *puVar23 = (short)uVar25;
              puVar23 = puVar23 + 1;
            }
            puVar23 = puVar17 + 0x100;
            for (; puVar17 != puVar23; puVar17 = puVar17 + 1) {
              *puVar17 = 0xffff;
            }
            uVar15 = (int)uVar26 + 1;
            uVar26 = (ulonglong)uVar15;
          } while (uVar15 < uVar18);
        }
        else if (uVar18 < uVar15) {
          FUN_14040bfd0(&local_a8,uVar19);
          uVar27 = local_a8 & 0xffffffff;
          lVar7 = local_a0;
        }
        local_a8 = CONCAT44(uVar18,(undefined4)local_a8);
        puVar12 = (undefined8 *)((ulonglong)(uVar18 - 1) * 0x260 + lVar7);
      }
      uVar15 = (uint)uVar19;
      uVar24 = (uint)uVar27;
      if ((int)uVar24 < 0) break;
      FUN_14036fff0(local_res20,puVar12,puVar12 + 6,local_res10);
      for (puVar10 = puVar12 + 0xc; puVar10 != puVar12 + 0x4c;
          puVar10 = (undefined8 *)((longlong)puVar10 + 2)) {
        *(undefined2 *)puVar10 = 0xffff;
      }
      local_res20 = (undefined8 *)
                    ((longlong)local_res20 +
                    ((ulonglong)
                     CONCAT11(*(undefined1 *)local_res20,*(undefined1 *)((longlong)local_res20 + 1))
                     * 0x100 + (ulonglong)*(byte *)((longlong)local_res20 + 2)) * 0x100 +
                    (ulonglong)*(byte *)((longlong)local_res20 + 3));
      local_res8 = local_res8 + 1;
      uVar25 = 0;
      lVar14 = lVar7;
      uVar26 = uVar19;
    } while (local_res8 < uVar16);
  }
  iVar11 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar24;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  *(uint *)((longlong)param_1 + 0xc) = uVar15;
  local_a8 = CONCAT44(uVar2,iVar11);
  local_a0 = param_1[2];
  param_1[2] = lVar7;
  param_1[3] = uStack_98;
  uStack_98 = 0;
  if (1 < iVar11 + 1U) {
    FUN_14040bfd0(&local_a8,0);
    thunk_FUN_1402d9040(local_a0);
  }
  return param_1;
}

