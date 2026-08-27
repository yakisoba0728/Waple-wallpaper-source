// Function: FUN_1403c8b00
// Addr: 1403c8b00
// Size: 470 bytes


uint FUN_1403c8b00(byte *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar3 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
          (uint)param_1[3];
  if (0x74727565 < uVar3) {
    if (uVar3 != 0x74746366) {
      return (uint)(uVar3 == 0x74797031);
    }
    iVar4 = (uint)param_1[5] + (uint)param_1[4] * 0x100;
    if ((iVar4 != 1) && (iVar4 != 2)) {
      return 0;
    }
    return (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 + (uint)param_1[8] * 0x1000000 +
           (uint)param_1[0xb];
  }
  if (uVar3 != 0x74727565) {
    if (uVar3 == 0x100) {
      uVar5 = 0;
      uVar3 = 0;
      lVar1 = (ulonglong)param_1[7] +
              ((ulonglong)CONCAT11(param_1[4],param_1[5]) * 0x100 + (ulonglong)param_1[6]) * 0x100;
      uVar6 = (ulonglong)CONCAT11(param_1[lVar1 + 0x18],param_1[lVar1 + 0x19]);
      uVar7 = (uint)param_1[uVar6 + lVar1] * 0x100 + 1 + (uint)param_1[uVar6 + lVar1 + 1];
      if (uVar7 != 0) {
        while( true ) {
          if (CONCAT11(param_1[uVar6 + lVar1],param_1[uVar6 + 1 + lVar1]) < uVar3) {
            pbVar2 = (byte *)&DAT_14045dd10;
          }
          else {
            pbVar2 = param_1 + (ulonglong)uVar3 * 8 + 2 + uVar6 + lVar1;
          }
          if ((uint)pbVar2[1] * 0x10000 + (uint)pbVar2[2] * 0x100 + (uint)*pbVar2 * 0x1000000 +
              (uint)pbVar2[3] == 0x73666e74) break;
          uVar3 = uVar3 + 1;
          if (uVar7 <= uVar3) {
            return 0;
          }
        }
        uVar5 = (uint)pbVar2[4] * 0x100 + 1 + (uint)pbVar2[5];
      }
      return uVar5;
    }
    if ((uVar3 != 0x10000) && (uVar3 != 0x4f54544f)) {
      return 0;
    }
  }
  return 1;
}

