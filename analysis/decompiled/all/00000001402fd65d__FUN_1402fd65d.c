// Function: FUN_1402fd65d
// Addr: 1402fd65d
// Size: 138 bytes


void FUN_1402fd65d(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong lVar6;
  short *unaff_RBX;
  short *unaff_RBP;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong unaff_R12;
  longlong lVar13;
  longlong unaff_R13;
  int *piVar14;
  ulonglong uVar15;
  
  lVar13 = unaff_R12 + param_2;
  iVar1 = *(int *)(lVar13 + 0x44);
  lVar6 = ((in_RAX & 0xffffffff) * (ulonglong)*(uint *)(param_2 + 0x40) >> 0x25) * (longlong)iVar1;
  lVar6 = (lVar6 >> 0x3f) + 0x8000 + lVar6;
  uVar5 = lVar6 >> 0x10 & 0xffffffff;
  if (0x20 < (int)((ulonglong)lVar6 >> 0x10)) {
    uVar5 = 0x20;
  }
  for (; unaff_RBX < unaff_RBP; unaff_RBX = unaff_RBX + 0x24) {
    if (*(uint *)(lVar13 + 0x11c) != 0) {
      piVar7 = (int *)0x0;
      uVar12 = 0;
      uVar15 = uVar5;
      do {
        piVar8 = (int *)(uVar12 * 0x1c + 0x120 + lVar13);
        if (((piVar8[6] & 1U) != 0) &&
           (((int)*(char *)((longlong)unaff_RBX + 0xd) == *(int *)(unaff_R13 + 0x68)) !=
            (bool)((byte)((uint)piVar8[6] >> 1) & 1))) {
          iVar10 = (int)*unaff_RBX;
          iVar2 = piVar8[3];
          iVar9 = *piVar8;
          iVar3 = iVar9 - iVar10;
          if (-1 < iVar10 - iVar9) {
            iVar3 = iVar10 - iVar9;
          }
          iVar4 = iVar2 - iVar10;
          if (-1 < iVar10 - iVar2) {
            iVar4 = iVar10 - iVar2;
          }
          piVar14 = piVar8 + 3;
          if (iVar3 <= iVar4) {
            piVar14 = piVar8;
            iVar2 = iVar9;
          }
          iVar9 = iVar2 - iVar10;
          if (-1 < iVar10 - iVar2) {
            iVar9 = iVar10 - iVar2;
          }
          lVar6 = (longlong)iVar9 * (longlong)iVar1;
          uVar11 = (uint)((ulonglong)((lVar6 >> 0x3f) + 0x8000 + lVar6) >> 0x10);
          if ((int)uVar11 < (int)uVar15) {
            uVar15 = (ulonglong)uVar11;
            piVar7 = piVar14;
          }
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < *(uint *)(lVar13 + 0x11c));
      if (piVar7 != (int *)0x0) {
        *(int **)(unaff_RBX + 0xc) = piVar7;
      }
    }
  }
  return;
}

