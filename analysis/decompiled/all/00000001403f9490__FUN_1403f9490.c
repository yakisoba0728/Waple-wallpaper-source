// Function: FUN_1403f9490
// Addr: 1403f9490
// Size: 519 bytes


void FUN_1403f9490(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  double *pdVar10;
  undefined8 uVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  double local_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  if (7 < *(uint *)(param_1 + 0x1c)) {
    uVar9 = *(uint *)(param_1 + 0x1c) - 6;
    pdVar13 = (double *)&DAT_1404e4ff0;
    uVar14 = 0;
    uVar15 = uVar14;
    if (1 < uVar9) {
      do {
        if (uVar14 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar12 = (double *)(param_1 + ((ulonglong)(uVar14 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar12 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar14 < *(uint *)(param_1 + 0x1c)) {
          pdVar10 = (double *)(param_1 + ((ulonglong)uVar14 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar10 = (double *)&DAT_1404e4ff0;
        }
        dVar7 = *(double *)(param_1 + 0x11c0) + *pdVar10;
        dVar8 = *(double *)(param_1 + 0x11c8) + *pdVar12;
        pdVar12 = (double *)param_2[2];
        dVar16 = dVar8;
        dVar6 = dVar7;
        if (pdVar12 != (double *)0x0) {
          dVar6 = dVar7 + *pdVar12;
          dVar16 = dVar8 + pdVar12[1];
        }
        fVar17 = (float)dVar16 * *(float *)(*param_2 + 0x54);
        fVar18 = (float)dVar6 * *(float *)(*param_2 + 0x50);
        plVar3 = (longlong *)param_2[1];
        plVar2 = plVar3 + 2;
        lVar4 = plVar3[1];
        lVar5 = *plVar3;
        if ((int)plVar3[2] == 0) {
          uVar11 = 0;
          if (*(undefined8 **)(lVar5 + 0x38) != (undefined8 *)0x0) {
            uVar11 = **(undefined8 **)(lVar5 + 0x38);
          }
          (**(code **)(lVar5 + 0x10))
                    (lVar5,lVar4,plVar2,*(undefined4 *)((longlong)plVar3 + 0x1c),(int)plVar3[4],
                     uVar11);
          *(undefined4 *)((longlong)plVar3 + 0x14) = *(undefined4 *)((longlong)plVar3 + 0x1c);
          *(int *)(plVar3 + 3) = (int)plVar3[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar11 = 0;
        if (*(longlong *)(lVar5 + 0x38) != 0) {
          uVar11 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8);
        }
        (**(code **)(lVar5 + 0x18))(lVar5,lVar4,plVar2,fVar18,fVar17,uVar11);
        uVar15 = uVar14 + 2;
        *(float *)((longlong)plVar3 + 0x1c) = fVar18;
        *(float *)(plVar3 + 4) = fVar17;
        *(double *)(param_1 + 0x11c0) = dVar7;
        *(double *)(param_1 + 0x11c8) = dVar8;
        uVar1 = uVar14 + 4;
        uVar14 = uVar15;
      } while (uVar1 <= uVar9);
    }
    if (uVar15 + 1 < *(uint *)(param_1 + 0x1c)) {
      pdVar12 = (double *)(param_1 + ((ulonglong)(uVar15 + 1) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar12 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    if (uVar15 < *(uint *)(param_1 + 0x1c)) {
      pdVar10 = (double *)(param_1 + ((ulonglong)uVar15 + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar10 = (double *)&DAT_1404e4ff0;
    }
    local_a8 = *(double *)(param_1 + 0x11c0) + *pdVar10;
    dStack_a0 = *(double *)(param_1 + 0x11c8) + *pdVar12;
    if (uVar15 + 3 < *(uint *)(param_1 + 0x1c)) {
      pdVar12 = (double *)(param_1 + ((ulonglong)(uVar15 + 3) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar12 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    if (uVar15 + 2 < *(uint *)(param_1 + 0x1c)) {
      pdVar10 = (double *)(param_1 + ((ulonglong)(uVar15 + 2) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar10 = (double *)&DAT_1404e4ff0;
    }
    dStack_88 = local_a8 + *pdVar10;
    dStack_80 = dStack_a0 + *pdVar12;
    if (uVar15 + 5 < *(uint *)(param_1 + 0x1c)) {
      pdVar12 = (double *)(param_1 + ((ulonglong)(uVar15 + 5) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar12 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    if (uVar15 + 4 < *(uint *)(param_1 + 0x1c)) {
      pdVar13 = (double *)(param_1 + ((ulonglong)(uVar15 + 4) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    dVar7 = dStack_80 + *pdVar12;
    dVar6 = dStack_88 + *pdVar13;
    dStack_98 = dVar6;
    dStack_90 = dVar7;
    FUN_1403bca20(param_2,&local_a8,&dStack_88,&dStack_98);
    *(double *)(param_1 + 0x11c0) = dVar6;
    *(double *)(param_1 + 0x11c8) = dVar7;
  }
  return;
}

