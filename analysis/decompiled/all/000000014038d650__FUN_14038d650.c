// Function: FUN_14038d650
// Addr: 14038d650
// Size: 92 bytes


ulonglong FUN_14038d650(short *param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short sVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  short *psVar13;
  short *psVar14;
  byte bVar15;
  int iVar16;
  undefined4 *puVar17;
  short sStackX_20;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar6 = func_0x000140386e30(param_2,param_1);
  uVar7 = 0;
  if (lVar6 == 0) goto UNWIND_INFO_14038d765_UnwindCodes_17__OffsetInProlog;
  psVar13 = *(short **)(param_3 + 2);
  uVar2 = param_3[4];
  puVar17 = param_3;
  if (param_3 == (undefined4 *)0xffffffffffffffe7) {
    puVar17 = (undefined4 *)0x0;
  }
  uVar11 = 0xfffffffe;
  iVar16 = 0;
  uVar12 = 0;
  bVar4 = false;
  bVar3 = false;
  if (psVar13 == psVar13 + uVar2) {
code_r0x00014038d73d:
    bVar10 = 1;
    if ((uint)(iVar16 * 3) < (uint)puVar17[4]) goto code_r0x00014038d749;
  }
  else {
    psVar14 = psVar13;
    do {
      bVar15 = (byte)*psVar14;
      bVar10 = (byte)((ushort)*psVar14 >> 8);
      if ((uVar11 != 0xfffffffe) && (bVar3 = bVar4, (uint)bVar15 * 0x100 + (uint)bVar10 < uVar11)) {
        bVar4 = true;
        bVar3 = true;
      }
      uVar1 = uVar11 + 1;
      uVar11 = (uint)bVar10 + (uint)bVar15 * 0x100;
      iVar5 = iVar16 + 1;
      if (uVar1 == uVar11) {
        iVar5 = iVar16;
      }
      iVar16 = iVar5;
      uVar1 = uVar11;
      if (uVar11 <= uVar12) {
        uVar1 = uVar12;
      }
      uVar12 = uVar1;
      psVar14 = psVar14 + 1;
    } while (psVar14 != psVar13 + uVar2);
    if (!bVar3) goto code_r0x00014038d73d;
code_r0x00014038d749:
    bVar10 = 2;
  }
  sStackX_20 = (ushort)bVar10 << 8;
  uVar7 = (ulonglong)bVar10 << 8;
  *param_1 = sStackX_20;
  if (uVar12 < 0x10000) {
    if (bVar10 == 1) {
      uVar7 = FUN_14040a530(param_1 + 1,param_2,uVar2,0);
      if ((char)uVar7 != '\0') {
        uVar8 = 0;
        uVar7 = uVar8;
        uVar12 = uVar2;
        if (uVar2 != 0) {
          do {
            uVar11 = (int)uVar7 + 1;
            uVar8 = (ulonglong)uVar11;
            sVar9 = (short)DAT_14045dde0;
            if (uVar12 != 0) {
              sVar9 = *psVar13;
              uVar12 = uVar12 - 1;
              psVar13 = psVar13 + 1;
            }
            param_1[uVar7 + 2] = sVar9;
            uVar7 = uVar8;
          } while (uVar11 < uVar2);
        }
        return CONCAT71((int7)(uVar8 >> 8),1);
      }
    }
    else if (bVar10 == 2) {
      uStack_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      uStack_48 = param_3[4];
      uStack_44 = param_3[5];
      uStack_40 = param_3[6];
      uStack_3c = param_3[7];
      uVar7 = func_0x00014038d4e0(param_1,param_2,&uStack_58);
      return uVar7;
    }
  }
  else if (*(int *)(param_2 + 0x2c) == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 8;
  }
UNWIND_INFO_14038d765_UnwindCodes_17__OffsetInProlog:
  return uVar7 & 0xffffffffffffff00;
}

