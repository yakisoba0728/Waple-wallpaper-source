// Function: FUN_1400c3550
// Addr: 1400c3550
// Size: 2703 bytes


void FUN_1400c3550(longlong param_1,longlong *param_2)

{
  int *piVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong *plVar4;
  DWORD *pDVar5;
  DWORD DVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  DWORD *pDVar16;
  longlong lVar17;
  ulonglong uVar18;
  DWORD *pDVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  DWORD DVar24;
  undefined4 uVar25;
  longlong local_458 [7];
  longlong *local_420;
  undefined8 *local_418;
  undefined8 *local_410;
  longlong local_408;
  longlong local_3f8 [7];
  longlong *local_3c0;
  DWORD local_3b8;
  DWORD local_3b4;
  DWORD local_3b0;
  DWORD local_3ac;
  longlong local_3a8 [7];
  longlong *local_370;
  longlong local_368 [7];
  longlong *local_330;
  undefined **local_328;
  longlong *local_320;
  undefined8 *local_318;
  undefined ***local_2f0;
  undefined **local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined ***local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  longlong local_298 [7];
  longlong *local_260;
  longlong local_258 [7];
  longlong *local_220;
  longlong local_218 [2];
  longlong local_208;
  undefined1 local_200 [24];
  undefined1 local_1e8 [80];
  undefined1 local_198 [24];
  longlong local_180 [7];
  longlong *local_148;
  undefined1 local_128 [24];
  undefined1 local_110 [80];
  undefined1 local_c0 [24];
  longlong local_a8 [7];
  longlong *local_70;
  
  *(int *)*param_2 = *(int *)*param_2 + 1;
  LOCK();
  piVar1 = (int *)(param_1 + 0x3f8);
  iVar7 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  plVar13 = param_2 + 0x10;
  *(int *)(param_2 + 0x18) = iVar7 + 1;
  DVar24 = 0;
  local_420 = (longlong *)0x0;
  local_408 = *(longlong *)ThreadLocalStoragePointer;
  puVar8 = *(undefined8 **)(*(longlong *)(local_408 + 0x2a0) + 0x58);
  if (puVar8 != (undefined8 *)0x0) {
    local_420 = (longlong *)(**(code **)*puVar8)(puVar8,local_458);
  }
  if ((local_420 != local_458) && (plVar4 = (longlong *)param_2[0x17], plVar4 != plVar13)) {
    param_2[0x17] = (longlong)local_420;
    local_420 = plVar4;
    goto LAB_1400c36fc;
  }
  local_3c0 = (longlong *)0x0;
  if (local_420 != (longlong *)0x0) {
    plVar4 = local_420;
    if (local_420 == local_458) {
      local_3c0 = (longlong *)(**(code **)(*local_420 + 8))(local_420,local_3f8);
      if (local_420 == (longlong *)0x0) goto LAB_1400c3655;
      (**(code **)(*local_420 + 0x20))
                (local_420,CONCAT71((int7)((ulonglong)local_458 >> 8),local_420 != local_458));
      plVar4 = local_3c0;
    }
    local_3c0 = plVar4;
    local_420 = (longlong *)0x0;
  }
LAB_1400c3655:
  plVar4 = (longlong *)param_2[0x17];
  if (plVar4 != (longlong *)0x0) {
    if (plVar4 == plVar13) {
      local_420 = (longlong *)(**(code **)(*plVar4 + 8))(plVar4,local_458);
      plVar4 = (longlong *)param_2[0x17];
      if (plVar4 == (longlong *)0x0) goto LAB_1400c36b4;
      (**(code **)(*plVar4 + 0x20))(plVar4,plVar4 != plVar13);
      plVar4 = local_420;
    }
    local_420 = plVar4;
    param_2[0x17] = 0;
  }
LAB_1400c36b4:
  if (local_3c0 != (longlong *)0x0) {
    if (local_3c0 == local_3f8) {
      lVar15 = (**(code **)(*local_3c0 + 8))(local_3c0,plVar13);
      param_2[0x17] = lVar15;
      if (local_3c0 != (longlong *)0x0) {
        (**(code **)(*local_3c0 + 0x20))
                  (local_3c0,CONCAT71((int7)((ulonglong)local_3f8 >> 8),local_3c0 != local_3f8));
      }
    }
    else {
      param_2[0x17] = (longlong)local_3c0;
    }
  }
LAB_1400c36fc:
  if (local_420 != (longlong *)0x0) {
    (**(code **)(*local_420 + 0x20))
              (local_420,CONCAT71((int7)((ulonglong)local_458 >> 8),local_420 != local_458));
  }
  if ((char)param_2[0xc] == '\0') {
    if (*(int *)((longlong)param_2 + 0x5c) != -1) {
      DVar24 = *(int *)((longlong)param_2 + 0x54) * (int)param_2[10] *
               *(int *)((longlong)param_2 + 0x4c) * 4;
    }
  }
  else {
    DVar24 = *(DWORD *)(param_2 + 0x1a);
  }
  DVar2 = *(DWORD *)((longlong)param_2 + 0x3c);
  DVar3 = *(DWORD *)(param_2 + 7);
  DVar6 = GetCurrentThreadId();
  local_208 = param_1;
  FUN_1400ce370(local_200,param_2);
  puVar8 = (undefined8 *)FUN_14028af20(0x28);
  *(undefined4 *)(puVar8 + 1) = 1;
  *(undefined4 *)((longlong)puVar8 + 0xc) = 1;
  plVar13 = puVar8 + 2;
  *puVar8 = &PTR_FUN_140485f50;
  local_410 = puVar8;
  puVar9 = (undefined8 *)FUN_14028af20(0x110);
  FUN_1400caee0(puVar9);
  *puVar9 = &PTR_FUN_140485ec0;
  puVar9[0x21] = 0;
  puVar10 = (undefined8 *)FUN_14028af20(0xe8);
  *puVar10 = &PTR_FUN_140485e90;
  puVar10[1] = local_208;
  FUN_1400cebc0(puVar10 + 2,local_200);
  puVar9[0x21] = puVar10;
  *plVar13 = (longlong)puVar9;
  *(undefined1 *)(puVar8 + 3) = 0;
  *(undefined1 *)(puVar8 + 4) = 0;
  if (local_148 != (longlong *)0x0) {
    (**(code **)(*local_148 + 0x20))
              (local_148,CONCAT71((int7)((ulonglong)local_180 >> 8),local_148 != local_180));
    local_148 = (longlong *)0x0;
  }
  FUN_1400caf90(local_198);
  FUN_140017240(local_1e8);
  FUN_1400ce370(local_128,param_2);
  puVar9 = (undefined8 *)FUN_14028af20(0x28);
  *puVar9 = &PTR_FUN_140485f50;
  *(undefined4 *)(puVar9 + 1) = 1;
  *(undefined4 *)((longlong)puVar9 + 0xc) = 1;
  local_418 = puVar9 + 2;
  puVar10 = (undefined8 *)FUN_14028af20(0x110);
  FUN_1400caee0(puVar10);
  *puVar10 = &PTR_FUN_140485ec0;
  puVar10[0x21] = 0;
  puVar11 = (undefined8 *)FUN_14028af20(0xe0);
  *puVar11 = &PTR_FUN_140485e60;
  FUN_1400cebc0(puVar11 + 1,local_128);
  puVar10[0x21] = puVar11;
  *local_418 = puVar10;
  *(undefined1 *)(puVar9 + 3) = 0;
  *(undefined1 *)(puVar9 + 4) = 0;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x20))
              (local_70,CONCAT71((int7)((ulonglong)local_a8 >> 8),local_70 != local_a8));
    local_70 = (longlong *)0x0;
  }
  FUN_1400caf90(local_c0);
  FUN_140017240(local_110);
  if ((*plVar13 == 0) || ((*(char *)(puVar8 + 3) != '\0' && (*(char *)(*plVar13 + 0xb8) != '\0'))))
  {
                    /* WARNING: Subroutine does not return */
    FUN_14009c000(4);
  }
  if (*(char *)(puVar8 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_14009c000(2);
  }
  *(undefined1 *)(puVar8 + 4) = 1;
  puVar10 = (undefined8 *)*plVar13;
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
    UNLOCK();
  }
  iVar7 = FUN_140290d80(param_1 + 0x310);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (*(int *)(param_1 + 0x35c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x35c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  local_370 = (longlong *)0x0;
  local_330 = (longlong *)0x0;
  LOCK();
  *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
  UNLOCK();
  local_328 = &PTR_LAB_140485f20;
  local_2f0 = &local_328;
  local_3b8 = DVar6;
  local_3b4 = DVar3;
  local_3b0 = DVar2;
  local_3ac = DVar24;
  local_320 = plVar13;
  local_318 = puVar8;
  FUN_140033a00(&local_328,local_3a8);
  if (local_2f0 != (undefined ***)0x0) {
    (*(code *)(*local_2f0)[4])
              (local_2f0,CONCAT71((int7)((ulonglong)&local_328 >> 8),local_2f0 != &local_328));
  }
  LOCK();
  *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
  UNLOCK();
  local_2e8 = &PTR_LAB_140485ef0;
  local_2e0 = puVar9 + 2;
  local_2b0 = &local_2e8;
  local_2d8 = puVar9;
  FUN_140033a00(&local_2e8,local_368);
  if (local_2b0 != (undefined ***)0x0) {
    (*(code *)(*local_2b0)[4])
              (local_2b0,CONCAT71((int7)((ulonglong)&local_2e8 >> 8),local_2b0 != &local_2e8));
  }
  pDVar5 = *(DWORD **)(param_1 + 0x268);
  if (pDVar5 == *(DWORD **)(param_1 + 0x270)) {
    lVar15 = (longlong)pDVar5 - *(longlong *)(param_1 + 0x260);
    lVar15 = lVar15 / 0x12 + (lVar15 >> 0x3f);
    uVar20 = 0x1c71c71c71c71c7;
    lVar15 = (lVar15 >> 3) - (lVar15 >> 0x3f);
    if (lVar15 == 0x1c71c71c71c71c7) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar23 = lVar15 + 1;
    uVar21 = ((longlong)*(DWORD **)(param_1 + 0x270) - *(longlong *)(param_1 + 0x260) >> 4) *
             -0x71c71c71c71c71c7;
    uVar18 = 0x1c71c71c71c71c7 - (uVar21 >> 1);
    if (uVar21 < uVar18 || uVar21 - uVar18 == 0) {
      uVar21 = (uVar21 >> 1) + uVar21;
      uVar20 = uVar23;
      if (uVar23 <= uVar21) {
        uVar20 = uVar21;
      }
      if (0x1c71c71c71c71c7 < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
    }
    lVar14 = FUN_140017390(uVar20 * 0x90);
    lVar17 = lVar15 * 0x90 + lVar14;
    FUN_14009c120(lVar17,&local_3b8);
    pDVar19 = *(DWORD **)(param_1 + 0x268);
    pDVar16 = *(DWORD **)(param_1 + 0x260);
    lVar15 = lVar14;
    if (pDVar5 != pDVar19) {
      FUN_1400ce230(*(DWORD **)(param_1 + 0x260),pDVar5,lVar14);
      pDVar19 = *(DWORD **)(param_1 + 0x268);
      lVar15 = lVar17 + 0x90;
      pDVar16 = pDVar5;
    }
    FUN_1400ce230(pDVar16,pDVar19,lVar15);
    if (*(longlong *)(param_1 + 0x260) != 0) {
      uVar25 = FUN_1400cb330(*(longlong *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x268));
      FUN_1400cd1d0(uVar25,*(longlong *)(param_1 + 0x260),
                    (*(longlong *)(param_1 + 0x270) - *(longlong *)(param_1 + 0x260) >> 4) *
                    -0x71c71c71c71c71c7);
    }
    *(longlong *)(param_1 + 0x260) = lVar14;
    lVar15 = uVar23 * 0x90 + lVar14;
    *(longlong *)(param_1 + 0x268) = lVar15;
    *(ulonglong *)(param_1 + 0x270) = uVar20 * 0x90 + lVar14;
    puVar8 = local_410;
  }
  else {
    *pDVar5 = local_3b8;
    pDVar5[1] = local_3b4;
    pDVar5[2] = local_3b0;
    pDVar5[3] = local_3ac;
    pDVar5[0x12] = 0;
    pDVar5[0x13] = 0;
    if (local_370 != (longlong *)0x0) {
      uVar12 = (**(code **)*local_370)(local_370,pDVar5 + 4);
      *(undefined8 *)(pDVar5 + 0x12) = uVar12;
    }
    pDVar5[0x22] = 0;
    pDVar5[0x23] = 0;
    if (local_330 != (longlong *)0x0) {
      uVar12 = (**(code **)*local_330)(local_330,pDVar5 + 0x14);
      *(undefined8 *)(pDVar5 + 0x22) = uVar12;
    }
    *(longlong *)(param_1 + 0x268) = *(longlong *)(param_1 + 0x268) + 0x90;
    lVar15 = *(longlong *)(param_1 + 0x268);
  }
  lVar14 = *(longlong *)(param_1 + 0x260);
  lVar17 = lVar15 - lVar14;
  lVar17 = lVar17 / 0x12 + (lVar17 >> 0x3f);
  lVar17 = (lVar17 >> 3) - (lVar17 >> 0x3f);
  if (1 < lVar17) {
    local_2a8 = *(undefined4 *)(lVar15 + -0x90);
    local_2a4 = *(undefined4 *)(lVar15 + -0x8c);
    local_2a0 = *(undefined4 *)(lVar15 + -0x88);
    local_29c = *(undefined4 *)(lVar15 + -0x84);
    local_260 = (longlong *)0x0;
    FUN_140037830(local_298,lVar15 + -0x80);
    local_220 = (longlong *)0x0;
    FUN_140037830(local_258,lVar15 + -0x40);
    FUN_1400cd2f0(lVar14,lVar17 + -1,0,&local_2a8,param_1 + 0x278);
    if (local_220 != (longlong *)0x0) {
      (**(code **)(*local_220 + 0x20))
                (local_220,CONCAT71((int7)((ulonglong)local_258 >> 8),local_220 != local_258));
      local_220 = (longlong *)0x0;
    }
    if (local_260 != (longlong *)0x0) {
      (**(code **)(*local_260 + 0x20))
                (local_260,CONCAT71((int7)((ulonglong)local_298 >> 8),local_260 != local_298));
    }
  }
  FUN_140290ef0(param_1 + 0x360);
  if (local_330 != (longlong *)0x0) {
    (**(code **)(*local_330 + 0x20))
              (local_330,CONCAT71((int7)((ulonglong)local_368 >> 8),local_330 != local_368));
    local_330 = (longlong *)0x0;
  }
  if (local_370 != (longlong *)0x0) {
    (**(code **)(*local_370 + 0x20))
              (local_370,CONCAT71((int7)((ulonglong)local_3a8 >> 8),local_370 != local_3a8));
    local_370 = (longlong *)0x0;
  }
  FUN_140290ea0(param_1 + 0x310);
  FUN_14003b430(puVar9);
  FUN_14003b430(puVar8);
  plVar13 = (longlong *)FUN_14028af20(0x28);
  *plVar13 = 0;
  plVar13[1] = 0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  plVar13[4] = 0;
  if (plVar13 != local_218) {
    *(undefined1 *)(plVar13 + 1) = 1;
    *plVar13 = (longlong)puVar10;
    puVar10 = (undefined8 *)0x0;
  }
  *(int *)(plVar13 + 2) = (int)param_2[0x18];
  plVar13[3] = *param_2;
  *(int *)(plVar13 + 4) = (int)param_2[7];
  lVar15 = *(longlong *)(local_408 + 0x2a0);
  puVar8 = *(undefined8 **)(lVar15 + 0x10);
  if (puVar8 == *(undefined8 **)(lVar15 + 0x18)) {
    uVar23 = (longlong)puVar8 - *(longlong *)(lVar15 + 8);
    uVar20 = 0x1fffffffffffffff;
    lVar14 = (longlong)uVar23 >> 3;
    if (lVar14 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar21 = lVar14 + 1;
    uVar18 = (longlong)*(undefined8 **)(lVar15 + 0x18) - *(longlong *)(lVar15 + 8) >> 3;
    if (uVar18 <= 0x1fffffffffffffff - (uVar18 >> 1)) {
      uVar18 = (uVar18 >> 1) + uVar18;
      uVar20 = uVar21;
      if (uVar21 <= uVar18) {
        uVar20 = uVar18;
      }
      if (0x1fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
    }
    lVar14 = FUN_140017390(uVar20 * 8);
    uVar23 = uVar23 & 0xfffffffffffffff8;
    *(longlong **)(uVar23 + lVar14) = plVar13;
    puVar9 = *(undefined8 **)(lVar15 + 8);
    if (puVar8 == *(undefined8 **)(lVar15 + 0x10)) {
      lVar22 = (longlong)*(undefined8 **)(lVar15 + 0x10) - (longlong)puVar9;
      lVar17 = lVar14;
      puVar8 = puVar9;
    }
    else {
      FUN_1404210f0(lVar14,puVar9,(longlong)puVar8 - (longlong)puVar9);
      lVar17 = uVar23 + 8 + lVar14;
      lVar22 = *(longlong *)(lVar15 + 0x10) - (longlong)puVar8;
    }
    uVar25 = FUN_1404210f0(lVar17,puVar8,lVar22);
    lVar17 = *(longlong *)(lVar15 + 8);
    if (lVar17 != 0) {
      FUN_140037480(uVar25,lVar17,*(longlong *)(lVar15 + 0x18) - lVar17 >> 3);
    }
    *(longlong *)(lVar15 + 8) = lVar14;
    *(ulonglong *)(lVar15 + 0x10) = lVar14 + uVar21 * 8;
    *(ulonglong *)(lVar15 + 0x18) = uVar20 * 8 + lVar14;
  }
  else {
    *puVar8 = plVar13;
    *(longlong *)(lVar15 + 0x10) = *(longlong *)(lVar15 + 0x10) + 8;
  }
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    iVar7 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      puVar8 = (undefined8 *)puVar10[0x19];
      if (puVar8 == (undefined8 *)0x0) {
        (**(code **)*puVar10)(puVar10,1);
      }
      else {
        (**(code **)*puVar8)(puVar8,puVar10);
      }
    }
  }
  return;
}

