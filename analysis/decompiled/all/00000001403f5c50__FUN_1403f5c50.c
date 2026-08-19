// Function: FUN_1403f5c50
// Addr: 1403f5c50
// Size: 96 bytes


void FUN_1403f5c50(longlong param_1,undefined8 param_2,uint param_3,float param_4,float param_5,
                  float param_6)

{
  undefined8 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  
  fVar2 = (float)(param_3 ^ DAT_1404930c0) * DAT_140492904;
  param_4 = param_4 * DAT_140492904;
  if (fVar2 == 0.0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_14041b1a0(fVar2);
  }
  if (param_4 == 0.0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14041b1a0(param_4);
  }
  if (param_6 == 0.0) {
    param_6 = 0.0;
  }
  else {
    param_6 = (float)(uVar4 ^ DAT_1404930c0) * param_6;
  }
  if (param_5 == 0.0) {
    param_5 = 0.0;
  }
  else {
    param_5 = (float)(uVar3 ^ DAT_1404930c0) * param_5;
  }
  if (param_6 == DAT_140492a70) {
    param_6 = 0.0;
  }
  fVar2 = 0.0;
  if (param_5 != DAT_140492a70) {
    fVar2 = param_5;
  }
  uVar1 = 0;
  if (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x98);
  }
  (**(code **)(param_1 + 0x10))
            (param_1,param_2,DAT_1404927d4,uVar3,uVar4,DAT_1404927d4,param_6,fVar2,uVar1);
  return;
}

