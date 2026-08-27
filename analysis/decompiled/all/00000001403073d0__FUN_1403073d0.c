// Function: FUN_1403073d0
// Addr: 1403073d0
// Size: 1633 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1403073d0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8;
  byte local_c4;
  uint local_c0;
  uint local_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  int local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ushort local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  ushort local_4e;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_f8;
  local_b8 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  puVar9 = *(uint **)(param_1 + 0x408);
  uVar5 = *(ushort *)(param_1 + 0xe);
  iVar6 = 0;
  local_c8 = 0;
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  uVar18 = (uint)uVar5;
  local_bc = uVar18;
  local_78 = param_2;
  if (puVar9 == (uint *)0x0) {
    local_c8 = (**(code **)(param_1 + 0x2a0))(param_1,0x66766172,uVar2,local_80);
    if (local_c8 != 0) {
      return local_c8;
    }
    iVar6 = FUN_1402f54a0(uVar2);
    local_c8 = FUN_1402f5610(uVar2,&DAT_14043b3c0,&local_70);
    if (local_c8 != 0) {
      return local_c8;
    }
    if (uVar18 < local_68 >> 0x10) {
      return 8;
    }
    local_c4 = (uint)local_64 == (uint)local_70._6_2_ * 4 + 6;
    puVar8 = (uint *)FUN_1402f7e90(local_b8,0x98,&local_c8);
    *(uint **)(param_1 + 0x408) = puVar8;
    if (local_c8 != 0) {
      return local_c8;
    }
    uVar18 = (uint)local_70._6_2_;
    *puVar8 = (uint)local_70._6_2_;
  }
  else {
    uVar18 = *puVar9;
    local_c4 = 0;
  }
  local_b0 = (ulonglong)(uVar18 * uVar5);
  local_88 = (ulonglong)uVar5 * 0x10;
  local_90 = (ulonglong)uVar18 * 0x20;
  local_98 = (ulonglong)uVar18 * 2 + 7 & 0xfffffffffffffff8;
  local_a0 = local_b0 * 4 + 7 & 0xfffffffffffffff8;
  if (puVar9 != (uint *)0x0) goto LAB_1403078f3;
  *(ulonglong *)(*(longlong *)(param_1 + 0x408) + 0x20) =
       uVar18 * 5 + local_a0 + local_88 + local_90 + local_98 + 0x20;
  puVar9 = (uint *)FUN_1402f7e90(local_b8,*(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20),
                                 &local_c8);
  if (local_c8 != 0) {
    return local_c8;
  }
  puVar8 = puVar9 + 8;
  *(uint **)(*(longlong *)(param_1 + 0x408) + 0x18) = puVar9;
  *puVar9 = uVar18;
  *(ulonglong *)(puVar9 + 4) = local_98 + (longlong)puVar8;
  puVar9[1] = 0xffffffff;
  puVar9[2] = local_bc;
  *(ulonglong *)(puVar9 + 6) = local_90 + local_98 + (longlong)puVar8;
  lVar19 = local_88 + local_90 + local_98 + (longlong)puVar8;
  if (local_bc != 0) {
    uVar12 = 0;
    do {
      uVar14 = (int)uVar12 + 1;
      *(longlong *)(*(longlong *)(puVar9 + 6) + uVar12 * 0x10) = lVar19;
      lVar19 = lVar19 + (ulonglong)uVar18 * 4;
      uVar12 = (ulonglong)uVar14;
    } while (uVar14 < local_bc);
  }
  lVar19 = *(longlong *)(puVar9 + 6) + local_a0 + local_88;
  uVar12 = 0;
  if (uVar18 != 0) {
    do {
      uVar14 = (int)uVar12 + 1;
      *(longlong *)(uVar12 * 0x20 + *(longlong *)(puVar9 + 4)) = lVar19;
      lVar19 = lVar19 + 5;
      uVar12 = (ulonglong)uVar14;
    } while (uVar14 < uVar18);
  }
  iVar6 = FUN_1402f5c50(uVar2,(uint)local_70._4_2_ + iVar6);
  if (iVar6 != 0) {
    return iVar6;
  }
  plVar16 = *(longlong **)(puVar9 + 4);
  uVar14 = 0;
  if (uVar18 != 0) {
    do {
      local_c8 = 0;
      iVar6 = FUN_1402f5610(uVar2,&DAT_14043b3e8,&local_60);
      if (iVar6 != 0) {
        return iVar6;
      }
      *(undefined4 *)(plVar16 + 1) = local_5c;
      *(undefined4 *)((longlong)plVar16 + 0xc) = local_58;
      *(undefined4 *)(plVar16 + 2) = local_54;
      *(uint *)(plVar16 + 3) = (uint)local_4e;
      *(undefined4 *)((longlong)plVar16 + 0x14) = local_60;
      *(char *)*plVar16 = (char)((uint)local_60 >> 0x18);
      *(undefined1 *)(*plVar16 + 1) = *(undefined1 *)((longlong)plVar16 + 0x16);
      *(undefined1 *)(*plVar16 + 2) = *(undefined1 *)((longlong)plVar16 + 0x15);
      *(undefined1 *)(*plVar16 + 3) = *(undefined1 *)((longlong)plVar16 + 0x14);
      *(undefined1 *)(*plVar16 + 4) = 0;
      *(undefined2 *)puVar8 = local_50;
      iVar6 = *(int *)((longlong)plVar16 + 0xc);
      if ((iVar6 < (int)plVar16[1]) || ((int)plVar16[2] < iVar6)) {
        *(int *)(plVar16 + 1) = iVar6;
        *(int *)(plVar16 + 2) = iVar6;
      }
      plVar16 = plVar16 + 4;
      puVar8 = (uint *)((longlong)puVar8 + 2);
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar18);
  }
  local_c8 = 0;
  local_d0 = &local_c8;
  lVar19 = *(longlong *)(param_1 + 0x408);
  local_d8 = 0;
  uVar10 = FUN_1402f80b0(local_b8,4,0,local_b0 & 0xffffffff);
  *(undefined8 *)(lVar19 + 0x28) = uVar10;
  if (local_c8 != 0) {
    return local_c8;
  }
  uVar14 = (uint)local_68._2_2_;
  if ((local_68._2_2_ != 0) && (*(char *)(*(longlong *)(param_1 + 0x408) + 0x30) == '\0')) {
    uVar7 = FUN_1402f54a0(uVar2);
    FUN_140310830(param_1);
    iVar6 = FUN_1402f5c50(uVar2,uVar7);
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar14 = local_68 >> 0x10;
    local_c8 = 0;
  }
  puVar20 = *(undefined8 **)(puVar9 + 6);
  local_c0 = 0;
  local_b0 = *(ulonglong *)(*(longlong *)(param_1 + 0x408) + 0x28);
  if ((short)uVar14 != 0) {
    local_a8 = ((uint)local_c4 + uVar18 * 2 + 2) * 2;
    do {
      local_c8 = FUN_1402f4fe0(uVar2,local_a8);
      if (local_c8 != 0) {
        return local_c8;
      }
      uVar5 = FUN_1402f52a0(uVar2);
      *(uint *)(puVar20 + 1) = (uint)uVar5;
      FUN_1402f52a0(uVar2);
      puVar17 = (undefined4 *)*puVar20;
      uVar14 = 0;
      if (uVar18 != 0) {
        do {
          uVar7 = FUN_1402f5200(uVar2);
          uVar14 = uVar14 + 1;
          *puVar17 = uVar7;
          puVar17 = puVar17 + 1;
        } while (uVar14 < uVar18);
      }
      if (local_c4 == 0) {
        uVar14 = 0xffff;
      }
      else {
        uVar5 = FUN_1402f52a0(uVar2);
        uVar14 = (uint)uVar5;
      }
      uVar12 = local_b0;
      *(uint *)((longlong)puVar20 + 0xc) = uVar14;
      FUN_140311840(param_1,uVar18,*puVar20,local_b0);
      local_b0 = uVar12 + (ulonglong)uVar18 * 4;
      FUN_1402f5100(uVar2);
      puVar20 = puVar20 + 2;
      uVar14 = (uint)local_68._2_2_;
      local_c0 = local_c0 + 1;
    } while (local_c0 < local_68._2_2_);
  }
  uVar3 = local_bc;
  if (local_bc != uVar14) {
    lVar19 = *(longlong *)(param_1 + 0x2d0);
    uVar7 = 0x11;
    cVar4 = (**(code **)(lVar19 + 0x160))(param_1,0x11,&local_c0,&local_bc);
    if (cVar4 == '\0') {
      uVar7 = 2;
      cVar4 = (**(code **)(lVar19 + 0x160))(param_1,2,&local_c0,&local_bc);
      if (cVar4 == '\0') goto LAB_1403078e4;
    }
    cVar4 = (**(code **)(lVar19 + 0x160))(param_1,6,&local_c0,&local_bc);
    if (cVar4 != '\0') {
      uVar12 = (ulonglong)local_68._2_2_;
      *(uint *)(param_1 + 0x424) = uVar3;
      lVar19 = *(longlong *)(puVar9 + 6);
      puVar17 = *(undefined4 **)(lVar19 + uVar12 * 0x10);
      *(undefined4 *)(lVar19 + 8 + uVar12 * 0x10) = uVar7;
      *(undefined4 *)(lVar19 + 0xc + uVar12 * 0x10) = 6;
      uVar14 = 0;
      lVar19 = *(longlong *)(puVar9 + 4);
      if (uVar18 != 0) {
        do {
          puVar1 = (undefined4 *)(lVar19 + 0xc);
          lVar19 = lVar19 + 0x20;
          uVar14 = uVar14 + 1;
          *puVar17 = *puVar1;
          puVar17 = puVar17 + 1;
        } while (uVar14 < uVar18);
      }
    }
  }
