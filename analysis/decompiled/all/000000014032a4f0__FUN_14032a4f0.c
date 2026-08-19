// Function: FUN_14032a4f0
// Addr: 14032a4f0
// Size: 11 bytes


undefined8 FUN_14032a4f0(undefined4 *param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = func_0x0001402f5d20(param_2,*param_1);
  if (((iVar2 == 0) && (iVar2 = FUN_1402f56e0(param_2,&UNK_14043fbb0,param_1 + 1), iVar2 == 0)) &&
     (sVar1 = *(short *)(param_1 + 1), (sVar1 - 0x200U & 0xfeff) == 0)) {
    uVar3 = 0x76;
    if (sVar1 == 0x300) {
      uVar3 = 0x94;
    }
    if (uVar3 <= (uint)param_1[2]) {
      if (sVar1 == 0x200) {
        *(undefined8 *)(param_1 + 0x21) = 0;
        param_1[0x23] = 0;
      }
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        uVar4 = func_0x0001402f5d20(param_2,*param_1);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        uVar4 = FUN_1402f50b0(param_2,param_1[2]);
        if ((int)uVar4 == 0) {
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x38);
          *(undefined8 *)(param_2 + 0x38) = 0;
          *(undefined8 *)(param_2 + 0x40) = 0;
        }
        return uVar4;
      }
    }
  }
  return 2;
}

