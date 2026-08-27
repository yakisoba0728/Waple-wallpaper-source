// Function: FUN_1403bc950
// Addr: 1403bc950
// Size: 445 bytes


void FUN_1403bc950(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar13 = *param_2;
  dVar14 = param_2[1];
  dVar15 = *param_3;
  dVar16 = param_3[1];
  dVar4 = *param_4;
  dVar5 = param_4[1];
  pdVar8 = (double *)param_1[2];
  if (pdVar8 != (double *)0x0) {
    dVar6 = *pdVar8;
    dVar7 = pdVar8[1];
    dVar13 = dVar13 + dVar6;
    dVar14 = dVar14 + dVar7;
    dVar15 = dVar15 + dVar6;
    dVar16 = dVar16 + dVar7;
    dVar4 = dVar4 + dVar6;
    dVar5 = dVar5 + dVar7;
  }
  fVar2 = *(float *)(*param_1 + 0x54);
  fVar3 = *(float *)(*param_1 + 0x50);
  plVar9 = (longlong *)param_1[1];
  plVar1 = plVar9 + 2;
  lVar10 = plVar9[1];
  lVar11 = *plVar9;
  if ((int)plVar9[2] == 0) {
    uVar12 = 0;
    if (*(undefined8 **)(lVar11 + 0x38) != (undefined8 *)0x0) {
      uVar12 = **(undefined8 **)(lVar11 + 0x38);
    }
    (**(code **)(lVar11 + 0x10))
              (lVar11,lVar10,plVar1,*(undefined4 *)((longlong)plVar9 + 0x1c),(int)plVar9[4],uVar12);
    *(undefined4 *)((longlong)plVar9 + 0x14) = *(undefined4 *)((longlong)plVar9 + 0x1c);
    *(int *)(plVar9 + 3) = (int)plVar9[4];
    *(undefined4 *)plVar1 = 1;
  }
  uVar12 = 0;
  if (*(longlong *)(lVar11 + 0x38) != 0) {
    uVar12 = *(undefined8 *)(*(longlong *)(lVar11 + 0x38) + 0x18);
  }
  (**(code **)(lVar11 + 0x28))
            (lVar11,lVar10,plVar1,(float)dVar13 * fVar3,(float)dVar14 * fVar2,fVar3 * (float)dVar15,
             fVar2 * (float)dVar16,(float)dVar4 * fVar3,(float)dVar5 * fVar2,uVar12);
  *(float *)((longlong)plVar9 + 0x1c) = (float)dVar4 * fVar3;
  *(float *)(plVar9 + 4) = (float)dVar5 * fVar2;
  return;
}

