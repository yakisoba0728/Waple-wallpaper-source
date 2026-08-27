// Function: FUN_140340880
// Addr: 140340880
// Size: 743 bytes


undefined8 FUN_140340880(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 0x2010U) {
    FUN_1402f9100(param_2,8);
  }
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  if (((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar9) || (uVar9 < 0x2010)) {
    FUN_1402f9100(param_2,8);
  }
  uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0x200c),
                                     *(undefined1 *)(param_1 + 0x200d)),
                            *(undefined1 *)(param_1 + 0x200e)),*(undefined1 *)(param_1 + 0x200f));
  if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - ((int)param_1 + 0x2010)) / 0xc < uVar9) {
    FUN_1402f9100(param_2,8);
  }
  puVar13 = (undefined1 *)(param_1 + 0x2010);
  uVar11 = 0;
  uVar14 = 0;
  if (uVar9 != 0) {
    do {
      uVar1 = puVar13[1];
      uVar2 = *puVar13;
      uVar3 = puVar13[4];
      uVar4 = puVar13[8];
      uVar5 = puVar13[9];
      uVar10 = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),puVar13[2]),puVar13[3]);
      uVar6 = puVar13[5];
      uVar15 = CONCAT31(CONCAT21(CONCAT11(uVar3,uVar6),puVar13[6]),puVar13[7]);
      uVar7 = puVar13[10];
      uVar8 = puVar13[0xb];
      if (uVar15 < uVar10) {
        FUN_1402f9100(param_2,8);
      }
      if ((uVar14 != 0) && (uVar10 <= uVar11)) {
        FUN_1402f9100(param_2,8);
      }
      if (0 < *(int *)(param_2 + 0x110)) {
        uVar11 = uVar15 - uVar10;
        if ((*(uint *)(param_2 + 0x120) < uVar11) ||
           (*(uint *)(param_2 + 0x120) - uVar11 <=
            CONCAT31(CONCAT21(CONCAT11(uVar4,uVar5),uVar7),uVar8))) {
          FUN_1402f9100(param_2,0x10);
        }
        iVar12 = uVar11 + 1;
        if (CONCAT11(uVar2,uVar1) == 0) {
          if (CONCAT11(uVar3,uVar6) != 0) {
            FUN_1402f9100(param_2,8);
          }
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            if ((*(byte *)((ulonglong)((uVar10 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar10 & 0xffff) & 7))) != 0) {
              FUN_1402f9100(param_2,8);
            }
            uVar10 = uVar10 + 1;
          }
        }
        else {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            if ((*(byte *)((ulonglong)(uVar10 >> 0x13) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar10 >> 0x10) & 7))) == 0) {
              FUN_1402f9100(param_2,8);
            }
            if ((*(byte *)((ulonglong)((uVar10 & 0xffff) >> 3) + 0xc + param_1) &
                (byte)(0x80 >> ((byte)(uVar10 & 0xffff) & 7))) == 0) {
              FUN_1402f9100(param_2,8);
            }
            uVar10 = uVar10 + 1;
          }
        }
      }
      uVar14 = uVar14 + 1;
      puVar13 = puVar13 + 0xc;
      uVar11 = uVar15;
    } while (uVar14 < uVar9);
  }
  return 0;
}

