// Function: FUN_1400c8e60
// Addr: 1400c8e60
// Size: 1204 bytes


void FUN_1400c8e60(longlong param_1)

{
  HANDLE hProcess;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  undefined1 auStack_868 [8];
  undefined1 auStack_860 [24];
  undefined8 local_848;
  uint uStack_840;
  undefined1 auStack_83c [1012];
  undefined8 local_448 [129];
  
  puVar23 = auStack_868;
  plVar16 = (longlong *)(param_1 + 0x668);
  if (*plVar16 != -1) {
    iVar27 = 0;
    do {
      iVar25 = -1;
      FUN_1404217a0(auStack_83c,0,0x3f4);
      local_848 = 5;
      lVar19 = 8;
      uStack_840 = 0x3f4;
      if ((uint)(iVar27 * -0x3f4) < 0x3f4) {
        uStack_840 = iVar27 * -0x3f4;
      }
      puVar15 = local_448;
      puVar17 = &local_848;
      do {
        uVar14 = puVar17[1];
        uVar10 = puVar17[2];
        uVar11 = puVar17[3];
        *puVar15 = *puVar17;
        puVar15[1] = uVar14;
        uVar14 = puVar17[4];
        uVar12 = puVar17[5];
        puVar15[2] = uVar10;
        puVar15[3] = uVar11;
        uVar10 = puVar17[6];
        uVar11 = puVar17[7];
        puVar15[4] = uVar14;
        puVar15[5] = uVar12;
        uVar14 = puVar17[8];
        uVar12 = puVar17[9];
        puVar15[6] = uVar10;
        puVar15[7] = uVar11;
        uVar10 = puVar17[10];
        uVar11 = puVar17[0xb];
        puVar15[8] = uVar14;
        puVar15[9] = uVar12;
        uVar2 = *(undefined4 *)(puVar17 + 0xc);
        uVar3 = *(undefined4 *)((longlong)puVar17 + 100);
        uVar4 = *(undefined4 *)(puVar17 + 0xd);
        uVar5 = *(undefined4 *)((longlong)puVar17 + 0x6c);
        puVar15[10] = uVar10;
        puVar15[0xb] = uVar11;
        uVar6 = *(undefined4 *)(puVar17 + 0xe);
        uVar7 = *(undefined4 *)((longlong)puVar17 + 0x74);
        uVar8 = *(undefined4 *)(puVar17 + 0xf);
        uVar9 = *(undefined4 *)((longlong)puVar17 + 0x7c);
        *(undefined4 *)(puVar15 + 0xc) = uVar2;
        *(undefined4 *)((longlong)puVar15 + 100) = uVar3;
        *(undefined4 *)(puVar15 + 0xd) = uVar4;
        *(undefined4 *)((longlong)puVar15 + 0x6c) = uVar5;
        *(undefined4 *)(puVar15 + 0xe) = uVar6;
        *(undefined4 *)((longlong)puVar15 + 0x74) = uVar7;
        *(undefined4 *)(puVar15 + 0xf) = uVar8;
        *(undefined4 *)((longlong)puVar15 + 0x7c) = uVar9;
        lVar19 = lVar19 + -1;
        puVar15 = puVar15 + 0x10;
        puVar17 = puVar17 + 0x10;
      } while (lVar19 != 0);
      iVar13 = FUN_140290d80(param_1 + 0x758);
      if (iVar13 != 0) goto LAB_1400c9301;
      if (*(int *)(param_1 + 0x7a4) == 0x7fffffff) {
        *(int *)(param_1 + 0x7a4) = *(int *)(param_1 + 0x7a4) + -1;
        goto LAB_1400c92f6;
      }
      uVar22 = *(ulonglong *)(param_1 + 0x7b8);
      if (uVar22 <= *(longlong *)(param_1 + 0x7c8) + 1U) {
        uVar21 = 1;
        if (uVar22 != 0) {
          uVar21 = uVar22;
        }
        for (; (uVar21 == uVar22 || (uVar21 < 8)); uVar21 = uVar21 * 2) {
          if (0x3fffffffffffff - uVar21 < uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_140082f20();
          }
        }
        if (0x1fffffffffffffff < uVar21) {
LAB_1400c930c:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar20 = *(ulonglong *)(param_1 + 0x7c0);
        uVar22 = uVar21 * 8;
        if (uVar22 != 0) {
          if (uVar22 < 0x1000) {
            uVar22 = FUN_14028af20();
            goto LAB_1400c9015;
          }
          if (uVar22 + 0x27 <= uVar22) goto LAB_1400c930c;
          lVar19 = FUN_14028af20(uVar22 + 0x27);
          if (lVar19 != 0) {
            uVar22 = lVar19 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar22 - 8) = lVar19;
            goto LAB_1400c9015;
          }
LAB_1400c929c:
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar23 = auStack_860;
          goto LAB_1400c92a3;
        }
        uVar22 = 0;
LAB_1400c9015:
        lVar19 = uVar20 * 8;
        uVar18 = uVar21 >> 1;
        for (; uVar21 <= uVar18; uVar21 = uVar21 * 2) {
        }
        uVar21 = uVar21 - *(longlong *)(param_1 + 0x7b8);
        lVar26 = (*(longlong *)(param_1 + 0x7b8) - uVar20) * 8;
        FUN_1404210f0(lVar19 + uVar22,*(longlong *)(param_1 + 0x7b0) + lVar19,lVar26);
        lVar26 = lVar26 + lVar19 + uVar22;
        if (uVar21 < uVar20) {
          lVar19 = uVar21 * 8;
          FUN_1404210f0(lVar26,*(undefined8 *)(param_1 + 0x7b0),lVar19);
          lVar26 = (uVar20 - uVar21) * 8;
          FUN_1404210f0(uVar22,*(longlong *)(param_1 + 0x7b0) + lVar19,lVar26);
          uVar20 = uVar22 + lVar26;
        }
        else {
          FUN_1404210f0(lVar26,*(undefined8 *)(param_1 + 0x7b0),lVar19);
          FUN_1404217a0(lVar26 + lVar19,0,(uVar21 - uVar20) * 8);
          uVar20 = uVar22;
        }
        iVar25 = (int)lVar26;
        FUN_1404217a0(uVar20,0,lVar19);
        lVar19 = *(longlong *)(param_1 + 0x7b0);
        if (lVar19 != 0) {
          uVar20 = *(longlong *)(param_1 + 0x7b8) * 8;
          if (0xfff < uVar20) {
            if (0x1f < (lVar19 - *(longlong *)(lVar19 + -8)) - 8U) goto LAB_1400c929c;
            uVar20 = uVar20 + 0x27;
            lVar19 = *(longlong *)(lVar19 + -8);
          }
          thunk_FUN_14028af80(lVar19,uVar20);
        }
        *(ulonglong *)(param_1 + 0x7b0) = uVar22;
        *(longlong *)(param_1 + 0x7b8) = *(longlong *)(param_1 + 0x7b8) + uVar21;
        uVar22 = *(ulonglong *)(param_1 + 0x7b8);
      }
      *(ulonglong *)(param_1 + 0x7c0) = *(ulonglong *)(param_1 + 0x7c0) & uVar22 - 1;
      uVar21 = *(longlong *)(param_1 + 0x7c8) + *(longlong *)(param_1 + 0x7c0);
      uVar22 = uVar22 - 1 & uVar21;
      if (*(longlong *)(*(longlong *)(param_1 + 0x7b0) + uVar22 * 8) == 0) {
        uVar14 = FUN_14028af20(0x400);
        *(undefined8 *)(*(longlong *)(param_1 + 0x7b0) + uVar22 * 8) = uVar14;
      }
      lVar19 = 8;
      puVar15 = local_448;
      puVar17 = *(undefined8 **)
                 (*(longlong *)(param_1 + 0x7b0) +
                 (*(longlong *)(param_1 + 0x7b8) - 1U & uVar21) * 8);
      do {
        uVar14 = puVar15[1];
        uVar10 = puVar15[2];
        uVar11 = puVar15[3];
        *puVar17 = *puVar15;
        puVar17[1] = uVar14;
        uVar14 = puVar15[4];
        uVar12 = puVar15[5];
        puVar17[2] = uVar10;
        puVar17[3] = uVar11;
        uVar10 = puVar15[6];
        uVar11 = puVar15[7];
        puVar17[4] = uVar14;
        puVar17[5] = uVar12;
        uVar14 = puVar15[8];
        uVar12 = puVar15[9];
        puVar17[6] = uVar10;
        puVar17[7] = uVar11;
        uVar10 = puVar15[10];
        uVar11 = puVar15[0xb];
        puVar17[8] = uVar14;
        puVar17[9] = uVar12;
        uVar2 = *(undefined4 *)(puVar15 + 0xc);
        uVar3 = *(undefined4 *)((longlong)puVar15 + 100);
        uVar4 = *(undefined4 *)(puVar15 + 0xd);
        uVar5 = *(undefined4 *)((longlong)puVar15 + 0x6c);
        puVar17[10] = uVar10;
        puVar17[0xb] = uVar11;
        uVar6 = *(undefined4 *)(puVar15 + 0xe);
        uVar7 = *(undefined4 *)((longlong)puVar15 + 0x74);
        uVar8 = *(undefined4 *)(puVar15 + 0xf);
        uVar9 = *(undefined4 *)((longlong)puVar15 + 0x7c);
        *(undefined4 *)(puVar17 + 0xc) = uVar2;
        *(undefined4 *)((longlong)puVar17 + 100) = uVar3;
        *(undefined4 *)(puVar17 + 0xd) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0x6c) = uVar5;
        *(undefined4 *)(puVar17 + 0xe) = uVar6;
        *(undefined4 *)((longlong)puVar17 + 0x74) = uVar7;
        *(undefined4 *)(puVar17 + 0xf) = uVar8;
        *(undefined4 *)((longlong)puVar17 + 0x7c) = uVar9;
        lVar19 = lVar19 + -1;
        puVar15 = puVar15 + 0x10;
        puVar17 = puVar17 + 0x10;
      } while (lVar19 != 0);
      *(longlong *)(param_1 + 0x7c8) = *(longlong *)(param_1 + 0x7c8) + 1;
      FUN_140290ef0(param_1 + 2000);
      FUN_140290ea0(param_1 + 0x758);
      iVar27 = iVar27 + 1;
    } while (iVar27 < 1);
    thunk_FUN_14028af80(0);
    iVar27 = FUN_140290d80(param_1 + 0x758);
    if (iVar27 != 0) {
LAB_1400c9301:
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    iVar25 = 3000;
    do {
      if (*(int *)(param_1 + 0x7a4) == 0x7fffffff) {
        *(undefined4 *)(param_1 + 0x7a4) = 0x7ffffffe;
LAB_1400c92f6:
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      lVar19 = *(longlong *)(param_1 + 0x7c8);
      FUN_140290ea0(param_1 + 0x758);
      if (lVar19 == 0) goto LAB_1400c92a3;
      puVar24 = auStack_868;
      if (iVar25 < 1) goto LAB_1400c92a7;
      Sleep(1);
      iVar27 = FUN_140290d80(param_1 + 0x758);
      if (iVar27 != 0) goto LAB_1400c9301;
      iVar25 = iVar25 + -1;
    } while( true );
  }
LAB_1400c92cb:
  FUN_140084130(plVar16);
  return;
LAB_1400c92a3:
  puVar24 = puVar23;
  if (iVar25 < 1) {
LAB_1400c92a7:
    plVar16 = *(longlong **)(puVar24 + 0x870);
    hProcess = (HANDLE)*plVar16;
    if (hProcess == (HANDLE)0xffffffffffffffff) goto LAB_1400c92cb;
    *(undefined8 *)(puVar24 + -8) = 0x1400c92c3;
    TerminateProcess(hProcess,0xffffffff);
    puVar23 = puVar24;
  }
  plVar16 = *(longlong **)(puVar23 + 0x870);
  goto LAB_1400c92cb;
}

