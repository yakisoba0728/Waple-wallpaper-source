// Function: FUN_1403d9140
// Addr: 1403d9140
// Size: 344 bytes


void FUN_1403d9140(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  lVar6 = param_1[3];
  if (((*(byte *)(lVar6 + 0xd8) & 1) != 0) && (lVar7 = *param_1, (*(byte *)(lVar7 + 0xb4) & 2) != 0)
     ) {
    uVar2 = *(uint *)(lVar7 + 0xa0);
    if ((*(uint *)(lVar6 + 0x38) & 0xfffffffd) == 4) {
      uVar3 = *(uint *)(lVar7 + 0xa4);
      uVar4 = *(uint *)(lVar7 + 0xa8);
    }
    else {
      uVar3 = *(uint *)(lVar7 + 0xa8);
      uVar4 = *(uint *)(lVar7 + 0xa4);
    }
    uVar5 = *(uint *)(lVar6 + 0x60);
    uVar13 = 0;
    lVar7 = *(longlong *)(lVar6 + 0x70);
    if (uVar5 != 0) {
      do {
        if (*(int *)(lVar7 + uVar13 * 0x14) == 0x2044) {
          uVar12 = (uint)uVar13;
          uVar14 = uVar12 + 1;
          uVar11 = uVar13;
          uVar9 = uVar12;
          while ((uVar10 = (uint)uVar11, uVar8 = uVar14, uVar9 != 0 &&
                 (uVar9 = uVar10 - 1,
                 (*(byte *)(lVar7 + 0x10 + (ulonglong)uVar9 * 0x14) & 0x1f) == 0xd))) {
            uVar11 = (ulonglong)uVar9;
          }
          while ((uVar8 < uVar5 &&
                 ((*(byte *)(lVar7 + 0x10 + (ulonglong)uVar8 * 0x14) & 0x1f) == 0xd))) {
            uVar8 = uVar8 + 1;
          }
          if (uVar10 == uVar12) {
            if ((*(byte *)(lVar6 + 0x18) & 0x40) != 0) {
              uVar12 = *(uint *)(lVar6 + 0x60);
              if (uVar10 + 1 <= *(uint *)(lVar6 + 0x60)) {
                uVar12 = uVar10 + 1;
              }
              while (uVar10 < uVar12) {
                uVar10 = (int)uVar11 + 1;
                puVar1 = (uint *)(*(longlong *)(lVar6 + 0x70) + 4 + uVar11 * 0x14);
                *puVar1 = *puVar1 | 2;
                uVar11 = (ulonglong)uVar10;
              }
            }
            if (uVar8 == uVar14) goto code_r0x0001403d930f;
          }
          else if (uVar8 == uVar14) {
code_r0x0001403d930f:
            if ((*(byte *)(lVar6 + 0x18) & 0x40) != 0) {
              uVar12 = uVar8 - 1;
              uVar14 = *(uint *)(lVar6 + 0x60);
              if (uVar8 <= *(uint *)(lVar6 + 0x60)) {
                uVar14 = uVar8;
              }
              for (; uVar12 < uVar14; uVar12 = uVar12 + 1) {
                puVar1 = (uint *)(*(longlong *)(lVar6 + 0x70) + 4 + (ulonglong)uVar12 * 0x14);
                *puVar1 = *puVar1 | 2;
              }
            }
          }
          else {
            func_0x00014040efc0(lVar6,uVar11,uVar8);
            while (uVar10 < uVar12) {
              uVar10 = (int)uVar11 + 1;
              puVar1 = (uint *)(lVar7 + 4 + uVar11 * 0x14);
              *puVar1 = *puVar1 | uVar2 | uVar3;
              uVar11 = (ulonglong)uVar10;
            }
            puVar1 = (uint *)(lVar7 + uVar13 * 0x14 + 4);
            *puVar1 = *puVar1 | *(uint *)(*param_1 + 0xa0);
            for (; uVar14 < uVar8; uVar14 = uVar14 + 1) {
              puVar1 = (uint *)(lVar7 + 4 + (ulonglong)uVar14 * 0x14);
              *puVar1 = *puVar1 | uVar2 | uVar4;
            }
            uVar13 = (ulonglong)(uVar8 - 1);
          }
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
      } while (uVar12 < uVar5);
    }
  }
  return;
}

