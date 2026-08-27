// Function: FUN_1400182d0
// Addr: 1400182d0
// Size: 1218 bytes


void FUN_1400182d0(longlong param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  undefined4 local_838;
  int iStack_834;
  uint uStack_830;
  undefined1 auStack_82c [1012];
  undefined8 local_438 [128];
  
  uVar18 = (uint)(param_2[1] != ((uint)param_2[1] / 0x3f4) * 0x3f4) + (uint)param_2[1] / 0x3f4;
  uVar22 = 1;
  if (1 < uVar18) {
    uVar22 = uVar18;
  }
  if (uVar22 != 0) {
    iVar24 = 0;
    do {
      FUN_1404217a0(&uStack_830,0,0x3f8);
      local_838 = *param_2;
      if (uVar22 == 1) {
        iStack_834 = 0;
      }
      else if (iVar24 == 0) {
        iStack_834 = 1;
      }
      else {
        iStack_834 = (iVar24 == uVar22 - 1) + 2;
      }
      uVar18 = param_2[1] + iVar24 * -0x3f4;
      uStack_830 = 0x3f4;
      if (uVar18 < 0x3f4) {
        uStack_830 = uVar18;
      }
      if (*(longlong *)(param_2 + 2) != 0) {
        FUN_1404210f0(auStack_82c,(longlong)(iVar24 * 0x3f4) + *(longlong *)(param_2 + 2),
                      (longlong)(int)uStack_830);
      }
      lVar20 = 8;
      puVar17 = local_438;
      puVar19 = (undefined8 *)&local_838;
      do {
        uVar16 = puVar19[1];
        uVar11 = puVar19[2];
        uVar12 = puVar19[3];
        *puVar17 = *puVar19;
        puVar17[1] = uVar16;
        uVar16 = puVar19[4];
        uVar13 = puVar19[5];
        puVar17[2] = uVar11;
        puVar17[3] = uVar12;
        uVar11 = puVar19[6];
        uVar12 = puVar19[7];
        puVar17[4] = uVar16;
        puVar17[5] = uVar13;
        uVar16 = puVar19[8];
        uVar13 = puVar19[9];
        puVar17[6] = uVar11;
        puVar17[7] = uVar12;
        uVar11 = puVar19[10];
        uVar12 = puVar19[0xb];
        puVar17[8] = uVar16;
        puVar17[9] = uVar13;
        uVar3 = *(undefined4 *)(puVar19 + 0xc);
        uVar4 = *(undefined4 *)((longlong)puVar19 + 100);
        uVar5 = *(undefined4 *)(puVar19 + 0xd);
        uVar6 = *(undefined4 *)((longlong)puVar19 + 0x6c);
        puVar17[10] = uVar11;
        puVar17[0xb] = uVar12;
        uVar7 = *(undefined4 *)(puVar19 + 0xe);
        uVar8 = *(undefined4 *)((longlong)puVar19 + 0x74);
        uVar9 = *(undefined4 *)(puVar19 + 0xf);
        uVar10 = *(undefined4 *)((longlong)puVar19 + 0x7c);
        *(undefined4 *)(puVar17 + 0xc) = uVar3;
        *(undefined4 *)((longlong)puVar17 + 100) = uVar4;
        *(undefined4 *)(puVar17 + 0xd) = uVar5;
        *(undefined4 *)((longlong)puVar17 + 0x6c) = uVar6;
        *(undefined4 *)(puVar17 + 0xe) = uVar7;
        *(undefined4 *)((longlong)puVar17 + 0x74) = uVar8;
        *(undefined4 *)(puVar17 + 0xf) = uVar9;
        *(undefined4 *)((longlong)puVar17 + 0x7c) = uVar10;
        lVar20 = lVar20 + -1;
        puVar17 = puVar17 + 0x10;
        puVar19 = puVar19 + 0x10;
      } while (lVar20 != 0);
      iVar14 = FUN_140290d80(param_1 + 0xf0);
      if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)(param_1 + 0x13c) == 0x7fffffff) {
        *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -1;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      uVar15 = *(ulonglong *)(param_1 + 0x150);
      if (*(longlong *)(param_1 + 0x160) + 1U < uVar15) {
        uVar25 = *(ulonglong *)(param_1 + 0x148);
      }
      else {
        uVar21 = 1;
        if (uVar15 != 0) {
          uVar21 = uVar15;
        }
        for (; (uVar21 == uVar15 || (uVar21 < 8)); uVar21 = uVar21 * 2) {
          if (0x3fffffffffffff - uVar21 < uVar21) {
                    /* WARNING: Subroutine does not return */
            FUN_140082f20();
          }
        }
        if (0x1fffffffffffffff < uVar21) {
LAB_140018779:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar1 = *(ulonglong *)(param_1 + 0x158);
        uVar15 = uVar21 * 8;
        if (uVar15 == 0) {
          uVar25 = 0;
        }
        else if (uVar15 < 0x1000) {
          uVar25 = FUN_14028af20();
        }
        else {
          if (uVar15 + 0x27 <= uVar15) goto LAB_140018779;
          lVar20 = FUN_14028af20(uVar15 + 0x27);
          if (lVar20 == 0) goto LAB_140018734;
          uVar25 = lVar20 + 0x27U & 0xffffffffffffffe0;
          *(longlong *)(uVar25 - 8) = lVar20;
        }
        lVar20 = uVar1 * 8;
        uVar15 = uVar21 >> 1;
        for (; uVar21 <= uVar15; uVar21 = uVar21 * 2) {
        }
        uVar21 = uVar21 - *(longlong *)(param_1 + 0x150);
        lVar23 = (*(longlong *)(param_1 + 0x150) - uVar1) * 8;
        FUN_1404210f0(lVar20 + uVar25,*(longlong *)(param_1 + 0x148) + lVar20,lVar23);
        lVar23 = lVar23 + lVar20 + uVar25;
        if (uVar21 < uVar1) {
          lVar20 = uVar21 * 8;
          FUN_1404210f0(lVar23,*(undefined8 *)(param_1 + 0x148),lVar20);
          lVar23 = (uVar1 - uVar21) * 8;
          FUN_1404210f0(uVar25,*(longlong *)(param_1 + 0x148) + lVar20,lVar23);
          uVar15 = uVar25 + lVar23;
        }
        else {
          FUN_1404210f0(lVar23,*(undefined8 *)(param_1 + 0x148),lVar20);
          FUN_1404217a0(lVar23 + lVar20,0,(uVar21 - uVar1) * 8);
          uVar15 = uVar25;
        }
        FUN_1404217a0(uVar15,0,lVar20);
        lVar20 = *(longlong *)(param_1 + 0x148);
        if (lVar20 != 0) {
          uVar15 = *(longlong *)(param_1 + 0x150) * 8;
          if (0xfff < uVar15) {
            if (0x1f < (lVar20 - *(longlong *)(lVar20 + -8)) - 8U) {
LAB_140018734:
              pcVar2 = (code *)swi(0x29);
              (*pcVar2)(5);
              return;
            }
            uVar15 = uVar15 + 0x27;
            lVar20 = *(longlong *)(lVar20 + -8);
          }
          thunk_FUN_14028af80(lVar20,uVar15);
        }
        *(ulonglong *)(param_1 + 0x148) = uVar25;
        *(longlong *)(param_1 + 0x150) = *(longlong *)(param_1 + 0x150) + uVar21;
        uVar15 = *(ulonglong *)(param_1 + 0x150);
      }
      *(ulonglong *)(param_1 + 0x158) = *(ulonglong *)(param_1 + 0x158) & uVar15 - 1;
      uVar21 = *(longlong *)(param_1 + 0x160) + *(longlong *)(param_1 + 0x158);
      uVar15 = uVar15 - 1 & uVar21;
      if (*(longlong *)(uVar25 + uVar15 * 8) == 0) {
        uVar16 = FUN_14028af20(0x400);
        *(undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar15 * 8) = uVar16;
      }
      lVar20 = 8;
      puVar17 = local_438;
      puVar19 = *(undefined8 **)
                 (*(longlong *)(param_1 + 0x148) +
                 (*(longlong *)(param_1 + 0x150) - 1U & uVar21) * 8);
      do {
        uVar16 = puVar17[1];
        uVar11 = puVar17[2];
        uVar12 = puVar17[3];
        *puVar19 = *puVar17;
        puVar19[1] = uVar16;
        uVar16 = puVar17[4];
        uVar13 = puVar17[5];
        puVar19[2] = uVar11;
        puVar19[3] = uVar12;
        uVar11 = puVar17[6];
        uVar12 = puVar17[7];
        puVar19[4] = uVar16;
        puVar19[5] = uVar13;
        uVar16 = puVar17[8];
        uVar13 = puVar17[9];
        puVar19[6] = uVar11;
        puVar19[7] = uVar12;
        uVar11 = puVar17[10];
        uVar12 = puVar17[0xb];
        puVar19[8] = uVar16;
        puVar19[9] = uVar13;
        uVar3 = *(undefined4 *)(puVar17 + 0xc);
        uVar4 = *(undefined4 *)((longlong)puVar17 + 100);
        uVar5 = *(undefined4 *)(puVar17 + 0xd);
        uVar6 = *(undefined4 *)((longlong)puVar17 + 0x6c);
        puVar19[10] = uVar11;
        puVar19[0xb] = uVar12;
        uVar7 = *(undefined4 *)(puVar17 + 0xe);
        uVar8 = *(undefined4 *)((longlong)puVar17 + 0x74);
        uVar9 = *(undefined4 *)(puVar17 + 0xf);
        uVar10 = *(undefined4 *)((longlong)puVar17 + 0x7c);
        *(undefined4 *)(puVar19 + 0xc) = uVar3;
        *(undefined4 *)((longlong)puVar19 + 100) = uVar4;
        *(undefined4 *)(puVar19 + 0xd) = uVar5;
        *(undefined4 *)((longlong)puVar19 + 0x6c) = uVar6;
        *(undefined4 *)(puVar19 + 0xe) = uVar7;
        *(undefined4 *)((longlong)puVar19 + 0x74) = uVar8;
        *(undefined4 *)(puVar19 + 0xf) = uVar9;
        *(undefined4 *)((longlong)puVar19 + 0x7c) = uVar10;
        lVar20 = lVar20 + -1;
        puVar17 = puVar17 + 0x10;
        puVar19 = puVar19 + 0x10;
      } while (lVar20 != 0);
      *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 1;
      FUN_140290ef0(param_1 + 0x168);
      FUN_140290ea0(param_1 + 0xf0);
      iVar24 = iVar24 + 1;
    } while (iVar24 < (int)uVar22);
  }
  return;
}

