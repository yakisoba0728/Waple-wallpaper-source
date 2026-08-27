// Function: FUN_140098d40
// Addr: 140098d40
// Size: 107 bytes


bool FUN_140098d40(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)param_1[2] + 0x48))
                    ((longlong *)param_1[2],0,&DAT_140477ef0,param_3);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(longlong *)*param_1 + 0x48))((longlong *)*param_1,*param_3,0,param_2);
    return -1 < iVar1;
  }
  return false;
}

