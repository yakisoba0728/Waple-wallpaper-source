// Function: FUN_1403ddeb0
// Addr: 1403ddeb0
// Size: 173 bytes


void FUN_1403ddeb0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  piVar1 = *(int **)(param_2 + 0x28);
  uVar5 = 0;
  if (*piVar1 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    lVar3 = *(longlong *)(param_2 + 0x18);
    if (((float)piVar1[1] != (float)piVar1[3]) || ((float)piVar1[2] != (float)piVar1[4])) {
      uVar4 = uVar5;
      if (*(longlong *)(lVar3 + 0x38) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
      }
      (**(code **)(lVar3 + 0x18))(lVar3,uVar2,piVar1,piVar1[1],piVar1[2],uVar4);
    }
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x20);
    }
    (**(code **)(lVar3 + 0x30))(lVar3,uVar2,piVar1,uVar5);
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[2] = 0;
  return;
}

