// Function: FUN_1403eaf40
// Addr: 1403eaf40
// Size: 43 bytes


void FUN_1403eaf40(longlong param_1,longlong *param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (float)*param_3 * *(float *)(param_2[1] + 0x50);
  fVar6 = (float)param_3[1] * *(float *)(param_2[1] + 0x54);
  param_2 = (longlong *)*param_2;
  plVar1 = param_2 + 2;
  lVar2 = param_2[1];
  lVar3 = *param_2;
  if ((int)param_2[2] == 0) {
    uVar5 = 0;
    if (*(undefined8 **)(lVar3 + 0x38) != (undefined8 *)0x0) {
      uVar5 = **(undefined8 **)(lVar3 + 0x38);
    }
    (**(code **)(lVar3 + 0x10))
              (lVar3,lVar2,plVar1,*(undefined4 *)((longlong)param_2 + 0x1c),(int)param_2[4],uVar5);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_2 + 3) = (int)param_2[4];
    *(undefined4 *)plVar1 = 1;
  }
  uVar5 = 0;
  if (*(longlong *)(lVar3 + 0x38) != 0) {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
  }
  (**(code **)(lVar3 + 0x18))(lVar3,lVar2,plVar1,fVar7,fVar6,uVar5);
  *(float *)((longlong)param_2 + 0x1c) = fVar7;
  *(float *)(param_2 + 4) = fVar6;
  dVar4 = param_3[1];
  *(double *)(param_1 + 0x11c0) = *param_3;
  *(double *)(param_1 + 0x11c8) = dVar4;
  return;
}

