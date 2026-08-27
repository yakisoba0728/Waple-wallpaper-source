// Function: FUN_140225410
// Addr: 140225410
// Size: 1256 bytes


/* WARNING: Removing unreachable block (ram,0x000140225806) */
/* WARNING: Removing unreachable block (ram,0x00014022580b) */
/* WARNING: Removing unreachable block (ram,0x000140225810) */

void FUN_140225410(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [40];
  
  if (*(longlong *)(param_1 + 0x2c0) != *(longlong *)(param_1 + 0x2c8)) {
    *(longlong *)(param_1 + 0x2c8) = *(longlong *)(param_1 + 0x2c0);
  }
  FUN_140224c70();
  lVar8 = *(longlong *)(param_1 + 0x2d8);
  if (lVar8 == 0) {
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x2e8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if (*plVar1 == 0) {
    return;
  }
  puVar14 = *(undefined8 **)(lVar8 + 0x68);
  puVar21 = (undefined8 *)0x0;
  lVar16 = plVar1[3] - plVar1[2] >> 3;
  uVar17 = lVar16 * -0x70a3d70a3d70a3d7;
  lVar9 = *(longlong *)(lVar8 + 0x60);
  uVar19 = (longlong)puVar14 - lVar9 >> 5;
  if (uVar17 < uVar19) {
    puVar22 = (undefined8 *)(lVar16 * -0x147ae147ae147ae0 + lVar9);
    for (puVar18 = puVar22; puVar18 != puVar14; puVar18 = puVar18 + 4) {
      FUN_140031b80(puVar18 + 1);
    }
    *(undefined8 **)(lVar8 + 0x68) = puVar22;
    goto LAB_1402256ad;
  }
  if (uVar17 - uVar19 == 0) goto LAB_1402256ad;
  uVar11 = *(longlong *)(lVar8 + 0x70) - lVar9 >> 5;
  if (uVar17 < uVar11 || uVar17 - uVar11 == 0) {
    for (lVar9 = uVar17 - uVar19; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14 = puVar14 + 4;
    }
    *(undefined8 **)(lVar8 + 0x68) = puVar14;
    goto LAB_1402256ad;
  }
  if (0x7ffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
    FUN_140013050();
  }
  puVar12 = auStack_58;
  if ((0x7ffffffffffffff - (uVar11 >> 1) < uVar11) ||
     ((uVar11 = (uVar11 >> 1) + uVar11, uVar15 = uVar17, uVar17 <= uVar11 &&
      (puVar12 = auStack_58, uVar15 = uVar11, 0x7ffffffffffffff < uVar11)))) goto LAB_1402258e9;
  uVar11 = uVar15 * 0x20;
  puVar22 = puVar21;
  if (uVar11 == 0) {
LAB_14022558f:
    puVar14 = (undefined8 *)(((longlong)puVar14 - lVar9 & 0xffffffffffffffe0U) + (longlong)puVar22);
    for (lVar9 = uVar17 - uVar19; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14 = puVar14 + 4;
    }
    puVar14 = *(undefined8 **)(lVar8 + 0x68);
    puVar6 = puVar22;
    for (puVar18 = *(undefined8 **)(lVar8 + 0x60); puVar18 != puVar14; puVar18 = puVar18 + 4) {
      *puVar6 = *puVar18;
      uVar2 = puVar18[3];
      uVar3 = puVar18[2];
      uVar4 = puVar18[1];
      puVar18[3] = 0;
      puVar18[2] = 0;
      puVar18[1] = 0;
      puVar6[1] = uVar4;
      puVar6[2] = uVar3;
      puVar6[3] = uVar2;
      puVar6 = puVar6 + 4;
    }
    lVar9 = *(longlong *)(lVar8 + 0x60);
    if (lVar9 != 0) {
      lVar7 = *(longlong *)(lVar8 + 0x68);
      for (; lVar9 != lVar7; lVar9 = lVar9 + 0x20) {
        FUN_140031b80(lVar9 + 8);
      }
      lVar9 = *(longlong *)(lVar8 + 0x60);
      uVar17 = *(longlong *)(lVar8 + 0x70) - lVar9 & 0xffffffffffffffe0;
      if (0xfff < uVar17) {
        if (0x1f < (lVar9 - *(longlong *)(lVar9 + -8)) - 8U) goto LAB_1402258e2;
        uVar17 = uVar17 + 0x27;
        lVar9 = *(longlong *)(lVar9 + -8);
      }
      thunk_FUN_14028af80(lVar9,uVar17);
    }
    *(undefined8 **)(lVar8 + 0x60) = puVar22;
    *(undefined8 **)(lVar8 + 0x68) = puVar22 + lVar16 * -0x28f5c28f5c28f5c;
    *(undefined8 **)(lVar8 + 0x70) = puVar22 + uVar15 * 4;
LAB_1402256ad:
    lVar8 = *(longlong *)(param_1 + 0x2e8);
    if ((*(longlong *)(lVar8 + 0x18) - *(longlong *)(lVar8 + 0x10) >> 3) * -0x70a3d70a3d70a3d7 != 0)
    {
      do {
        iVar20 = (int)puVar21;
        lVar10 = (longlong)iVar20 * 200;
        lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x60);
        lVar13 = (longlong)iVar20 * 0x20;
        lVar7 = *(longlong *)(lVar16 + 0x10 + lVar13);
        lVar9 = *(longlong *)(lVar16 + 8 + lVar13);
        uVar17 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x70 + lVar10) -
                 *(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x68 + lVar10) >> 6;
        uVar19 = lVar7 - lVar9 >> 2;
        if (uVar17 < uVar19) {
          lVar9 = lVar9 + uVar17 * 4;
LAB_14022587d:
          *(longlong *)(lVar16 + 0x10 + lVar13) = lVar9;
        }
        else if (uVar19 < uVar17) {
          uVar11 = *(longlong *)(lVar16 + 0x18 + lVar13) - lVar9 >> 2;
          if (uVar17 <= uVar11) {
            lVar9 = (uVar17 - uVar19) * 4;
            FUN_1404217a0(lVar7,0,lVar9);
            lVar9 = lVar9 + lVar7;
            goto LAB_14022587d;
          }
          if (0x3fffffffffffffff < uVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          puVar12 = auStack_58;
          if ((0x3fffffffffffffff - (uVar11 >> 1) < uVar11) ||
             ((uVar11 = (uVar11 >> 1) + uVar11, uVar15 = uVar17, uVar17 <= uVar11 &&
              (puVar12 = auStack_58, uVar15 = uVar11, 0x3fffffffffffffff < uVar11))))
          goto LAB_1402258e9;
          uVar11 = uVar15 * 4;
          if (uVar11 == 0) {
            uVar11 = 0;
          }
          else if (uVar11 < 0x1000) {
            uVar11 = FUN_14028af20();
          }
          else {
            puVar12 = auStack_58;
            if (uVar11 + 0x27 <= uVar11) goto LAB_1402258e9;
            lVar8 = FUN_14028af20(uVar11 + 0x27);
            if (lVar8 == 0) goto LAB_1402258e2;
            uVar11 = lVar8 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar11 - 8) = lVar8;
          }
          FUN_1404217a0((lVar7 - lVar9 & 0xfffffffffffffffcU) + uVar11,0,(uVar17 - uVar19) * 4);
          lVar8 = *(longlong *)(lVar16 + 8 + lVar13);
          FUN_1404210f0(uVar11,lVar8,*(longlong *)(lVar16 + 0x10 + lVar13) - lVar8);
          FUN_140038af0(lVar16 + lVar13 + 8,uVar11,uVar17,uVar15);
        }
        puVar21 = (undefined8 *)(ulonglong)(iVar20 + 1U);
        lVar8 = *(longlong *)(param_1 + 0x2e8);
      } while ((ulonglong)(longlong)(int)(iVar20 + 1U) <
               (ulonglong)
               ((*(longlong *)(lVar8 + 0x18) - *(longlong *)(lVar8 + 0x10) >> 3) *
               -0x70a3d70a3d70a3d7));
    }
    return;
  }
  if (uVar11 < 0x1000) {
    puVar22 = (undefined8 *)FUN_14028af20(uVar11);
    goto LAB_14022558f;
  }
  puVar12 = auStack_58;
  if (uVar11 + 0x27 <= uVar11) goto LAB_1402258e9;
  lVar7 = FUN_14028af20();
  if (lVar7 != 0) {
    puVar22 = (undefined8 *)(lVar7 + 0x27U & 0xffffffffffffffe0);
    puVar22[-1] = lVar7;
    goto LAB_14022558f;
  }
LAB_1402258e2:
  pcVar5 = (code *)swi(0x29);
  (*pcVar5)(5);
  puVar12 = auStack_50;
LAB_1402258e9:
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -8) = &UNK_1402258ee;
  FUN_140017370();
}

