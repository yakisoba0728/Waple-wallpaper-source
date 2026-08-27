// Function: FUN_14003c180
// Addr: 14003c180
// Size: 1494 bytes


undefined8 FUN_14003c180(HWND param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  HWND pHVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte bVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  float fVar18;
  byte bStackX_a;
  byte bStackX_b;
  byte bStackX_c;
  byte bStackX_d;
  byte bStackX_e;
  byte bStackX_f;
  undefined8 local_res18 [2];
  WCHAR local_228 [256];
  
  FUN_1404217a0(local_228,0,0x200);
  GetClassNameW(param_1,local_228,0x100);
  iVar9 = FUN_1402c12c0(local_228,L"CabinetWClass");
  if (iVar9 != 0) {
    return 1;
  }
  uVar16 = (ulonglong)param_1 >> 8 & 0xff;
  bStackX_a = (byte)((ulonglong)param_1 >> 0x10);
  bStackX_b = (byte)((ulonglong)param_1 >> 0x18);
  bStackX_c = (byte)((ulonglong)param_1 >> 0x20);
  bStackX_d = (byte)((ulonglong)param_1 >> 0x28);
  bStackX_e = (byte)((ulonglong)param_1 >> 0x30);
  bStackX_f = (byte)((ulonglong)param_1 >> 0x38);
  if (param_2 != 0) {
    uVar16 = (((((((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar16) *
                   0x100000001b3 ^ (ulonglong)bStackX_a) * 0x100000001b3 ^ (ulonglong)bStackX_b) *
                 0x100000001b3 ^ (ulonglong)bStackX_c) * 0x100000001b3 ^ (ulonglong)bStackX_d) *
               0x100000001b3 ^ (ulonglong)bStackX_e) * 0x100000001b3 ^ (ulonglong)bStackX_f) *
             0x100000001b3 & DAT_1404e8cd0;
    plVar10 = *(longlong **)(DAT_1404e8cb8 + 8 + uVar16 * 0x10);
    if (plVar10 == DAT_1404e8ca8) {
LAB_14003c702:
      plVar10 = (longlong *)0x0;
    }
    else {
      pHVar8 = (HWND)plVar10[2];
      while (param_1 != pHVar8) {
        if (plVar10 == *(longlong **)(DAT_1404e8cb8 + uVar16 * 0x10)) goto LAB_14003c702;
        plVar10 = (longlong *)plVar10[1];
        pHVar8 = (HWND)plVar10[2];
      }
    }
    if ((plVar10 != (longlong *)0x0) && (plVar10 != DAT_1404e8ca8)) {
      return 1;
    }
    PostMessageW(param_1,0x10,0,0);
    return 1;
  }
  uVar16 = (((((((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar16) *
                 0x100000001b3 ^ (ulonglong)bStackX_a) * 0x100000001b3 ^ (ulonglong)bStackX_b) *
               0x100000001b3 ^ (ulonglong)bStackX_c) * 0x100000001b3 ^ (ulonglong)bStackX_d) *
             0x100000001b3 ^ (ulonglong)bStackX_e) * 0x100000001b3 ^ (ulonglong)bStackX_f) *
           0x100000001b3;
  plVar10 = *(longlong **)(DAT_1404e8cb8 + 8 + (DAT_1404e8cd0 & uVar16) * 0x10);
  plVar17 = DAT_1404e8ca8;
  if (plVar10 != DAT_1404e8ca8) {
    if (param_1 == (HWND)plVar10[2]) goto LAB_14003c64b;
    while (plVar17 = plVar10,
          plVar10 != *(longlong **)(DAT_1404e8cb8 + (DAT_1404e8cd0 & uVar16) * 0x10)) {
      plVar10 = (longlong *)plVar10[1];
      if (param_1 == (HWND)plVar10[2]) {
        *(undefined1 *)(plVar10 + 3) = 1;
        return 1;
      }
    }
  }
  if (DAT_1404e8cb0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  plVar10 = (longlong *)FUN_14028af20(0x20);
  plVar10[2] = (longlong)param_1;
  *(undefined1 *)(plVar10 + 3) = 0;
  uVar11 = DAT_1404e8cd8;
  if (DAT_1404e8ca0 < (float)(DAT_1404e8cb0 + 1) / (float)DAT_1404e8cd8) {
    fVar18 = (float)FUN_140419fa0((float)(DAT_1404e8cb0 + 1) / DAT_1404e8ca0);
    plVar17 = DAT_1404e8ca8;
    lVar13 = 0;
    if ((DAT_140492974 <= fVar18) && (fVar18 = fVar18 - DAT_140492974, fVar18 < DAT_140492974)) {
      lVar13 = -0x8000000000000000;
    }
    uVar14 = 8;
    if (8 < (ulonglong)((longlong)fVar18 + lVar13)) {
      uVar14 = (longlong)fVar18 + lVar13;
    }
    uVar15 = uVar11;
    if ((uVar11 < uVar14) && ((0x1ff < uVar11 || (uVar15 = uVar11 * 8, uVar11 * 8 < uVar14)))) {
      uVar15 = uVar14;
    }
    for (lVar13 = 0x3f; 0xfffffffffffffffU >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
    if ((ulonglong)(1L << ((byte)lVar13 & 0x3f)) < uVar15) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("invalid hash bucket count");
    }
    uVar11 = uVar15 - 1 | 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    bVar12 = (char)lVar13 + 1;
    uVar11 = 1L << (bVar12 & 0x3f);
    FUN_14003e510(&DAT_1404e8cb8,2L << (bVar12 & 0x3f),DAT_1404e8ca8);
    DAT_1404e8cd0 = uVar11 - 1;
    DAT_1404e8cd8 = uVar11;
    plVar6 = (longlong *)*DAT_1404e8ca8;
    lVar13 = DAT_1404e8cb8;
joined_r0x00014003c437:
    DAT_1404e8cb8 = lVar13;
    if (plVar6 != plVar17) {
      plVar1 = (longlong *)*plVar6;
      uVar11 = (((((((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar6 + 0x14)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar6 + 0x15)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar6 + 0x16)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar6 + 0x17)) * 0x100000001b3 & DAT_1404e8cd0;
      plVar2 = *(longlong **)(lVar13 + uVar11 * 0x10);
      if (plVar2 == plVar17) {
        *(longlong **)(lVar13 + uVar11 * 0x10) = plVar6;
        *(longlong **)(lVar13 + 8 + uVar11 * 0x10) = plVar6;
        plVar6 = plVar1;
        lVar13 = DAT_1404e8cb8;
      }
      else {
        plVar3 = *(longlong **)(lVar13 + 8 + uVar11 * 0x10);
        if (plVar6[2] == plVar3[2]) {
          plVar3 = (longlong *)*plVar3;
          if (plVar3 != plVar6) {
            puVar7 = (undefined8 *)plVar6[1];
            *puVar7 = plVar1;
            puVar4 = (undefined8 *)plVar1[1];
            *puVar4 = plVar3;
            puVar5 = (undefined8 *)plVar3[1];
            *puVar5 = plVar6;
            plVar3[1] = (longlong)puVar4;
            plVar1[1] = (longlong)puVar7;
            plVar6[1] = (longlong)puVar5;
          }
          *(longlong **)(lVar13 + 8 + uVar11 * 0x10) = plVar6;
          plVar6 = plVar1;
          lVar13 = DAT_1404e8cb8;
        }
        else {
          do {
            if (plVar2 == plVar3) {
              puVar7 = (undefined8 *)plVar6[1];
              *puVar7 = plVar1;
              puVar4 = (undefined8 *)plVar1[1];
              *puVar4 = plVar3;
              puVar5 = (undefined8 *)plVar3[1];
              *puVar5 = plVar6;
              plVar3[1] = (longlong)puVar4;
              plVar1[1] = (longlong)puVar7;
              plVar6[1] = (longlong)puVar5;
              *(longlong **)(lVar13 + uVar11 * 0x10) = plVar6;
              plVar6 = plVar1;
              lVar13 = DAT_1404e8cb8;
              goto joined_r0x00014003c437;
            }
            plVar3 = (longlong *)plVar3[1];
          } while (plVar6[2] != plVar3[2]);
          lVar13 = *plVar3;
          puVar7 = (undefined8 *)plVar6[1];
          *puVar7 = plVar1;
          plVar2 = (longlong *)plVar1[1];
          *plVar2 = lVar13;
          puVar4 = *(undefined8 **)(lVar13 + 8);
          *puVar4 = plVar6;
          *(longlong **)(lVar13 + 8) = plVar2;
          plVar1[1] = (longlong)puVar7;
          plVar6[1] = (longlong)puVar4;
          plVar6 = plVar1;
          lVar13 = DAT_1404e8cb8;
        }
      }
      goto joined_r0x00014003c437;
    }
    local_res18[0] = 0;
    FUN_14003e860(local_res18);
    plVar6 = *(longlong **)(DAT_1404e8cb8 + 8 + (DAT_1404e8cd0 & uVar16) * 0x10);
    plVar17 = DAT_1404e8ca8;
    if (plVar6 != DAT_1404e8ca8) {
      lVar13 = plVar6[2];
      plVar17 = plVar6;
      while (plVar10[2] != lVar13) {
        if (plVar17 == *(longlong **)(DAT_1404e8cb8 + (DAT_1404e8cd0 & uVar16) * 0x10))
        goto LAB_14003c5d9;
        plVar17 = (longlong *)plVar17[1];
        lVar13 = plVar17[2];
      }
      plVar17 = (longlong *)*plVar17;
    }
  }
LAB_14003c5d9:
  puVar7 = (undefined8 *)plVar17[1];
  DAT_1404e8cb0 = DAT_1404e8cb0 + 1;
  *plVar10 = (longlong)plVar17;
  plVar10[1] = (longlong)puVar7;
  *puVar7 = plVar10;
  plVar17[1] = (longlong)plVar10;
  lVar13 = DAT_1404e8cb8;
  uVar16 = DAT_1404e8cd0 & uVar16;
  plVar6 = *(longlong **)(DAT_1404e8cb8 + uVar16 * 0x10);
  if (plVar6 == DAT_1404e8ca8) {
    *(longlong **)(DAT_1404e8cb8 + uVar16 * 0x10) = plVar10;
    *(longlong **)(lVar13 + 8 + uVar16 * 0x10) = plVar10;
    *(undefined1 *)(plVar10 + 3) = 1;
    return 1;
  }
  if (plVar6 == plVar17) {
    *(longlong **)(DAT_1404e8cb8 + uVar16 * 0x10) = plVar10;
    *(undefined1 *)(plVar10 + 3) = 1;
    return 1;
  }
  if (*(undefined8 **)(DAT_1404e8cb8 + 8 + uVar16 * 0x10) == puVar7) {
    *(longlong **)(DAT_1404e8cb8 + 8 + uVar16 * 0x10) = plVar10;
  }
LAB_14003c64b:
  *(undefined1 *)(plVar10 + 3) = 1;
  return 1;
}

