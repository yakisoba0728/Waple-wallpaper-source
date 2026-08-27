// Function: FUN_1403f9ba0
// Addr: 1403f9ba0
// Size: 926 bytes


void FUN_1403f9ba0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  double *pdVar11;
  undefined8 uVar12;
  double *pdVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  
  if (7 < *(uint *)(param_1 + 0x1c)) {
    uVar10 = *(uint *)(param_1 + 0x1c) - 6;
    pdVar14 = (double *)&DAT_1404e4f20;
    uVar15 = 0;
    uVar16 = uVar15;
    if (1 < uVar10) {
      do {
        if (uVar15 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar13 = (double *)(param_1 + ((ulonglong)(uVar15 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar13 = (double *)&DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar15 < *(uint *)(param_1 + 0x1c)) {
          pdVar11 = (double *)(param_1 + ((ulonglong)uVar15 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar11 = (double *)&DAT_1404e4f20;
        }
        dVar8 = *(double *)(param_1 + 0x11c0) + *pdVar11;
        dVar9 = *(double *)(param_1 + 0x11c8) + *pdVar13;
        fVar18 = (float)dVar8 * *(float *)(param_2[1] + 0x50);
        fVar17 = (float)dVar9 * *(float *)(param_2[1] + 0x54);
        plVar3 = (longlong *)*param_2;
        plVar2 = plVar3 + 2;
        lVar4 = *plVar3;
        lVar5 = plVar3[1];
        if ((int)plVar3[2] == 0) {
          puVar6 = *(undefined8 **)(lVar4 + 0x38);
          uVar12 = 0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar12 = *puVar6;
          }
          (**(code **)(lVar4 + 0x10))
                    (lVar4,lVar5,plVar2,*(undefined4 *)((longlong)plVar3 + 0x1c),(int)plVar3[4],
                     uVar12);
          *(undefined4 *)((longlong)plVar3 + 0x14) = *(undefined4 *)((longlong)plVar3 + 0x1c);
          *(int *)(plVar3 + 3) = (int)plVar3[4];
          *(undefined4 *)plVar2 = 1;
        }
        lVar7 = *(longlong *)(lVar4 + 0x38);
        uVar12 = 0;
        if (lVar7 != 0) {
          uVar12 = *(undefined8 *)(lVar7 + 8);
        }
        (**(code **)(lVar4 + 0x18))(lVar4,lVar5,plVar2,fVar18,fVar17,uVar12);
        uVar16 = uVar15 + 2;
        *(float *)((longlong)plVar3 + 0x1c) = fVar18;
        *(float *)(plVar3 + 4) = fVar17;
        *(double *)(param_1 + 0x11c0) = dVar8;
        *(double *)(param_1 + 0x11c8) = dVar9;
        uVar1 = uVar15 + 4;
        uVar15 = uVar16;
      } while (uVar1 <= uVar10);
    }
    if (uVar16 + 1 < *(uint *)(param_1 + 0x1c)) {
      pdVar13 = (double *)(param_1 + ((ulonglong)(uVar16 + 1) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar13 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar16 < *(uint *)(param_1 + 0x1c)) {
      pdVar11 = (double *)(param_1 + ((ulonglong)uVar16 + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar11 = (double *)&DAT_1404e4f20;
    }
    local_b8 = *(double *)(param_1 + 0x11c0) + *pdVar11;
    dStack_b0 = *(double *)(param_1 + 0x11c8) + *pdVar13;
    if (uVar16 + 3 < *(uint *)(param_1 + 0x1c)) {
      pdVar13 = (double *)(param_1 + ((ulonglong)(uVar16 + 3) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar13 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar16 + 2 < *(uint *)(param_1 + 0x1c)) {
      pdVar11 = (double *)(param_1 + ((ulonglong)(uVar16 + 2) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar11 = (double *)&DAT_1404e4f20;
    }
    local_98 = local_b8 + *pdVar11;
    local_90 = dStack_b0 + *pdVar13;
    if (uVar16 + 5 < *(uint *)(param_1 + 0x1c)) {
      pdVar13 = (double *)(param_1 + ((ulonglong)(uVar16 + 5) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar13 = (double *)&DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (uVar16 + 4 < *(uint *)(param_1 + 0x1c)) {
      pdVar14 = (double *)(param_1 + ((ulonglong)(uVar16 + 4) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    local_a0 = local_90 + *pdVar13;
    local_a8 = local_98 + *pdVar14;
    FUN_1403bce90(param_1,local_a0,&local_b8,&local_98,&local_a8);
  }
  return;
}

