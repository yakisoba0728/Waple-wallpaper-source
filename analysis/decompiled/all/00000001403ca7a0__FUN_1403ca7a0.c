// Function: FUN_1403ca7a0
// Addr: 1403ca7a0
// Size: 124 bytes


void FUN_1403ca7a0(longlong param_1,char *param_2,int param_3,undefined4 *param_4)

{
  longlong lVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  *param_4 = 0;
  if (param_3 == -1) {
    sVar2 = strlen(param_2);
    param_3 = (int)sVar2;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x10);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x90);
  }
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0xb0))
            (param_1,*(undefined8 *)(param_1 + 0x98),param_2,param_3,param_4,uVar3);
  return;
}

