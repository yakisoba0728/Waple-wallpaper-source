// Function: FUN_14034c7e0
// Addr: 14034c7e0
// Size: 158 bytes


undefined8 FUN_14034c7e0(undefined1 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
  if (uVar4 != 0) {
    do {
      uVar3 = uVar4 + uVar5 >> 1;
      uVar1 = uVar3 * 4;
      uVar2 = (uint)CONCAT21(CONCAT11(param_1[(ulonglong)uVar1 + 4],param_1[(ulonglong)uVar1 + 5]),
                             param_1[(ulonglong)uVar1 + 6]);
      if (uVar2 <= param_2) {
        if (param_2 <= (byte)param_1[(ulonglong)uVar1 + 7] + uVar2) {
          return 1;
        }
        uVar5 = uVar3 + 1;
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar5 < uVar4);
  }
  return 0;
}

