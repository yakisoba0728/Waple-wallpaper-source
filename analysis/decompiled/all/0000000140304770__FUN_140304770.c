// Function: FUN_140304770
// Addr: 140304770
// Size: 1492 bytes


void FUN_140304770(longlong *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

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
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_d8 [32];
  int local_b8 [2];
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
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_d8;
  lVar18 = param_1[2];
  lVar16 = *(longlong *)(param_3 + 0x80);
  lVar17 = *(longlong *)(lVar16 + 0x38);
  uVar14 = (int)param_5 >> 0x10 & 0xf;
  lVar5 = *(longlong *)(param_3 + 0x78);
  local_58 = *(longlong **)(lVar5 + 0xf0);
  local_98 = *local_58;
  if ((*(int *)(lVar17 + 0x10) == 0) || (*(uint *)(lVar17 + 8) != uVar14)) {
    *(uint *)(lVar17 + 8) = uVar14;
    uVar9 = *(undefined4 *)(lVar16 + 0x1c);
    uVar10 = *(undefined4 *)(lVar16 + 0x20);
    uVar11 = *(undefined4 *)(lVar16 + 0x24);
    *(undefined4 *)(lVar17 + 0xc) = *(undefined4 *)(lVar16 + 0x18);
    *(undefined4 *)(lVar17 + 0x10) = uVar9;
    *(undefined4 *)(lVar17 + 0x14) = uVar10;
    *(undefined4 *)(lVar17 + 0x18) = uVar11;
    uVar9 = *(undefined4 *)(lVar16 + 0x28);
    uVar10 = *(undefined4 *)(lVar16 + 0x2c);
    uVar11 = *(undefined4 *)(lVar16 + 0x30);
    *(undefined4 *)(lVar17 + 0x18) = *(undefined4 *)(lVar16 + 0x24);
    *(undefined4 *)(lVar17 + 0x1c) = uVar9;
    *(undefined4 *)(lVar17 + 0x20) = uVar10;
    *(undefined4 *)(lVar17 + 0x24) = uVar11;
  }
  uStack_88 = *(undefined8 *)(lVar17 + 0x10);
  *param_1 = param_3;
  lVar16 = *(longlong *)(param_3 + 0xb8);
  local_80 = 0;
  uStack_78 = (ulonglong)uVar14;
  param_1[1] = lVar16;
  local_b0 = lVar18;
  local_a8 = param_4;
  local_a0 = param_3;
  local_90 = param_3;
  local_60 = param_2;
  if (lVar16 == 0) {
    iVar12 = func_0x0001402ff160(param_3,param_1 + 1,param_2);
    if (iVar12 != 0) goto LAB_140304dd6;
    *(longlong *)(param_3 + 0xb8) = param_1[1];
    *(undefined8 *)(param_3 + 0xc0) = 0x1402ff080;
  }
  plVar6 = (longlong *)param_1[1];
  local_b8[0] = 0;
  if (param_4 < *(uint *)(plVar6 + 1)) {
    local_68 = (ulonglong)param_4 * 2;
    uVar22 = (ulonglong)(*(ushort *)(plVar6[2] + local_68) & 0x1fff);
    puVar8 = (&PTR_PTR_140439f30)[uVar22];
    plVar13 = (longlong *)plVar6[uVar22 + 9];
    puVar7 = (&PTR_PTR_140438b90)[*(int *)(puVar8 + 4)];
    lVar18 = local_b0;
    param_3 = local_a0;
    if (plVar13 == (longlong *)0x0) {
      local_70 = *(undefined8 *)(*plVar6 + 0x98);
      plVar13 = (longlong *)func_0x0001402f7f60(local_70,*(undefined4 *)(puVar7 + 8),local_b8);
      lVar18 = local_b0;
      param_3 = local_a0;
      if (local_b8[0] == 0) {
        *plVar13 = (longlong)puVar8;
        plVar13[6] = (longlong)plVar6;
        if ((*(code **)(puVar7 + 0x10) != (code *)0x0) &&
           (local_b8[0] = (**(code **)(puVar7 + 0x10))(plVar13,*plVar6), local_b8[0] != 0)) {
          if (*(code **)(puVar7 + 0x20) != (code *)0x0) {
            (**(code **)(puVar7 + 0x20))(plVar13);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1402f8060(local_70,plVar13);
        }
        plVar6[uVar22 + 9] = (longlong)plVar13;
        lVar18 = local_b0;
        param_3 = local_a0;
      }
    }
  }
  else {
    plVar13 = (longlong *)0x0;
    local_b8[0] = 6;
  }
  if (local_b8[0] != 0) goto LAB_140304dd6;
  puVar8 = (&PTR_PTR_140438b90)[*(int *)(*plVar13 + 4)];
  param_1[3] = (longlong)plVar13;
  if (*(code **)(puVar8 + 0x18) == (code *)0x0) {
    *(undefined4 *)(plVar13 + 1) = (undefined4)local_90;
    *(undefined4 *)((longlong)plVar13 + 0xc) = local_90._4_4_;
    *(undefined4 *)(plVar13 + 2) = (undefined4)uStack_88;
    *(undefined4 *)((longlong)plVar13 + 0x14) = uStack_88._4_4_;
    plVar13[3] = local_80;
    plVar13[4] = uStack_78;
  }
  else {
    (**(code **)(puVar8 + 0x18))(plVar13,&local_90);
  }
  if (((*(code **)(puVar8 + 0x30) != (code *)0x0) &&
      (iVar12 = (**(code **)(puVar8 + 0x30))(lVar18,plVar13), iVar12 != 0)) ||
     (iVar12 = FUN_1402f13a0(param_3,local_a8,param_5 & 0xfffffffb | 0x2801), iVar12 != 0))
  goto LAB_140304dd6;
  if (((int)uStack_78 == 1) &&
     ((cVar2 = *(char *)(*(longlong *)(param_3 + 0xd0) + 0x58), cVar2 == '\0' ||
      ((cVar2 < '\0' && (*(char *)(local_60 + 0x20) == '\0')))))) {
    FUN_140304560(param_1,param_3,plVar13);
  }
  cVar2 = *(char *)((longlong)local_58 + 0xc);
  *(char *)(param_1 + 4) = cVar2;
  if (cVar2 != '\0') {
    uVar9 = *(undefined4 *)((longlong)local_58 + 0x14);
    plVar6 = (longlong *)local_58[2];
    uStack_50 = *(uint *)(local_58 + 3);
    uStack_4c = *(uint *)((longlong)local_58 + 0x1c);
    *(int *)((longlong)param_1 + 0x24) = (int)local_58[2];
    *(undefined4 *)(param_1 + 5) = uVar9;
    *(uint *)((longlong)param_1 + 0x2c) = uStack_50;
    *(uint *)(param_1 + 6) = uStack_4c;
    *(longlong *)((longlong)param_1 + 0x34) = local_58[4];
    local_58 = plVar6;
    iVar12 = FUN_1402f1e40(&local_58);
    if (iVar12 == 0) {
      FUN_1402f6100((longlong)param_1 + 0x34,&local_58);
    }
  }
  if (*(int *)(lVar5 + 0x60) == 0x6f75746c) {
    if ((char)param_1[4] != '\0') {
      FUN_1402f3860(lVar5 + 0x98,*(undefined4 *)((longlong)param_1 + 0x34),(int)param_1[7]);
    }
    uVar14 = *(uint *)(lVar18 + 0xc);
    puVar1 = (uint *)((longlong)param_1 + 0x3c);
    *puVar1 = uVar14;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar18 + 0x14);
    lVar16 = (longlong)*(int *)(lVar5 + 0x40) * (longlong)*(int *)(lVar18 + 8);
    *(int *)((longlong)param_1 + 0x44) =
         (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10) + *(int *)(lVar18 + 0xc);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(lVar18 + 0x14);
    if (*(short *)(lVar5 + 0x9a) != 0) {
      if (*(code **)(puVar8 + 0x38) != (code *)0x0) {
        iVar12 = (**(code **)(puVar8 + 0x38))(local_a8,lVar18,local_98 + 0x18,plVar13);
        if (iVar12 != 0) goto LAB_140304dd6;
        uVar14 = *puVar1;
      }
      if ((((int)uStack_78 == 1) || (*(uint *)(lVar18 + 0x58) < 2)) ||
         ((*(byte *)(lVar18 + 0x1178) & 4) != 0)) {
        iVar12 = *(int *)((longlong)param_1 + 0x44);
        uVar15 = uVar14 + 0x20 & 0xffffffc0;
        *puVar1 = uVar15;
        *(uint *)((longlong)param_1 + 0x44) = iVar12 + 0x20U & 0xffffffc0;
        *(uint *)(lVar5 + 0xdc) = uVar15 - uVar14;
        iVar12 = *(int *)((longlong)param_1 + 0x44) - iVar12;
      }
      else {
        lVar16 = *(longlong *)(lVar18 + 0x60);
        lVar18 = lVar16 + (ulonglong)*(uint *)(lVar18 + 0x58) * 0x48;
        iVar21 = *(int *)((longlong)param_1 + 0x44) - *(int *)(lVar18 + -0x44);
        iVar3 = *(int *)(lVar16 + 8);
        iVar4 = *(int *)(lVar16 + 4);
        iVar12 = iVar3 - iVar4;
        iVar19 = *(int *)(lVar18 + -0x40) + iVar21;
        iVar20 = iVar12 + -8;
        if (0x17 < iVar4) {
          iVar20 = iVar12;
        }
        iVar12 = iVar19 + 8;
        if (0x17 < iVar21) {
          iVar12 = iVar19;
        }
        uVar15 = iVar20 + 0x20U & 0xffffffc0;
        *puVar1 = uVar15;
        uVar14 = iVar12 + 0x20U & 0xffffffc0;
        *(uint *)((longlong)param_1 + 0x44) = uVar14;
        if ((iVar3 <= (int)uVar15) && (0 < iVar4)) {
          uVar15 = uVar15 - 0x40;
          *puVar1 = uVar15;
        }
        if (((int)uVar14 <= *(int *)(lVar18 + -0x40)) && (0 < iVar21)) {
          *(uint *)((longlong)param_1 + 0x44) = uVar14 + 0x40;
        }
        *(uint *)(lVar5 + 0xdc) = uVar15 - iVar20;
        iVar12 = *(int *)((longlong)param_1 + 0x44) - iVar12;
      }
      *(int *)(lVar5 + 0xe0) = iVar12;
    }
  }
  lVar18 = local_98;
  lVar16 = (longlong)(*(int *)(lVar5 + 0x44) - *(int *)(lVar5 + 0x38)) * (longlong)(int)plVar13[2];
  lVar17 = (longlong)(*(int *)(lVar5 + 0x48) - *(int *)(lVar5 + 0x3c)) *
           (longlong)*(int *)((longlong)plVar13 + 0x14);
  local_b0 = CONCAT44((int)((ulonglong)(lVar17 + (lVar17 >> 0x3f) + 0x8000) >> 0x10),
                      (int)((ulonglong)(lVar16 + (lVar16 >> 0x3f) + 0x8000) >> 0x10));
  if ((char)param_1[4] != '\0') {
    FUN_1402f3770(local_98 + 0x18,(longlong)param_1 + 0x24);
    FUN_1402f6100(&local_b0,(longlong)param_1 + 0x24);
  }
  iVar12 = *(int *)((longlong)param_1 + 0x3c);
  if (iVar12 != 0) {
    FUN_1402f3860(lVar18 + 0x18,-iVar12,0);
  }
  func_0x0001402f3120(lVar18 + 0x18,&local_58);
  uStack_50 = uStack_50 + 0x3f & 0xffffffc0;
  uVar14 = (uint)local_58 & 0xffffffc0;
  *(uint *)(lVar5 + 0x38) = uVar14;
  *(uint *)(lVar5 + 0x30) = uStack_50 - uVar14;
  uStack_4c = uStack_4c + 0x3f & 0xffffffc0;
  *(uint *)(lVar5 + 0x3c) = uStack_4c;
  *(uint *)(lVar5 + 0x44) = (int)local_b0 + uVar14 & 0xffffffc0;
  *(uint *)(lVar5 + 0x34) = uStack_4c - (local_58._4_4_ & 0xffffffc0);
  local_58 = (longlong *)((ulonglong)local_58 & 0xffffffc0ffffffc0);
  *(uint *)(lVar5 + 0x48) = local_b0._4_4_ + uStack_4c & 0xffffffc0;
  if ((int)uStack_78 == 1) {
LAB_140304d7b:
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
         ((char)plVar13[5] == '\0')) goto LAB_140304d7b;
    }
    lVar18 = (longlong)(int)plVar13[2] * (longlong)*(int *)(lVar5 + 0x40);
    iVar12 = (int)((ulonglong)((lVar18 >> 0x3f) + 0x8000 + lVar18) >> 0x10);
    *(int *)(lVar5 + 0x40) = iVar12;
    *(undefined8 *)(lVar5 + 0xdc) = 0;
  }
  lVar18 = (longlong)*(int *)((longlong)plVar13 + 0x14) * (longlong)*(int *)(lVar5 + 0x4c);
  *(undefined4 *)(lVar5 + 0x60) = 0x6f75746c;
  *(uint *)(lVar5 + 0x40) = iVar12 + 0x20U & 0xffffffc0;
  *(uint *)(lVar5 + 0x4c) =
       (int)((ulonglong)(lVar18 + 0x8000 + (lVar18 >> 0x3f)) >> 0x10) + 0x20U & 0xffffffc0;
LAB_140304dd6:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_d8);
  return;
}

