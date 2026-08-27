// Function: FUN_140347f70
// Addr: 140347f70
// Size: 599 bytes


undefined8 FUN_140347f70(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint local_res8;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_1402f9100(param_2,8);
  }
  uVar13 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar1 = (undefined1 *)((ulonglong)uVar13 + param_1);
  if ((*(undefined1 **)(param_2 + 0x108) < puVar1) || (uVar13 < 0x206)) {
    FUN_1402f9100(param_2,8);
  }
  iVar10 = 0x100;
  uVar13 = 0;
  puVar11 = (undefined1 *)(param_1 + 6);
  do {
    uVar2 = *puVar11;
    puVar7 = puVar11 + 2;
    bVar3 = puVar11[1];
    if ((1 < *(int *)(param_2 + 0x110)) && ((bVar3 & 7) != 0)) {
      FUN_1402f9100(param_2,8);
    }
    uVar12 = (uint)(ushort)(CONCAT11(uVar2,bVar3) >> 3);
    if (uVar13 < uVar12) {
      uVar13 = uVar12;
    }
    iVar10 = iVar10 + -1;
    puVar11 = puVar7;
  } while (iVar10 != 0);
  if (*(undefined1 **)(param_2 + 0x108) < puVar7 + (uVar13 * 8 + 8)) {
    FUN_1402f9100(param_2,8);
  }
  local_res8 = 0;
  do {
    puVar9 = puVar11 + 8;
    uVar12 = (uint)CONCAT11(puVar11[2],puVar11[3]);
    uVar2 = puVar11[4];
    if (CONCAT11(puVar11[2],puVar11[3]) != 0) {
      uVar4 = puVar11[5];
      uVar5 = puVar11[7];
      uVar6 = puVar11[6];
      if ((1 < *(int *)(param_2 + 0x110)) &&
         ((0xff < CONCAT11(*puVar11,puVar11[1]) || (0x100 - CONCAT11(*puVar11,puVar11[1]) < uVar12))
         )) {
        FUN_1402f9100(param_2,8);
      }
      if (CONCAT11(uVar6,uVar5) != 0) {
        if ((puVar9 + ((ulonglong)CONCAT11(uVar6,uVar5) - 2) < puVar7 + (uVar13 * 8 + 8)) ||
           (puVar1 < puVar9 + ((ulonglong)CONCAT11(uVar6,uVar5) - 2) + uVar12 * 2)) {
          FUN_1402f9100(param_2,9);
        }
        if ((0 < *(int *)(param_2 + 0x110)) && (puVar11 = puVar9 + uVar12 * 2, puVar9 < puVar11)) {
          puVar8 = puVar9;
          do {
            puVar9 = puVar8 + 2;
            if ((CONCAT11(*puVar8,puVar8[1]) != 0) &&
               (*(uint *)(param_2 + 0x120) <=
                (uint)(ushort)(CONCAT11(*puVar8,puVar8[1]) + CONCAT11(uVar2,uVar4)))) {
              FUN_1402f9100(param_2,0x10);
            }
            puVar8 = puVar9;
          } while (puVar9 < puVar11);
        }
      }
    }
    local_res8 = local_res8 + 1;
    puVar11 = puVar9;
  } while (local_res8 <= uVar13);
  return 0;
}

