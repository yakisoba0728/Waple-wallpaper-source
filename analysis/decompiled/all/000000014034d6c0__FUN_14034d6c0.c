// Function: FUN_14034d6c0
// Addr: 14034d6c0
// Size: 479 bytes


undefined8 FUN_14034d6c0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  puVar3 = (undefined8 *)(param_1 + 0x4a0);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  piVar10 = *(int **)(param_1 + 0xf8);
  piVar7 = piVar10 + (ulonglong)*(ushort *)(param_1 + 0xf4) * 4;
  if (piVar7 <= piVar10) {
    return 8;
  }
  do {
    if (*piVar10 == 0x42444620) {
      uVar4 = piVar10[3];
      if (uVar4 != 0) {
        iVar6 = FUN_1402f5c50(param_2,piVar10[2]);
        if (iVar6 != 0) {
          return 8;
        }
        if (uVar4 < 8) {
          return 8;
        }
        iVar6 = FUN_1402f5150(param_2,uVar4,puVar3);
        if (iVar6 != 0) {
          return 8;
        }
        puVar5 = (undefined1 *)*puVar3;
        *(undefined1 **)(param_1 + 0x4a8) = puVar5 + uVar4;
        if ((((CONCAT11(*puVar5,puVar5[1]) == 1) &&
             (uVar8 = CONCAT31(CONCAT21(CONCAT11(puVar5[4],puVar5[5]),puVar5[6]),puVar5[7]),
             7 < uVar8)) && (uVar9 = (uint)CONCAT11(puVar5[2],puVar5[3]), uVar9 <= uVar8 - 8 >> 2))
           && (uVar8 < uVar4)) {
          *(uint *)(param_1 + 0x4b8) = uVar4 - uVar8;
          puVar12 = puVar5 + 8;
          *(uint *)(param_1 + 0x4bc) = uVar9;
          *(undefined1 **)(param_1 + 0x4b0) = puVar5 + uVar8;
          puVar11 = puVar12 + uVar9 * 4;
          lVar13 = 0;
          lVar14 = 0;
          for (; 1 < uVar9; uVar9 = uVar9 - 2) {
            puVar1 = puVar12 + 6;
            lVar13 = lVar13 + (ulonglong)CONCAT11(puVar12[2],puVar12[3]) * 10;
            puVar2 = puVar12 + 7;
            puVar12 = puVar12 + 8;
            lVar14 = lVar14 + (ulonglong)CONCAT11(*puVar1,*puVar2) * 10;
          }
          if (uVar9 != 0) {
            puVar11 = puVar11 + (ulonglong)CONCAT11(puVar12[2],puVar12[3]) * 10;
          }
          if (puVar11 + lVar14 + lVar13 <= puVar5 + uVar8) {
            *(undefined1 *)(param_1 + 0x4c0) = 1;
            return 0;
          }
        }
        FUN_1402f5c00(param_2,puVar3);
        *puVar3 = 0;
        *(undefined8 *)(param_1 + 0x4a8) = 0;
        *(undefined8 *)(param_1 + 0x4b0) = 0;
        *(undefined8 *)(param_1 + 0x4b8) = 0;
        *(undefined8 *)(param_1 + 0x4c0) = 0;
        return 8;
      }
    }
    piVar10 = piVar10 + 4;
    if (piVar7 <= piVar10) {
      return 8;
    }
  } while( true );
}

