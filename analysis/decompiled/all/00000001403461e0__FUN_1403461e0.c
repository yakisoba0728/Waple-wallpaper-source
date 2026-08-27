// Function: FUN_1403461e0
// Addr: 1403461e0
// Size: 1263 bytes


int FUN_1403461e0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  ushort uVar17;
  uint uVar18;
  undefined2 *puVar19;
  int local_54;
  uint local_50 [2];
  undefined1 *local_48 [2];
  
  uVar10 = *(undefined8 *)(param_1 + 0x98);
  local_48[0] = (undefined1 *)0x0;
  puVar13 = (ushort *)0x0;
  local_54 = (**(code **)(param_1 + 0x2a0))(param_1,0x4350414c,param_2,local_50);
  if (local_54 != 0) goto LAB_140346692;
  if (0xb < local_50[0]) {
    local_54 = FUN_1402f5150(param_2,local_50[0],local_48);
    puVar16 = local_48[0];
    if ((local_54 != 0) || (puVar13 = (ushort *)FUN_1402f7e90(uVar10,0x28,&local_54), local_54 != 0)
       ) goto LAB_140346692;
    uVar2 = *puVar16;
    uVar3 = puVar16[1];
    *puVar13 = CONCAT11(uVar2,uVar3);
    if (CONCAT11(uVar2,uVar3) < 2) {
      *(ushort *)(param_1 + 0x388) = CONCAT11(puVar16[2],puVar16[3]);
      *(ushort *)(param_1 + 0x370) = CONCAT11(puVar16[4],puVar16[5]);
      uVar17 = CONCAT11(puVar16[6],puVar16[7]);
      puVar13[1] = uVar17;
      if ((uint)*(ushort *)(param_1 + 0x370) * 2 + 0xc <= local_50[0]) {
        uVar15 = CONCAT31(CONCAT21(CONCAT11(puVar16[8],puVar16[9]),puVar16[10]),puVar16[0xb]);
        if (((uVar15 < local_50[0]) && ((uint)uVar17 << 2 <= local_50[0] - uVar15)) &&
           (*(ushort *)(param_1 + 0x388) <= uVar17)) {
          *(undefined1 **)(puVar13 + 8) = puVar16 + 0xc;
          *(undefined1 **)(puVar13 + 4) = local_48[0] + uVar15;
          if (*puVar13 == 1) {
            uVar17 = *(ushort *)(param_1 + 0x370);
            uVar15 = (uint)uVar17 + (uint)uVar17;
            if (local_50[0] < uVar15 + 0x18) goto LAB_14034668b;
            puVar16 = puVar16 + 0xc + uVar15;
            uVar2 = puVar16[4];
            uVar3 = puVar16[5];
            uVar18 = CONCAT31(CONCAT21(CONCAT11(*puVar16,puVar16[1]),puVar16[2]),puVar16[3]);
            uVar4 = puVar16[6];
            uVar5 = puVar16[7];
            uVar6 = puVar16[8];
            uVar7 = puVar16[9];
            uVar8 = puVar16[10];
            uVar9 = puVar16[0xb];
            if (uVar18 != 0) {
              if ((local_50[0] <= uVar18) || (local_50[0] - uVar18 < uVar15)) goto LAB_14034668b;
              puVar14 = (undefined2 *)FUN_1402f7ff0(uVar10,2,0,uVar17,0,&local_54);
              if (local_54 != 0) goto LAB_140346692;
              uVar17 = *(ushort *)(param_1 + 0x370);
              puVar16 = local_48[0] + uVar18;
              for (puVar19 = puVar14; puVar19 < puVar14 + uVar17; puVar19 = puVar19 + 1) {
                *puVar19 = CONCAT11(*puVar16,puVar16[1]);
                puVar16 = puVar16 + 2;
              }
              *(undefined2 **)(param_1 + 0x380) = puVar14;
            }
            uVar15 = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5);
            if (uVar15 != 0) {
              if ((local_50[0] <= uVar15) ||
                 (uVar17 = *(ushort *)(param_1 + 0x370),
                 local_50[0] - uVar15 < (uint)uVar17 + (uint)uVar17)) goto LAB_14034668b;
              puVar14 = (undefined2 *)FUN_1402f7ff0(uVar10,2,0,uVar17,0,&local_54);
              if (local_54 != 0) goto LAB_140346692;
              uVar17 = *(ushort *)(param_1 + 0x370);
              puVar16 = local_48[0] + uVar15;
              for (puVar19 = puVar14; puVar19 < puVar14 + uVar17; puVar19 = puVar19 + 1) {
                *puVar19 = CONCAT11(*puVar16,puVar16[1]);
                puVar16 = puVar16 + 2;
              }
              *(undefined2 **)(param_1 + 0x378) = puVar14;
            }
            uVar15 = CONCAT31(CONCAT21(CONCAT11(uVar6,uVar7),uVar8),uVar9);
            if (uVar15 != 0) {
              if ((local_50[0] <= uVar15) ||
                 (uVar17 = *(ushort *)(param_1 + 0x388),
                 local_50[0] - uVar15 < (uint)uVar17 + (uint)uVar17)) goto LAB_14034668b;
              puVar14 = (undefined2 *)FUN_1402f7ff0(uVar10,2,0,uVar17,0,&local_54);
              if (local_54 != 0) goto LAB_140346692;
              uVar17 = *(ushort *)(param_1 + 0x388);
              puVar16 = local_48[0] + uVar15;
              for (puVar19 = puVar14; puVar19 < puVar14 + uVar17; puVar19 = puVar19 + 1) {
                *puVar19 = CONCAT11(*puVar16,puVar16[1]);
                puVar16 = puVar16 + 2;
              }
              *(undefined2 **)(param_1 + 0x390) = puVar14;
            }
          }
          *(undefined1 **)(puVar13 + 0xc) = local_48[0];
          *(uint *)(puVar13 + 0x10) = local_50[0];
          *(ushort **)(param_1 + 0x4d8) = puVar13;
          puVar16 = (undefined1 *)
                    FUN_1402f80b0(uVar10,4,0,*(undefined2 *)(param_1 + 0x388),0,&local_54);
          *(undefined1 **)(param_1 + 0x3a0) = puVar16;
          if (local_54 != 0) goto LAB_140346692;
          lVar11 = *(longlong *)(param_1 + 0x4d8);
          if ((lVar11 != 0) && (*(short *)(param_1 + 0x370) != 0)) {
            uVar15 = (uint)CONCAT11(**(undefined1 **)(lVar11 + 0x10),
                                    (*(undefined1 **)(lVar11 + 0x10))[1]);
            if (uVar15 + *(ushort *)(param_1 + 0x388) <= (uint)*(ushort *)(lVar11 + 2)) {
              puVar1 = puVar16 + (ulonglong)*(ushort *)(param_1 + 0x388) * 4;
              puVar12 = (undefined1 *)((ulonglong)(uVar15 * 4) + *(longlong *)(lVar11 + 8));
              for (; puVar16 < puVar1; puVar16 = puVar16 + 4) {
                *puVar16 = *puVar12;
                puVar16[1] = puVar12[1];
                puVar16[2] = puVar12[2];
                puVar16[3] = puVar12[3];
                puVar12 = puVar12 + 4;
              }
              return 0;
            }
          }
        }
      }
    }
  }
LAB_14034668b:
  local_54 = 8;
LAB_140346692:
  FUN_1402f5c00(param_2,local_48);
  FUN_1402f7f90(uVar10,puVar13);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  return local_54;
}

