// Function: FUN_1403472c0
// Addr: 1403472c0
// Size: 574 bytes


uint FUN_1403472c0(longlong param_1,int param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  
  lVar3 = *(longlong *)(param_1 + 0x488);
  if (lVar3 == 0) {
    return 0;
  }
  iVar14 = *(int *)(param_1 + 0x494);
  uVar5 = 0;
  if (iVar14 != 0) {
    puVar15 = (undefined1 *)((ulonglong)*(uint *)(param_1 + 0x490) + lVar3);
    uVar16 = 1;
    puVar6 = (undefined1 *)(lVar3 + 4);
    uVar17 = uVar5;
    do {
      if (puVar15 < puVar6 + 6) {
        return uVar17;
      }
      puVar8 = puVar6 + CONCAT11(puVar6[2],puVar6[3]);
      if (puVar15 < puVar6 + CONCAT11(puVar6[2],puVar6[3])) {
        puVar8 = puVar15;
      }
      uVar5 = uVar17;
      if ((*(uint *)(param_1 + 0x498) & uVar16) != 0) {
        puVar4 = puVar6 + 0xe;
        uVar9 = (uint)CONCAT11(puVar6[6],puVar6[7]);
        uVar10 = (ulonglong)uVar9;
        if ((longlong)puVar8 - (longlong)puVar4 < (longlong)(ulonglong)(uVar9 * 6)) {
          uVar10 = ((longlong)puVar8 - (longlong)puVar4) / 6;
        }
        if (CONCAT11(puVar6[4],puVar6[5]) < 0x100) {
          uVar12 = param_2 << 0x10 | param_3;
          uVar9 = (uint)uVar10;
          if ((*(uint *)(param_1 + 0x49c) & uVar16) == 0) {
            while (uVar9 != 0) {
              if (CONCAT31(CONCAT21(CONCAT11(*puVar4,puVar4[1]),puVar4[2]),puVar4[3]) == uVar12) {
                bVar1 = puVar4[4];
                bVar2 = puVar4[5];
                goto LAB_1403474e1;
              }
              puVar4 = puVar4 + 6;
              uVar9 = (int)uVar10 - 1;
              uVar10 = (ulonglong)uVar9;
            }
          }
          else {
            uVar7 = 0;
            if (uVar9 != 0) {
LAB_1403473e0:
              uVar13 = (int)uVar10 + uVar7 >> 1;
              uVar9 = uVar13 * 6;
              uVar11 = CONCAT31(CONCAT21(CONCAT11(puVar4[uVar9],puVar4[(ulonglong)uVar9 + 1]),
                                         puVar4[(ulonglong)uVar9 + 2]),puVar4[(ulonglong)uVar9 + 3])
              ;
              if (uVar11 != uVar12) goto code_r0x000140347421;
              bVar1 = puVar4[(ulonglong)uVar9 + 4];
              bVar2 = puVar4[(ulonglong)uVar9 + 5];
LAB_1403474e1:
              uVar5 = (int)(short)((ushort)bVar1 << 8) | (uint)bVar2;
              if ((puVar6[5] & 8) == 0) {
                uVar5 = uVar17 + uVar5;
              }
            }
          }
        }
      }
LAB_140347438:
      uVar16 = uVar16 * 2;
      iVar14 = iVar14 + -1;
      puVar6 = puVar8;
      uVar17 = uVar5;
    } while (iVar14 != 0);
  }
  return uVar5;
code_r0x000140347421:
  uVar10 = uVar10 & 0xffffffff;
  uVar9 = uVar13 + 1;
  if (uVar12 <= uVar11) {
    uVar10 = (ulonglong)uVar13;
    uVar9 = uVar7;
  }
  uVar7 = uVar9;
  if ((uint)uVar10 <= uVar7) goto LAB_140347438;
  goto LAB_1403473e0;
}

