// Function: FUN_1403f07b0
// Addr: 1403f07b0
// Size: 184 bytes


bool FUN_1403f07b0(longlong param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,char param_7)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffffb0;
  
  if ((param_7 != '\0') && (*(float *)(param_1 + 0x4c) != 0.0)) {
    uVar3 = 0;
    if (*(undefined8 **)(param_3 + 0x98) != (undefined8 *)0x0) {
      uVar3 = **(undefined8 **)(param_3 + 0x98);
    }
    (**(code **)(param_3 + 0x10))
              (param_3,param_4,DAT_1404927d4,0,*(float *)(param_1 + 0x4c),DAT_1404927d4,0,
               in_stack_ffffffffffffffb0 & 0xffffffff00000000,uVar3);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0xa0);
  }
  iVar2 = (**(code **)(*(longlong *)(param_1 + 0x90) + 0xc0))
                    (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,param_5,param_6
                     ,uVar3);
  if ((param_7 != '\0') && (*(float *)(param_1 + 0x4c) != 0.0)) {
    if (*(longlong *)(param_3 + 0x98) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(param_3 + 0x98) + 8);
    }
    (**(code **)(param_3 + 0x18))(param_3,param_4,uVar3);
  }
  return iVar2 != 0;
}

