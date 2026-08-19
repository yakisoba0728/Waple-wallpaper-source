// Function: FUN_1403e0240
// Addr: 1403e0240
// Size: 604 bytes


void FUN_1403e0240(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  double local_78;
  double dStack_70;
  
  uVar13 = 0;
  uVar11 = *(uint *)(param_1 + 0x1c);
  if (1 < uVar11) {
    do {
      local_78 = *(double *)(param_1 + 0x11c0);
      dVar7 = *(double *)(param_1 + 0x11c8);
      uVar12 = (uint)uVar13;
      if (uVar12 < *(uint *)(param_1 + 0x1c)) {
        pdVar9 = (double *)(param_1 + (uVar13 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar9 = (double *)&DAT_1404e4ff0;
      }
      dVar8 = local_78 + *pdVar9;
      pdVar9 = (double *)param_2[2];
      dVar14 = dVar7;
      dVar6 = dVar8;
      if (pdVar9 != (double *)0x0) {
        dVar6 = dVar8 + *pdVar9;
        dVar14 = dVar7 + pdVar9[1];
      }
      fVar15 = (float)dVar14 * *(float *)(*param_2 + 0x54);
      fVar16 = (float)dVar6 * *(float *)(*param_2 + 0x50);
      plVar2 = (longlong *)param_2[1];
      plVar1 = plVar2 + 2;
      lVar3 = plVar2[1];
      lVar4 = *plVar2;
      dStack_70 = dVar7;
      if ((int)plVar2[2] == 0) {
        uVar10 = 0;
        if (*(undefined8 **)(lVar4 + 0x38) != (undefined8 *)0x0) {
          uVar10 = **(undefined8 **)(lVar4 + 0x38);
        }
        (**(code **)(lVar4 + 0x10))
                  (lVar4,lVar3,plVar1,*(undefined4 *)((longlong)plVar2 + 0x1c),(int)plVar2[4],uVar10
                  );
        *(undefined4 *)((longlong)plVar2 + 0x14) = *(undefined4 *)((longlong)plVar2 + 0x1c);
        *(int *)(plVar2 + 3) = (int)plVar2[4];
        *(undefined4 *)plVar1 = 1;
      }
      uVar10 = 0;
      if (*(longlong *)(lVar4 + 0x38) != 0) {
        uVar10 = *(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 8);
      }
      (**(code **)(lVar4 + 0x18))(lVar4,lVar3,plVar1,fVar16,fVar15,uVar10);
      *(float *)((longlong)plVar2 + 0x1c) = fVar16;
      *(float *)(plVar2 + 4) = fVar15;
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = dVar8;
      auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar5;
      if (uVar12 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar9 = (double *)(param_1 + ((ulonglong)(uVar12 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar9 = (double *)&DAT_1404e4ff0;
      }
      dVar7 = dVar7 + *pdVar9;
      pdVar9 = (double *)param_2[2];
      dVar14 = dVar7;
      dVar6 = dVar8;
      if (pdVar9 != (double *)0x0) {
        dVar6 = dVar8 + *pdVar9;
        dVar14 = dVar7 + pdVar9[1];
      }
      fVar15 = (float)dVar14 * *(float *)(*param_2 + 0x54);
      fVar16 = (float)dVar6 * *(float *)(*param_2 + 0x50);
      plVar2 = (longlong *)param_2[1];
      plVar1 = plVar2 + 2;
      lVar3 = plVar2[1];
      lVar4 = *plVar2;
      if ((int)plVar2[2] == 0) {
        uVar10 = 0;
        if (*(undefined8 **)(lVar4 + 0x38) != (undefined8 *)0x0) {
          uVar10 = **(undefined8 **)(lVar4 + 0x38);
        }
        (**(code **)(lVar4 + 0x10))
                  (lVar4,lVar3,plVar1,*(undefined4 *)((longlong)plVar2 + 0x1c),(int)plVar2[4],uVar10
                  );
        *(undefined4 *)((longlong)plVar2 + 0x14) = *(undefined4 *)((longlong)plVar2 + 0x1c);
        *(int *)(plVar2 + 3) = (int)plVar2[4];
        *(undefined4 *)plVar1 = 1;
      }
      uVar10 = 0;
      if (*(longlong *)(lVar4 + 0x38) != 0) {
        uVar10 = *(undefined8 *)(*(longlong *)(lVar4 + 0x38) + 8);
      }
      (**(code **)(lVar4 + 0x18))(lVar4,lVar3,plVar1,fVar16,fVar15,uVar10);
      *(float *)((longlong)plVar2 + 0x1c) = fVar16;
      uVar13 = (ulonglong)(uVar12 + 2);
      *(float *)(plVar2 + 4) = fVar15;
      *(double *)(param_1 + 0x11c0) = dVar8;
      *(double *)(param_1 + 0x11c8) = dVar7;
      uVar11 = *(uint *)(param_1 + 0x1c);
    } while (uVar12 + 4 <= uVar11);
  }
  if ((uint)uVar13 < uVar11) {
    dStack_70 = *(double *)(param_1 + 0x11c8);
    local_78 = *(double *)(param_1 + 0x11c0) + *(double *)(param_1 + 0x20 + uVar13 * 8);
    FUN_1403eae30(param_1,param_2,&local_78);
  }
  return;
}

