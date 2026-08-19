// Function: FUN_1403ec860
// Addr: 1403ec860
// Size: 70 bytes


void FUN_1403ec860(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double *pdVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  
  pdVar5 = (double *)param_2[2];
  dVar4 = *param_3;
  dVar11 = param_3[1];
  if (pdVar5 != (double *)0x0) {
    dVar4 = dVar4 + *pdVar5;
    dVar11 = dVar11 + pdVar5[1];
  }
  fVar2 = *(float *)(*param_2 + 0x54);
  fVar3 = *(float *)(*param_2 + 0x50);
  plVar6 = (longlong *)param_2[1];
  plVar1 = plVar6 + 2;
  if ((int)plVar6[2] != 0) {
    lVar7 = *plVar6;
    uVar10 = 0;
    lVar8 = plVar6[1];
    if ((*(float *)((longlong)plVar6 + 0x14) != *(float *)((longlong)plVar6 + 0x1c)) ||
       (*(float *)(plVar6 + 3) != *(float *)(plVar6 + 4))) {
      uVar9 = uVar10;
      if (*(longlong *)(lVar7 + 0x38) != 0) {
        uVar9 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 8);
      }
      (**(code **)(lVar7 + 0x18))
                (lVar7,lVar8,plVar1,*(float *)((longlong)plVar6 + 0x14),(int)plVar6[3],uVar9);
    }
    if (*(longlong *)(lVar7 + 0x38) != 0) {
      uVar10 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x20);
    }
    (**(code **)(lVar7 + 0x30))(lVar7,lVar8,plVar1,uVar10);
    *(undefined4 *)(plVar6 + 3) = 0;
    *(undefined4 *)(plVar6 + 4) = 0;
    *plVar1 = 0;
  }
  *(float *)((longlong)plVar6 + 0x1c) = (float)dVar4 * fVar3;
  *(float *)(plVar6 + 4) = (float)dVar11 * fVar2;
  dVar4 = param_3[1];
  *(double *)(param_1 + 0x11c0) = *param_3;
  *(double *)(param_1 + 0x11c8) = dVar4;
  return;
}

