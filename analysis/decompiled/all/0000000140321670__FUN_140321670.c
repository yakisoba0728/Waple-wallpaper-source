// Function: FUN_140321670
// Addr: 140321670
// Size: 1275 bytes


int FUN_140321670(uint *param_1,longlong param_2,int param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  short sVar4;
  ushort uVar5;
  undefined2 uVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  uint local_res10;
  int local_res20 [2];
  longlong local_40;
  
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  local_res20[0] = 3;
  local_40 = 0;
  if (param_4 != 0) {
    local_res20[0] = FUN_1402f5c50(param_2,param_3 + param_4);
    if ((local_res20[0] != 0) || (local_res20[0] = FUN_1402f5c90(param_2,2), local_res20[0] != 0))
    goto LAB_140321a90;
    iVar9 = FUN_1402f54a0(param_2);
    sVar4 = FUN_1402f5ac0(param_2,local_res20);
    if (local_res20[0] != 0) goto LAB_140321a90;
    if (sVar4 != 1) {
      local_res20[0] = 3;
      goto LAB_140321a90;
    }
    iVar10 = FUN_1402f58c0(param_2,local_res20);
    if ((local_res20[0] != 0) || (uVar5 = FUN_1402f5ac0(param_2,local_res20), local_res20[0] != 0))
    goto LAB_140321a90;
    local_40 = FUN_1402f7ff0(uVar3,4,0,(uint)uVar5,0,local_res20);
    if (local_res20[0] != 0) goto LAB_140321a90;
    uVar14 = 0;
    if (uVar5 != 0) {
      do {
        uVar11 = FUN_1402f58c0(param_2,local_res20);
        *(undefined4 *)(local_40 + uVar14 * 4) = uVar11;
        if (local_res20[0] != 0) goto LAB_140321a90;
        uVar16 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar16;
      } while (uVar16 < uVar5);
    }
    local_res20[0] = FUN_1402f5c50(param_2,iVar9 + iVar10);
    if (local_res20[0] != 0) goto LAB_140321a90;
    uVar6 = FUN_1402f5ac0(param_2,local_res20);
    *(undefined2 *)(param_1 + 4) = uVar6;
    if ((local_res20[0] != 0) || (uVar7 = FUN_1402f5ac0(param_2,local_res20), local_res20[0] != 0))
    goto LAB_140321a90;
    param_1[5] = 0;
    uVar12 = FUN_1402f7ff0(uVar3,8,0,uVar7,0,local_res20);
    *(undefined8 *)(param_1 + 6) = uVar12;
    if (local_res20[0] != 0) goto LAB_140321a90;
    local_res10 = 0;
    if (uVar7 != 0) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 6) + (ulonglong)local_res10 * 8);
        lVar13 = FUN_1402f7ff0(uVar3,0xc,0,(short)param_1[4],0,local_res20);
        *plVar1 = lVar13;
        if (local_res20[0] != 0) goto LAB_140321a90;
        param_1[5] = param_1[5] + 1;
        uVar14 = 0;
        if ((short)param_1[4] != 0) {
          do {
            lVar13 = *plVar1;
            sVar4 = FUN_1402f5ac0(param_2,local_res20);
            if (local_res20[0] != 0) goto LAB_140321a90;
            sVar8 = FUN_1402f5ac0(param_2,local_res20);
            iVar10 = (int)sVar8;
            if (local_res20[0] != 0) goto LAB_140321a90;
            sVar8 = FUN_1402f5ac0(param_2,local_res20);
            iVar17 = (int)sVar8;
            if (local_res20[0] != 0) goto LAB_140321a90;
            piVar2 = (int *)(lVar13 + uVar14 * 0xc);
            if ((((sVar4 < 0) && (0 < iVar17)) || (iVar10 < sVar4)) || (iVar17 < iVar10)) {
              iVar10 = 0;
            }
            uVar16 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar16;
            *piVar2 = sVar4 * 4;
            piVar2[1] = iVar10 * 4;
            piVar2[2] = iVar17 * 4;
          } while (uVar16 < (ushort)param_1[4]);
        }
        local_res10 = local_res10 + 1;
      } while (local_res10 < uVar7);
    }
    *param_1 = 0;
    uVar12 = FUN_1402f7ff0(uVar3,0x10,0,uVar5,0,local_res20);
    *(undefined8 *)(param_1 + 2) = uVar12;
    if (local_res20[0] != 0) goto LAB_140321a90;
    uVar14 = 0;
    if (uVar5 != 0) {
      do {
        lVar13 = *(longlong *)(param_1 + 2);
        local_res20[0] = FUN_1402f5c50(param_2,iVar9 + *(int *)(local_40 + uVar14 * 4));
        if ((local_res20[0] != 0) ||
           (local_res20[0] = FUN_1402f5c90(param_2,4), local_res20[0] != 0)) goto LAB_140321a90;
        uVar7 = FUN_1402f5ac0(param_2,local_res20);
        *(uint *)(lVar13 + uVar14 * 0x10) = (uint)uVar7;
        if (local_res20[0] != 0) goto LAB_140321a90;
        uVar12 = FUN_1402f7ff0(uVar3,4,0,uVar7,0,local_res20);
        *(undefined8 *)(lVar13 + 8 + uVar14 * 0x10) = uVar12;
        if (local_res20[0] != 0) goto LAB_140321a90;
        *param_1 = *param_1 + 1;
        uVar15 = 0;
        if (*(int *)(lVar13 + uVar14 * 0x10) != 0) {
          do {
            uVar7 = FUN_1402f5ac0(param_2,local_res20);
            *(uint *)(*(longlong *)(lVar13 + 8 + uVar14 * 0x10) + uVar15 * 4) = (uint)uVar7;
            if (local_res20[0] != 0) goto LAB_140321a90;
            uVar16 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar16;
          } while (uVar16 < *(uint *)(lVar13 + uVar14 * 0x10));
        }
        uVar16 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar16;
      } while (uVar16 < uVar5);
    }
  }
  local_res20[0] = 0;
LAB_140321a90:
  FUN_1402f7f90(uVar3,local_40);
  if (local_res20[0] != 0) {
    if ((*(longlong *)(param_1 + 6) != 0) && (uVar14 = 0, param_1[5] != 0)) {
      do {
        lVar13 = uVar14 * 8;
        FUN_1402f7f90(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 6) + lVar13));
        uVar16 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar16;
        *(undefined8 *)(lVar13 + *(longlong *)(param_1 + 6)) = 0;
      } while (uVar16 < param_1[5]);
    }
    FUN_1402f7f90(uVar3,*(undefined8 *)(param_1 + 6));
    param_1[6] = 0;
    param_1[7] = 0;
    if ((*(longlong *)(param_1 + 2) != 0) && (uVar16 = 0, *param_1 != 0)) {
      do {
        uVar14 = (ulonglong)uVar16;
        FUN_1402f7f90(uVar3,*(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar14 * 0x10));
        uVar16 = uVar16 + 1;
        *(undefined8 *)(*(longlong *)(param_1 + 2) + 8 + uVar14 * 0x10) = 0;
      } while (uVar16 < *param_1);
    }
    FUN_1402f7f90(uVar3,*(undefined8 *)(param_1 + 2));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return local_res20[0];
}

