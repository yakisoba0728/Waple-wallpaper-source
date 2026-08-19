// Function: FUN_1403462b0
// Addr: 1403462b0
// Size: 1045 bytes


void FUN_1403462b0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  ushort *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  ushort uVar14;
  uint uVar15;
  undefined2 *puVar16;
  int local_54;
  uint local_50 [2];
  undefined1 *local_48 [2];
  
  uVar9 = *(undefined8 *)(param_1 + 0x98);
  local_48[0] = (undefined1 *)0x0;
  puVar10 = (ushort *)0x0;
  local_54 = (**(code **)(param_1 + 0x2a0))(param_1,0x4350414c,param_2,local_50);
  if (local_54 != 0) goto UNWIND_INFO_1403466e2_UnwindCodes_62__OffsetInProlog;
  if (0xb < local_50[0]) {
    local_54 = FUN_1402f5220(param_2,local_50[0],local_48);
    puVar13 = local_48[0];
    if ((local_54 != 0) ||
       (puVar10 = (ushort *)func_0x0001402f7f60(uVar9,0x28,&local_54), local_54 != 0))
    goto UNWIND_INFO_1403466e2_UnwindCodes_62__OffsetInProlog;
    uVar1 = *puVar13;
    uVar2 = puVar13[1];
    *puVar10 = CONCAT11(uVar1,uVar2);
    if (CONCAT11(uVar1,uVar2) < 2) {
      *(ushort *)(param_1 + 0x388) = CONCAT11(puVar13[2],puVar13[3]);
      *(ushort *)(param_1 + 0x370) = CONCAT11(puVar13[4],puVar13[5]);
      uVar14 = CONCAT11(puVar13[6],puVar13[7]);
      puVar10[1] = uVar14;
      if ((uint)*(ushort *)(param_1 + 0x370) * 2 + 0xc <= local_50[0]) {
        uVar12 = CONCAT31(CONCAT21(CONCAT11(puVar13[8],puVar13[9]),puVar13[10]),puVar13[0xb]);
        if (((uVar12 < local_50[0]) && ((uint)uVar14 << 2 <= local_50[0] - uVar12)) &&
           (*(ushort *)(param_1 + 0x388) <= uVar14)) {
          *(undefined1 **)(puVar10 + 8) = puVar13 + 0xc;
          *(undefined1 **)(puVar10 + 4) = local_48[0] + uVar12;
          if (*puVar10 != 1) goto LAB_140346686;
          uVar14 = *(ushort *)(param_1 + 0x370);
          uVar12 = (uint)uVar14 + (uint)uVar14;
          if (uVar12 + 0x18 <= local_50[0]) {
            puVar13 = puVar13 + 0xc + uVar12;
            uVar1 = puVar13[4];
            uVar2 = puVar13[5];
            uVar15 = CONCAT31(CONCAT21(CONCAT11(*puVar13,puVar13[1]),puVar13[2]),puVar13[3]);
            uVar3 = puVar13[6];
            uVar4 = puVar13[7];
            uVar5 = puVar13[8];
            uVar6 = puVar13[9];
            uVar7 = puVar13[10];
            uVar8 = puVar13[0xb];
            if (uVar15 != 0) {
              if ((local_50[0] <= uVar15) || (local_50[0] - uVar15 < uVar12))
              goto UNWIND_INFO_1403466e2_UnwindCodes_58__UnwindOpCode;
              puVar11 = (undefined2 *)FUN_1402f80c0(uVar9,2,0,uVar14,0,&local_54);
              if (local_54 != 0) goto UNWIND_INFO_1403466e2_UnwindCodes_62__OffsetInProlog;
              uVar14 = *(ushort *)(param_1 + 0x370);
              puVar13 = local_48[0] + uVar15;
              for (puVar16 = puVar11; puVar16 < puVar11 + uVar14; puVar16 = puVar16 + 1) {
                *puVar16 = CONCAT11(*puVar13,puVar13[1]);
                puVar13 = puVar13 + 2;
              }
              *(undefined2 **)(param_1 + 0x380) = puVar11;
            }
            uVar12 = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
            if (uVar12 != 0) {
              if ((local_50[0] <= uVar12) ||
                 (uVar14 = *(ushort *)(param_1 + 0x370),
                 local_50[0] - uVar12 < (uint)uVar14 + (uint)uVar14))
              goto UNWIND_INFO_1403466e2_UnwindCodes_58__UnwindOpCode;
              puVar11 = (undefined2 *)FUN_1402f80c0(uVar9,2,0,uVar14,0,&local_54);
              if (local_54 != 0) goto UNWIND_INFO_1403466e2_UnwindCodes_62__OffsetInProlog;
              uVar14 = *(ushort *)(param_1 + 0x370);
              puVar13 = local_48[0] + uVar12;
              for (puVar16 = puVar11; puVar16 < puVar11 + uVar14; puVar16 = puVar16 + 1) {
                *puVar16 = CONCAT11(*puVar13,puVar13[1]);
                puVar13 = puVar13 + 2;
              }
              *(undefined2 **)(param_1 + 0x378) = puVar11;
            }
            uVar12 = CONCAT31(CONCAT21(CONCAT11(uVar5,uVar6),uVar7),uVar8);
            if (uVar12 == 0) {
LAB_140346686:
              *(undefined1 **)(puVar10 + 0xc) = local_48[0];
              *(uint *)(puVar10 + 0x10) = local_50[0];
              *(ushort **)(param_1 + 0x4d8) = puVar10;
                    /* WARNING: Subroutine does not return */
              FUN_1402f8180(uVar9,4,0,*(undefined2 *)(param_1 + 0x388),0,&local_54);
            }
            if ((uVar12 < local_50[0]) &&
               (uVar14 = *(ushort *)(param_1 + 0x388),
               (uint)uVar14 + (uint)uVar14 <= local_50[0] - uVar12)) {
              puVar11 = (undefined2 *)FUN_1402f80c0(uVar9,2,0,uVar14,0,&local_54);
              if (local_54 == 0) {
                uVar14 = *(ushort *)(param_1 + 0x388);
                puVar13 = local_48[0] + uVar12;
                for (puVar16 = puVar11; puVar16 < puVar11 + uVar14; puVar16 = puVar16 + 1) {
                  *puVar16 = CONCAT11(*puVar13,puVar13[1]);
                  puVar13 = puVar13 + 2;
                }
                *(undefined2 **)(param_1 + 0x390) = puVar11;
                goto LAB_140346686;
              }
              goto UNWIND_INFO_1403466e2_UnwindCodes_62__OffsetInProlog;
            }
          }
        }
      }
    }
  }
UNWIND_INFO_1403466e2_UnwindCodes_58__UnwindOpCode:
  local_54 = 8;
UNWIND_INFO_1403466e2_UnwindCodes_62__OffsetInProlog:
  FUN_1402f5cd0(param_2,local_48);
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(uVar9,puVar10);
}

