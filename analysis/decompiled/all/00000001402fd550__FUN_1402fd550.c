// Function: FUN_1402fd550
// Addr: 1402fd550
// Size: 423 bytes


void FUN_1402fd550(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int *piVar16;
  ulonglong uVar17;
  
  param_1 = (longlong)param_3 * 0x898 + param_1;
  psVar7 = *(short **)(param_1 + 0x60);
  if (psVar7 == (short *)0x0) {
    psVar8 = (short *)0x0;
  }
  else {
    psVar8 = psVar7 + (ulonglong)*(uint *)(param_1 + 0x58) * 0x24;
  }
  lVar15 = (longlong)param_3 * 0x1c4 + param_2;
  iVar1 = *(int *)(lVar15 + 0x44);
  lVar6 = ((ulonglong)*(uint *)(param_2 + 0x40) / 0x28) * (longlong)iVar1;
  lVar6 = (lVar6 >> 0x3f) + 0x8000 + lVar6;
  uVar5 = lVar6 >> 0x10 & 0xffffffff;
  if (0x20 < (int)((ulonglong)lVar6 >> 0x10)) {
    uVar5 = 0x20;
  }
  for (; psVar7 < psVar8; psVar7 = psVar7 + 0x24) {
    if (*(uint *)(lVar15 + 0x11c) != 0) {
      piVar9 = (int *)0x0;
      uVar14 = 0;
      uVar17 = uVar5;
      do {
        piVar10 = (int *)(uVar14 * 0x1c + 0x120 + lVar15);
        if (((piVar10[6] & 1U) != 0) &&
           (((int)*(char *)((longlong)psVar7 + 0xd) == *(int *)(param_1 + 0x68)) !=
            (bool)((byte)((uint)piVar10[6] >> 1) & 1))) {
          iVar12 = (int)*psVar7;
          iVar2 = piVar10[3];
          iVar11 = *piVar10;
          iVar3 = iVar11 - iVar12;
          if (-1 < iVar12 - iVar11) {
            iVar3 = iVar12 - iVar11;
          }
          iVar4 = iVar2 - iVar12;
          if (-1 < iVar12 - iVar2) {
            iVar4 = iVar12 - iVar2;
          }
          piVar16 = piVar10 + 3;
          if (iVar3 <= iVar4) {
            piVar16 = piVar10;
            iVar2 = iVar11;
          }
          iVar11 = iVar2 - iVar12;
          if (-1 < iVar12 - iVar2) {
            iVar11 = iVar12 - iVar2;
          }
          lVar6 = (longlong)iVar11 * (longlong)iVar1;
          uVar13 = (uint)((ulonglong)((lVar6 >> 0x3f) + 0x8000 + lVar6) >> 0x10);
          if ((int)uVar13 < (int)uVar17) {
            uVar17 = (ulonglong)uVar13;
            piVar9 = piVar16;
          }
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
      } while (uVar13 < *(uint *)(lVar15 + 0x11c));
      if (piVar9 != (int *)0x0) {
        *(int **)(psVar7 + 0xc) = piVar9;
      }
    }
  }
  return;
}

