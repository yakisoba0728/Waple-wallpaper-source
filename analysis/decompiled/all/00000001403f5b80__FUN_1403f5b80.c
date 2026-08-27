// Function: FUN_1403f5b80
// Addr: 1403f5b80
// Size: 306 bytes


void FUN_1403f5b80(longlong param_1,undefined8 param_2,uint param_3,float param_4,float param_5,
                  float param_6)

{
  undefined8 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  
  fVar2 = (float)(param_3 ^ DAT_140492ff0) * DAT_140492834;
  param_4 = param_4 * DAT_140492834;
  if (fVar2 == 0.0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_14041b0d0(fVar2);
  }
  if (param_4 == 0.0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14041b0d0(param_4);
  }
  if (param_6 == 0.0) {
    param_6 = 0.0;
  }
  else {
    param_6 = (float)(uVar4 ^ DAT_140492ff0) * param_6;
  }
  if (param_5 == 0.0) {
    param_5 = 0.0;
  }
  else {
    param_5 = (float)(uVar3 ^ DAT_140492ff0) * param_5;
  }
  if (param_6 == DAT_1404929a0) {
    param_6 = 0.0;
  }
  fVar2 = 0.0;
  if (param_5 != DAT_1404929a0) {
    fVar2 = param_5;
  }
  uVar1 = 0;
  if (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x98);
  }
  (**(code **)(param_1 + 0x10))
            (param_1,param_2,DAT_140492704,uVar3,uVar4,DAT_140492704,param_6,fVar2,uVar1);
  return;
}

