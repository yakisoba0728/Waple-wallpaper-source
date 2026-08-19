// Function: FUN_14032b8d0
// Addr: 14032b8d0
// Size: 633 bytes


void FUN_14032b8d0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int *piVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int local_res18 [2];
  longlong local_res20;
  
  uVar9 = 0;
  local_res20 = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      piVar8 = (int *)(uVar9 * 0x10 + *(longlong *)(param_2 + 0x140));
      if (*piVar8 == 1) {
        if (((uint)piVar8[3] < *(uint *)(param_1 + 0xc)) ||
           (iVar2 = func_0x0001402f5d60(param_1,piVar8[3] - *(uint *)(param_1 + 0xc)), iVar2 != 0))
        goto LAB_14032baa0;
        uVar10 = piVar8[2];
        local_res18[0] = 0;
        uVar3 = func_0x0001402f5a40(param_1,local_res18);
        if ((local_res18[0] != 0) || ((uVar3 & 0xffffff00) != 0)) goto LAB_14032b93e;
        uVar3 = uVar3 & 4;
        if (uVar3 == 0) {
          uVar4 = func_0x0001402f5a40(param_1,local_res18);
        }
        else {
          uVar4 = func_0x0001402f5990();
        }
        if (local_res18[0] != 0) goto LAB_14032b93e;
        if (uVar10 / 9 < uVar4) goto LAB_14032b9e9;
        uVar11 = uVar4;
        if (0x100 < uVar4) {
          uVar11 = 0x100;
        }
        *(uint *)(param_2 + 0x19c) = uVar11;
        local_res20 = FUN_1402f80c0(uVar1,0xc,0,uVar11,0,local_res18);
        if (local_res18[0] != 0) goto LAB_14032b93e;
        uVar9 = 0;
        iVar2 = local_res18[0];
        if (uVar11 != 0) goto LAB_14032ba50;
        goto LAB_14032ba88;
      }
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_2 + 0x13c));
  }
  local_res18[0] = 3;
  goto LAB_14032b93e;
  while( true ) {
    uVar7 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar7;
    local_res18[0] = 0;
    iVar2 = 0;
    if (uVar11 <= uVar7) break;
LAB_14032ba50:
    local_res18[0] = iVar2;
    puVar6 = &DAT_14043ff00;
    if (uVar3 == 0) {
      puVar6 = &DAT_14043fee8;
    }
    local_res18[0] = FUN_1402f56e0(param_1,puVar6,local_res20 + uVar9 * 0xc);
    if (local_res18[0] != 0) goto LAB_14032b93e;
  }
LAB_14032ba88:
  local_res18[0] = func_0x0001402f5d60(param_1,(uVar4 - uVar11) * 9);
  if (local_res18[0] == 0) {
    iVar2 = 0;
    if (((uVar4 & 3) == 0) || (iVar2 = func_0x0001402f5d60(param_1,4 - (uVar4 & 3)), iVar2 == 0)) {
      local_res18[0] = iVar2;
      if (uVar3 == 0) {
        uVar3 = func_0x0001402f5a40(param_1,local_res18);
      }
      else {
        uVar3 = func_0x0001402f5990();
      }
      if (local_res18[0] == 0) {
        if (uVar10 + uVar4 * -9 < uVar3) {
LAB_14032b9e9:
          local_res18[0] = 8;
        }
        else {
          if (0x1000100 < uVar3) {
            uVar3 = 0x1000100;
          }
          lVar5 = FUN_1402f8070(uVar1,uVar3 + 1,local_res18);
          if ((local_res18[0] == 0) &&
             (local_res18[0] = func_0x0001402f5580(param_1,lVar5,(ulonglong)uVar3),
             local_res18[0] == 0)) {
            *(undefined1 *)((ulonglong)uVar3 + lVar5) = 0;
                    /* WARNING: Subroutine does not return */
            FUN_1402f8180(uVar1,0x18,0,uVar11,0,local_res18);
          }
        }
      }
      goto LAB_14032b93e;
    }
  }
LAB_14032baa0:
  local_res18[0] = 0x53;
LAB_14032b93e:
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(uVar1,local_res20);
}

