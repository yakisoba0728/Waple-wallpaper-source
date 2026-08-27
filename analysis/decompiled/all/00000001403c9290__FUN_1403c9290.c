// Function: FUN_1403c9290
// Addr: 1403c9290
// Size: 411 bytes


uint FUN_1403c9290(char *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    if ((param_2 != 0) && (uVar7 = 1, 1 < param_3)) {
      do {
        if ((uint)(byte)param_1[(ulonglong)(uVar7 - 1) * 2 + 2] +
            (uint)(byte)param_1[(ulonglong)(uVar7 - 1) * 2 + 1] * 0x100 == param_2) {
          return uVar7;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < param_3);
    }
    return 0;
  }
  if (cVar3 == '\x01') {
    uVar7 = 0;
    if ((param_2 != 0) && (uVar6 = 1, 1 < param_3)) {
      do {
        pbVar2 = (byte *)(param_1 + (ulonglong)uVar7 * 3 + 1);
        uVar5 = (uint)*pbVar2 * 0x100 + (uint)pbVar2[1];
        if ((uVar5 <= param_2) && (param_2 <= pbVar2[2] + uVar5)) {
          return ((uVar6 + (uint)*pbVar2 * -0x100) - (uint)pbVar2[1]) + param_2;
        }
        uVar6 = uVar6 + 1 + (uint)pbVar2[2];
        uVar7 = uVar7 + 1;
      } while (uVar6 < param_3);
    }
  }
  else if (((cVar3 == '\x02') && (uVar4 = 0, param_2 != 0)) && (uVar7 = 1, 1 < param_3)) {
    do {
      lVar1 = uVar4 * 4;
      uVar6 = (uint)(byte)param_1[uVar4 * 4 + 1] * 0x100 + (uint)(byte)param_1[lVar1 + 2];
      if ((uVar6 <= param_2) &&
         (param_2 <= (uint)(byte)param_1[lVar1 + 3] * 0x100 + (byte)param_1[lVar1 + 4] + uVar6)) {
        return ((uVar7 + (uint)(byte)param_1[uVar4 * 4 + 1] * -0x100) -
               (uint)(byte)param_1[lVar1 + 2]) + param_2;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      uVar7 = (uint)(byte)param_1[lVar1 + 3] * 0x100 + 1 + (byte)param_1[lVar1 + 4] + uVar7;
    } while (uVar7 < param_3);
  }
  return 0;
}

