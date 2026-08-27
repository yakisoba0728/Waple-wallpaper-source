// Function: FUN_140399f40
// Addr: 140399f40
// Size: 173 bytes


void FUN_140399f40(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  piVar1 = (int *)(param_1 + 0x20);
  uVar5 = 0;
  if (*piVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((*(float *)(param_1 + 0x24) != *(float *)(param_1 + 0x2c)) ||
       (*(float *)(param_1 + 0x28) != *(float *)(param_1 + 0x30))) {
      uVar4 = uVar5;
      if (*(longlong *)(lVar3 + 0x38) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 8);
      }
      (**(code **)(lVar3 + 0x18))
                (lVar3,uVar2,piVar1,*(float *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),uVar4
                );
    }
    if (*(longlong *)(lVar3 + 0x38) != 0) {
      uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x20);
    }
    (**(code **)(lVar3 + 0x30))(lVar3,uVar2,piVar1,uVar5);
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

