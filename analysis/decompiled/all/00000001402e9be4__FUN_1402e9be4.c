// Function: FUN_1402e9be4
// Addr: 1402e9be4
// Size: 74 bytes


undefined4
FUN_1402e9be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  longlong local_60;
  longlong lStack_58;
  char cStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  char cStack_18;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  cStack_18 = '\0';
  func_0x0001402bf8e8(&local_60,0);
  uVar3 = 0xfde9;
  if (*(int *)(lStack_58 + 0xc) == 0xfde9) {
    if (cStack_48 != '\0') {
      *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
    }
  }
  else {
    iVar1 = func_0x0001402dc004();
    if (iVar1 == 0) {
      if (cStack_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 1;
    }
    else {
      if (cStack_48 != '\0') {
        *(uint *)(local_60 + 0x3a8) = *(uint *)(local_60 + 0x3a8) & 0xfffffffd;
      }
      uVar3 = 0;
    }
  }
  iVar1 = func_0x0001402c8518(param_3,&local_40,auStack_68,uVar3);
  if (iVar1 == 0) {
    uVar2 = func_0x0001402e9d34(param_1,param_2,local_30,param_4,param_5,param_6,param_7);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (cStack_18 != '\0') {
    FUN_1402d9110(local_30);
  }
  return uVar2;
}

