// Function: FUN_1403fae30
// Addr: 1403fae30
// Size: 863 bytes


void FUN_1403fae30(longlong param_1,longlong *param_2)

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
  double *pdVar10;
  undefined8 uVar11;
  double *pdVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  
  uVar13 = 0;
  if (5 < *(uint *)(param_1 + 0x1c)) {
    do {
      if (uVar13 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar12 = (double *)(param_1 + ((ulonglong)(uVar13 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar12 = (double *)&DAT_1404e4f20;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      if (uVar13 < *(uint *)(param_1 + 0x1c)) {
        pdVar10 = (double *)(param_1 + ((ulonglong)uVar13 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar10 = (double *)&DAT_1404e4f20;
      }
      dVar16 = *(double *)(param_1 + 0x11c0) + *pdVar10;
      dVar17 = *(double *)(param_1 + 0x11c8) + *pdVar12;
      if (uVar13 + 3 < *(uint *)(param_1 + 0x1c)) {
        pdVar12 = (double *)(param_1 + ((ulonglong)(uVar13 + 3) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar12 = (double *)&DAT_1404e4f20;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      if (uVar13 + 2 < *(uint *)(param_1 + 0x1c)) {
        pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 2) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar10 = (double *)&DAT_1404e4f20;
      }
      dVar14 = dVar16 + *pdVar10;
      dVar15 = dVar17 + *pdVar12;
      if (uVar13 + 5 < *(uint *)(param_1 + 0x1c)) {
        pdVar12 = (double *)(param_1 + ((ulonglong)(uVar13 + 5) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar12 = (double *)&DAT_1404e4f20;
        DAT_1404e4f20 = DAT_14045dd10;
      }
      if (uVar13 + 4 < *(uint *)(param_1 + 0x1c)) {
        pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 4) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar10 = (double *)&DAT_1404e4f20;
      }
      dVar8 = dVar14 + *pdVar10;
      dVar9 = dVar15 + *pdVar12;
      fVar3 = *(float *)(param_2[1] + 0x54);
      fVar4 = *(float *)(param_2[1] + 0x50);
      plVar5 = (longlong *)*param_2;
      plVar2 = plVar5 + 2;
      lVar6 = plVar5[1];
      lVar7 = *plVar5;
      fVar18 = (float)dVar9 * fVar3;
      fVar19 = (float)dVar8 * fVar4;
      if ((int)plVar5[2] == 0) {
        uVar11 = 0;
        if (*(undefined8 **)(lVar7 + 0x38) != (undefined8 *)0x0) {
          uVar11 = **(undefined8 **)(lVar7 + 0x38);
        }
        (**(code **)(lVar7 + 0x10))
                  (lVar7,lVar6,plVar2,*(undefined4 *)((longlong)plVar5 + 0x1c),(int)plVar5[4],uVar11
                  );
        *(undefined4 *)((longlong)plVar5 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0x1c);
        *(int *)(plVar5 + 3) = (int)plVar5[4];
        *(undefined4 *)plVar2 = 1;
      }
      uVar11 = 0;
      if (*(longlong *)(lVar7 + 0x38) != 0) {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x18);
      }
      (**(code **)(lVar7 + 0x28))
                (lVar7,lVar6,plVar2,(float)dVar16 * fVar4,(float)dVar17 * fVar3,
                 fVar4 * (float)dVar14,fVar3 * (float)dVar15,fVar19,fVar18,uVar11);
      *(float *)((longlong)plVar5 + 0x1c) = fVar19;
      *(float *)(plVar5 + 4) = fVar18;
      *(double *)(param_1 + 0x11c0) = dVar8;
      *(double *)(param_1 + 0x11c8) = dVar9;
      uVar1 = uVar13 + 0xc;
      uVar13 = uVar13 + 6;
    } while (uVar1 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

