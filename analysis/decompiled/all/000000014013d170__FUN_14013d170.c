// Function: FUN_14013d170
// Addr: 14013d170
// Size: 1062 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_14013d170(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  BOOL BVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *******pppppppuVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  DWORDLONG dwlConditionMask;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  undefined **ppuVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [24];
  undefined8 *******local_2c8;
  ulonglong uStack_2c0;
  ulonglong local_2b8;
  ulonglong local_2b0;
  ulonglong *local_2a8;
  ulonglong *local_2a0;
  longlong local_298;
  undefined8 local_174;
  _OSVERSIONINFOW local_168;
  
  FUN_1400e79e0(param_1 + 0x10);
  puVar19 = (ulonglong *)0x0;
  puVar17 = auStack_2e8;
  if (*(char *)(param_2 + 8) == '\a') {
    FUN_140088360(param_2,&local_2a8);
    for (puVar14 = local_2a8; puVar19 = (ulonglong *)0x0, puVar14 != local_2a0;
        puVar14 = puVar14 + 4) {
      uVar18 = puVar14[2];
      local_2c8 = (undefined8 *******)0x0;
      uStack_2c0 = 0;
      local_2b8 = 0;
      local_2b0 = 0;
      puVar19 = puVar14;
      if (0xf < puVar14[3]) {
        puVar19 = (ulonglong *)*puVar14;
      }
      if (0x7fffffffffffffff < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_1400172e0();
      }
      puVar20 = local_2a8;
      if (uVar18 < 0x10) {
        local_2b0 = 0xf;
        local_2c8 = (undefined8 *******)*puVar19;
        uStack_2c0 = puVar19[1];
        local_2b8 = uVar18;
      }
      else {
        uVar16 = uVar18 | 0xf;
        if (uVar16 < 0x8000000000000000) {
          if (uVar16 < 0x16) {
            uVar16 = 0x16;
          }
          uVar1 = uVar16 + 1;
          pppppppuVar8 = (undefined8 *******)0x0;
          if (uVar1 != 0) {
            if (0xfff < uVar1) {
              uVar13 = uVar16 + 0x28;
              if (uVar13 <= uVar1) {
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              goto LAB_14013d26a;
            }
            pppppppuVar8 = (undefined8 *******)FUN_14028af20(uVar1);
          }
        }
        else {
          uVar16 = 0x7fffffffffffffff;
          uVar13 = 0x8000000000000027;
LAB_14013d26a:
          ppppppuVar7 = (undefined8 ******)FUN_14028af20(uVar13);
          if (ppppppuVar7 == (undefined8 ******)0x0) goto LAB_14013d392;
          pppppppuVar8 = (undefined8 *******)((longlong)ppppppuVar7 + 0x27U & 0xffffffffffffffe0);
          pppppppuVar8[-1] = ppppppuVar7;
        }
        local_2c8 = pppppppuVar8;
        local_2b8 = uVar18;
        local_2b0 = uVar16;
        FUN_1404210f0(pppppppuVar8,puVar19,uVar18 + 1);
      }
      pppppppuVar8 = &local_2c8;
      if (0xf < local_2b0) {
        pppppppuVar8 = local_2c8;
      }
      lVar9 = FUN_140086de0(param_2,pppppppuVar8,local_2b8 + (longlong)pppppppuVar8);
      if (*(byte *)(lVar9 + 8) - 1 < 3) {
        uVar5 = FUN_140085ee0(lVar9);
        puVar10 = (undefined4 *)FUN_1400ddcb0(param_1 + 0x10,&local_2c8);
        *puVar10 = uVar5;
      }
      if (0xf < local_2b0) {
        pppppppuVar8 = local_2c8;
        if ((0xfff < local_2b0 + 1) &&
           (pppppppuVar8 = (undefined8 *******)local_2c8[-1], uVar18 = param_2,
           0x1f < (ulonglong)((longlong)local_2c8 + (-8 - (longlong)pppppppuVar8))))
        goto LAB_14013d392;
        thunk_FUN_14028af80(pppppppuVar8);
      }
    }
    puVar17 = auStack_2e8;
    puVar14 = local_2a8;
    if (local_2a8 != (ulonglong *)0x0) {
      for (; puVar14 != local_2a0; puVar14 = puVar14 + 4) {
        FUN_140017240(puVar14);
      }
      puVar14 = local_2a8;
      puVar17 = auStack_2e8;
      if (0xfff < (local_298 - (longlong)local_2a8 & 0xffffffffffffffe0U)) {
        puVar14 = (ulonglong *)local_2a8[-1];
        puVar20 = (ulonglong *)((longlong)local_2a8 + (-8 - (longlong)puVar14));
        puVar17 = auStack_2e8;
        uVar18 = param_2;
        if ((ulonglong *)0x1f < puVar20) {
LAB_14013d392:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar14 = puVar20;
          puVar17 = auStack_2e0;
          param_2 = uVar18;
        }
      }
      *(undefined8 *)(puVar17 + -8) = 0x14013d3a1;
      thunk_FUN_14028af80(puVar14);
    }
  }
  local_168.dwOSVersionInfoSize = 0x114;
  *(undefined8 *)(puVar17 + -8) = 0x14013d3b8;
  GetVersionExW(&local_168);
  *(undefined4 *)(puVar17 + 0x60) = 0x11c;
  *(undefined8 *)(puVar17 + 100) = 10;
  *(undefined8 *)(puVar17 + 0x6c) = 22000;
  *(undefined8 *)(puVar17 + -8) = 0x14013d3e4;
  FUN_1404217a0(puVar17 + 0x74,0,0x100);
  local_174 = 0;
  *(undefined8 *)(puVar17 + -8) = 0x14013d3fc;
  uVar11 = VerSetConditionMask(0,2,3);
  *(undefined8 *)(puVar17 + -8) = 0x14013d40d;
  uVar11 = VerSetConditionMask(uVar11,1,3);
  *(undefined8 *)(puVar17 + -8) = 0x14013d41e;
  dwlConditionMask = VerSetConditionMask(uVar11,4,3);
  *(undefined8 *)(puVar17 + -8) = 0x14013d431;
  BVar6 = VerifyVersionInfoW((LPOSVERSIONINFOEXW)(puVar17 + 0x60),7,dwlConditionMask);
  if (BVar6 == 0) {
    *(undefined8 *)(puVar17 + -8) = 0x14013d4bd;
    cVar4 = FUN_140015180(10,0,0);
    if ((cVar4 == '\0') || (local_168.dwBuildNumber < 0x4a64)) {
LAB_14013d567:
      *(ulonglong **)(param_1 + 8) = puVar19;
      goto LAB_14013d56b;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14013d4df;
    puVar12 = (undefined8 *)FUN_14028af20(0x38);
    *puVar12 = &PTR_FUN_14048b078;
    ppuVar15 = &PTR_LAB_14048b0c8;
  }
  else if (local_168.dwBuildNumber < 0x585d) {
    if (local_168.dwBuildNumber < 0x57d9) {
      if (local_168.dwBuildNumber < 22000) goto LAB_14013d567;
      *(undefined8 *)(puVar17 + -8) = 0x14013d49b;
      puVar12 = (undefined8 *)FUN_14028af20(0x38);
      *puVar12 = &PTR_FUN_14048af20;
      ppuVar15 = &PTR_LAB_14048ae20;
    }
    else {
      *(undefined8 *)(puVar17 + -8) = 0x14013d473;
      puVar12 = (undefined8 *)FUN_14028af20(0x38);
      *puVar12 = &PTR_FUN_14048ae70;
      ppuVar15 = &PTR_LAB_14048aee0;
    }
  }
  else {
    *(undefined8 *)(puVar17 + -8) = 0x14013d44c;
    puVar12 = (undefined8 *)FUN_14028af20(0x38);
    *puVar12 = &PTR_FUN_14048afa0;
    ppuVar15 = &PTR_LAB_14048b018;
  }
  puVar12[5] = puVar19;
  puVar12[4] = puVar19;
  puVar12[3] = puVar19;
  puVar12[1] = ppuVar15;
  plVar2 = puVar12 + 1;
  puVar12[6] = 0;
  puVar12[2] = 1;
  *(longlong **)(param_1 + 8) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    pcVar3 = *(code **)(*plVar2 + 0x20);
    *(undefined8 *)(puVar17 + -8) = 0x14013d526;
    cVar4 = (*pcVar3)(plVar2,param_1);
    if (cVar4 != '\0') {
      *(undefined8 *)(puVar17 + -8) = 0x14013d532;
      FUN_140085440(param_2);
      return 0;
    }
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      pcVar3 = *(code **)(**(longlong **)(param_1 + 8) + 0x28);
      *(undefined8 *)(puVar17 + -8) = 0x14013d545;
      (*pcVar3)();
    }
    if (*(longlong **)(param_1 + 8) != (longlong *)0x0) {
      pcVar3 = *(code **)(**(longlong **)(param_1 + 8) + 0x10);
      *(undefined8 *)(puVar17 + -8) = 0x14013d554;
      (*pcVar3)();
      *(ulonglong **)(param_1 + 8) = puVar19;
    }
    *(undefined8 *)(puVar17 + -8) = 0x14013d560;
    FUN_140085440(param_2);
    return 1;
  }
LAB_14013d56b:
  *(undefined8 *)(puVar17 + -8) = 0x14013d573;
  FUN_140085440(param_2);
  return 2;
}

