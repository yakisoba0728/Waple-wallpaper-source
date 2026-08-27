// Function: FUN_1403de160
// Addr: 1403de160
// Size: 240 bytes


void FUN_1403de160(undefined8 param_1,float *param_2,undefined8 param_3,float param_4,float param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  piVar1 = *(int **)(param_2 + 10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 6);
  fVar5 = param_4 * *param_2 + param_2[4] + param_5 * param_2[2];
  fVar6 = param_4 * param_2[1] + param_2[5] + param_5 * param_2[3];
  if (*piVar1 == 0) {
    uVar4 = 0;
    if (*(undefined8 **)(lVar3 + 0x38) != (undefined8 *)0x0) {
      uVar4 = **(undefined8 **)(lVar3 + 0x38);
    }
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2,piVar1,piVar1[3],piVar1[4],uVar4);
    piVar1[1] = piVar1[3];
    piVar1[2] = piVar1[4];
    *piVar1 = 1;
  }
  uVar4 = 0;
  if (*(longlong *)(lVar3 + 0x38) != 0) {
    uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
  }
  (**(code **)(lVar3 + 0x18))(lVar3,uVar2,piVar1,fVar5,fVar6,uVar4);
  piVar1[3] = (int)fVar5;
  piVar1[4] = (int)fVar6;
  return;
}

