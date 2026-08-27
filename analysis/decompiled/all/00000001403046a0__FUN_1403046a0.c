// Function: FUN_1403046a0
// Addr: 1403046a0
// Size: 1677 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1403046a0(longlong *param_1,longlong param_2,longlong param_3,uint param_4,
                       uint param_5)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auStack_d8 [32];
  uint local_b8 [2];
  undefined8 local_b0;
  uint local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_80;
  ulonglong uStack_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  lVar19 = param_1[2];
  lVar17 = *(longlong *)(param_3 + 0x80);
  lVar18 = *(longlong *)(lVar17 + 0x38);
  uVar15 = (int)param_5 >> 0x10 & 0xf;
  lVar5 = *(longlong *)(param_3 + 0x78);
  local_58 = *(longlong **)(lVar5 + 0xf0);
  local_98 = *local_58;
  if ((*(int *)(lVar18 + 0x10) == 0) || (*(uint *)(lVar18 + 8) != uVar15)) {
    *(uint *)(lVar18 + 8) = uVar15;
    uVar9 = *(undefined4 *)(lVar17 + 0x1c);
    uVar10 = *(undefined4 *)(lVar17 + 0x20);
    uVar11 = *(undefined4 *)(lVar17 + 0x24);
    *(undefined4 *)(lVar18 + 0xc) = *(undefined4 *)(lVar17 + 0x18);
    *(undefined4 *)(lVar18 + 0x10) = uVar9;
    *(undefined4 *)(lVar18 + 0x14) = uVar10;
    *(undefined4 *)(lVar18 + 0x18) = uVar11;
    uVar9 = *(undefined4 *)(lVar17 + 0x28);
    uVar10 = *(undefined4 *)(lVar17 + 0x2c);
    uVar11 = *(undefined4 *)(lVar17 + 0x30);
    *(undefined4 *)(lVar18 + 0x18) = *(undefined4 *)(lVar17 + 0x24);
    *(undefined4 *)(lVar18 + 0x1c) = uVar9;
    *(undefined4 *)(lVar18 + 0x20) = uVar10;
    *(undefined4 *)(lVar18 + 0x24) = uVar11;
  }
  uStack_88 = *(undefined8 *)(lVar18 + 0x10);
  *param_1 = param_3;
  lVar17 = *(longlong *)(param_3 + 0xb8);
  local_80 = 0;
  uStack_78 = (ulonglong)uVar15;
  param_1[1] = lVar17;
  local_b0 = lVar19;
  local_a8 = param_4;
  local_a0 = param_3;
  local_90 = param_3;
  local_60 = param_2;
  if (lVar17 == 0) {
    uVar13 = FUN_1402ff090(param_3,param_1 + 1,param_2);
    if ((int)uVar13 != 0) {
      return uVar13;
    }
    *(longlong *)(param_3 + 0xb8) = param_1[1];
    *(code **)(param_3 + 0xc0) = FUN_1402fefb0;
  }
  plVar6 = (longlong *)param_1[1];
  if (param_4 < *(uint *)(plVar6 + 1)) {
    local_68 = (ulonglong)param_4 * 2;
    uVar13 = (ulonglong)(*(ushort *)(plVar6[2] + local_68) & 0x1fff);
    puVar8 = (&PTR_DAT_140439e60)[uVar13];
    puVar7 = (&PTR_DAT_140438ac0)[*(int *)(puVar8 + 4)];
    plVar14 = (longlong *)plVar6[uVar13 + 9];
    param_3 = local_a0;
    while (local_b8[0] = 0, lVar19 = local_b0, local_a0 = param_3, plVar14 == (longlong *)0x0) {
      local_b8[0] = 0;
      local_70 = *(undefined8 *)(*plVar6 + 0x98);
      plVar14 = (longlong *)FUN_1402f7e90(local_70,*(undefined4 *)(puVar7 + 8),local_b8);
      lVar19 = local_b0;
      param_3 = local_a0;
      if (local_b8[0] != 0) break;
      *plVar14 = (longlong)puVar8;
      plVar14[6] = (longlong)plVar6;
      if ((*(code **)(puVar7 + 0x10) == (code *)0x0) ||
         (local_b8[0] = (**(code **)(puVar7 + 0x10))(plVar14,*plVar6), local_b8[0] == 0)) {
        plVar6[uVar13 + 9] = (longlong)plVar14;
        lVar19 = local_b0;
        param_3 = local_a0;
        break;
      }
      if (*(code **)(puVar7 + 0x20) != (code *)0x0) {
        (**(code **)(puVar7 + 0x20))(plVar14);
      }
      FUN_1402f7f90(local_70,plVar14);
      plVar14 = (longlong *)0x0;
      lVar19 = local_b0;
      param_3 = local_a0;
      if (local_b8[0] != 0xffffffff) break;
      uVar15 = *(ushort *)(plVar6[2] + local_68) & 0x1fff;
      uVar13 = (ulonglong)uVar15;
      puVar8 = (&PTR_DAT_140439e60)[uVar15];
      puVar7 = (&PTR_DAT_140438ac0)[*(int *)(puVar8 + 4)];
      plVar14 = (longlong *)plVar6[(ulonglong)uVar15 + 9];
    }
  }
  else {
    plVar14 = (longlong *)0x0;
    local_b8[0] = 6;
  }
  if (local_b8[0] != 0) {
    return (ulonglong)local_b8[0];
  }
  puVar8 = (&PTR_DAT_140438ac0)[*(int *)(*plVar14 + 4)];
  param_1[3] = (longlong)plVar14;
  if (*(code **)(puVar8 + 0x18) == (code *)0x0) {
    *(undefined4 *)(plVar14 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)plVar14 + 0xc) = local_90._4_4_;
    *(undefined4 *)(plVar14 + 2) = (undefined4)uStack_88;
    *(undefined4 *)((longlong)plVar14 + 0x14) = uStack_88._4_4_;
    plVar14[3] = local_80;
    plVar14[4] = uStack_78;
  }
  else {
    (**(code **)(puVar8 + 0x18))(plVar14,&local_90);
  }
  if ((*(code **)(puVar8 + 0x30) != (code *)0x0) &&
     (uVar13 = (**(code **)(puVar8 + 0x30))(lVar19,plVar14), (int)uVar13 != 0)) {
    return uVar13;
  }
  uVar13 = FUN_1402f12d0(param_3,local_a8,param_5 & 0xfffffffb | 0x2801);
  uVar23 = uVar13 & 0xffffffff;
  if ((int)uVar13 != 0) {
    return uVar13;
  }
  if (((int)uStack_78 == 1) &&
     ((cVar2 = *(char *)(*(longlong *)(param_3 + 0xd0) + 0x58), cVar2 == '\0' ||
      ((cVar2 < '\0' && (*(char *)(local_60 + 0x20) == (char)uVar23)))))) {
    FUN_140304490(param_1,param_3,plVar14);
  }
  cVar2 = *(char *)((longlong)local_58 + 0xc);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 != '\0') {
    uVar9 = *(undefined4 *)((longlong)local_58 + 0x14);
    plVar6 = (longlong *)local_58[2];
    iStack_50 = (int)local_58[3];
    iStack_4c = *(int *)((longlong)local_58 + 0x1c);
    *(int *)((longlong)param_1 + 0x24) = (int)local_58[2];
    *(undefined4 *)(param_1 + 5) = uVar9;
    *(int *)((longlong)param_1 + 0x2c) = iStack_50;
    *(int *)(param_1 + 6) = iStack_4c;
    *(longlong *)((longlong)param_1 + 0x34) = local_58[4];
    local_58 = plVar6;
    iVar12 = FUN_1402f1d70(&local_58);
    if (iVar12 == 0) {
      FUN_1402f6030((longlong)param_1 + 0x34,&local_58);
    }
  }
  if (*(int *)(lVar5 + 0x60) == 0x6f75746c) {
    if ((char)param_1[4] != '\0') {
      FUN_1402f3790(lVar5 + 0x98,*(undefined4 *)((longlong)param_1 + 0x34),(int)param_1[7]);
    }
    uVar15 = *(uint *)(lVar19 + 0xc);
    puVar1 = (uint *)((longlong)param_1 + 0x3c);
    *puVar1 = uVar15;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar19 + 0x14);
    lVar17 = (longlong)*(int *)(lVar5 + 0x40) * (longlong)*(int *)(lVar19 + 8);
    *(int *)((longlong)param_1 + 0x44) =
         (int)((ulonglong)(lVar17 + 0x8000 + (lVar17 >> 0x3f)) >> 0x10) + *(int *)(lVar19 + 0xc);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar19 + 0x14);
    if (*(short *)(lVar5 + 0x9a) != 0) {
      if (*(code **)(puVar8 + 0x38) != (code *)0x0) {
        uVar13 = (**(code **)(puVar8 + 0x38))(local_a8,lVar19,local_98 + 0x18,plVar14);
        uVar23 = uVar13 & 0xffffffff;
        if ((int)uVar13 != 0) {
          return uVar13;
        }
        uVar15 = *puVar1;
      }
      if ((((int)uStack_78 == 1) || (*(uint *)(lVar19 + 0x58) < 2)) ||
         ((*(byte *)(lVar19 + 0x1178) & 4) != 0)) {
        iVar12 = *(int *)((longlong)param_1 + 0x44);
        uVar16 = uVar15 + 0x20 & 0xffffffc0;
        *puVar1 = uVar16;
        *(uint *)((longlong)param_1 + 0x44) = iVar12 + 0x20U & 0xffffffc0;
        *(uint *)(lVar5 + 0xdc) = uVar16 - uVar15;
        iVar12 = *(int *)((longlong)param_1 + 0x44) - iVar12;
      }
      else {
        lVar17 = *(longlong *)(lVar19 + 0x60);
        lVar19 = lVar17 + (ulonglong)*(uint *)(lVar19 + 0x58) * 0x48;
        iVar22 = *(int *)((longlong)param_1 + 0x44) - *(int *)(lVar19 + -0x44);
        iVar3 = *(int *)(lVar17 + 8);
        iVar4 = *(int *)(lVar17 + 4);
        iVar12 = iVar3 - iVar4;
        iVar20 = *(int *)(lVar19 + -0x40) + iVar22;
        iVar21 = iVar12 + -8;
        if (0x17 < iVar4) {
          iVar21 = iVar12;
        }
        iVar12 = iVar20 + 8;
        if (0x17 < iVar22) {
          iVar12 = iVar20;
        }
        uVar16 = iVar21 + 0x20U & 0xffffffc0;
        *puVar1 = uVar16;
        uVar15 = iVar12 + 0x20U & 0xffffffc0;
        *(uint *)((longlong)param_1 + 0x44) = uVar15;
        if ((iVar3 <= (int)uVar16) && (0 < iVar4)) {
          uVar16 = uVar16 - 0x40;
          *puVar1 = uVar16;
        }
        if (((int)uVar15 <= *(int *)(lVar19 + -0x40)) && (0 < iVar22)) {
          *(uint *)((longlong)param_1 + 0x44) = uVar15 + 0x40;
        }
        *(uint *)(lVar5 + 0xdc) = uVar16 - iVar21;
        iVar12 = *(int *)((longlong)param_1 + 0x44) - iVar12;
      }
      *(int *)(lVar5 + 0xe0) = iVar12;
    }
  }
  else {
    uVar23 = 7;
  }
  lVar19 = local_98;
  lVar17 = (longlong)(*(int *)(lVar5 + 0x44) - *(int *)(lVar5 + 0x38)) * (longlong)(int)plVar14[2];
  lVar18 = (longlong)(*(int *)(lVar5 + 0x48) - *(int *)(lVar5 + 0x3c)) *
           (longlong)*(int *)((longlong)plVar14 + 0x14);
  local_b0 = CONCAT44((int)((ulonglong)(lVar18 + (lVar18 >> 0x3f) + 0x8000) >> 0x10),
                      (int)((ulonglong)(lVar17 + (lVar17 >> 0x3f) + 0x8000) >> 0x10));
  if ((char)param_1[4] != '\0') {
    FUN_1402f36a0(local_98 + 0x18,(longlong)param_1 + 0x24);
    FUN_1402f6030(&local_b0,(longlong)param_1 + 0x24);
  }
  iVar12 = *(int *)((longlong)param_1 + 0x3c);
  if (iVar12 != 0) {
    FUN_1402f3790(lVar19 + 0x18,-iVar12,0);
  }
  FUN_1402f3050(lVar19 + 0x18,&local_58);
  local_58._0_4_ = (uint)local_58 & 0xffffffc0;
  *(uint *)(lVar5 + 0x38) = (uint)local_58;
  *(uint *)(lVar5 + 0x30) = (iStack_50 + 0x3fU & 0xffffffc0) - (uint)local_58;
  uVar15 = iStack_4c + 0x3fU & 0xffffffc0;
  *(uint *)(lVar5 + 0x3c) = uVar15;
  *(uint *)(lVar5 + 0x44) = (int)local_b0 + (uint)local_58 & 0xffffffc0;
  *(uint *)(lVar5 + 0x34) = uVar15 - (local_58._4_4_ & 0xffffffc0);
  *(uint *)(lVar5 + 0x48) = local_b0._4_4_ + uVar15 & 0xffffffc0;
  if ((int)uStack_78 == 1) {
LAB_140304cab:
    iVar12 = 0;
    if (*(int *)(lVar5 + 0x40) != 0) {
      iVar12 = *(int *)((longlong)param_1 + 0x44) - *(int *)((longlong)param_1 + 0x3c);
      *(int *)(lVar5 + 0x40) = iVar12;
    }
  }
  else {
    if ((*(byte *)(*(longlong *)(lVar5 + 8) + 8) & 4) == 0) {
      if (((*(uint *)(param_1[1] + 8) <= local_a8) ||
          (-1 < *(short *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)local_a8 * 2))) ||
         ((char)plVar14[5] == '\0')) goto LAB_140304cab;
    }
    lVar19 = (longlong)(int)plVar14[2] * (longlong)*(int *)(lVar5 + 0x40);
    iVar12 = (int)((ulonglong)((lVar19 >> 0x3f) + 0x8000 + lVar19) >> 0x10);
    *(int *)(lVar5 + 0x40) = iVar12;
    *(undefined8 *)(lVar5 + 0xdc) = 0;
  }
  lVar19 = (longlong)*(int *)((longlong)plVar14 + 0x14) * (longlong)*(int *)(lVar5 + 0x4c);
  *(undefined4 *)(lVar5 + 0x60) = 0x6f75746c;
  *(uint *)(lVar5 + 0x40) = iVar12 + 0x20U & 0xffffffc0;
  *(uint *)(lVar5 + 0x4c) =
       (int)((ulonglong)(lVar19 + 0x8000 + (lVar19 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
  return uVar23;
}

