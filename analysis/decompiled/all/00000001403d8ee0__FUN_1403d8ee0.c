// Function: FUN_1403d8ee0
// Addr: 1403d8ee0
// Size: 392 bytes


void FUN_1403d8ee0(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  
  lVar6 = *param_1;
  lVar7 = param_1[3];
  FUN_1403d9070();
  pcVar8 = *(code **)(*(longlong *)(*param_1 + 0x20) + 0x40);
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(*param_1,lVar7);
  }
  uVar18 = 0;
  if ((int)param_1[5] != 0) {
    do {
      puVar17 = (uint *)((ulonglong)uVar18 * 0x10 + param_1[4]);
      uVar13 = puVar17[2];
      if ((uVar13 != 0) || (puVar17[3] != 0xffffffff)) {
        iVar12 = 0;
        iVar10 = *(int *)(lVar6 + 0x3c) + -1;
        lVar11 = *(longlong *)(lVar6 + 0x40);
        if (-1 < iVar10) {
          do {
            uVar9 = (uint)(iVar10 + iVar12) >> 1;
            uVar3 = *(uint *)(lVar11 + (ulonglong)uVar9 * 0x24);
            lVar2 = lVar11 + (ulonglong)uVar9 * 0x24;
            if (*puVar17 < uVar3) {
              iVar10 = uVar9 - 1;
            }
            else {
              if (*puVar17 <= uVar3) {
                uVar3 = *(uint *)(lVar2 + 0x18);
                if (uVar3 != 0) {
                  uVar9 = puVar17[3];
                  uVar4 = *(uint *)(lVar7 + 0x60);
                  uVar16 = puVar17[1] << ((byte)*(undefined4 *)(lVar2 + 0x14) & 0x1f) & uVar3;
                  piVar1 = (int *)(lVar7 + 0xe0);
                  *piVar1 = *piVar1 - uVar4;
                  if (*piVar1 < 0) {
                    *(undefined1 *)(lVar7 + 0x58) = 0;
                  }
                  if ((uVar13 == 0) && (uVar9 == 0xffffffff)) {
                    uVar15 = 0;
                    if (uVar4 != 0) {
                      do {
                        uVar13 = (int)uVar15 + 1;
                        lVar11 = *(longlong *)(lVar7 + 0x70) + uVar15 * 0x14;
                        *(uint *)(lVar11 + 4) = ~uVar3 & *(uint *)(lVar11 + 4) | uVar16;
                        uVar15 = (ulonglong)uVar13;
                      } while (uVar13 < uVar4);
                    }
                  }
                  else {
                    uVar14 = 0;
                    if (uVar4 != 0) {
                      lVar11 = 0;
                      do {
                        lVar2 = *(longlong *)(lVar7 + 0x70) + lVar11 * 0x14;
                        uVar5 = *(uint *)(*(longlong *)(lVar7 + 0x70) + 8 + lVar11 * 0x14);
                        if ((uVar13 <= uVar5) && (uVar5 < uVar9)) {
                          *(uint *)(lVar2 + 4) = ~uVar3 & *(uint *)(lVar2 + 4) | uVar16;
                        }
                        uVar14 = uVar14 + 1;
                        lVar11 = lVar11 + 1;
                      } while (uVar14 < uVar4);
                    }
                  }
                }
                break;
              }
              iVar12 = uVar9 + 1;
            }
          } while (iVar12 <= iVar10);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(uint *)(param_1 + 5));
  }
  return;
}

