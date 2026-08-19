// Function: FUN_14022d070
// Addr: 14022d070
// Size: 2032 bytes


/* WARNING: Removing unreachable block (ram,0x00014022d22a) */
/* WARNING: Removing unreachable block (ram,0x00014022e46d) */
/* WARNING: Removing unreachable block (ram,0x00014022d239) */
/* WARNING: Removing unreachable block (ram,0x00014022e493) */
/* WARNING: Removing unreachable block (ram,0x00014022da82) */
/* WARNING: Removing unreachable block (ram,0x00014022daa9) */
/* WARNING: Removing unreachable block (ram,0x00014022dab7) */
/* WARNING: Removing unreachable block (ram,0x00014022da9c) */
/* WARNING: Removing unreachable block (ram,0x00014022e473) */
/* WARNING: Removing unreachable block (ram,0x00014022e499) */

void FUN_14022d070(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int *piVar10;
  longlong *plVar11;
  longlong *plVar12;
  int *piVar13;
  int *piVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int *piVar17;
  int *piVar18;
  longlong lVar19;
  undefined8 local_68;
  undefined8 uStack_60;
  
  if (*param_2 != param_2[1]) {
    piVar14 = (int *)param_1[0x39];
    piVar1 = (int *)param_1[0x3a];
    local_68 = 0;
    uStack_60 = 0;
    for (; piVar14 != piVar1; piVar14 = piVar14 + 6) {
      piVar17 = (int *)*param_2;
      piVar2 = (int *)param_2[1];
      if (piVar17 != piVar2) {
code_r0x00014022d140:
        iVar7 = *piVar14;
        if (((piVar17[2] == iVar7) && (*piVar17 - 1U < 2)) &&
           (piVar17[1] == *(int *)((longlong)&local_68 + (longlong)iVar7 * 4))) {
          if (iVar7 == 1) {
            lVar3 = *(longlong *)(piVar17 + 4);
            piVar10 = piVar17 + 6;
            *piVar17 = 2;
            lVar4 = *param_1;
            plVar12 = *(longlong **)(lVar4 + 0x1b00);
            plVar15 = (longlong *)*plVar12;
            plVar8 = plVar15;
            piVar18 = piVar10;
            lVar19 = lVar4;
            if (plVar15 == plVar12) {
LAB_14022dd70:
              func_0x00014028aff0(0xd8);
              return;
            }
            do {
              piVar5 = (int *)plVar8[2];
              if (*(longlong *)(piVar5 + 4) == lVar3) {
                plVar11 = (longlong *)(piVar5 + 6);
                piVar13 = piVar10;
                if (0xf < *(ulonglong *)(piVar17 + 0xc)) {
                  piVar13 = *(int **)piVar10;
                }
                if (0xf < *(ulonglong *)(piVar5 + 0xc)) {
                  plVar11 = (longlong *)*plVar11;
                }
                if ((*(longlong *)(piVar5 + 10) == *(longlong *)(piVar17 + 10)) &&
                   ((*(longlong *)(piVar5 + 10) == 0 ||
                    (piVar10 = piVar18, iVar7 = func_0x0001404210c0(plVar11,piVar13),
                    piVar18 = piVar10, iVar7 == 0)))) goto LAB_14022da06;
              }
              plVar8 = (longlong *)*plVar8;
              if (plVar8 == plVar12) {
                puVar9 = (undefined8 *)0x0;
                do {
                  if (*(int *)plVar15[2] == 0) {
                    if (puVar9 == (undefined8 *)0x0) {
                      func_0x00014028aff0(8);
                      return;
                    }
                    *puVar9 = (int *)plVar15[2];
                    puVar9 = puVar9 + 1;
                  }
                  plVar15 = (longlong *)*plVar15;
                } while (plVar15 != plVar12);
                if (3 < (ulonglong)((longlong)puVar9 >> 3)) {
                  FUN_1401da070(0,puVar9,(longlong)puVar9 >> 3,(ulonglong)param_2 & 0xff);
                  if (lRam0000000000000000 != 0) {
                    func_0x00014000dab0(lRam0000000000000000 + 0x80);
                    return;
                  }
                  lVar3 = *(longlong *)(lVar19 + 0x1b10);
                  uVar16 = *(ulonglong *)(lVar19 + 0x1b28) & 0xa8c7f832281a39c5;
                  plVar12 = *(longlong **)(lVar3 + 8 + uVar16 * 0x10);
                  if (plVar12 != *(longlong **)(lVar19 + 0x1b00)) {
                    lVar4 = plVar12[2];
                    while( true ) {
                      if (lVar4 == 0) goto LAB_14022dcc3;
                      if (plVar12 == *(longlong **)(lVar3 + uVar16 * 0x10)) break;
                      plVar12 = (longlong *)plVar12[1];
                      lVar4 = plVar12[2];
                    }
                  }
                  plVar12 = (longlong *)0x0;
LAB_14022dcc3:
                  if (plVar12 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(0,8,puVar9 + -1);
                  }
                  uVar16 = *(ulonglong *)(lVar19 + 0x1b28) & 0xa8c7f832281a39c5;
                  plVar15 = *(longlong **)(lVar3 + uVar16 * 0x10);
                  if (*(longlong **)(lVar3 + 8 + uVar16 * 0x10) == plVar12) {
                    if (plVar15 == plVar12) {
                      uVar6 = *(undefined8 *)(lVar19 + 0x1b00);
                      *(undefined8 *)(lVar3 + uVar16 * 0x10) = uVar6;
                      *(undefined8 *)(lVar3 + 8 + uVar16 * 0x10) = uVar6;
                    }
                    else {
                      *(longlong *)(lVar3 + 8 + uVar16 * 0x10) = plVar12[1];
                    }
                  }
                  else if (plVar15 == plVar12) {
                    *(longlong *)(lVar3 + uVar16 * 0x10) = *plVar12;
                  }
                  lVar3 = *plVar12;
                  *(longlong *)(lVar19 + 0x1b08) = *(longlong *)(lVar19 + 0x1b08) + -1;
                  *(longlong *)plVar12[1] = lVar3;
                  *(longlong *)(lVar3 + 8) = plVar12[1];
                  func_0x00014028b040(plVar12,0x18);
                  return;
                }
                goto LAB_14022dd70;
              }
            } while( true );
          }
          if (iVar7 == 3) {
            lVar3 = *(longlong *)(piVar17 + 4);
            *piVar17 = 2;
            lVar4 = *param_1;
            plVar12 = *(longlong **)(lVar4 + 0x1b40);
            plVar15 = (longlong *)*plVar12;
            plVar8 = plVar15;
            if (plVar15 == plVar12) {
LAB_14022d4b7:
              func_0x00014028aff0(0x1e8);
              return;
            }
            while (piVar10 = (int *)plVar8[2], *(longlong *)(piVar10 + 4) != lVar3) {
              plVar8 = (longlong *)*plVar8;
              if (plVar8 == plVar12) {
                puVar9 = (undefined8 *)0x0;
                do {
                  piVar14 = (int *)plVar15[2];
                  if (*piVar14 == 0) {
                    if (puVar9 == (undefined8 *)0x0) {
                      puVar9 = (undefined8 *)FUN_140017460(8);
                      *puVar9 = piVar14;
                    /* WARNING: Subroutine does not return */
                      FUN_1404211c0(puVar9,0,0);
                    }
                    *puVar9 = piVar14;
                    puVar9 = puVar9 + 1;
                  }
                  plVar15 = (longlong *)*plVar15;
                } while (plVar15 != plVar12);
                if (3 < (ulonglong)((longlong)puVar9 >> 3)) {
                  FUN_1401da070(0,puVar9,(longlong)puVar9 >> 3,(ulonglong)param_2 & 0xff,0,lVar3);
                  if (lRam0000000000000000 != 0) {
                    func_0x0001401d45f0(lRam0000000000000000 + 0x128);
                    func_0x0001401d45f0(lRam0000000000000000 + 0x68);
                    func_0x000140031c50(lRam0000000000000000 + 0x50);
                    FUN_1401d94e0(lRam0000000000000000 + 0x38);
                    FUN_1401d94e0(lRam0000000000000000 + 0x20);
                    func_0x00014028b040(lRam0000000000000000,0x1e8);
                    return;
                  }
                  uVar16 = *(ulonglong *)(lVar4 + 0x1b68) & 0xa8c7f832281a39c5;
                  plVar12 = *(longlong **)(*(longlong *)(lVar4 + 0x1b50) + 8 + uVar16 * 0x10);
                  if (plVar12 != *(longlong **)(lVar4 + 0x1b40)) {
                    lVar3 = plVar12[2];
                    while( true ) {
                      if (lVar3 == 0) goto LAB_14022d436;
                      if (plVar12 == *(longlong **)(*(longlong *)(lVar4 + 0x1b50) + uVar16 * 0x10))
                      break;
                      plVar12 = (longlong *)plVar12[1];
                      lVar3 = plVar12[2];
                    }
                  }
                  plVar12 = (longlong *)0x0;
LAB_14022d436:
                  if (plVar12 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1404211c0(0,8,puVar9 + -1);
                  }
                  FUN_1401dc480(lVar4 + 0x1b38,plVar12);
                  lVar3 = *plVar12;
                  *(longlong *)(lVar4 + 0x1b48) = *(longlong *)(lVar4 + 0x1b48) + -1;
                  *(longlong *)plVar12[1] = lVar3;
                  *(longlong *)(lVar3 + 8) = plVar12[1];
                  func_0x00014028b040(plVar12,0x18);
                  return;
                }
                goto LAB_14022d4b7;
              }
            }
            *piVar10 = *piVar10 + 1;
            piVar10[1] = *(int *)(*(longlong *)(lVar4 + 0x1a60) + 0x144);
            *(int **)(piVar14 + 4) = piVar10;
          }
        }
        goto LAB_14022e3bb;
      }
UNWIND_INFO_14022e3dc_FrameRegister:
      piVar17 = (int *)((longlong)&local_68 + (longlong)*piVar14 * 4);
      *piVar17 = *piVar17 + 1;
    }
  }
  return;
LAB_14022da06:
  *piVar5 = *piVar5 + 1;
  piVar5[1] = *(int *)(*(longlong *)(lVar4 + 0x1a60) + 0x144);
  *(int **)(piVar14 + 2) = piVar5;
LAB_14022e3bb:
  piVar17 = piVar17 + 0xe;
  if (piVar17 == piVar2) goto UNWIND_INFO_14022e3dc_FrameRegister;
  goto code_r0x00014022d140;
}

