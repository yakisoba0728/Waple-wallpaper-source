// Function: FUN_14004fd10
// Addr: 14004fd10
// Size: 493 bytes


/* WARNING: Possible PIC construction at 0x00014004fe75: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014004fe7a) */

longlong * FUN_14004fd10(longlong param_1,ulonglong param_2,ulonglong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong unaff_RBX;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  longlong unaff_RDI;
  ulonglong uVar18;
  longlong lVar19;
  undefined *apuStack_60 [5];
  
  uVar18 = (longlong)(param_3 - 1) >> 1;
  uVar13 = param_2;
  while ((longlong)uVar13 < (longlong)uVar18) {
    lVar15 = uVar13 * 0x40;
    uVar14 = uVar13 * 2 + 2;
    if (*(ulonglong *)(param_1 + 0x38 + lVar15) < 8) {
      lVar19 = param_1 + 0x20 + lVar15;
    }
    else {
      lVar19 = *(longlong *)(param_1 + 0x20 + lVar15);
    }
    if (*(ulonglong *)(param_1 + 0x58 + lVar15) < 8) {
      lVar11 = param_1 + 0x40 + lVar15;
    }
    else {
      lVar11 = *(longlong *)(param_1 + 0x40 + lVar15);
    }
    apuStack_60[0] = (undefined *)0x14004fd97;
    iVar9 = func_0x000140015470(lVar11,*(undefined8 *)(param_1 + 0x50 + lVar15),lVar19,
                                *(undefined8 *)(param_1 + 0x30 + lVar15));
    uVar16 = uVar14;
    if ((iVar9 != 0) && (uVar16 = uVar13 * 2 | 1, -1 < iVar9)) {
      uVar16 = uVar14;
    }
    lVar15 = uVar13 * 0x20;
    lVar19 = uVar16 * 0x20;
    uVar13 = uVar16;
    if (lVar15 != lVar19) {
      uVar14 = *(ulonglong *)(lVar15 + 0x18 + param_1);
      if (7 < uVar14) {
        lVar15 = *(longlong *)(lVar15 + param_1);
        uVar13 = uVar14 * 2 + 2;
        if (0xfff < uVar13) {
          if (0x1f < (lVar15 - *(longlong *)(lVar15 + -8)) - 8U) goto LAB_14004ff9c;
          uVar13 = uVar14 * 2 + 0x29;
          lVar15 = *(longlong *)(lVar15 + -8);
        }
        apuStack_60[0] = (undefined *)0x14004fe0b;
        plVar10 = (longlong *)func_0x00014028b040(lVar15,uVar13);
        return plVar10;
      }
      *(undefined8 *)(lVar15 + 0x18 + param_1) = 7;
      *(undefined8 *)(lVar15 + 0x10 + param_1) = 0;
      *(undefined2 *)(lVar15 + param_1) = 0;
      puVar1 = (undefined4 *)(lVar19 + param_1);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      puVar2 = (undefined4 *)(lVar15 + param_1);
      *puVar2 = *puVar1;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      puVar3 = (undefined8 *)(lVar19 + 0x10 + param_1);
      uVar8 = puVar3[1];
      puVar12 = (undefined8 *)(lVar15 + 0x10 + param_1);
      *puVar12 = *puVar3;
      puVar12[1] = uVar8;
      *(undefined8 *)(lVar19 + 0x10 + param_1) = 0;
      *(undefined8 *)(lVar19 + 0x18 + param_1) = 7;
      *(undefined2 *)(lVar19 + param_1) = 0;
    }
  }
  if ((uVar13 == uVar18) && ((param_3 & 1) == 0)) {
    unaff_RDI = uVar13 << 5;
    param_4 = (longlong *)(param_1 + -0x20 + param_3 * 0x20);
    register0x00000020 = (BADSPACEBASE *)apuStack_60;
    apuStack_60[0] = (undefined *)0x14004fe7a;
    unaff_RBX = uVar13;
    lVar15 = unaff_RDI;
  }
  else {
    while ((longlong)param_2 < (longlong)uVar13) {
      uVar18 = (longlong)(uVar13 - 1) >> 1;
      puVar3 = (undefined8 *)(uVar18 * 0x20 + param_1);
      plVar10 = param_4;
      if (7 < (ulonglong)param_4[3]) {
        plVar10 = (longlong *)*param_4;
      }
      puVar12 = puVar3;
      if (7 < (ulonglong)puVar3[3]) {
        puVar12 = (undefined8 *)*puVar3;
      }
      apuStack_60[0] = (undefined *)0x14004fed6;
      iVar9 = func_0x000140015470(puVar12,puVar3[2],plVar10,param_4[2]);
      if ((iVar9 == 0) || (-1 < iVar9)) break;
      lVar15 = uVar13 * 0x20;
      uVar13 = uVar18;
      if (lVar15 != uVar18 * 0x20) {
        uVar18 = *(ulonglong *)(lVar15 + 0x18 + param_1);
        if (7 < uVar18) {
          lVar19 = *(longlong *)(lVar15 + param_1);
          uVar14 = uVar18 * 2 + 2;
          if (0xfff < uVar14) {
            if (0x1f < (lVar19 - *(longlong *)(lVar19 + -8)) - 8U) {
LAB_14004ff9c:
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              pcVar4 = (code *)swi(3);
              plVar10 = (longlong *)(*pcVar4)();
              return plVar10;
            }
            uVar14 = uVar18 * 2 + 0x29;
            lVar19 = *(longlong *)(lVar19 + -8);
          }
          apuStack_60[0] = &UNK_14004ff33;
          func_0x00014028b040(lVar19,uVar14);
        }
        *(undefined8 *)(lVar15 + 0x18 + param_1) = 7;
        *(undefined8 *)(lVar15 + 0x10 + param_1) = 0;
        *(undefined2 *)(lVar15 + param_1) = 0;
        uVar5 = *(undefined4 *)((longlong)puVar3 + 4);
        uVar6 = *(undefined4 *)(puVar3 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar3 + 0xc);
        puVar1 = (undefined4 *)(lVar15 + param_1);
        *puVar1 = *(undefined4 *)puVar3;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        uVar8 = puVar3[3];
        puVar12 = (undefined8 *)(lVar15 + 0x10 + param_1);
        *puVar12 = puVar3[2];
        puVar12[1] = uVar8;
        puVar3[2] = 0;
        puVar3[3] = 7;
        *(undefined2 *)puVar3 = 0;
      }
    }
    lVar15 = uVar13 << 5;
  }
  plVar10 = (longlong *)(param_1 + lVar15);
  *(ulonglong *)((longlong)register0x00000020 + 8) = unaff_RBX;
  *(longlong *)((longlong)register0x00000020 + -8) = unaff_RDI;
  if (plVar10 != param_4) {
    if (7 < (ulonglong)plVar10[3]) {
      puVar17 = (undefined1 *)((longlong)register0x00000020 + -0x28);
      if ((0xfff < plVar10[3] * 2 + 2U) &&
         (puVar17 = (undefined1 *)((longlong)register0x00000020 + -0x28),
         0x1f < (*plVar10 - *(longlong *)(*plVar10 + -8)) - 8U)) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar17 = (undefined1 *)((longlong)register0x00000020 + -0x20);
      }
      *(undefined8 *)(puVar17 + -8) = 0x140016690;
      func_0x00014028b040();
    }
    plVar10[3] = 7;
    plVar10[2] = 0;
    *(undefined2 *)plVar10 = 0;
    lVar15 = param_4[1];
    *plVar10 = *param_4;
    plVar10[1] = lVar15;
    lVar15 = param_4[3];
    plVar10[2] = param_4[2];
    plVar10[3] = lVar15;
    param_4[2] = 0;
    param_4[3] = 7;
    *(undefined2 *)param_4 = 0;
  }
  return plVar10;
}

