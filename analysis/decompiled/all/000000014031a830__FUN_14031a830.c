// Function: FUN_14031a830
// Addr: 14031a830
// Size: 69 bytes


ulonglong FUN_14031a830(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  short sVar4;
  uint uVar5;
  uint local_res20 [2];
  
  uVar3 = func_0x0001402f5d20(param_1,0);
  if ((int)uVar3 == 0) {
    sVar1 = FUN_1402f5b90(param_1,local_res20);
    uVar3 = (ulonglong)local_res20[0];
    sVar4 = 0;
    if ((local_res20[0] == 0) && (sVar4 = sVar1, (ushort)(sVar1 + 0x7fffU) < 2)) {
      func_0x0001402f5a40(param_1,local_res20);
      uVar3 = (ulonglong)local_res20[0];
    }
    if (((int)uVar3 == 0) &&
       (((sVar4 == -0x7fff || (uVar3 = func_0x0001402f5d20(param_1,0), (int)uVar3 == 0)) &&
        (uVar3 = FUN_1402f50b0(param_1,param_3 & 0xffffffff), (int)uVar3 == 0)))) {
      iVar2 = func_0x0001404210c0(*(undefined8 *)(param_1 + 0x38),param_2,param_3);
      uVar5 = 0;
      if (iVar2 != 0) {
        uVar5 = 2;
      }
      func_0x0001402f51d0(param_1);
      uVar3 = (ulonglong)uVar5;
    }
  }
  return uVar3;
}

