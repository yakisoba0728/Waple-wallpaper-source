// Function: FUN_1403e0810
// Addr: 1403e0810
// Size: 751 bytes


void FUN_1403e0810(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double *pdVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  double local_88;
  double dStack_80;
  
  uVar15 = 0;
  uVar13 = *(uint *)(param_1 + 0x1c);
  if (1 < uVar13) {
    do {
      local_88 = *(double *)(param_1 + 0x11c0);
      uVar8 = *(undefined4 *)(param_1 + 0x11c8);
      uVar9 = *(undefined4 *)(param_1 + 0x11cc);
      dVar10 = *(double *)(param_1 + 0x11c8);
      uVar14 = (uint)uVar15;
      if (uVar14 < *(uint *)(param_1 + 0x1c)) {
        pdVar11 = (double *)(param_1 + (uVar15 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar11 = (double *)&DAT_1404e4f20;
      }
      dVar7 = local_88 + *pdVar11;
      fVar16 = (float)dVar10 * *(float *)(param_2[1] + 0x54);
      fVar17 = (float)dVar7 * *(float *)(param_2[1] + 0x50);
      plVar3 = (longlong *)*param_2;
      plVar1 = plVar3 + 2;
      lVar4 = plVar3[1];
      lVar5 = *plVar3;
      dStack_80 = dVar10;
      if ((int)plVar3[2] == 0) {
        uVar12 = 0;
        if (*(undefined8 **)(lVar5 + 0x38) != (undefined8 *)0x0) {
          uVar12 = **(undefined8 **)(lVar5 + 0x38);
        }
        (**(code **)(lVar5 + 0x10))
                  (lVar5,lVar4,plVar1,*(undefined4 *)((longlong)plVar3 + 0x1c),(int)plVar3[4],uVar12
                  );
        *(undefined4 *)((longlong)plVar3 + 0x14) = *(undefined4 *)((longlong)plVar3 + 0x1c);
        *(int *)(plVar3 + 3) = (int)plVar3[4];
        *(undefined4 *)plVar1 = 1;
      }
      uVar12 = 0;
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8);
      }
      (**(code **)(lVar5 + 0x18))(lVar5,lVar4,plVar1,fVar17,fVar16,uVar12);
      *(float *)((longlong)plVar3 + 0x1c) = fVar17;
      *(float *)(plVar3 + 4) = fVar16;
      auVar6._8_4_ = uVar8;
      auVar6._0_8_ = dVar7;
      auVar6._12_4_ = uVar9;
      *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar6;
      if (uVar14 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar11 = (double *)(param_1 + ((ulonglong)(uVar14 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4f20 = DAT_14045dd10;
        pdVar11 = (double *)&DAT_1404e4f20;
      }
      dVar2 = *pdVar11;
      fVar17 = (float)dVar7 * *(float *)(param_2[1] + 0x50);
      fVar16 = (float)(dVar10 + dVar2) * *(float *)(param_2[1] + 0x54);
      plVar3 = (longlong *)*param_2;
      plVar1 = plVar3 + 2;
      lVar4 = plVar3[1];
      lVar5 = *plVar3;
      if ((int)plVar3[2] == 0) {
        uVar12 = 0;
        if (*(undefined8 **)(lVar5 + 0x38) != (undefined8 *)0x0) {
          uVar12 = **(undefined8 **)(lVar5 + 0x38);
        }
        (**(code **)(lVar5 + 0x10))
                  (lVar5,lVar4,plVar1,*(undefined4 *)((longlong)plVar3 + 0x1c),(int)plVar3[4],uVar12
                  );
        *(undefined4 *)((longlong)plVar3 + 0x14) = *(undefined4 *)((longlong)plVar3 + 0x1c);
        *(int *)(plVar3 + 3) = (int)plVar3[4];
        *(undefined4 *)plVar1 = 1;
      }
      uVar12 = 0;
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8);
      }
      (**(code **)(lVar5 + 0x18))(lVar5,lVar4,plVar1,fVar17,fVar16,uVar12);
      *(float *)((longlong)plVar3 + 0x1c) = fVar17;
      uVar15 = (ulonglong)(uVar14 + 2);
      *(float *)(plVar3 + 4) = fVar16;
      *(double *)(param_1 + 0x11c0) = dVar7;
      *(double *)(param_1 + 0x11c8) = dVar10 + dVar2;
      uVar13 = *(uint *)(param_1 + 0x1c);
    } while (uVar14 + 4 <= uVar13);
  }
  if ((uint)uVar15 < uVar13) {
    dStack_80 = *(double *)(param_1 + 0x11c8);
    local_88 = *(double *)(param_1 + 0x11c0) + *(double *)(param_1 + 0x20 + uVar15 * 8);
    FUN_1403eae70(param_1,param_2,&local_88);
  }
  return;
}

