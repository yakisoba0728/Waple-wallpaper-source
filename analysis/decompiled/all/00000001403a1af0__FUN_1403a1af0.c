// Function: FUN_1403a1af0
// Addr: 1403a1af0
// Size: 198 bytes


uint FUN_1403a1af0(longlong param_1,longlong param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if (param_3 == param_4) {
    return param_5;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    if (param_4 <= param_3) {
      return param_5;
    }
    uVar8 = param_4 - param_3;
    if ((7 < uVar8) && (1 < DAT_1404dc0d8)) {
      uVar13 = param_5;
      uVar14 = param_5;
      uVar15 = param_5;
      uVar9 = param_5;
      uVar10 = param_5;
      uVar11 = param_5;
      uVar12 = param_5;
      do {
        uVar1 = *(uint *)(param_2 + 8 + (ulonglong)(param_3 + 3) * 0x14);
        uVar2 = *(uint *)(param_2 + 8 + (ulonglong)(param_3 + 2) * 0x14);
        uVar3 = *(uint *)(param_2 + 8 + (ulonglong)(param_3 + 1) * 0x14);
        uVar4 = *(uint *)(param_2 + 8 + (ulonglong)param_3 * 0x14);
        uVar5 = *(uint *)(param_2 + 8 + (ulonglong)(param_3 + 7) * 0x14);
        uVar6 = *(uint *)(param_2 + 8 + (ulonglong)(param_3 + 6) * 0x14);
        uVar7 = *(uint *)(param_2 + 8 + (ulonglong)(param_3 + 5) * 0x14);
        uVar9 = (uVar4 < uVar9) * uVar4 | (uVar4 >= uVar9) * uVar9;
        uVar10 = (uVar3 < uVar10) * uVar3 | (uVar3 >= uVar10) * uVar10;
        uVar11 = (uVar2 < uVar11) * uVar2 | (uVar2 >= uVar11) * uVar11;
        uVar12 = (uVar1 < uVar12) * uVar1 | (uVar1 >= uVar12) * uVar12;
        uVar1 = *(uint *)(param_2 + 8 + (ulonglong)(param_3 + 4) * 0x14);
        param_3 = param_3 + 8;
        param_5 = (uVar1 < param_5) * uVar1 | (uVar1 >= param_5) * param_5;
        uVar13 = (uVar7 < uVar13) * uVar7 | (uVar7 >= uVar13) * uVar13;
        uVar14 = (uVar6 < uVar14) * uVar6 | (uVar6 >= uVar14) * uVar14;
        uVar15 = (uVar5 < uVar15) * uVar5 | (uVar5 >= uVar15) * uVar15;
      } while (param_3 < param_4 - (uVar8 & 7));
      uVar8 = (param_5 < uVar9) * param_5 | (param_5 >= uVar9) * uVar9;
      uVar13 = (uVar13 < uVar10) * uVar13 | (uVar13 >= uVar10) * uVar10;
      uVar14 = (uVar14 < uVar11) * uVar14 | (uVar14 >= uVar11) * uVar11;
      uVar15 = (uVar15 < uVar12) * uVar15 | (uVar15 >= uVar12) * uVar12;
      uVar8 = (uVar14 < uVar8) * uVar14 | (uVar14 >= uVar8) * uVar8;
      uVar13 = (uVar15 < uVar13) * uVar15 | (uVar15 >= uVar13) * uVar13;
      param_5 = (uVar13 < uVar8) * uVar13 | (uVar13 >= uVar8) * uVar8;
      if (param_4 <= param_3) {
        return param_5;
      }
    }
    do {
      uVar8 = *(uint *)(param_2 + 8 + (ulonglong)param_3 * 0x14);
      if (param_5 <= uVar8) {
        uVar8 = param_5;
      }
      param_5 = uVar8;
      param_3 = param_3 + 1;
    } while (param_3 < param_4);
    return param_5;
  }
  uVar8 = param_4 - 1;
  if (*(uint *)(param_2 + 8 + (ulonglong)param_3 * 0x14) <=
      *(uint *)(param_2 + 8 + (ulonglong)(param_4 - 1) * 0x14)) {
    uVar8 = param_3;
  }
  uVar8 = *(uint *)(param_2 + 8 + (ulonglong)uVar8 * 0x14);
  if (param_5 <= uVar8) {
    uVar8 = param_5;
  }
  return uVar8;
}

