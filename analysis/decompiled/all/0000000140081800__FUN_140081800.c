// Function: FUN_140081800
// Addr: 140081800
// Size: 1440 bytes


void FUN_140081800(char *param_1)

{
  longlong *plVar1;
  HANDLE pvVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong unaff_R15;
  undefined1 auStack_848 [8];
  undefined1 auStack_840 [24];
  undefined4 local_828;
  undefined1 auStack_824 [1020];
  undefined8 local_428 [128];
  
  puVar21 = auStack_848;
  puVar22 = auStack_848;
  if (*param_1 == '\0') {
    return;
  }
  local_828 = 0;
  FUN_1404217a0(auStack_824,0,0x3fc);
  lVar23 = 8;
  lVar20 = 8;
  puVar18 = local_428;
  puVar19 = (undefined8 *)&local_828;
  do {
    uVar17 = puVar19[1];
    uVar12 = puVar19[2];
    uVar13 = puVar19[3];
    *puVar18 = *puVar19;
    puVar18[1] = uVar17;
    uVar17 = puVar19[4];
    uVar14 = puVar19[5];
    puVar18[2] = uVar12;
    puVar18[3] = uVar13;
    uVar12 = puVar19[6];
    uVar13 = puVar19[7];
    puVar18[4] = uVar17;
    puVar18[5] = uVar14;
    uVar17 = puVar19[8];
    uVar14 = puVar19[9];
    puVar18[6] = uVar12;
    puVar18[7] = uVar13;
    uVar12 = puVar19[10];
    uVar13 = puVar19[0xb];
    puVar18[8] = uVar17;
    puVar18[9] = uVar14;
    uVar4 = *(undefined4 *)(puVar19 + 0xc);
    uVar5 = *(undefined4 *)((longlong)puVar19 + 100);
    uVar6 = *(undefined4 *)(puVar19 + 0xd);
    uVar7 = *(undefined4 *)((longlong)puVar19 + 0x6c);
    puVar18[10] = uVar12;
    puVar18[0xb] = uVar13;
    uVar8 = *(undefined4 *)(puVar19 + 0xe);
    uVar9 = *(undefined4 *)((longlong)puVar19 + 0x74);
    uVar10 = *(undefined4 *)(puVar19 + 0xf);
    uVar11 = *(undefined4 *)((longlong)puVar19 + 0x7c);
    *(undefined4 *)(puVar18 + 0xc) = uVar4;
    *(undefined4 *)((longlong)puVar18 + 100) = uVar5;
    *(undefined4 *)(puVar18 + 0xd) = uVar6;
    *(undefined4 *)((longlong)puVar18 + 0x6c) = uVar7;
    *(undefined4 *)(puVar18 + 0xe) = uVar8;
    *(undefined4 *)((longlong)puVar18 + 0x74) = uVar9;
    *(undefined4 *)(puVar18 + 0xf) = uVar10;
    *(undefined4 *)((longlong)puVar18 + 0x7c) = uVar11;
    lVar20 = lVar20 + -1;
    puVar18 = puVar18 + 0x10;
    puVar19 = puVar19 + 0x10;
  } while (lVar20 != 0);
  iVar15 = FUN_140290d80(param_1 + 0x80);
  if (iVar15 != 0) goto LAB_140081d8d;
  if (*(int *)(param_1 + 0xcc) == 0x7fffffff) {
    param_1[0xcc] = -2;
    param_1[0xcd] = -1;
    param_1[0xce] = -1;
    param_1[0xcf] = '\x7f';
    puVar22 = auStack_848;
    goto LAB_140081d82;
  }
  uVar25 = *(ulonglong *)(param_1 + 0xe0);
  puVar22 = auStack_848;
  if (uVar25 <= *(longlong *)(param_1 + 0xf0) + 1U) {
    uVar26 = 1;
    if (uVar25 != 0) {
      uVar26 = uVar25;
    }
    for (; (uVar26 == uVar25 || (uVar26 < 8)); uVar26 = uVar26 * 2) {
      if (0x3fffffffffffff - uVar26 < uVar26) {
                    /* WARNING: Subroutine does not return */
        FUN_140082f20();
      }
    }
    uVar25 = *(ulonglong *)(param_1 + 0xe8);
    if (0x1fffffffffffffff < uVar26) {
LAB_140081d98:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar16 = uVar26 * 8;
    if (uVar16 == 0) {
      unaff_R15 = 0;
LAB_1400819be:
      uVar16 = uVar26 >> 1;
      lVar20 = uVar25 * 8;
      for (; uVar26 <= uVar16; uVar26 = uVar26 * 2) {
      }
      uVar26 = uVar26 - *(longlong *)(param_1 + 0xe0);
      lVar24 = (*(longlong *)(param_1 + 0xe0) - uVar25) * 8;
      FUN_1404210f0(lVar20 + unaff_R15,*(longlong *)(param_1 + 0xd8) + lVar20,lVar24);
      lVar24 = lVar24 + lVar20 + unaff_R15;
      if (uVar26 < uVar25) {
        lVar20 = uVar26 * 8;
        FUN_1404210f0(lVar24,*(undefined8 *)(param_1 + 0xd8),lVar20);
        lVar24 = (uVar25 - uVar26) * 8;
        FUN_1404210f0(unaff_R15,*(longlong *)(param_1 + 0xd8) + lVar20,lVar24);
        uVar25 = unaff_R15 + lVar24;
      }
      else {
        FUN_1404210f0(lVar24,*(undefined8 *)(param_1 + 0xd8),lVar20);
        FUN_1404217a0(lVar24 + lVar20,0,(uVar26 - uVar25) * 8);
        uVar25 = unaff_R15;
      }
      FUN_1404217a0(uVar25,0,lVar20);
      lVar20 = *(longlong *)(param_1 + 0xd8);
      if (lVar20 != 0) {
        lVar24 = lVar20;
        puVar21 = auStack_848;
        if ((0xfff < (ulonglong)(*(longlong *)(param_1 + 0xe0) * 8)) &&
           (lVar24 = *(longlong *)(lVar20 + -8), puVar21 = auStack_848,
           0x1f < (lVar20 - lVar24) - 8U)) goto LAB_140081ac6;
        goto LAB_140081ad0;
      }
    }
    else {
      if (uVar16 < 0x1000) {
        unaff_R15 = FUN_14028af20();
        goto LAB_1400819be;
      }
      if (uVar16 + 0x27 <= uVar16) goto LAB_140081d98;
      lVar20 = FUN_14028af20(uVar16 + 0x27);
      if (lVar20 != 0) {
        unaff_R15 = lVar20 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(unaff_R15 - 8) = lVar20;
        goto LAB_1400819be;
      }
LAB_140081ac6:
      lVar24 = 5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)(5);
      puVar21 = auStack_840;
LAB_140081ad0:
      *(undefined8 *)(puVar21 + -8) = 0x140081ad8;
      thunk_FUN_14028af80(lVar24);
    }
    *(ulonglong *)(param_1 + 0xd8) = unaff_R15;
    *(ulonglong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + uVar26;
    uVar25 = *(ulonglong *)(param_1 + 0xe0);
    puVar22 = puVar21;
  }
  *(ulonglong *)(param_1 + 0xe8) = *(ulonglong *)(param_1 + 0xe8) & uVar25 - 1;
  lVar20 = *(longlong *)(param_1 + 0xf0);
  lVar24 = *(longlong *)(param_1 + 0xe8);
  uVar25 = uVar25 - 1 & lVar20 + lVar24;
  if (*(longlong *)(*(longlong *)(param_1 + 0xd8) + uVar25 * 8) == 0) {
    *(undefined8 *)(puVar22 + -8) = 0x140081b28;
    uVar17 = FUN_14028af20(0x400);
    *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + uVar25 * 8) = uVar17;
  }
  puVar18 = (undefined8 *)(puVar22 + 0x420);
  puVar19 = *(undefined8 **)
             (*(longlong *)(param_1 + 0xd8) +
             (*(longlong *)(param_1 + 0xe0) - 1U & lVar20 + lVar24) * 8);
  do {
    uVar17 = puVar18[1];
    uVar12 = puVar18[2];
    uVar13 = puVar18[3];
    *puVar19 = *puVar18;
    puVar19[1] = uVar17;
    uVar17 = puVar18[4];
    uVar14 = puVar18[5];
    puVar19[2] = uVar12;
    puVar19[3] = uVar13;
    uVar12 = puVar18[6];
    uVar13 = puVar18[7];
    puVar19[4] = uVar17;
    puVar19[5] = uVar14;
    uVar17 = puVar18[8];
    uVar14 = puVar18[9];
    puVar19[6] = uVar12;
    puVar19[7] = uVar13;
    uVar12 = puVar18[10];
    uVar13 = puVar18[0xb];
    puVar19[8] = uVar17;
    puVar19[9] = uVar14;
    uVar4 = *(undefined4 *)(puVar18 + 0xc);
    uVar5 = *(undefined4 *)((longlong)puVar18 + 100);
    uVar6 = *(undefined4 *)(puVar18 + 0xd);
    uVar7 = *(undefined4 *)((longlong)puVar18 + 0x6c);
    puVar19[10] = uVar12;
    puVar19[0xb] = uVar13;
    uVar8 = *(undefined4 *)(puVar18 + 0xe);
    uVar9 = *(undefined4 *)((longlong)puVar18 + 0x74);
    uVar10 = *(undefined4 *)(puVar18 + 0xf);
    uVar11 = *(undefined4 *)((longlong)puVar18 + 0x7c);
    *(undefined4 *)(puVar19 + 0xc) = uVar4;
    *(undefined4 *)((longlong)puVar19 + 100) = uVar5;
    *(undefined4 *)(puVar19 + 0xd) = uVar6;
    *(undefined4 *)((longlong)puVar19 + 0x6c) = uVar7;
    *(undefined4 *)(puVar19 + 0xe) = uVar8;
    *(undefined4 *)((longlong)puVar19 + 0x74) = uVar9;
    *(undefined4 *)(puVar19 + 0xf) = uVar10;
    *(undefined4 *)((longlong)puVar19 + 0x7c) = uVar11;
    lVar23 = lVar23 + -1;
    puVar18 = puVar18 + 0x10;
    puVar19 = puVar19 + 0x10;
  } while (lVar23 != 0);
  *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + 1;
  *(undefined8 *)(puVar22 + -8) = 0x140081bc6;
  FUN_140290ef0(param_1 + 0xf8);
  *(undefined8 *)(puVar22 + -8) = 0x140081bce;
  FUN_140290ea0(param_1 + 0x80);
  LOCK();
  *param_1 = '\0';
  UNLOCK();
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (pvVar2 = *(HANDLE *)(param_1 + 0x60), pvVar2 != (HANDLE)0x0)) {
    *(undefined8 *)(puVar22 + -8) = 0x140081be6;
    CancelSynchronousIo(pvVar2);
  }
  pvVar2 = *(HANDLE *)(param_1 + 8);
  if (pvVar2 != (HANDLE)0xffffffffffffffff) {
    *(undefined8 *)(puVar22 + -8) = 0x140081bf6;
    CloseHandle(pvVar2);
  }
  pvVar2 = *(HANDLE *)(param_1 + 0x10);
  param_1[8] = -1;
  param_1[9] = -1;
  param_1[10] = -1;
  param_1[0xb] = -1;
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  param_1[0xe] = -1;
  param_1[0xf] = -1;
  if (pvVar2 != (HANDLE)0xffffffffffffffff) {
    *(undefined8 *)(puVar22 + -8) = 0x140081c0e;
    CloseHandle(pvVar2);
  }
  param_1[0x10] = -1;
  param_1[0x11] = -1;
  param_1[0x12] = -1;
  param_1[0x13] = -1;
  param_1[0x14] = -1;
  param_1[0x15] = -1;
  param_1[0x16] = -1;
  param_1[0x17] = -1;
  if ((*(int *)(param_1 + 0x68) != 0) && (*(longlong *)(param_1 + 0x60) != 0)) {
    *(undefined8 *)(puVar22 + -8) = 0x140081c2c;
    FUN_1400150a0(param_1 + 0x60);
  }
  if ((*(int *)(param_1 + 0x78) != 0) && (*(longlong *)(param_1 + 0x70) != 0)) {
    *(undefined8 *)(puVar22 + -8) = 0x140081c42;
    FUN_1400150a0(param_1 + 0x70);
  }
  *(undefined8 *)(puVar22 + -8) = 0x140081c4a;
  FUN_140081db0(param_1);
  *(undefined8 *)(puVar22 + -8) = 0x140081c52;
  FUN_140082e40(param_1 + 0x80);
  *(undefined8 *)(puVar22 + -8) = 0x140081c5e;
  iVar15 = FUN_140290d80(param_1 + 0x140);
  if (iVar15 != 0) goto LAB_140081d8d;
  iVar15 = *(int *)(param_1 + 0x18c);
  if (iVar15 != 0x7fffffff) {
    lVar20 = *(longlong *)(param_1 + 0x1b0);
    *(undefined8 *)(puVar22 + -8) = 0x140081c8a;
    FUN_140290ea0(param_1 + 0x140);
    if (lVar20 == 0) {
      if (*(longlong *)(param_1 + 0x200) == *(longlong *)(param_1 + 0x208)) {
        return;
      }
      lVar20 = *(longlong *)(param_1 + 0x200);
LAB_140081cbc:
      *(longlong *)(param_1 + 0x208) = lVar20;
    }
    else {
      lVar20 = *(longlong *)(param_1 + 0x200);
      if (lVar20 != *(longlong *)(param_1 + 0x208)) goto LAB_140081cbc;
    }
    *(undefined8 *)(puVar22 + -8) = 0x140081ccf;
    iVar15 = FUN_140290d80(param_1 + 0x140);
    if (iVar15 != 0) {
LAB_140081d8d:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar22 + -8) = &UNK_140081d97;
      FUN_140290d30(5);
    }
    iVar15 = *(int *)(param_1 + 0x18c);
    if (iVar15 != 0x7fffffff) {
      if (*(longlong *)(param_1 + 0x1b0) != 0) {
        while( true ) {
          uVar17 = *(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x198) +
                      (*(longlong *)(param_1 + 0x1a0) - 1U & *(ulonglong *)(param_1 + 0x1a8)) * 8) +
                    0x18);
          *(undefined8 *)(puVar22 + -8) = 0x140081d17;
          thunk_FUN_14028af80(uVar17);
          plVar1 = (longlong *)(param_1 + 0x1b0);
          *plVar1 = *plVar1 + -1;
          if (*plVar1 == 0) break;
          *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + 1;
        }
        param_1[0x1a8] = '\0';
        param_1[0x1a9] = '\0';
        param_1[0x1aa] = '\0';
        param_1[0x1ab] = '\0';
        param_1[0x1ac] = '\0';
        param_1[0x1ad] = '\0';
        param_1[0x1ae] = '\0';
        param_1[0x1af] = '\0';
      }
      *(undefined8 *)(puVar22 + -8) = 0x140081d41;
      FUN_140290ea0(param_1 + 0x140);
      return;
    }
  }
  *(int *)(param_1 + 0x18c) = iVar15 + -1;
LAB_140081d82:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_140081d8c;
  FUN_140290d30(6);
}

