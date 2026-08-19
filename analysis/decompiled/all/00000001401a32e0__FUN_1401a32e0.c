// Function: FUN_1401a32e0
// Addr: 1401a32e0
// Size: 204 bytes


void FUN_1401a32e0(byte *param_1,byte *param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  
  bVar5 = *param_2 < *param_1;
  if (*param_2 == *param_1) {
    bVar6 = *(uint *)(param_2 + 4) < *(uint *)(param_1 + 4);
    bVar5 = false;
    if (*(uint *)(param_2 + 4) == *(uint *)(param_1 + 4)) {
      bVar5 = *(float *)(param_1 + 8) == *(float *)(param_2 + 8);
      bVar6 = *(float *)(param_1 + 8) < *(float *)(param_2 + 8);
    }
    bVar5 = !bVar6 && !bVar5;
  }
  if (bVar5) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)(param_2 + 8) = uVar2;
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  bVar5 = *param_3 < *param_2;
  if (*param_3 == *param_2) {
    bVar6 = *(uint *)(param_3 + 4) < *(uint *)(param_2 + 4);
    bVar5 = false;
    if (*(uint *)(param_3 + 4) == *(uint *)(param_2 + 4)) {
      bVar5 = *(float *)(param_2 + 8) == *(float *)(param_3 + 8);
      bVar6 = *(float *)(param_2 + 8) < *(float *)(param_3 + 8);
    }
    bVar5 = !bVar6 && !bVar5;
  }
  if (bVar5) {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar3 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 8);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 8) = uVar2;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)param_2 = uVar3;
    *(undefined8 *)(param_2 + 8) = uVar4;
    *(undefined8 *)(param_2 + 0x10) = uVar1;
    bVar5 = *param_2 < *param_1;
    if (*param_2 == *param_1) {
      bVar6 = *(uint *)(param_2 + 4) < *(uint *)(param_1 + 4);
      bVar5 = false;
      if (*(uint *)(param_2 + 4) == *(uint *)(param_1 + 4)) {
        bVar5 = *(float *)(param_1 + 8) == *(float *)(param_2 + 8);
        bVar6 = *(float *)(param_1 + 8) < *(float *)(param_2 + 8);
      }
      bVar5 = !bVar6 && !bVar5;
    }
    if (bVar5) {
      uVar2 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *(undefined8 *)(param_2 + 8) = uVar2;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 8) = uVar4;
      *(undefined8 *)(param_1 + 0x10) = uVar1;
    }
  }
  return;
}

