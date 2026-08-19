// Function: FUN_1403fa530
// Addr: 1403fa530
// Size: 279 bytes


void FUN_1403fa530(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  undefined8 uVar9;
  double *pdVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  
  uVar11 = 0;
  if (1 < *(uint *)(param_1 + 0x1c)) {
    do {
      if (uVar11 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar10 = (double *)(param_1 + ((ulonglong)(uVar11 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        pdVar10 = (double *)&DAT_1404e4ff0;
        DAT_1404e4ff0 = DAT_14045dde0;
      }
      if (uVar11 < *(uint *)(param_1 + 0x1c)) {
        pdVar8 = (double *)(param_1 + ((ulonglong)uVar11 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar8 = (double *)&DAT_1404e4ff0;
      }
      dVar6 = *(double *)(param_1 + 0x11c0) + *pdVar8;
      dVar7 = *(double *)(param_1 + 0x11c8) + *pdVar10;
      fVar13 = (float)dVar6 * *(float *)(param_2[1] + 0x50);
      fVar12 = (float)dVar7 * *(float *)(param_2[1] + 0x54);
      plVar3 = (longlong *)*param_2;
      plVar2 = plVar3 + 2;
      lVar4 = plVar3[1];
      lVar5 = *plVar3;
      if ((int)plVar3[2] == 0) {
        uVar9 = 0;
        if (*(undefined8 **)(lVar5 + 0x38) != (undefined8 *)0x0) {
          uVar9 = **(undefined8 **)(lVar5 + 0x38);
        }
        (**(code **)(lVar5 + 0x10))
                  (lVar5,lVar4,plVar2,*(undefined4 *)((longlong)plVar3 + 0x1c),(int)plVar3[4],uVar9)
        ;
        *(undefined4 *)((longlong)plVar3 + 0x14) = *(undefined4 *)((longlong)plVar3 + 0x1c);
        *(int *)(plVar3 + 3) = (int)plVar3[4];
        *(undefined4 *)plVar2 = 1;
      }
      uVar9 = 0;
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8);
      }
      (**(code **)(lVar5 + 0x18))(lVar5,lVar4,plVar2,fVar13,fVar12,uVar9);
      *(float *)((longlong)plVar3 + 0x1c) = fVar13;
      *(float *)(plVar3 + 4) = fVar12;
      *(double *)(param_1 + 0x11c0) = dVar6;
      *(double *)(param_1 + 0x11c8) = dVar7;
      uVar1 = uVar11 + 4;
      uVar11 = uVar11 + 2;
    } while (uVar1 <= *(uint *)(param_1 + 0x1c));
  }
  return;
}

