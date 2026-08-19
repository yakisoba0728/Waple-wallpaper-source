// Function: FUN_1403ec9b0
// Addr: 1403ec9b0
// Size: 42 bytes


void FUN_1403ec9b0(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  dVar4 = param_3[1];
  dVar5 = *param_3;
  fVar2 = *(float *)(param_2[1] + 0x50);
  fVar3 = *(float *)(param_2[1] + 0x54);
  param_2 = (longlong *)*param_2;
  plVar1 = param_2 + 2;
  if ((int)param_2[2] != 0) {
    lVar6 = *param_2;
    uVar9 = 0;
    lVar7 = param_2[1];
    if ((*(float *)((longlong)param_2 + 0x14) != *(float *)((longlong)param_2 + 0x1c)) ||
       (*(float *)(param_2 + 3) != *(float *)(param_2 + 4))) {
      uVar8 = uVar9;
      if (*(longlong *)(lVar6 + 0x38) != 0) {
        uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x38) + 8);
      }
      (**(code **)(lVar6 + 0x18))
                (lVar6,lVar7,plVar1,*(float *)((longlong)param_2 + 0x14),(int)param_2[3],uVar8);
    }
    if (*(longlong *)(lVar6 + 0x38) != 0) {
      uVar9 = *(undefined8 *)(*(longlong *)(lVar6 + 0x38) + 0x20);
    }
    (**(code **)(lVar6 + 0x30))(lVar6,lVar7,plVar1,uVar9);
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *plVar1 = 0;
  }
  *(float *)((longlong)param_2 + 0x1c) = (float)dVar5 * fVar2;
  *(float *)(param_2 + 4) = (float)dVar4 * fVar3;
  dVar4 = param_3[1];
  *(double *)(param_1 + 0x11c0) = *param_3;
  *(double *)(param_1 + 0x11c8) = dVar4;
  return;
}

