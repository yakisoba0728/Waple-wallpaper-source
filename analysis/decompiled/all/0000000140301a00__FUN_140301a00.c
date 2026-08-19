// Function: FUN_140301a00
// Addr: 140301a00
// Size: 492 bytes


void FUN_140301a00(longlong param_1,longlong param_2)

{
  short *psVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  bool bVar15;
  
  psVar10 = *(short **)(param_1 + 0x8f8);
  if ((psVar10 != (short *)0x0) &&
     (psVar1 = psVar10 + (ulonglong)*(uint *)(param_1 + 0x8f0) * 0x24, psVar10 < psVar1)) {
    iVar4 = *(int *)(param_2 + 0x248);
    do {
      bVar3 = *(byte *)(psVar10 + 6);
      if ((bVar3 & 0x10) == 0) {
        lVar13 = (longlong)iVar4;
        lVar8 = ((ulonglong)*(uint *)(param_2 + 0x40) / 0x28) * lVar13;
        iVar14 = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
        if (0x20 < iVar14) {
          iVar14 = 0x20;
        }
        if (*(int *)(param_2 + 800) != 0) {
          lVar8 = 0;
          bVar5 = false;
          uVar12 = 0;
          do {
            lVar2 = param_2 + (ulonglong)uVar12 * 0x24;
            uVar6 = *(uint *)(lVar2 + 0x344);
            if ((uVar6 & 1) != 0) {
              bVar15 = (uVar6 & 6) != 0;
              uVar6 = uVar6 & 8;
              if ((((int)*(char *)((longlong)psVar10 + 0xd) == *(int *)(param_1 + 0x900)) != bVar15)
                 || (uVar6 != 0)) {
                iVar9 = *(int *)(lVar2 + 0x324);
                iVar11 = (int)*psVar10;
                iVar7 = iVar9 - iVar11;
                if (-1 < iVar11 - iVar9) {
                  iVar7 = iVar11 - iVar9;
                }
                iVar7 = (int)((ulonglong)((iVar7 * lVar13 >> 0x3f) + 0x8000 + iVar7 * lVar13) >>
                             0x10);
                if (iVar7 < iVar14) {
                  lVar8 = lVar2 + 0x324;
                  iVar14 = iVar7;
                  bVar5 = uVar6 != 0;
                }
                if (((((bVar3 & 1) != 0) && (iVar7 != 0)) && (uVar6 == 0)) &&
                   (iVar11 < iVar9 != bVar15)) {
                  iVar7 = iVar11 - *(int *)(lVar2 + 0x330);
                  iVar9 = *(int *)(lVar2 + 0x330) - iVar11;
                  if (-1 < iVar7) {
                    iVar9 = iVar7;
                  }
                  iVar9 = (int)((ulonglong)((iVar9 * lVar13 >> 0x3f) + 0x8000 + iVar9 * lVar13) >>
                               0x10);
                  if (iVar9 < iVar14) {
                    lVar8 = lVar2 + 0x330;
                    bVar5 = false;
                    iVar14 = iVar9;
                  }
                }
              }
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_2 + 800));
          if ((lVar8 != 0) && (*(longlong *)(psVar10 + 0xc) = lVar8, bVar5)) {
            *(byte *)(psVar10 + 6) = bVar3 | 8;
          }
        }
      }
      psVar10 = psVar10 + 0x24;
    } while (psVar10 < psVar1);
  }
  return;
}

