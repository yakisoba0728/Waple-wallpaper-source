// Function: FUN_1400823b0
// Addr: 1400823b0
// Size: 1233 bytes


void FUN_1400823b0(longlong param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  code *pcVar3;
  BOOL BVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  DWORD local_res10 [2];
  undefined4 local_res18;
  undefined8 local_res20;
  undefined1 local_458 [8];
  undefined1 local_450 [8];
  undefined1 local_448 [16];
  undefined4 local_438;
  int local_434;
  uint local_430;
  undefined1 local_42c [1012];
  
  local_res10[0] = 1;
  do {
    while( true ) {
      plVar9 = (longlong *)(param_1 + 0x200);
      BVar4 = ReadFile(*(HANDLE *)(param_1 + 8),&local_438,0x400,local_res10,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
        return;
      }
      lVar14 = (longlong)(int)local_430;
      if (local_430 < 0x3f5) break;
LAB_140082823:
      thunk_FUN_14028af80(0);
    }
    if (local_434 == 0) {
      puVar10 = local_42c;
      uVar13 = local_430;
LAB_1400824fe:
      uVar16 = local_438;
      local_res18 = local_438;
      if (*(HWND *)(param_1 + 0x18) != (HWND)0x0) {
        PostMessageW(*(HWND *)(param_1 + 0x18),0x415,0,0);
      }
      if (puVar10 == (undefined1 *)0x0) {
        local_res20 = 0;
      }
      else {
        local_res20 = thunk_FUN_14028af20((longlong)(int)uVar13);
        FUN_1404210f0(local_res20,puVar10,(longlong)(int)uVar13);
      }
      iVar5 = FUN_140290d80(param_1 + 0x140);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)(param_1 + 0x18c) == 0x7fffffff) {
        *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + -1;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      uVar6 = *(ulonglong *)(param_1 + 0x1a0);
      if (*(longlong *)(param_1 + 0x1b0) + 1U < uVar6) {
        uVar15 = *(ulonglong *)(param_1 + 0x198);
      }
      else {
        uVar8 = 1;
        if (uVar6 != 0) {
          uVar8 = uVar6;
        }
        for (; (uVar8 == uVar6 || (uVar8 < 8)); uVar8 = uVar8 * 2) {
          if (0x7ffffffffffffff - uVar8 < uVar8) {
                    /* WARNING: Subroutine does not return */
            FUN_140082f20();
          }
        }
        if (0x1fffffffffffffff < uVar8) {
LAB_140082868:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar1 = *(ulonglong *)(param_1 + 0x1a8);
        uVar6 = uVar8 * 8;
        if (uVar6 == 0) {
          uVar15 = 0;
        }
        else if (uVar6 < 0x1000) {
          uVar15 = FUN_14028af20();
        }
        else {
          if (uVar6 + 0x27 <= uVar6) goto LAB_140082868;
          lVar14 = FUN_14028af20(uVar6 + 0x27);
          if (lVar14 == 0) goto LAB_14008282f;
          uVar15 = lVar14 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar15 - 8) = lVar14;
        }
        lVar14 = uVar1 * 8;
        uVar6 = uVar8 >> 1;
        for (; uVar8 <= uVar6; uVar8 = uVar8 * 2) {
        }
        uVar8 = uVar8 - *(longlong *)(param_1 + 0x1a0);
        lVar11 = (*(longlong *)(param_1 + 0x1a0) - uVar1) * 8;
        FUN_1404210f0(lVar14 + uVar15,*(longlong *)(param_1 + 0x198) + lVar14,lVar11);
        lVar11 = lVar11 + lVar14 + uVar15;
        if (uVar8 < uVar1) {
          lVar14 = uVar8 * 8;
          FUN_1404210f0(lVar11,*(undefined8 *)(param_1 + 0x198),lVar14);
          lVar11 = (uVar1 - uVar8) * 8;
          FUN_1404210f0(uVar15,*(longlong *)(param_1 + 0x198) + lVar14,lVar11);
          uVar6 = uVar15 + lVar11;
        }
        else {
          FUN_1404210f0(lVar11,*(undefined8 *)(param_1 + 0x198),lVar14);
          FUN_1404217a0(lVar11 + lVar14,0,(uVar8 - uVar1) * 8);
          uVar6 = uVar15;
        }
        FUN_1404217a0(uVar6,0,lVar14);
        lVar14 = *(longlong *)(param_1 + 0x198);
        if (lVar14 != 0) {
          uVar6 = *(longlong *)(param_1 + 0x1a0) * 8;
          if (0xfff < uVar6) {
            if (0x1f < (lVar14 - *(longlong *)(lVar14 + -8)) - 8U) {
LAB_14008282f:
              pcVar3 = (code *)swi(0x29);
              (*pcVar3)(5);
              return;
            }
            uVar6 = uVar6 + 0x27;
            lVar14 = *(longlong *)(lVar14 + -8);
          }
          thunk_FUN_14028af80(lVar14,uVar6);
        }
        *(ulonglong *)(param_1 + 0x198) = uVar15;
        *(longlong *)(param_1 + 0x1a0) = *(longlong *)(param_1 + 0x1a0) + uVar8;
        uVar6 = *(ulonglong *)(param_1 + 0x1a0);
        uVar16 = local_res18;
      }
      *(ulonglong *)(param_1 + 0x1a8) = *(ulonglong *)(param_1 + 0x1a8) & uVar6 - 1;
      uVar8 = *(longlong *)(param_1 + 0x1b0) + *(longlong *)(param_1 + 0x1a8);
      uVar6 = uVar6 - 1 & uVar8;
      if (*(longlong *)(uVar15 + uVar6 * 8) == 0) {
        uVar7 = FUN_14028af20(0x20);
        *(undefined8 *)(*(longlong *)(param_1 + 0x198) + uVar6 * 8) = uVar7;
      }
      puVar2 = *(undefined4 **)
                (*(longlong *)(param_1 + 0x198) + (*(longlong *)(param_1 + 0x1a0) - 1U & uVar8) * 8)
      ;
      puVar2[4] = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *puVar2 = uVar16;
      puVar2[1] = uVar13;
      *(undefined8 *)(puVar2 + 2) = local_res20;
      *(longlong *)(param_1 + 0x1b0) = *(longlong *)(param_1 + 0x1b0) + 1;
      FUN_140290ef0(param_1 + 0x1b8);
      FUN_140290ea0(param_1 + 0x140);
      thunk_FUN_14028af80(0);
      if (*(longlong *)(param_1 + 0x200) != *(longlong *)(param_1 + 0x208)) {
        *(longlong *)(param_1 + 0x208) = *(longlong *)(param_1 + 0x200);
      }
      goto LAB_140082823;
    }
    if (local_434 == 1) {
      lVar11 = *plVar9;
      lVar12 = *(longlong *)(param_1 + 0x208);
      if (lVar11 != lVar12) {
        *(longlong *)(param_1 + 0x208) = lVar11;
        lVar12 = lVar11;
      }
      FUN_140082a50(plVar9,local_448,lVar12,local_42c,local_42c + lVar14);
      thunk_FUN_14028af80(0);
    }
    else {
      if (local_434 != 2) {
        if (local_434 != 3) goto LAB_140082823;
        FUN_140082a50(plVar9,local_458,*(undefined8 *)(param_1 + 0x208),local_42c,local_42c + lVar14
                     );
        puVar10 = (undefined1 *)*plVar9;
        uVar13 = *(int *)(param_1 + 0x208) - (int)puVar10;
        goto LAB_1400824fe;
      }
      FUN_140082a50(plVar9,local_450,*(undefined8 *)(param_1 + 0x208),local_42c,local_42c + lVar14);
      thunk_FUN_14028af80(0);
    }
  } while( true );
}

