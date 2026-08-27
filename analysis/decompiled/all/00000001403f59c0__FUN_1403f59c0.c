// Function: FUN_1403f59c0
// Addr: 1403f59c0
// Size: 260 bytes


void FUN_1403f59c0(longlong param_1,undefined8 param_2,float param_3,float param_4,float param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  param_3 = param_3 * DAT_140492834;
  fVar2 = (float)FUN_14041a2e0(param_3);
  fVar3 = (float)FUN_14041a9c0(param_3);
  fVar5 = (DAT_140492704 - fVar2) * param_5 - fVar3 * param_4;
  fVar6 = (DAT_140492704 - fVar2) * param_4 + fVar3 * param_5;
  if (fVar6 == DAT_1404929a0) {
    fVar6 = 0.0;
  }
  fVar4 = 0.0;
  if (fVar5 != DAT_1404929a0) {
    fVar4 = fVar5;
  }
  uVar1 = 0;
  if (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x98);
  }
  (**(code **)(param_1 + 0x10))
            (param_1,param_2,fVar2,fVar3,(uint)fVar3 ^ DAT_140492ff0,fVar2,fVar6,fVar4,uVar1);
  return;
}

