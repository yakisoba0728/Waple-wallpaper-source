// Function: FUN_140354460
// Addr: 140354460
// Size: 639 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140354460(int *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  
  uVar9 = _UNK_140451ad0;
  uVar8 = _DAT_140451ac8;
  if ((param_1 == (int *)0x0) || (param_2 == (longlong *)0x0)) {
    return 6;
  }
  iVar2 = (int)param_2[1];
  iVar3 = param_1[1];
  if (iVar3 <= iVar2) {
    iVar4 = *(int *)((longlong)param_2 + 0xc);
    iVar5 = *param_1;
    if ((iVar5 <= iVar4) && (cVar1 = *(char *)((longlong)param_1 + 0x1a), cVar1 != '\0')) {
      lVar6 = *(longlong *)(param_1 + 4);
      iVar10 = (iVar2 - iVar3) / 2;
      iVar11 = (iVar4 - iVar5) / 2;
      lVar7 = *param_2;
      if (cVar1 == '\x01') {
        iVar16 = 0;
        if (iVar4 < 1) {
          return 0;
        }
        do {
          iVar15 = 0;
          if (0 < iVar2) {
            iVar12 = -iVar10;
            do {
              puVar19 = (undefined8 *)(lVar7 + (longlong)(iVar16 * iVar2 + iVar15) * 0x10);
              *puVar19 = uVar8;
              puVar19[1] = uVar9;
              if ((((-1 < iVar12) && (iVar12 < iVar3)) && (iVar17 = iVar16 - iVar11, -1 < iVar17))
                 && (iVar17 < iVar5)) {
                if (*(char *)((longlong)param_2 + 0x65) != '\0') {
                  iVar17 = (iVar5 - iVar16) + -1 + iVar11;
                }
                uVar14 = iVar12 >> 0x1f & 7;
                iVar13 = iVar12 + uVar14;
                *(char *)((longlong)puVar19 + 0xc) =
                     -(('\x01' << (7 - (((byte)iVar13 & 7) - (char)uVar14) & 0x1f) &
                       *(byte *)(((iVar13 >> 3) + param_1[2] * iVar17) + lVar6)) != 0);
              }
              iVar15 = iVar15 + 1;
              iVar12 = iVar12 + 1;
            } while (iVar15 < iVar2);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar4);
      }
      else {
        if (cVar1 != '\x02') {
          return 7;
        }
        iVar16 = 0;
        if (iVar4 < 1) {
          return 0;
        }
        do {
          iVar15 = 0;
          if (0 < iVar2) {
            do {
              lVar18 = (longlong)(iVar2 * iVar16 + iVar15);
              puVar19 = (undefined8 *)(lVar7 + lVar18 * 0x10);
              *puVar19 = uVar8;
              puVar19[1] = uVar9;
              if (((-1 < iVar15 - iVar10) && (iVar15 - iVar10 < iVar3)) &&
                 ((iVar12 = iVar16 - iVar11, -1 < iVar12 && (iVar12 < iVar5)))) {
                if (*(char *)((longlong)param_2 + 0x65) != '\0') {
                  iVar12 = (iVar5 - iVar16) + -1 + iVar11;
                }
                *(undefined1 *)(lVar7 + 0xc + lVar18 * 0x10) =
                     *(undefined1 *)(((iVar12 * iVar3 - iVar10) + iVar15) + lVar6);
              }
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar2);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar4);
      }
      return 0;
    }
  }
  return 6;
}

