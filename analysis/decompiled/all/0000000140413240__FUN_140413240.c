// Function: FUN_140413240
// Addr: 140413240
// Size: 856 bytes


void FUN_140413240(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  double *pdVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  uVar15 = *(uint *)(param_1 + 0x1c);
  puVar1 = (undefined1 *)(param_1 + 0x18);
  dVar17 = *(double *)(param_1 + 0x11c0);
  dVar5 = *(double *)(param_1 + 0x11c8);
  if ((uVar15 & 1) == 0) {
    uVar14 = 0;
  }
  else if (uVar15 == 0) {
    *puVar1 = 1;
    uVar14 = 1;
    DAT_1404e4f20 = DAT_14045dd10;
    uVar15 = *(uint *)(param_1 + 0x1c);
    dVar17 = dVar17 + DAT_14045dd10;
  }
  else {
    dVar17 = dVar17 + *(double *)(param_1 + 0x20);
    uVar14 = 1;
  }
  if (uVar14 + 4 <= uVar15) {
    do {
      if (uVar14 < *(uint *)(param_1 + 0x1c)) {
        pdVar11 = (double *)(puVar1 + ((ulonglong)uVar14 + 1) * 8);
      }
      else {
        *puVar1 = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar11 = &DAT_1404e4f20;
      }
      dVar9 = dVar5 + *pdVar11;
      if (uVar14 + 2 < *(uint *)(param_1 + 0x1c)) {
        pdVar11 = (double *)(puVar1 + ((ulonglong)(uVar14 + 2) + 1) * 8);
      }
      else {
        *puVar1 = 1;
        pdVar11 = &DAT_1404e4f20;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      if (uVar14 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar12 = (double *)(puVar1 + ((ulonglong)(uVar14 + 1) + 1) * 8);
      }
      else {
        *puVar1 = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar12 = &DAT_1404e4f20;
      }
      dVar10 = dVar17 + *pdVar12;
      dVar16 = dVar9 + *pdVar11;
      if (uVar14 + 3 < *(uint *)(param_1 + 0x1c)) {
        pdVar11 = (double *)(puVar1 + ((ulonglong)(uVar14 + 3) + 1) * 8);
      }
      else {
        *puVar1 = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar11 = &DAT_1404e4f20;
      }
      dVar5 = dVar16 + *pdVar11;
      lVar6 = param_2[1];
      fVar3 = *(float *)(lVar6 + 0x54);
      fVar4 = *(float *)(lVar6 + 0x50);
      fVar18 = (float)dVar10 * *(float *)(lVar6 + 0x50);
      plVar7 = (longlong *)*param_2;
      plVar2 = plVar7 + 2;
      lVar6 = plVar7[1];
      lVar8 = *plVar7;
      if ((int)plVar7[2] == 0) {
        uVar13 = 0;
        if (*(undefined8 **)(lVar8 + 0x38) != (undefined8 *)0x0) {
          uVar13 = **(undefined8 **)(lVar8 + 0x38);
        }
        (**(code **)(lVar8 + 0x10))
                  (lVar8,lVar6,plVar2,*(undefined4 *)((longlong)plVar7 + 0x1c),(int)plVar7[4],uVar13
                  );
        *(undefined4 *)((longlong)plVar7 + 0x14) = *(undefined4 *)((longlong)plVar7 + 0x1c);
        *(int *)(plVar7 + 3) = (int)plVar7[4];
        *(undefined4 *)plVar2 = 1;
      }
      uVar13 = 0;
      if (*(longlong *)(lVar8 + 0x38) != 0) {
        uVar13 = *(undefined8 *)(*(longlong *)(lVar8 + 0x38) + 0x18);
      }
      (**(code **)(lVar8 + 0x28))
                (lVar8,lVar6,plVar2,(float)dVar17 * fVar4,(float)dVar9 * fVar3,fVar18,
                 fVar3 * (float)dVar16,fVar18,(float)dVar5 * fVar3,uVar13);
      *(float *)((longlong)plVar7 + 0x1c) = fVar18;
      *(float *)(plVar7 + 4) = (float)dVar5 * fVar3;
      *(double *)(param_1 + 0x11c0) = dVar10;
      *(double *)(param_1 + 0x11c8) = dVar5;
      uVar15 = uVar14 + 8;
      dVar17 = dVar10;
      uVar14 = uVar14 + 4;
    } while (uVar15 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

