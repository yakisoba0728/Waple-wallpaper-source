// Function: FUN_1403ddf60
// Addr: 1403ddf60
// Size: 507 bytes


void FUN_1403ddf60(undefined8 param_1,float *param_2,undefined8 param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9)

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
  float fVar11;
  float fVar12;
  
  fVar1 = param_2[5];
  fVar2 = param_2[4];
  piVar7 = *(int **)(param_2 + 10);
  uVar8 = *(undefined8 *)(param_2 + 8);
  lVar9 = *(longlong *)(param_2 + 6);
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[1];
  fVar6 = *param_2;
  fVar11 = fVar5 * param_8 + fVar1 + fVar4 * param_9;
  fVar12 = fVar6 * param_8 + fVar2 + fVar3 * param_9;
  if (*piVar7 == 0) {
    uVar10 = 0;
    if (*(undefined8 **)(lVar9 + 0x38) != (undefined8 *)0x0) {
      uVar10 = **(undefined8 **)(lVar9 + 0x38);
    }
    (**(code **)(lVar9 + 0x10))(lVar9,uVar8,piVar7,piVar7[3],piVar7[4],uVar10);
    piVar7[1] = piVar7[3];
    piVar7[2] = piVar7[4];
    *piVar7 = 1;
  }
  uVar10 = 0;
  if (*(longlong *)(lVar9 + 0x38) != 0) {
    uVar10 = *(undefined8 *)(*(longlong *)(lVar9 + 0x38) + 0x18);
  }
  (**(code **)(lVar9 + 0x28))
            (lVar9,uVar8,piVar7,fVar6 * param_4 + fVar2 + fVar3 * param_5,
             fVar5 * param_4 + fVar1 + fVar4 * param_5,fVar6 * param_6 + fVar2 + fVar3 * param_7,
             fVar5 * param_6 + fVar1 + fVar4 * param_7,fVar12,fVar11,uVar10);
  piVar7[3] = (int)fVar12;
  piVar7[4] = (int)fVar11;
  return;
}

