// Function: FUN_1403bf2b0
// Addr: 1403bf2b0
// Size: 155 bytes


float FUN_1403bf2b0(byte *param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = 0;
  uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  fVar7 = DAT_140492704;
  if (uVar4 != 0) {
    do {
      uVar5 = (ulonglong)uVar3;
      uVar1 = (uint)param_1[uVar5 * 8 + 2] * 0x100 + (uint)param_1[uVar5 * 8 + 3];
      if (uVar1 < param_3) {
        uVar2 = *(undefined4 *)(param_2 + (ulonglong)uVar1 * 4);
      }
      else {
        uVar2 = 0;
      }
      fVar6 = (float)FUN_1403bf350(param_1 + uVar5 * 8 + 4,uVar2);
      if (fVar6 == 0.0) {
        return 0.0;
      }
      uVar3 = uVar3 + 1;
      fVar7 = fVar7 * fVar6;
    } while (uVar3 < uVar4);
  }
  return fVar7;
}