LAB_1403078e4:
  FUN_1403110d0(param_1);
LAB_1403078f3:
  plVar16 = local_78;
  uVar12 = local_a0;
  if ((local_78 != (longlong *)0x0) &&
     (lVar19 = FUN_1402f7f20(local_b8,*(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x18),
                             *(undefined4 *)(*(longlong *)(param_1 + 0x408) + 0x20),&local_c8),
     local_c8 == 0)) {
    lVar15 = local_98 + 0x20 + lVar19;
    *(longlong *)(lVar19 + 0x10) = lVar15;
    *(longlong *)(lVar19 + 0x18) = local_90 + lVar15;
    lVar15 = local_90 + local_88 + lVar15;
    uVar14 = 0;
    if (*(int *)(lVar19 + 8) != 0) {
      do {
        uVar13 = (ulonglong)uVar14;
        uVar14 = uVar14 + 1;
        *(longlong *)(*(longlong *)(lVar19 + 0x18) + uVar13 * 0x10) = lVar15;
        lVar15 = lVar15 + (ulonglong)uVar18 * 4;
      } while (uVar14 < *(uint *)(lVar19 + 8));
    }
    uVar14 = 0;
    plVar11 = *(longlong **)(lVar19 + 0x10);
    local_88 = *(longlong *)(lVar19 + 0x18) + uVar12 + local_88;
    if (uVar18 != 0) {
      do {
        iVar6 = *(int *)((longlong)plVar11 + 0x14);
        *plVar11 = local_88;
        if (iVar6 == 0x77676874) {
          *plVar11 = (longlong)"Weight";
        }
        else if (iVar6 == 0x77647468) {
          *plVar11 = (longlong)"Width";
        }
        else if (iVar6 == 0x6f70737a) {
          *plVar11 = (longlong)"OpticalSize";
        }
        else if (iVar6 == 0x736c6e74) {
          *plVar11 = (longlong)"Slant";
        }
        else if (iVar6 == 0x6974616c) {
          *plVar11 = (longlong)"Italic";
        }
        local_88 = local_88 + 5;
        plVar11 = plVar11 + 4;
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar18);
    }
    *plVar16 = lVar19;
  }
  return local_c8;
}

