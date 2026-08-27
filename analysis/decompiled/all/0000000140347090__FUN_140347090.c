// Function: FUN_140347090
// Addr: 140347090
// Size: 549 bytes


ulonglong FUN_140347090(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint local_res8 [2];
  
  uVar7 = (**(code **)(param_1 + 0x2a0))(param_1,0x6b65726e,param_2,local_res8);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if (local_res8[0] < 4) {
    return 0x8e;
  }
  uVar7 = FUN_1402f5150(param_2,local_res8[0],param_1 + 0x488);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  lVar3 = *(longlong *)(param_1 + 0x488);
  uVar11 = 0;
  uVar16 = 0;
  *(uint *)(param_1 + 0x490) = local_res8[0];
  uVar4 = CONCAT11(*(undefined1 *)(lVar3 + 2),*(undefined1 *)(lVar3 + 3));
  uVar12 = (uint)uVar4;
  if (uVar12 < 0x21) {
    if (uVar4 == 0) {
      uVar10 = 0;
      goto LAB_140347277;
    }
  }
  else {
    uVar12 = 0x20;
  }
  puVar2 = (undefined1 *)(lVar3 + (ulonglong)local_res8[0]);
  uVar10 = 0;
  uVar14 = 1;
  puVar8 = (undefined1 *)(lVar3 + 4);
  do {
    if ((puVar2 < puVar8 + 6) || (CONCAT11(puVar8[2],puVar8[3]) < 0xf)) break;
    puVar15 = puVar8 + (uint)CONCAT11(puVar8[2],puVar8[3]);
    if (puVar2 < puVar8 + (uint)CONCAT11(puVar8[2],puVar8[3])) {
      puVar15 = puVar2;
    }
    if (((CONCAT11(puVar8[4],puVar8[5]) < 0x100) && ((puVar8[5] & 3) == 1)) &&
       (puVar1 = puVar8 + 0xe, puVar1 <= puVar15)) {
      uVar13 = (uint)CONCAT11(puVar8[6],puVar8[7]);
      if ((longlong)puVar15 - (longlong)puVar1 < (longlong)(ulonglong)(uVar13 * 6)) {
        uVar13 = (uint)(((longlong)puVar15 - (longlong)puVar1) / 6);
      }
      uVar16 = uVar16 | uVar14;
      if (uVar13 != 0) {
        puVar9 = puVar8 + 0x14;
        uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar1,puVar8[0xf]),puVar8[0x10]),puVar8[0x11]);
        while (uVar13 = uVar13 - 1, uVar13 != 0) {
          uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar9,puVar9[1]),puVar9[2]),puVar9[3]);
          if (uVar6 < uVar5) goto LAB_140347263;
          puVar9 = puVar9 + 6;
          uVar5 = uVar6;
        }
        uVar11 = uVar11 | uVar14;
      }
    }
LAB_140347263:
    uVar10 = uVar10 + 1;
    uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
    puVar8 = puVar15;
  } while (uVar10 < uVar12);
LAB_140347277:
  *(uint *)(param_1 + 0x498) = uVar16;
  *(uint *)(param_1 + 0x49c) = uVar11;
  *(uint *)(param_1 + 0x494) = uVar10;
  return uVar7 & 0xffffffff;
}

