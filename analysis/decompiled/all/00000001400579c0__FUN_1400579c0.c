// Function: FUN_1400579c0
// Addr: 1400579c0
// Size: 1664 bytes


LRESULT FUN_1400579c0(HWND param_1,UINT param_2,WPARAM param_3,LONG_PTR *param_4)

{
  HWND pHVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  LRESULT LVar8;
  LONG_PTR LVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  float fVar19;
  undefined8 local_28 [2];
  
  lVar14 = DAT_1404e8cf8;
  plVar3 = DAT_1404e8ce8;
  if (param_2 == 1) {
    SetWindowLongPtrW(param_1,-0x15,*param_4);
    uVar16 = (((((((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)param_1 >> 8 & 0xff) * 0x100000001b3 ^
                  (ulonglong)param_1 >> 0x10 & 0xff) * 0x100000001b3 ^
                 (ulonglong)param_1 >> 0x18 & 0xff) * 0x100000001b3 ^
                (ulonglong)param_1 >> 0x20 & 0xff) * 0x100000001b3 ^
               (ulonglong)param_1 >> 0x28 & 0xff) * 0x100000001b3 ^
              (ulonglong)param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)param_1 >> 0x38) *
             0x100000001b3;
    plVar3 = *(longlong **)(DAT_1404e8cf8 + 8 + (DAT_1404e8d10 & uVar16) * 0x10);
    plVar18 = DAT_1404e8ce8;
    if (plVar3 == DAT_1404e8ce8) {
LAB_140057c97:
      if (DAT_1404e8cf0 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar10 = (undefined8 *)FUN_14028af20(0x18);
      puVar10[2] = param_1;
      uVar11 = DAT_1404e8d18;
      if (DAT_1404e8ce0 < (float)(DAT_1404e8cf0 + 1) / (float)DAT_1404e8d18) {
        fVar19 = (float)FUN_140419fa0((float)(DAT_1404e8cf0 + 1) / DAT_1404e8ce0);
        plVar3 = DAT_1404e8ce8;
        lVar14 = 0;
        if ((DAT_140492974 <= fVar19) && (fVar19 = fVar19 - DAT_140492974, fVar19 < DAT_140492974))
        {
          lVar14 = -0x8000000000000000;
        }
        uVar15 = 8;
        if (8 < (ulonglong)((longlong)fVar19 + lVar14)) {
          uVar15 = (longlong)fVar19 + lVar14;
        }
        uVar17 = uVar11;
        if ((uVar11 < uVar15) && ((0x1ff < uVar11 || (uVar17 = uVar11 * 8, uVar11 * 8 < uVar15)))) {
          uVar17 = uVar15;
        }
        for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
        if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("invalid hash bucket count");
        }
        uVar11 = uVar17 - 1 | 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        bVar12 = (char)lVar14 + 1;
        uVar11 = 1L << (bVar12 & 0x3f);
        FUN_14003e510(&DAT_1404e8cf8,2L << (bVar12 & 0x3f),DAT_1404e8ce8);
        DAT_1404e8d10 = uVar11 - 1;
        DAT_1404e8d18 = uVar11;
        plVar18 = (longlong *)*DAT_1404e8ce8;
        lVar14 = DAT_1404e8cf8;
joined_r0x000140057e05:
        DAT_1404e8cf8 = lVar14;
        if (plVar18 != plVar3) {
          plVar13 = (longlong *)*plVar18;
          uVar11 = (((((((((ulonglong)*(byte *)(plVar18 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar18 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar18 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar18 + 0x13)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar18 + 0x14)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar18 + 0x15)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar18 + 0x16)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar18 + 0x17)) * 0x100000001b3 & DAT_1404e8d10;
          plVar2 = *(longlong **)(lVar14 + uVar11 * 0x10);
          if (plVar2 == plVar3) {
            *(longlong **)(lVar14 + uVar11 * 0x10) = plVar18;
            *(longlong **)(lVar14 + 8 + uVar11 * 0x10) = plVar18;
            plVar18 = plVar13;
            lVar14 = DAT_1404e8cf8;
          }
          else {
            plVar4 = *(longlong **)(lVar14 + 8 + uVar11 * 0x10);
            if (plVar18[2] == plVar4[2]) {
              plVar4 = (longlong *)*plVar4;
              if (plVar4 != plVar18) {
                puVar7 = (undefined8 *)plVar18[1];
                *puVar7 = plVar13;
                puVar5 = (undefined8 *)plVar13[1];
                *puVar5 = plVar4;
                puVar6 = (undefined8 *)plVar4[1];
                *puVar6 = plVar18;
                plVar4[1] = (longlong)puVar5;
                plVar13[1] = (longlong)puVar7;
                plVar18[1] = (longlong)puVar6;
              }
              *(longlong **)(lVar14 + 8 + uVar11 * 0x10) = plVar18;
              plVar18 = plVar13;
              lVar14 = DAT_1404e8cf8;
            }
            else {
              do {
                if (plVar2 == plVar4) {
                  puVar7 = (undefined8 *)plVar18[1];
                  *puVar7 = plVar13;
                  puVar5 = (undefined8 *)plVar13[1];
                  *puVar5 = plVar4;
                  puVar6 = (undefined8 *)plVar4[1];
                  *puVar6 = plVar18;
                  plVar4[1] = (longlong)puVar5;
                  plVar13[1] = (longlong)puVar7;
                  plVar18[1] = (longlong)puVar6;
                  *(longlong **)(lVar14 + uVar11 * 0x10) = plVar18;
                  plVar18 = plVar13;
                  lVar14 = DAT_1404e8cf8;
                  goto joined_r0x000140057e05;
                }
                plVar4 = (longlong *)plVar4[1];
              } while (plVar18[2] != plVar4[2]);
              lVar14 = *plVar4;
              puVar7 = (undefined8 *)plVar18[1];
              *puVar7 = plVar13;
              plVar2 = (longlong *)plVar13[1];
              *plVar2 = lVar14;
              puVar5 = *(undefined8 **)(lVar14 + 8);
              *puVar5 = plVar18;
              *(longlong **)(lVar14 + 8) = plVar2;
              plVar13[1] = (longlong)puVar7;
              plVar18[1] = (longlong)puVar5;
              plVar18 = plVar13;
              lVar14 = DAT_1404e8cf8;
            }
          }
          goto joined_r0x000140057e05;
        }
        local_28[0] = 0;
        FUN_14005b0e0(local_28);
        plVar3 = *(longlong **)(DAT_1404e8cf8 + 8 + (DAT_1404e8d10 & uVar16) * 0x10);
        plVar18 = DAT_1404e8ce8;
        if (plVar3 != DAT_1404e8ce8) {
          lVar14 = plVar3[2];
          plVar18 = plVar3;
          while (puVar10[2] != lVar14) {
            if (plVar18 == *(longlong **)(DAT_1404e8cf8 + (DAT_1404e8d10 & uVar16) * 0x10))
            goto LAB_140057fa9;
            plVar18 = (longlong *)plVar18[1];
            lVar14 = plVar18[2];
          }
          plVar18 = (longlong *)*plVar18;
        }
      }
LAB_140057fa9:
      puVar7 = (undefined8 *)plVar18[1];
      DAT_1404e8cf0 = DAT_1404e8cf0 + 1;
      *puVar10 = plVar18;
      puVar10[1] = puVar7;
      *puVar7 = puVar10;
      plVar18[1] = (longlong)puVar10;
      lVar14 = DAT_1404e8cf8;
      uVar16 = DAT_1404e8d10 & uVar16;
      plVar3 = *(longlong **)(DAT_1404e8cf8 + uVar16 * 0x10);
      if (plVar3 == DAT_1404e8ce8) {
        *(undefined8 **)(DAT_1404e8cf8 + uVar16 * 0x10) = puVar10;
      }
      else {
        if (plVar3 == plVar18) {
          *(undefined8 **)(DAT_1404e8cf8 + uVar16 * 0x10) = puVar10;
          return 0;
        }
        if (*(undefined8 **)(DAT_1404e8cf8 + 8 + uVar16 * 0x10) != puVar7) {
          return 0;
        }
      }
      *(undefined8 **)(lVar14 + 8 + uVar16 * 0x10) = puVar10;
    }
    else {
      pHVar1 = (HWND)plVar3[2];
      plVar18 = plVar3;
      while (param_1 != pHVar1) {
        if (plVar18 == *(longlong **)(DAT_1404e8cf8 + (DAT_1404e8d10 & uVar16) * 0x10))
        goto LAB_140057c97;
        plVar18 = (longlong *)plVar18[1];
        pHVar1 = (HWND)plVar18[2];
      }
    }
  }
  else if (param_2 == 2) {
    uVar16 = DAT_1404e8d10 &
             (((((((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)param_1 >> 8 & 0xff) * 0x100000001b3 ^
                  (ulonglong)param_1 >> 0x10 & 0xff) * 0x100000001b3 ^
                 (ulonglong)param_1 >> 0x18 & 0xff) * 0x100000001b3 ^
                (ulonglong)param_1 >> 0x20 & 0xff) * 0x100000001b3 ^
               (ulonglong)param_1 >> 0x28 & 0xff) * 0x100000001b3 ^
              (ulonglong)param_1 >> 0x30 & 0xff) * 0x100000001b3 ^ (ulonglong)param_1 >> 0x38) *
             0x100000001b3;
    plVar18 = *(longlong **)(DAT_1404e8cf8 + 8 + uVar16 * 0x10);
    if (plVar18 == DAT_1404e8ce8) {
LAB_140057b17:
      plVar13 = (longlong *)0x0;
    }
    else {
      pHVar1 = (HWND)plVar18[2];
      plVar13 = plVar18;
      while (param_1 != pHVar1) {
        if (plVar13 == *(longlong **)(DAT_1404e8cf8 + uVar16 * 0x10)) goto LAB_140057b17;
        plVar13 = (longlong *)plVar13[1];
        pHVar1 = (HWND)plVar13[2];
      }
    }
    if (plVar13 != (longlong *)0x0) {
      plVar2 = *(longlong **)(DAT_1404e8cf8 + uVar16 * 0x10);
      if (plVar18 == plVar13) {
        if (plVar2 == plVar13) {
          *(longlong **)(DAT_1404e8cf8 + uVar16 * 0x10) = DAT_1404e8ce8;
          *(longlong **)(lVar14 + 8 + uVar16 * 0x10) = plVar3;
        }
        else {
          *(longlong *)(DAT_1404e8cf8 + 8 + uVar16 * 0x10) = plVar13[1];
        }
      }
      else if (plVar2 == plVar13) {
        *(longlong *)(DAT_1404e8cf8 + uVar16 * 0x10) = *plVar13;
      }
      lVar14 = *plVar13;
      DAT_1404e8cf0 = DAT_1404e8cf0 + -1;
      *(longlong *)plVar13[1] = lVar14;
      *(longlong *)(lVar14 + 8) = plVar13[1];
      thunk_FUN_14028af80(plVar13,0x18);
    }
    LVar9 = GetWindowLongPtrW(param_1,-0x15);
    if (LVar9 != 0) {
      FUN_140017240(LVar9);
      thunk_FUN_14028af80(LVar9,0x20);
    }
    SetWindowLongPtrW(param_1,-0x15,0);
  }
  else if (param_2 == 0x46) {
    *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) & 0xfffffdfb;
    param_4[1] = 1;
  }
  else {
    if (param_2 != 0x113) {
LAB_140057a35:
                    /* WARNING: Could not recover jumptable at 0x000140057a45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LVar8 = DefWindowProcW(param_1,param_2,param_3,(LPARAM)param_4);
      return LVar8;
    }
    if (param_3 == 0) {
      SetWindowPos(param_1,(HWND)0x1,0,0,0,0,0x13);
    }
    else {
      if (param_3 != 1) goto LAB_140057a35;
      DestroyWindow(param_1);
    }
  }
  return 0;
}

