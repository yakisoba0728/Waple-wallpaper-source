// Function: FUN_1403bce90
// Addr: 1403bce90
// Size: 440 bytes


void FUN_1403bce90(longlong param_1,longlong *param_2,double *param_3,double *param_4,
                  double *param_5)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  
  dVar4 = param_5[1];
  dVar5 = *param_5;
  dVar6 = param_3[1];
  dVar7 = *param_3;
  fVar2 = *(float *)(param_2[1] + 0x54);
  fVar3 = *(float *)(param_2[1] + 0x50);
  param_2 = (longlong *)*param_2;
  plVar1 = param_2 + 2;
  dVar8 = param_4[1];
  lVar10 = param_2[1];
  lVar11 = *param_2;
  dVar9 = *param_4;
  if ((int)param_2[2] == 0) {
    uVar12 = 0;
    if (*(undefined8 **)(lVar11 + 0x38) != (undefined8 *)0x0) {
      uVar12 = **(undefined8 **)(lVar11 + 0x38);
    }
    (**(code **)(lVar11 + 0x10))
              (lVar11,lVar10,plVar1,*(undefined4 *)((longlong)param_2 + 0x1c),(int)param_2[4],uVar12
              );
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(param_2 + 3) = (int)param_2[4];
    *(undefined4 *)plVar1 = 1;
  }
  uVar12 = 0;
  if (*(longlong *)(lVar11 + 0x38) != 0) {
    uVar12 = *(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x18);
  }
  (**(code **)(lVar11 + 0x28))
            (lVar11,lVar10,plVar1,(float)dVar7 * fVar3,(float)dVar6 * fVar2,fVar3 * (float)dVar9,
             fVar2 * (float)dVar8,(float)dVar5 * fVar3,(float)dVar4 * fVar2,uVar12);
  *(float *)((longlong)param_2 + 0x1c) = (float)dVar5 * fVar3;
  *(float *)(param_2 + 4) = (float)dVar4 * fVar2;
  dVar4 = param_5[1];
  *(double *)(param_1 + 0x11c0) = *param_5;
  *(double *)(param_1 + 0x11c8) = dVar4;
  return;
}

