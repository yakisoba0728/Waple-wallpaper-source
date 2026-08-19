// Function: FUN_1403cf750
// Addr: 1403cf750
// Size: 240 bytes


byte * FUN_1403cf750(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  longlong lVar10;
  
  iVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (iVar4 == 0) {
    if (param_3 <= param_2) {
      return (byte *)0x0;
    }
    return param_1 + (ulonglong)param_2 * 4 + 2;
  }
  if (iVar4 == 2) {
    pbVar3 = param_1 + 2;
    pbVar6 = (byte *)0x0;
    iVar4 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    if (iVar4 != 0) {
      uVar7 = (uint)*pbVar3 * 0x100 + (uint)param_1[3];
      uVar1 = (iVar4 + -1) * uVar7;
      if (((uint)pbVar3[(ulonglong)uVar1 + 0xb] + (uint)pbVar3[(ulonglong)uVar1 + 10] * 0x100 !=
           0xffff) ||
         (iVar5 = 1,
         (uint)pbVar3[(ulonglong)uVar1 + 0xc] * 0x100 + (uint)pbVar3[(ulonglong)uVar1 + 0xd] !=
         0xffff)) {
        iVar5 = 0;
      }
      iVar4 = (iVar4 - iVar5) + -1;
      if (-1 < iVar4) {
        pbVar9 = pbVar6;
        do {
          uVar1 = (uint)(iVar4 + (int)pbVar9) >> 1;
          lVar10 = (ulonglong)uVar1 * (ulonglong)uVar7;
          if (param_2 < (uint)pbVar3[lVar10 + 0xc] * 0x100 + (uint)pbVar3[lVar10 + 0xd]) {
            iVar4 = uVar1 - 1;
          }
          else {
            if (param_2 <= (uint)pbVar3[lVar10 + 10] * 0x100 + (uint)pbVar3[lVar10 + 0xb]) {
              pbVar6 = pbVar3 + (ulonglong)(uVar1 * uVar7) + 10;
              pbVar3 = pbVar6 + 4;
              goto code_r0x0001403cf899;
            }
            pbVar9 = (byte *)(ulonglong)(uVar1 + 1);
          }
        } while ((int)pbVar9 <= iVar4);
      }
    }
    pbVar3 = (byte *)0x4;
  }
  else {
    if (iVar4 == 4) {
      pbVar3 = (byte *)FUN_1403cfb10(param_1,(ulonglong)param_2);
      return pbVar3;
    }
    if (iVar4 != 6) {
      if (iVar4 != 8) {
        return (byte *)0x0;
      }
      uVar7 = (uint)param_1[2] * 0x100 + (uint)param_1[3];
      if ((uVar7 <= param_2) &&
         (param_2 = param_2 - uVar7, param_2 < (uint)param_1[5] + (uint)param_1[4] * 0x100)) {
        return param_1 + (ulonglong)param_2 * 4 + 6;
      }
      return (byte *)0x0;
    }
    pbVar3 = param_1 + 2;
    pbVar6 = (byte *)0x0;
    iVar4 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
    if (iVar4 != 0) {
      uVar7 = (uint)*pbVar3 * 0x100 + (uint)param_1[3];
      uVar2 = (ulonglong)((iVar4 + -1) * uVar7);
      iVar4 = (iVar4 - (uint)((uint)pbVar3[uVar2 + 10] * 0x100 + (uint)pbVar3[uVar2 + 0xb] == 0xffff
                             )) + -1;
      if (-1 < iVar4) {
        pbVar9 = pbVar6;
        do {
          uVar1 = (uint)(iVar4 + (int)pbVar9) >> 1;
          uVar8 = (uint)pbVar3[(ulonglong)uVar1 * (ulonglong)uVar7 + 10] * 0x100 +
                  (uint)pbVar3[(ulonglong)uVar1 * (ulonglong)uVar7 + 0xb];
          iVar5 = (uint)(param_2 >= uVar8 && param_2 != uVar8) - (uint)(param_2 < uVar8);
          if (iVar5 < 0) {
            iVar4 = uVar1 - 1;
          }
          else {
            if (iVar5 < 1) {
              pbVar6 = pbVar3 + (ulonglong)(uVar1 * uVar7) + 10;
              break;
            }
            pbVar9 = (byte *)(ulonglong)(uVar1 + 1);
          }
        } while ((int)pbVar9 <= iVar4);
      }
    }
    pbVar3 = pbVar6 + 2;
  }
code_r0x0001403cf899:
  if (pbVar6 == (byte *)0x0) {
    pbVar3 = (byte *)0x0;
  }
  return pbVar3;
}

