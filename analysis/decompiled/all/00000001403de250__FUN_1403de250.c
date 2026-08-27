// Function: FUN_1403de250
// Addr: 1403de250
// Size: 268 bytes


void FUN_1403de250(undefined8 param_1,float *param_2,undefined8 param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  piVar7 = *(int **)(param_2 + 10);
  fVar1 = param_2[3];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  if (*piVar7 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 8);
    lVar9 = *(longlong *)(param_2 + 6);
    uVar11 = 0;
    if (((float)piVar7[1] != (float)piVar7[3]) || ((float)piVar7[2] != (float)piVar7[4])) {
      uVar10 = uVar11;
      if (*(longlong *)(lVar9 + 0x38) != 0) {
        uVar10 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 8);
      }
      (**(code **)(lVar9 + 0x18))(lVar9,uVar8,piVar7,piVar7[1],piVar7[2],uVar10);
    }
    if (*(longlong *)(lVar9 + 0x38) != 0) {
      uVar11 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x20);
    }
    (**(code **)(lVar9 + 0x30))(lVar9,uVar8,piVar7,uVar11);
    piVar7[0] = 0;
    piVar7[1] = 0;
    piVar7[2] = 0;
  }
  piVar7[4] = (int)(param_4 * fVar4 + fVar6 + param_5 * fVar1);
  piVar7[3] = (int)(param_4 * fVar3 + fVar5 + param_5 * fVar2);
  return;
}

