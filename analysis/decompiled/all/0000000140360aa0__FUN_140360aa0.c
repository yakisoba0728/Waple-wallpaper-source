// Function: FUN_140360aa0
// Addr: 140360aa0
// Size: 252 bytes


undefined1
FUN_140360aa0(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x2c);
  if (iVar1 == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)*(int *)(param_1 + 0x2c) / (float)iVar1;
  }
  uVar3 = 0;
  if (*(undefined8 **)(param_4 + 0x98) != (undefined8 *)0x0) {
    uVar3 = **(undefined8 **)(param_4 + 0x98);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_5,param_3,0,0,fVar4,0,0,uVar3);
  uVar2 = FUN_1403f06e0(*(undefined8 *)(param_1 + 0x18),param_3 & 0xffffffff,param_4,param_5,param_6
                        ,param_7,1);
  uVar3 = 0;
  if (*(longlong *)(param_4 + 0x98) != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(param_4 + 0x98) + 8);
  }
  (**(code **)(param_4 + 0x18))(param_4,param_5,uVar3);
  return uVar2;
}

