// Function: FUN_1400b6710
// Addr: 1400b6710
// Size: 263 bytes


ulonglong FUN_1400b6710(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  uVar13 = (ulonglong)*(byte *)(param_1 + 0x62);
  uVar14 = param_3[1];
  if ((ulonglong)param_2[1] < (ulonglong)param_3[1]) {
    uVar14 = param_2[1];
  }
  uVar10 = 0;
  if (uVar14 != 0) {
    do {
      if (uVar13 <= uVar10) break;
      *(char *)(uVar10 + *param_2) = *(char *)(uVar10 + *param_2) + *(char *)(*param_3 + uVar10);
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar14);
  }
  if (uVar13 < uVar14) {
    lVar5 = *param_2;
    lVar6 = *param_3;
    lVar15 = lVar5 - uVar13;
    lVar16 = lVar6 - uVar13;
    do {
      bVar3 = *(byte *)(lVar6 + uVar13);
      uVar12 = (uint)bVar3;
      bVar4 = *(byte *)(uVar13 + lVar16);
      bVar11 = *(byte *)(uVar13 + lVar15);
      uVar8 = uVar12 - bVar4;
      iVar1 = uVar8 + bVar11;
      uVar7 = bVar4 - uVar12;
      if (uVar8 < 0x80000000) {
        uVar7 = uVar8;
      }
      uVar8 = (uint)bVar3 - iVar1;
      if (iVar1 - uVar12 < 0x80000000) {
        uVar8 = iVar1 - uVar12;
      }
      uVar9 = iVar1 - (uint)bVar4;
      uVar10 = (ulonglong)uVar9;
      uVar12 = (uint)bVar4 - iVar1;
      if (uVar9 < 0x80000000) {
        uVar12 = uVar9;
      }
      if (((uVar8 < uVar7) || (uVar12 < uVar7)) && (bVar11 = bVar4, uVar8 <= uVar12)) {
        bVar11 = bVar3;
      }
      pcVar2 = (char *)(lVar5 + uVar13);
      *pcVar2 = *pcVar2 + bVar11;
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar14);
  }
  return uVar10 & 0xffffffffffffff00;
}

