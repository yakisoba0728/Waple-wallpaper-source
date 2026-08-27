// Function: FUN_1403ead60
// Addr: 1403ead60
// Size: 272 bytes


void FUN_1403ead60(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
  double dVar2;
  double *pdVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  
  pdVar3 = (double *)param_2[2];
  dVar2 = *param_3;
  dVar8 = param_3[1];
  if (pdVar3 != (double *)0x0) {
    dVar2 = dVar2 + *pdVar3;
    dVar8 = dVar8 + pdVar3[1];
  }
  fVar9 = (float)dVar8 * *(float *)(*param_2 + 0x54);
  fVar10 = (float)dVar2 * *(float *)(*param_2 + 0x50);
  plVar4 = (longlong *)param_2[1];
  plVar1 = plVar4 + 2;
  lVar5 = plVar4[1];
  lVar6 = *plVar4;
  if ((int)plVar4[2] == 0) {
    uVar7 = 0;
    if (*(undefined8 **)(lVar6 + 0x38) != (undefined8 *)0x0) {
      uVar7 = **(undefined8 **)(lVar6 + 0x38);
    }
    (**(code **)(lVar6 + 0x10))
              (lVar6,lVar5,plVar1,*(undefined4 *)((longlong)plVar4 + 0x1c),(int)plVar4[4],uVar7);
    *(undefined4 *)((longlong)plVar4 + 0x14) = *(undefined4 *)((longlong)plVar4 + 0x1c);
    *(int *)(plVar4 + 3) = (int)plVar4[4];
    *(undefined4 *)plVar1 = 1;
  }
  uVar7 = 0;
  if (*(longlong *)(lVar6 + 0x38) != 0) {
    uVar7 = *(undefined8 *)(*(longlong *)(lVar6 + 0x38) + 8);
  }
  (**(code **)(lVar6 + 0x18))(lVar6,lVar5,plVar1,fVar10,fVar9,uVar7);
  *(float *)((longlong)plVar4 + 0x1c) = fVar10;
  *(float *)(plVar4 + 4) = fVar9;
  dVar2 = param_3[1];
  *(double *)(param_1 + 0x11c0) = *param_3;
  *(double *)(param_1 + 0x11c8) = dVar2;
  return;
}

