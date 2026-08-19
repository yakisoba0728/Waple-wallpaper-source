// Function: FUN_140082480
// Addr: 140082480
// Size: 814 bytes


void FUN_140082480(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined1 *local_res20;
  undefined1 local_458 [8];
  undefined1 local_450 [8];
  undefined1 local_448 [16];
  undefined4 local_438;
  int local_434;
  uint local_430;
  undefined1 local_42c [1012];
  
  plVar1 = (longlong *)(param_1 + 0x200);
  local_res10[0] = 1;
  iVar4 = (*DAT_1404261b8)(*(undefined8 *)(param_1 + 8),&local_438,0x400,local_res10,0);
  if (iVar4 == 0) {
    return;
  }
  lVar10 = (longlong)(int)local_430;
  if (local_430 < 0x3f5) {
    if (local_434 == 0) {
      puVar6 = local_42c;
      uVar9 = local_430;
    }
    else {
      if (local_434 == 1) {
        lVar2 = *plVar1;
        lVar8 = *(longlong *)(param_1 + 0x208);
        if (lVar2 != lVar8) {
          *(longlong *)(param_1 + 0x208) = lVar2;
          lVar8 = lVar2;
        }
        FUN_140082b20(plVar1,local_448,lVar8,local_42c,local_42c + lVar10);
        func_0x00014028b040(0);
        return;
      }
      if (local_434 == 2) {
        FUN_140082b20(plVar1,local_450,*(undefined8 *)(param_1 + 0x208),local_42c,local_42c + lVar10
                     );
        func_0x00014028b040(0);
        return;
      }
      if (local_434 != 3) goto LAB_1400828f3;
      FUN_140082b20(plVar1,local_458,*(undefined8 *)(param_1 + 0x208),local_42c,local_42c + lVar10);
      puVar6 = (undefined1 *)*plVar1;
      uVar9 = *(int *)(param_1 + 0x208) - (int)puVar6;
    }
    local_res18 = local_438;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      (*DAT_140426a98)(*(longlong *)(param_1 + 0x18),0x415,0,0);
    }
    if (puVar6 != (undefined1 *)0x0) {
      local_res20 = (undefined1 *)FUN_14028b190((longlong)(int)uVar9);
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(local_res20,puVar6,(longlong)(int)uVar9);
    }
    local_res20 = puVar6;
    iVar4 = func_0x000140290e50(param_1 + 0x140);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)(param_1 + 0x18c) == 0x7fffffff) {
      *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + -1;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    uVar5 = *(ulonglong *)(param_1 + 0x1a0);
    if (uVar5 <= *(longlong *)(param_1 + 0x1b0) + 1U) {
      uVar7 = 1;
      if (uVar5 != 0) {
        uVar7 = uVar5;
      }
      for (; (uVar7 == uVar5 || (uVar7 < 8)); uVar7 = uVar7 * 2) {
        if (0x7ffffffffffffff - uVar7 < uVar7) {
          func_0x000140082ff0();
          return;
        }
      }
      if (uVar7 < 0x2000000000000000) {
        uVar5 = uVar7 * 8;
        if (uVar5 == 0) {
          lVar10 = *(longlong *)(param_1 + 0x1a8) * 8;
          uVar5 = uVar7 >> 1;
          for (; uVar7 <= uVar5; uVar7 = uVar7 * 2) {
          }
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar10,*(longlong *)(param_1 + 0x198) + lVar10,
                        (*(longlong *)(param_1 + 0x1a0) - *(longlong *)(param_1 + 0x1a8)) * 8);
        }
        if (uVar5 < 0x1000) {
          func_0x00014028aff0();
          return;
        }
        if (uVar5 < uVar5 + 0x27) {
          func_0x00014028aff0(uVar5 + 0x27);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    *(ulonglong *)(param_1 + 0x1a8) = *(ulonglong *)(param_1 + 0x1a8) & uVar5 - 1;
    uVar7 = *(longlong *)(param_1 + 0x1b0) + *(longlong *)(param_1 + 0x1a8);
    if (*(longlong *)(*(longlong *)(param_1 + 0x198) + (uVar5 - 1 & uVar7) * 8) == 0) {
      func_0x00014028aff0(0x20);
      return;
    }
    puVar3 = *(undefined4 **)
              (*(longlong *)(param_1 + 0x198) + (*(longlong *)(param_1 + 0x1a0) - 1U & uVar7) * 8);
    puVar3[4] = 0;
    *(undefined8 *)(puVar3 + 6) = 0;
    *puVar3 = local_438;
    puVar3[1] = uVar9;
    *(undefined1 **)(puVar3 + 2) = local_res20;
    *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_1 + 0x1b0) + 1;
    FUN_140290fc0(param_1 + 0x1b8);
    FUN_140290f70(param_1 + 0x140);
    func_0x00014028b040(0);
    if (*plVar1 != *(longlong *)(param_1 + 0x208)) {
      *(longlong *)(param_1 + 0x208) = *plVar1;
    }
  }
LAB_1400828f3:
  func_0x00014028b040(0);
  return;
}

