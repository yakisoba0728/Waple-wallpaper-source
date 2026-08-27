// Function: FUN_1403f5ad0
// Addr: 1403f5ad0
// Size: 175 bytes


void FUN_1403f5ad0(longlong param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  undefined8 uVar1;
  
  if (param_5 == 0.0) {
    param_5 = 0.0;
  }
  else {
    param_5 = (DAT_140492704 - param_3) * param_5;
  }
  if (param_6 == 0.0) {
    param_6 = 0.0;
  }
  else {
    param_6 = (DAT_140492704 - param_4) * param_6;
  }
  if (param_5 == DAT_1404929a0) {
    param_5 = 0.0;
  }
  if (param_6 == DAT_1404929a0) {
    param_6 = 0.0;
  }
  uVar1 = 0;
  if (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0) {
    uVar1 = **(undefined8 **)(param_1 + 0x98);
  }
  (**(code **)(param_1 + 0x10))(param_6,param_5,param_3,0,0,param_4,param_5,param_6,uVar1);
  return;
}

