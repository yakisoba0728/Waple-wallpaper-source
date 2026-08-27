// Function: FUN_1402f7200
// Addr: 1402f7200
// Size: 972 bytes


undefined8 FUN_1402f7200(longlong *param_1,int param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  iVar20 = (int)param_1[0xc];
  if (iVar20 == 0x53564720) {
    lVar6 = *param_1;
    plVar19 = (longlong *)0x0;
    if (lVar6 != 0) {
      puVar13 = (undefined8 *)(lVar6 + 0x18);
      puVar1 = puVar13 + *(uint *)(lVar6 + 0x14);
      for (; plVar19 = (longlong *)0x0, puVar13 < puVar1; puVar13 = puVar13 + 1) {
        plVar19 = (longlong *)*puVar13;
        plVar10 = (longlong *)0x0;
        while (plVar11 = (longlong *)((longlong)plVar10 + 1),
              *(char *)(*(longlong *)(*plVar19 + 8) + (longlong)plVar10) ==
              *(char *)((longlong)plVar10 + 0x1404367fc)) {
          plVar10 = plVar11;
          if (plVar11 == (longlong *)0x7) goto LAB_1402f7267;
        }
      }
    }
LAB_1402f7267:
                    /* WARNING: Could not recover jumptable at 0x0001402f727d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar12 = (*(code *)**(undefined8 **)(*plVar19 + 0x18))(plVar19,param_1,0);
    return uVar12;
  }
  if (iVar20 != 0x6f75746c) {
    return CONCAT71((uint7)(uint3)((uint)iVar20 >> 8),1);
  }
  if (param_3 == (uint *)0x0) {
    uVar17 = 0;
    uVar22 = 0;
  }
  else {
    uVar17 = *param_3;
    uVar22 = param_3[1];
  }
  if (param_1 != (longlong *)0xffffffffffffff68) {
    if (*(ushort *)((longlong)param_1 + 0x9a) == 0) {
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_38 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x14];
      puVar2 = puVar7 + (ulonglong)*(ushort *)((longlong)param_1 + 0x9a) * 2;
      local_38 = *puVar7;
      local_30 = *puVar7;
      local_34 = puVar7[1];
      uVar5 = puVar7[1];
      while (local_2c = uVar5, puVar7 = puVar7 + 2, puVar7 < puVar2) {
        uVar4 = *puVar7;
        uVar5 = puVar7[1];
        uVar8 = uVar4;
        if ((int)local_38 <= (int)uVar4) {
          uVar8 = local_38;
        }
        if ((int)uVar4 <= (int)local_30) {
          uVar4 = local_30;
        }
        uVar9 = uVar5;
        if ((int)local_34 <= (int)uVar5) {
          uVar9 = local_34;
        }
        local_38 = uVar8;
        local_30 = uVar4;
        local_34 = uVar9;
        if ((int)uVar5 <= (int)local_2c) {
          uVar5 = local_2c;
        }
      }
    }
  }
  iVar15 = ((int)local_38 >> 6) + ((int)uVar17 >> 6);
  iVar20 = ((int)local_34 >> 6) + ((int)uVar22 >> 6);
  iVar14 = ((int)local_30 >> 6) + ((int)uVar17 >> 6);
  iVar21 = ((int)local_2c >> 6) + ((int)uVar22 >> 6);
  local_38 = (local_38 & 0x3f) + (uVar17 & 0x3f);
  local_30 = (local_30 & 0x3f) + (uVar17 & 0x3f);
  local_34 = (local_34 & 0x3f) + (uVar22 & 0x3f);
  local_2c = (local_2c & 0x3f) + (uVar22 & 0x3f);
  if ((param_2 == 0) || (param_2 == 1)) {
LAB_1402f749f:
    cVar16 = '\x02';
  }
  else {
    if (param_2 == 2) {
      cVar16 = '\x01';
      iVar15 = (local_38 + 0x1f >> 6) + iVar15;
      iVar14 = (local_30 + 0x20 >> 6) + iVar14;
      if (iVar15 == iVar14) {
        if ((local_30 + 0x20 & 0x3f) + (local_38 + 0x1f & 0x3f) < 0x3f) {
          iVar15 = iVar15 + -1;
        }
        else {
          iVar14 = iVar14 + 1;
        }
      }
      iVar20 = (local_34 + 0x1f >> 6) + iVar20;
      iVar21 = (local_2c + 0x20 >> 6) + iVar21;
      if (iVar20 == iVar21) {
        if ((local_2c + 0x20 & 0x3f) + (local_34 + 0x1f & 0x3f) < 0x3f) {
          iVar20 = iVar20 + -1;
        }
        else {
          iVar21 = iVar21 + 1;
        }
      }
      goto LAB_1402f74d7;
    }
    if (param_2 == 3) {
      cVar16 = '\x05';
      FUN_1402f7930(&local_38,param_1,3);
    }
    else {
      if (param_2 != 4) goto LAB_1402f749f;
      cVar16 = '\x06';
      FUN_1402f7930(&local_38,param_1,4);
    }
  }
  iVar14 = ((int)(local_30 + 0x3f) >> 6) + iVar14;
  iVar15 = ((int)local_38 >> 6) + iVar15;
  iVar20 = ((int)local_34 >> 6) + iVar20;
  iVar21 = ((int)(local_2c + 0x3f) >> 6) + iVar21;
LAB_1402f74d7:
  uVar17 = iVar14 - iVar15;
  iVar18 = iVar21 - iVar20;
  if (((((((int)uVar17 < 0x10000) && (iVar18 < 0x10000)) && (-0x1000001 < iVar15)) &&
       ((iVar14 < 0x1000000 && (-0x1000001 < iVar20)))) && (iVar21 < 0x1000000)) &&
     ((param_1[1] == 0 ||
      ((lVar6 = *(longlong *)(param_1[1] + 0x80), uVar3 = *(ushort *)(lVar6 + 0x18),
       (int)uVar17 <= (int)(((uint)uVar3 + (uint)uVar3 * 4) * 2) &&
       (uVar3 = *(ushort *)(lVar6 + 0x1a), iVar18 <= (int)(((uint)uVar3 + (uint)uVar3 * 4) * 2))))))
     ) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  if (cVar16 == '\x01') {
    uVar22 = (int)(uVar17 + 0xf) >> 3 & 0xfffffffe;
  }
  else {
    uVar22 = uVar17;
    if (cVar16 != '\x02') {
      if (cVar16 == '\x05') {
        uVar17 = uVar17 * 3;
        uVar22 = uVar17 + 3 & 0xfffffffc;
      }
      else if (cVar16 == '\x06') {
        iVar18 = iVar18 * 3;
      }
    }
  }
  *(int *)(param_1 + 0x12) = iVar15;
  *(int *)((longlong)param_1 + 0x94) = iVar21;
  *(uint *)(param_1 + 0xe) = uVar22;
  *(char *)((longlong)param_1 + 0x82) = cVar16;
  *(undefined2 *)(param_1 + 0x10) = 0x100;
  *(uint *)((longlong)param_1 + 0x6c) = uVar17;
  *(int *)(param_1 + 0xd) = iVar18;
  return uVar12;
}

