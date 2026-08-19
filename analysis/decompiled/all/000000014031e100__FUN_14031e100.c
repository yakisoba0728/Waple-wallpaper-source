// Function: FUN_14031e100
// Addr: 14031e100
// Size: 103 bytes


void FUN_14031e100(longlong param_1,uint param_2,undefined8 param_3)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  undefined4 local_res8 [2];
  
  uVar12 = 0;
  local_res8[0] = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    return;
  }
  uVar14 = 0;
  uVar13 = 0;
  if (param_2 != 0) {
    if ((0xf < param_2) && (1 < DAT_1404dc0d8)) {
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 0;
      uVar23 = 0;
      uVar24 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      do {
        puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + uVar12 * 2);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        uVar7 = puVar1[4];
        uVar8 = puVar1[5];
        uVar9 = puVar1[6];
        uVar10 = puVar1[7];
        iVar2 = (int)uVar12;
        uVar11 = iVar2 + 0x10;
        uVar12 = (ulonglong)uVar11;
        uVar13 = (uVar13 < uVar3) * uVar3 | (uVar13 >= uVar3) * uVar13;
        uVar14 = (uVar14 < uVar4) * uVar4 | (uVar14 >= uVar4) * uVar14;
        uVar15 = (uVar15 < uVar5) * uVar5 | (uVar15 >= uVar5) * uVar15;
        uVar16 = (uVar16 < uVar6) * uVar6 | (uVar16 >= uVar6) * uVar16;
        uVar17 = (uVar17 < uVar7) * uVar7 | (uVar17 >= uVar7) * uVar17;
        uVar18 = (uVar18 < uVar8) * uVar8 | (uVar18 >= uVar8) * uVar18;
        uVar19 = (uVar19 < uVar9) * uVar9 | (uVar19 >= uVar9) * uVar19;
        uVar20 = (uVar20 < uVar10) * uVar10 | (uVar20 >= uVar10) * uVar20;
        puVar1 = (ushort *)(*(longlong *)(param_1 + 8) + (ulonglong)(iVar2 + 8) * 2);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        uVar7 = puVar1[4];
        uVar8 = puVar1[5];
        uVar9 = puVar1[6];
        uVar10 = puVar1[7];
        uVar21 = (uVar21 < uVar3) * uVar3 | (uVar21 >= uVar3) * uVar21;
        uVar22 = (uVar22 < uVar4) * uVar4 | (uVar22 >= uVar4) * uVar22;
        uVar23 = (uVar23 < uVar5) * uVar5 | (uVar23 >= uVar5) * uVar23;
        uVar24 = (uVar24 < uVar6) * uVar6 | (uVar24 >= uVar6) * uVar24;
        uVar25 = (uVar25 < uVar7) * uVar7 | (uVar25 >= uVar7) * uVar25;
        uVar26 = (uVar26 < uVar8) * uVar8 | (uVar26 >= uVar8) * uVar26;
        uVar27 = (uVar27 < uVar9) * uVar9 | (uVar27 >= uVar9) * uVar27;
        uVar28 = (uVar28 < uVar10) * uVar10 | (uVar28 >= uVar10) * uVar28;
      } while (uVar11 < (param_2 & 0xfffffff0));
      uVar13 = (uVar13 < uVar21) * uVar21 | (uVar13 >= uVar21) * uVar13;
      uVar14 = (uVar14 < uVar22) * uVar22 | (uVar14 >= uVar22) * uVar14;
      uVar15 = (uVar15 < uVar23) * uVar23 | (uVar15 >= uVar23) * uVar15;
      uVar16 = (uVar16 < uVar24) * uVar24 | (uVar16 >= uVar24) * uVar16;
      uVar17 = (uVar17 < uVar25) * uVar25 | (uVar17 >= uVar25) * uVar17;
      uVar18 = (uVar18 < uVar26) * uVar26 | (uVar18 >= uVar26) * uVar18;
      uVar19 = (uVar19 < uVar27) * uVar27 | (uVar19 >= uVar27) * uVar19;
      uVar20 = (uVar20 < uVar28) * uVar28 | (uVar20 >= uVar28) * uVar20;
      uVar13 = (uVar13 < uVar17) * uVar17 | (uVar13 >= uVar17) * uVar13;
      uVar14 = (uVar14 < uVar18) * uVar18 | (uVar14 >= uVar18) * uVar14;
      uVar15 = (uVar15 < uVar19) * uVar19 | (uVar15 >= uVar19) * uVar15;
      uVar16 = (uVar16 < uVar20) * uVar20 | (uVar16 >= uVar20) * uVar16;
      uVar13 = (uVar13 < uVar15) * uVar15 | (uVar13 >= uVar15) * uVar13;
      uVar14 = (uVar14 < uVar16) * uVar16 | (uVar14 >= uVar16) * uVar14;
      uVar14 = (uVar13 < uVar14) * uVar14 | (uVar13 >= uVar14) * uVar13;
      uVar13 = uVar14;
      if (param_2 <= uVar11) goto UNWIND_INFO_14031e174_UnwindCodes_40__OffsetInProlog;
    }
    do {
      uVar13 = *(ushort *)(*(longlong *)(param_1 + 8) + uVar12 * 2);
      if (uVar13 <= uVar14) {
        uVar13 = uVar14;
      }
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      uVar14 = uVar13;
    } while (uVar11 < param_2);
  }
UNWIND_INFO_14031e174_UnwindCodes_40__OffsetInProlog:
                    /* WARNING: Subroutine does not return */
  FUN_1402f8180(param_3,2,0,uVar13 + 1,0,local_res8);
}

