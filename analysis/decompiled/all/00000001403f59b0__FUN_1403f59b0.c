// Function: FUN_1403f59b0
// Addr: 1403f59b0
// Size: 13 bytes


void FUN_1403f59b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(longlong *)(param_3 + 0x20);
  uVar5 = *(uint *)(lVar1 + 0x14);
  if (uVar5 == 0) {
    lVar2 = FUN_1403c5410(lVar1 + 0x78);
    uVar4 = (uint)*(byte *)(lVar2 + 0x12) * 0x100 + (uint)*(byte *)(lVar2 + 0x13);
    uVar5 = 1000;
    if (uVar4 - 0x10 < 0x3ff1) {
      uVar5 = uVar4;
    }
    *(uint *)(lVar1 + 0x14) = uVar5;
  }
  fVar8 = (float)uVar5;
  fVar7 = fVar8;
  if (*(int *)(param_3 + 0x28) != 0) {
    fVar7 = (float)*(int *)(param_3 + 0x28);
  }
  fVar6 = fVar8;
  if (*(int *)(param_3 + 0x2c) != 0) {
    fVar6 = (float)*(int *)(param_3 + 0x2c);
  }
  uVar3 = 0;
  if (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0) {
    uVar3 = **(undefined8 **)(param_1 + 0x98);
  }
  (**(code **)(param_1 + 0x10))
            (param_1,param_2,fVar8 / (float)(int)fVar7,0,0,fVar8 / (float)(int)fVar6,0,0,uVar3);
  return;
}

