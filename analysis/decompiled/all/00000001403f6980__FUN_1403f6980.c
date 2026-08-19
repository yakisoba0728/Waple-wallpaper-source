// Function: FUN_1403f6980
// Addr: 1403f6980
// Size: 825 bytes


void FUN_1403f6980(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  double *pdVar12;
  undefined8 uVar13;
  double *pdVar14;
  double *pdVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  double local_e8;
  double dStack_e0;
  
  if (7 < *(uint *)(param_1 + 0x1c)) {
    uVar11 = *(uint *)(param_1 + 0x1c) - 2;
    pdVar15 = (double *)&DAT_1404e4ff0;
    uVar16 = 0;
    uVar17 = uVar16;
    if (5 < uVar11) {
      do {
        if (uVar16 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar16 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar14 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar16 < *(uint *)(param_1 + 0x1c)) {
          pdVar12 = (double *)(param_1 + ((ulonglong)uVar16 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar12 = (double *)&DAT_1404e4ff0;
        }
        dVar19 = *(double *)(param_1 + 0x11c0) + *pdVar12;
        dVar20 = *(double *)(param_1 + 0x11c8) + *pdVar14;
        if (uVar16 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar16 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar14 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar16 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar12 = (double *)(param_1 + ((ulonglong)(uVar16 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar12 = (double *)&DAT_1404e4ff0;
        }
        dVar8 = dVar19 + *pdVar12;
        dVar18 = dVar20 + *pdVar14;
        if (uVar16 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar16 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar14 = (double *)&DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar16 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar12 = (double *)(param_1 + ((ulonglong)(uVar16 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar12 = (double *)&DAT_1404e4ff0;
        }
        dVar9 = dVar8 + *pdVar12;
        dVar10 = dVar18 + *pdVar14;
        fVar3 = *(float *)(param_2[1] + 0x54);
        fVar4 = *(float *)(param_2[1] + 0x50);
        plVar5 = (longlong *)*param_2;
        plVar2 = plVar5 + 2;
        lVar6 = plVar5[1];
        lVar7 = *plVar5;
        fVar21 = (float)dVar10 * fVar3;
        fVar22 = (float)dVar9 * fVar4;
        if ((int)plVar5[2] == 0) {
          uVar13 = 0;
          if (*(undefined8 **)(lVar7 + 0x38) != (undefined8 *)0x0) {
            uVar13 = **(undefined8 **)(lVar7 + 0x38);
          }
          (**(code **)(lVar7 + 0x10))
                    (lVar7,lVar6,plVar2,*(undefined4 *)((longlong)plVar5 + 0x1c),(int)plVar5[4],
                     uVar13);
          *(undefined4 *)((longlong)plVar5 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0x1c);
          *(int *)(plVar5 + 3) = (int)plVar5[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar13 = 0;
        if (*(longlong *)(lVar7 + 0x38) != 0) {
          uVar13 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x18);
        }
        (**(code **)(lVar7 + 0x28))
                  (lVar7,lVar6,plVar2,(float)dVar19 * fVar4,(float)dVar20 * fVar3,
                   fVar4 * (float)dVar8,fVar3 * (float)dVar18,fVar22,fVar21,uVar13);
        uVar17 = uVar16 + 6;
        *(float *)((longlong)plVar5 + 0x1c) = fVar22;
        *(float *)(plVar5 + 4) = fVar21;
        *(double *)(param_1 + 0x11c0) = dVar9;
        *(double *)(param_1 + 0x11c8) = dVar10;
        uVar1 = uVar16 + 0xc;
        uVar16 = uVar17;
      } while (uVar1 <= uVar11);
    }
    if (uVar17 + 1 < *(uint *)(param_1 + 0x1c)) {
      pdVar14 = (double *)(param_1 + ((ulonglong)(uVar17 + 1) + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar14 = (double *)&DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    if (uVar17 < *(uint *)(param_1 + 0x1c)) {
      pdVar15 = (double *)(param_1 + ((ulonglong)uVar17 + 4) * 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    dStack_e0 = *(double *)(param_1 + 0x11c8) + *pdVar14;
    local_e8 = *(double *)(param_1 + 0x11c0) + *pdVar15;
    FUN_1403eaf40(param_1,dStack_e0,&local_e8);
  }
  return;
}

