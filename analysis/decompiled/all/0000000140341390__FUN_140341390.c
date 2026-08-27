// Function: FUN_140341390
// Addr: 140341390
// Size: 461 bytes


undefined8 FUN_140341390(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  
  puVar9 = (undefined1 *)(param_1 + 0x10);
  if (*(undefined1 **)(param_2 + 0x108) < puVar9) {
    FUN_1402f9100(param_2,8);
  }
  uVar5 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)),
                            *(undefined1 *)(param_1 + 6)),*(undefined1 *)(param_1 + 7));
  uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd))
                             ,*(undefined1 *)(param_1 + 0xe)),*(undefined1 *)(param_1 + 0xf));
  if ((((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar5) || (uVar5 < 0x10)) ||
     ((uVar5 - 0x10) / 0xc < uVar10)) {
    FUN_1402f9100(param_2,8);
  }
  uVar5 = 0;
  uVar8 = 0;
  if (uVar10 != 0) {
    do {
      uVar1 = puVar9[8];
      uVar7 = CONCAT31(CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]),puVar9[3]);
      uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[4],puVar9[5]),puVar9[6]),puVar9[7]);
      uVar2 = puVar9[9];
      uVar3 = puVar9[10];
      uVar4 = puVar9[0xb];
      if (uVar6 < uVar7) {
        FUN_1402f9100(param_2,8);
      }
      if ((uVar8 != 0) && (uVar7 <= uVar5)) {
        FUN_1402f9100(param_2,8);
      }
      if ((0 < *(int *)(param_2 + 0x110)) &&
         (*(uint *)(param_2 + 0x120) <= CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4))) {
        FUN_1402f9100(param_2,0x10);
      }
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 0xc;
      uVar5 = uVar6;
    } while (uVar8 < uVar10);
  }
  return 0;
}

