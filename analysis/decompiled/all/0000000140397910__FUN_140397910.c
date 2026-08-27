// Function: FUN_140397910
// Addr: 140397910
// Size: 297 bytes


undefined8 * FUN_140397910(byte *param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar6;
  ulonglong uVar5;
  
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  uVar5 = (ulonglong)uVar4;
  if (param_3 < uVar4) {
    uVar2 = FUN_1403ed3b0(param_1,param_3);
    uVar3 = FUN_1403ed3b0(param_1,param_3 + 1);
    if (uVar2 <= uVar3) {
      bVar1 = param_1[2];
      uVar6 = 0;
      if (bVar1 == 1) {
        uVar6 = (uint)param_1[uVar5 + 3];
      }
      else if (bVar1 == 2) {
        uVar6 = (uint)param_1[uVar5 * 2 + 3] * 0x100 + (uint)param_1[uVar5 * 2 + 4];
      }
      else if (bVar1 == 3) {
        uVar6 = (uint)param_1[uVar5 * 3 + 4] * 0x100 + (uint)param_1[uVar5 * 3 + 3] * 0x10000 +
                (uint)param_1[uVar5 * 3 + 5];
      }
      else if (bVar1 == 4) {
        uVar6 = (uint)param_1[uVar5 * 4 + 4] * 0x10000 + (uint)param_1[uVar5 * 4 + 5] * 0x100 +
                (uint)param_1[uVar5 * 4 + 3] * 0x1000000 + (uint)param_1[uVar5 * 4 + 6];
      }
      if (uVar3 <= uVar6) {
        *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        param_2[1] = param_1 + (ulonglong)uVar2 + (ulonglong)((uVar4 + 1) * (uint)bVar1) + 2;
        *(uint *)(param_2 + 2) = uVar3 - uVar2;
        return param_2;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

