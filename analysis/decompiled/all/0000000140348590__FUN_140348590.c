// Function: FUN_140348590
// Addr: 140348590
// Size: 938 bytes


uint FUN_140348590(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint local_res18;
  uint local_res20;
  ulonglong local_80;
  
  local_res18 = 0;
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_1402f91d0(param_2,8);
  }
  uVar9 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  iVar19 = (int)param_1;
  if (*(ulonglong *)(param_2 + 0x108) < (ulonglong)uVar9 + param_1) {
    if (0 < *(int *)(param_2 + 0x110)) {
      FUN_1402f91d0(param_2,8);
    }
    uVar9 = (int)*(undefined8 *)(param_2 + 0x108) - iVar19;
  }
  if (uVar9 < (uint)((int)*(undefined8 *)(param_2 + 0x108) - iVar19)) {
    if (1 < *(int *)(param_2 + 0x110)) {
      FUN_1402f91d0(param_2,8);
    }
    uVar9 = (int)*(undefined8 *)(param_2 + 0x108) - iVar19;
  }
  local_80 = (ulonglong)uVar9;
  if (uVar9 < 0x10) {
    FUN_1402f91d0(param_2,8);
  }
  bVar2 = *(byte *)(param_1 + 7);
  uVar3 = *(undefined1 *)(param_1 + 6);
  if ((1 < *(int *)(param_2 + 0x110)) && ((bVar2 & 1) != 0)) {
    FUN_1402f91d0(param_2,8);
  }
  uVar5 = CONCAT11(uVar3,bVar2) >> 1;
  uVar17 = (uint)uVar5;
  if (uVar9 < uVar17 * 8 + 0x10) {
    FUN_1402f91d0(param_2,8);
  }
  if (1 < *(int *)(param_2 + 0x110)) {
    bVar2 = *(byte *)(param_1 + 0xb);
    uVar6 = CONCAT11(*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9));
    uVar7 = CONCAT11(*(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd));
    if (((uVar7 | uVar6) & 1) != 0) {
      FUN_1402f91d0(param_2,8);
    }
    uVar9 = (uint)(uVar6 >> 1);
    if ((((uVar17 < uVar9) || (uVar9 * 2 < uVar17)) || ((uVar7 >> 1) + uVar9 != uVar17)) ||
       (uVar9 != 1 << (bVar2 & 0x1f))) {
      FUN_1402f91d0(param_2,8);
    }
  }
  uVar9 = uVar17 * 2;
  puVar15 = (undefined1 *)(param_1 + 0x10 + (ulonglong)uVar9);
  puVar11 = (undefined1 *)(param_1 + 0xe);
  puVar16 = puVar15 + uVar9;
  puVar1 = puVar16 + uVar9;
  if ((1 < *(int *)(param_2 + 0x110)) &&
     (uVar8 = (ulonglong)(uVar17 * 2 - 2), CONCAT11(puVar11[uVar8],puVar11[uVar8 + 1]) != -1)) {
    FUN_1402f91d0(param_2,8);
  }
  local_res20 = 0;
  puVar14 = puVar1;
  uVar12 = 0;
  uVar18 = 0;
  uVar10 = 0;
  if (uVar5 != 0) {
    do {
      uVar3 = *puVar15;
      puVar13 = puVar15 + 1;
      puVar15 = puVar15 + 2;
      uVar20 = (uint)CONCAT11(uVar3,*puVar13);
      uVar10 = (uint)CONCAT11(*puVar11,puVar11[1]);
      uVar3 = *puVar16;
      uVar4 = puVar16[1];
      uVar5 = CONCAT11(*puVar14,puVar14[1]);
      if (uVar10 < uVar20) {
        FUN_1402f91d0(param_2,8);
      }
      if ((uVar20 <= uVar18) && (local_res20 != 0)) {
        if (*(int *)(param_2 + 0x110) < 1) {
          if ((uVar20 < uVar12) || (uVar10 < uVar18)) {
            local_res18 = local_res18 | 1;
          }
          else {
            local_res18 = local_res18 | 2;
          }
        }
        else {
          FUN_1402f91d0(param_2,8);
        }
      }
      if (uVar5 != 0) {
        if (uVar5 == 0xffff) {
          if ((((1 < *(int *)(param_2 + 0x110)) || (local_res20 != uVar17 - 1)) ||
              (uVar20 != 0xffff)) || (uVar10 != 0xffff)) {
            FUN_1402f91d0(param_2,8);
          }
        }
        else {
          puVar13 = puVar14 + (uint)uVar5;
          if (*(int *)(param_2 + 0x110) < 1) {
            if ((((local_res20 != uVar17 - 1) || (uVar20 != 0xffff)) || (uVar10 != 0xffff)) &&
               ((puVar13 < puVar1 + uVar9 ||
                (*(undefined1 **)(param_2 + 0x108) < puVar13 + ((uVar10 - uVar20) * 2 + 2)))))
            goto LAB_140348924;
          }
          else if ((puVar13 < puVar1 + uVar9) ||
                  ((undefined1 *)(local_80 + param_1) < puVar13 + ((uVar10 - uVar20) * 2 + 2))) {
LAB_140348924:
            FUN_1402f91d0(param_2,8);
          }
          if (0 < *(int *)(param_2 + 0x110)) {
            for (uVar12 = uVar20; uVar12 < uVar10; uVar12 = uVar12 + 1) {
              if ((CONCAT11(*puVar13,puVar13[1]) != 0) &&
                 (*(uint *)(param_2 + 0x120) <=
                  (uint)(ushort)(CONCAT11(*puVar13,puVar13[1]) + CONCAT11(uVar3,uVar4)))) {
                FUN_1402f91d0(param_2,0x10);
              }
              puVar13 = puVar13 + 2;
            }
          }
        }
      }
      local_res20 = local_res20 + 1;
      puVar11 = puVar11 + 2;
      puVar14 = puVar14 + 2;
      puVar16 = puVar16 + 2;
      uVar12 = uVar20;
      uVar18 = uVar10;
      uVar10 = local_res18;
    } while (local_res20 < uVar17);
  }
  return uVar10;
}

