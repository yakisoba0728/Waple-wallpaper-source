// Function: FUN_1400915e0
// Addr: 1400915e0
// Size: 1138 bytes


longlong * FUN_1400915e0(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar16 = *(ulonglong *)(param_1 + 0x50);
  uVar1 = *(longlong *)(param_1 + 0x58) + uVar16;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    do {
      local_48 = 0;
      local_40 = 0xf;
      uStack_50 = 0;
      local_58 = 0;
      lVar10 = *(longlong *)
                (*(longlong *)(param_1 + 0x40) + (*(longlong *)(param_1 + 0x48) - 1U & uVar16) * 8);
      lVar17 = *(longlong *)(lVar10 + 8) - *(longlong *)(param_1 + 0x80);
      lVar18 = *(longlong *)(lVar10 + 0x10) - *(longlong *)(param_1 + 0x80);
      plVar7 = (longlong *)(lVar10 + 0x18);
      if (&local_58 != plVar7) {
        if (0xf < *(ulonglong *)(lVar10 + 0x30)) {
          plVar7 = (longlong *)*plVar7;
        }
        FUN_14000f880(&local_58,plVar7,*(undefined8 *)(lVar10 + 0x28));
      }
      plVar7 = (longlong *)param_2[1];
      if (plVar7 == (longlong *)param_2[2]) {
        lVar10 = (longlong)plVar7 - *param_2;
        lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
        lVar10 = (lVar10 >> 3) - (lVar10 >> 0x3f);
        if (lVar10 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          FUN_140013050();
        }
        uVar13 = (param_2[2] - *param_2 >> 4) * -0x5555555555555555;
        uVar8 = 0x555555555555555 - (uVar13 >> 1);
        if (uVar8 <= uVar13 && uVar13 - uVar8 != 0) {
LAB_140091a4e:
                    /* WARNING: Subroutine does not return */
          FUN_140017370();
        }
        uVar13 = (uVar13 >> 1) + uVar13;
        uVar8 = lVar10 + 1;
        uVar11 = uVar8;
        if (uVar8 <= uVar13) {
          uVar11 = uVar13;
        }
        if (0x555555555555555 < uVar11) goto LAB_140091a4e;
        uVar13 = uVar11 * 0x30;
        if (uVar13 == 0) {
          plVar14 = (longlong *)0x0;
        }
        else if (uVar13 < 0x1000) {
          plVar14 = (longlong *)FUN_14028af20(uVar13);
        }
        else {
          if (uVar13 + 0x27 <= uVar13) goto LAB_140091a4e;
          lVar9 = FUN_14028af20();
          if (lVar9 == 0) goto LAB_140091a26;
          plVar14 = (longlong *)(lVar9 + 0x27U & 0xffffffffffffffe0);
          plVar14[-1] = lVar9;
        }
        plVar15 = plVar14 + lVar10 * 6;
        *plVar15 = lVar17;
        plVar15[1] = lVar18;
        FUN_140016fc0(plVar15 + 2,&local_58);
        plVar2 = (longlong *)param_2[1];
        plVar12 = (longlong *)*param_2;
        plVar6 = plVar14;
        if (plVar7 == plVar2) {
          for (; plVar12 != plVar2; plVar12 = plVar12 + 6) {
            *plVar6 = *plVar12;
            plVar6[1] = plVar12[1];
            plVar6[2] = 0;
            plVar6[3] = 0;
            plVar6[4] = 0;
            plVar6[5] = 0;
            uVar4 = *(undefined4 *)((longlong)plVar12 + 0x14);
            lVar10 = plVar12[3];
            uVar5 = *(undefined4 *)((longlong)plVar12 + 0x1c);
            *(int *)(plVar6 + 2) = (int)plVar12[2];
            *(undefined4 *)((longlong)plVar6 + 0x14) = uVar4;
            *(int *)(plVar6 + 3) = (int)lVar10;
            *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar5;
            lVar10 = plVar12[5];
            plVar6[4] = plVar12[4];
            plVar6[5] = lVar10;
            plVar12[4] = 0;
            plVar12[5] = 0xf;
            *(undefined1 *)(plVar12 + 2) = 0;
            plVar6 = plVar6 + 6;
          }
        }
        else {
          for (; plVar12 != plVar7; plVar12 = plVar12 + 6) {
            *plVar6 = *plVar12;
            plVar6[1] = plVar12[1];
            plVar6[2] = 0;
            plVar6[3] = 0;
            plVar6[4] = 0;
            plVar6[5] = 0;
            uVar4 = *(undefined4 *)((longlong)plVar12 + 0x14);
            lVar10 = plVar12[3];
            uVar5 = *(undefined4 *)((longlong)plVar12 + 0x1c);
            *(int *)(plVar6 + 2) = (int)plVar12[2];
            *(undefined4 *)((longlong)plVar6 + 0x14) = uVar4;
            *(int *)(plVar6 + 3) = (int)lVar10;
            *(undefined4 *)((longlong)plVar6 + 0x1c) = uVar5;
            lVar10 = plVar12[5];
            plVar6[4] = plVar12[4];
            plVar6[5] = lVar10;
            plVar12[4] = 0;
            plVar12[5] = 0xf;
            *(undefined1 *)(plVar12 + 2) = 0;
            plVar6 = plVar6 + 6;
          }
          plVar2 = (longlong *)param_2[1];
          for (; plVar7 != plVar2; plVar7 = plVar7 + 6) {
            plVar15[6] = *plVar7;
            plVar15[7] = plVar7[1];
            plVar15[8] = 0;
            plVar15[9] = 0;
            plVar15[10] = 0;
            plVar15[0xb] = 0;
            uVar4 = *(undefined4 *)((longlong)plVar7 + 0x14);
            lVar10 = plVar7[3];
            uVar5 = *(undefined4 *)((longlong)plVar7 + 0x1c);
            *(int *)(plVar15 + 8) = (int)plVar7[2];
            *(undefined4 *)((longlong)plVar15 + 0x44) = uVar4;
            *(int *)(plVar15 + 9) = (int)lVar10;
            *(undefined4 *)((longlong)plVar15 + 0x4c) = uVar5;
            lVar10 = plVar7[5];
            plVar15[10] = plVar7[4];
            plVar15[0xb] = lVar10;
            plVar7[4] = 0;
            plVar7[5] = 0xf;
            *(undefined1 *)(plVar7 + 2) = 0;
            plVar15 = plVar15 + 6;
          }
        }
        lVar10 = *param_2;
        if (lVar10 != 0) {
          lVar17 = param_2[1];
          for (; lVar10 != lVar17; lVar10 = lVar10 + 0x30) {
            FUN_140017240(lVar10 + 0x10);
          }
          lVar10 = *param_2;
          uVar13 = (param_2[2] - lVar10 >> 4) * 0x10;
          if (0xfff < uVar13) {
            if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_140091a26;
            uVar13 = uVar13 + 0x27;
            lVar10 = *(longlong *)(lVar10 + -8);
          }
          thunk_FUN_14028af80(lVar10,uVar13);
        }
        *param_2 = (longlong)plVar14;
        param_2[1] = (longlong)(plVar14 + uVar8 * 6);
        param_2[2] = (longlong)(plVar14 + uVar11 * 6);
      }
      else {
        *plVar7 = lVar17;
        plVar7[1] = lVar18;
        FUN_140016fc0(plVar7 + 2,&local_58);
        param_2[1] = param_2[1] + 0x30;
      }
      if (0xf < local_40) {
        uVar13 = local_40 + 1;
        lVar10 = local_58;
        if (0xfff < uVar13) {
          lVar10 = *(longlong *)(local_58 + -8);
          if (0x1f < (local_58 - lVar10) - 8U) {
LAB_140091a26:
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            return param_2;
          }
          uVar13 = local_40 + 0x28;
        }
        thunk_FUN_14028af80(lVar10,uVar13);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar1);
  }
  return param_2;
}

