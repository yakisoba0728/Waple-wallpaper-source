// Function: FUN_140352e20
// Addr: 140352e20
// Size: 986 bytes


ulonglong FUN_140352e20(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  uint local_res8 [2];
  int local_res10;
  int *local_res18;
  longlong local_res20;
  longlong local_c8;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  local_res8[0] = 0;
  local_c8 = 0;
  if ((param_1 == (longlong *)0x0) || (param_2 == (undefined8 *)0x0)) {
    return 6;
  }
  if (*(int *)(param_2 + 2) != 8) {
    return 0x61;
  }
  lVar8 = param_2[1];
  if ((lVar8 == 0) || (piVar14 = (int *)*param_2, piVar14 == (int *)0x0)) {
    return 6;
  }
  lVar11 = *param_1;
  if (lVar11 == 0) {
    return 0x20;
  }
  if (0x1e < *(int *)(param_2 + 10) - 2U) {
    return 6;
  }
  local_res18 = piVar14;
  local_res20 = lVar11;
  local_c8 = FUN_1402f7ff0(lVar11,piVar14[1] << 4,0,*piVar14,0,local_res8);
  uVar5 = (ulonglong)local_res8[0];
  lVar7 = local_c8;
  if (local_res8[0] != 0) goto LAB_1403531b8;
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  iVar10 = piVar14[1];
  local_a8 = param_2[2];
  uStack_a0 = param_2[3];
  local_98 = param_2[4];
  uStack_90 = param_2[5];
  iVar13 = *piVar14;
  local_88 = *(undefined4 *)(param_2 + 6);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_80 = *(undefined4 *)(param_2 + 7);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x3c);
  local_78 = *(undefined4 *)(param_2 + 8);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_70 = *(undefined4 *)(param_2 + 9);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x4c);
  local_68 = param_2[10];
  iVar12 = (int)local_68;
  local_c0 = iVar10;
  local_bc = iVar13;
  uVar5 = FUN_140354460(lVar8,&local_c8);
  local_res8[0] = (uint)uVar5;
  lVar7 = local_c8;
  lVar11 = local_res20;
  if (local_res8[0] != 0) goto LAB_1403531b8;
  if (local_c8 == 0) {
LAB_14035319c:
    uVar5 = 6;
  }
  else {
    iVar15 = 0;
    lVar8 = local_c8;
    if (0 < iVar13) {
      local_res8[0] = 0;
      do {
        iVar9 = 0;
        if (0 < iVar10) {
          local_res10 = iVar15 * iVar10;
          do {
            lVar7 = (longlong)(local_res10 + iVar9);
            lVar11 = lVar8 + lVar7 * 0x10;
            puVar1 = (undefined4 *)(lVar8 + lVar7 * 0x10);
            lVar8 = lVar8 + lVar7 * 0x10;
            cVar2 = FUN_1403546e0(lVar11,iVar9,iVar15,iVar10,iVar13);
            if (cVar2 == '\0') {
              *(undefined4 *)(lVar8 + 4) = 0xc80000;
              uVar3 = 0x1900000;
              puVar1[2] = 0xc80000;
            }
            else {
              uVar6 = FUN_140354890(lVar11,iVar9,iVar15);
              *(undefined8 *)(puVar1 + 1) = uVar6;
              uVar3 = FUN_1402f5d70(lVar8 + 4);
            }
            *puVar1 = uVar3;
            iVar9 = iVar9 + 1;
            lVar8 = local_c8;
          } while (iVar9 < iVar10);
        }
        iVar15 = iVar15 + 1;
        piVar14 = local_res18;
      } while (iVar15 < iVar13);
    }
    local_res8[0] = 0;
    lVar7 = 0;
    if (lVar8 == 0) goto LAB_14035319c;
    FUN_140354b20(&local_c8);
    FUN_140356110(&local_c8);
    lVar8 = local_c8;
    local_res8[0] = 0;
    iVar15 = piVar14[1];
    lVar7 = local_c8;
    if (iVar15 != iVar10) goto LAB_14035319c;
    iVar10 = *piVar14;
    local_res18 = (int *)CONCAT44(local_res18._4_4_,iVar10);
    if (iVar10 != iVar13) goto LAB_14035319c;
    lVar11 = *(longlong *)(piVar14 + 4);
    local_res10 = 0;
    iVar12 = iVar12 * 0x10000;
    if (0 < iVar10) {
      do {
        if (0 < iVar15) {
          iVar10 = 0;
          iVar13 = iVar15 * local_res10;
          do {
            lVar7 = (longlong)(iVar13 + iVar10);
            iVar9 = *(int *)(lVar8 + lVar7 * 0x10);
            if ((iVar9 < 0) || (iVar12 < iVar9)) {
              iVar9 = iVar12;
            }
            cVar2 = '\x01';
            if (*(byte *)(lVar8 + 0xc + lVar7 * 0x10) < 0x7f) {
              cVar2 = -1;
            }
            if (local_68._4_1_ != '\0') {
              cVar2 = -cVar2;
            }
            iVar4 = FUN_1402efa10(cVar2 * iVar9,iVar12);
            iVar9 = -iVar4;
            if (-iVar4 < 0) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 >> 9;
            if (iVar4 < 1) {
              if ((iVar4 < 0) && (0x80 < iVar9)) {
                iVar9 = 0x80;
              }
            }
            else if (0x7f < iVar9) {
              iVar9 = 0x7f;
            }
            cVar2 = -(char)iVar9;
            if (-1 < iVar4) {
              cVar2 = (char)iVar9;
            }
            iVar10 = iVar10 + 1;
            *(char *)(lVar7 + lVar11) = cVar2 + -0x80;
          } while (iVar10 < iVar15);
          iVar10 = (int)local_res18;
        }
        local_res10 = local_res10 + 1;
      } while (local_res10 < iVar10);
    }
    uVar5 = 0;
    lVar7 = local_c8;
  }
  local_res8[0] = (uint)uVar5;
  lVar11 = local_res20;
LAB_1403531b8:
  if (lVar7 != 0) {
    FUN_1402f7f90(lVar11);
    uVar5 = (ulonglong)local_res8[0];
  }
  return uVar5;
}

