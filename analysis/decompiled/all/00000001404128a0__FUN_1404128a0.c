// Function: FUN_1404128a0
// Addr: 1404128a0
// Size: 560 bytes


void FUN_1404128a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double *pdVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  double local_88;
  double dStack_80;
  
  uVar14 = 0;
  uVar12 = *(uint *)(param_1 + 0x1c);
  if (1 < uVar12) {
    do {
      dVar9 = *(double *)(param_1 + 0x11c0);
      dStack_80 = *(double *)(param_1 + 0x11c8);
      uVar13 = (uint)uVar14;
      if (uVar13 < *(uint *)(param_1 + 0x1c)) {
        pdVar10 = (double *)(param_1 + (uVar14 + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar10 = (double *)&DAT_1404e4ff0;
      }
      dVar8 = dStack_80 + *pdVar10;
      uVar17 = (undefined4)((ulonglong)dVar8 >> 0x20);
      fVar16 = (float)dVar9 * *(float *)(param_2[1] + 0x50);
      fVar15 = (float)dVar8 * *(float *)(param_2[1] + 0x54);
      plVar3 = (longlong *)*param_2;
      plVar1 = plVar3 + 2;
      lVar4 = plVar3[1];
      lVar5 = *plVar3;
      local_88 = dVar9;
      if ((int)plVar3[2] == 0) {
        uVar11 = 0;
        if (*(undefined8 **)(lVar5 + 0x38) != (undefined8 *)0x0) {
          uVar11 = **(undefined8 **)(lVar5 + 0x38);
        }
        (**(code **)(lVar5 + 0x10))
                  (lVar5,lVar4,plVar1,*(undefined4 *)((longlong)plVar3 + 0x1c),(int)plVar3[4],uVar11
                  );
        *(undefined4 *)((longlong)plVar3 + 0x14) = *(undefined4 *)((longlong)plVar3 + 0x1c);
        *(int *)(plVar3 + 3) = (int)plVar3[4];
        *(undefined4 *)plVar1 = 1;
      }
      uVar11 = 0;
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8);
      }
      (**(code **)(lVar5 + 0x18))(lVar5,lVar4,plVar1,fVar16,fVar15,uVar11);
      *(float *)((longlong)plVar3 + 0x1c) = fVar16;
      *(float *)(plVar3 + 4) = fVar15;
      auVar6._8_4_ = SUB84(dVar8,0);
      auVar6._0_8_ = dVar9;
      auVar6._12_4_ = uVar17;
      *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar6;
      if (uVar13 + 1 < *(uint *)(param_1 + 0x1c)) {
        pdVar10 = (double *)(param_1 + ((ulonglong)(uVar13 + 1) + 4) * 8);
      }
      else {
        *(undefined1 *)(param_1 + 0x18) = 1;
        DAT_1404e4ff0 = DAT_14045dde0;
        pdVar10 = (double *)&DAT_1404e4ff0;
      }
      dVar2 = *pdVar10;
      fVar16 = (float)dVar8 * *(float *)(param_2[1] + 0x54);
      fVar15 = (float)(dVar9 + dVar2) * *(float *)(param_2[1] + 0x50);
      plVar3 = (longlong *)*param_2;
      plVar1 = plVar3 + 2;
      lVar4 = plVar3[1];
      lVar5 = *plVar3;
      if ((int)plVar3[2] == 0) {
        uVar11 = 0;
        if (*(undefined8 **)(lVar5 + 0x38) != (undefined8 *)0x0) {
          uVar11 = **(undefined8 **)(lVar5 + 0x38);
        }
        (**(code **)(lVar5 + 0x10))
                  (lVar5,lVar4,plVar1,*(undefined4 *)((longlong)plVar3 + 0x1c),(int)plVar3[4],uVar11
                  );
        *(undefined4 *)((longlong)plVar3 + 0x14) = *(undefined4 *)((longlong)plVar3 + 0x1c);
        *(int *)(plVar3 + 3) = (int)plVar3[4];
        *(undefined4 *)plVar1 = 1;
      }
      uVar11 = 0;
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        uVar11 = *(undefined8 *)(*(longlong *)(lVar5 + 0x38) + 8);
      }
      (**(code **)(lVar5 + 0x18))(lVar5,lVar4,plVar1,fVar15,fVar16,uVar11);
      uVar14 = (ulonglong)(uVar13 + 2);
      *(float *)((longlong)plVar3 + 0x1c) = fVar15;
      *(float *)(plVar3 + 4) = fVar16;
      auVar7._8_4_ = SUB84(dVar8,0);
      auVar7._0_8_ = dVar9 + dVar2;
      auVar7._12_4_ = uVar17;
      *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar7;
      uVar12 = *(uint *)(param_1 + 0x1c);
    } while (uVar13 + 4 <= uVar12);
  }
  if ((uint)uVar14 < uVar12) {
    local_88 = *(double *)(param_1 + 0x11c0);
    dStack_80 = *(double *)(param_1 + 0x11c8) + *(double *)(param_1 + 0x20 + uVar14 * 8);
    FUN_1403eaf40(param_1,param_2,&local_88);
  }
  return;
}

