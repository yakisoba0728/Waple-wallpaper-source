// Function: FUN_14033f770
// Addr: 14033f770
// Size: 616 bytes


void FUN_14033f770(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  int local_res8;
  
  iVar15 = *(int *)(param_1 + 4);
  lVar16 = (longlong)*(int *)((longlong)param_2 * 0xcc + 0xcc + *(longlong *)(param_1 + 0x28));
  puVar3 = *(ulonglong **)(param_1 + 0x10);
  iVar14 = *(int *)((longlong)param_2 * 0xcc + 0xd0 + *(longlong *)(param_1 + 0x28));
  do {
    if (iVar15 == 0) {
      return;
    }
    uVar7 = *puVar3;
    uVar13 = 0;
    uVar12 = (ulonglong)(uint)puVar3[1] * 0x40 + uVar7;
    uVar5 = uVar7;
    uVar10 = 0;
    local_res8 = iVar14;
    if (uVar7 < uVar12) {
      do {
        uVar11 = uVar10;
        if (((*(byte *)(uVar5 + 0x1c) & 0x20) != 0) &&
           (uVar13 = uVar13 + 1, uVar11 = uVar5, uVar10 != 0)) {
          uVar11 = uVar10;
        }
        uVar5 = uVar5 + 0x40;
        uVar10 = uVar11;
      } while (uVar5 < uVar12);
      uVar5 = uVar11;
      if (uVar13 < 2) {
        if (uVar13 == 1) {
          lVar6 = *(int *)(uVar11 + 0x30) * lVar16;
          iVar14 = *(int *)(uVar11 + 0x38) -
                   (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
          local_res8 = iVar14;
        }
        else if (uVar12 <= uVar7) goto LAB_14033f94f;
        do {
          if (uVar7 != uVar11) {
            lVar6 = *(int *)(uVar7 + 0x30) * lVar16;
            *(int *)(uVar7 + 0x38) =
                 (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar14;
          }
          uVar7 = uVar7 + 0x40;
        } while (uVar7 < uVar12);
      }
      else {
        do {
          do {
            uVar7 = uVar5;
            uVar5 = *(ulonglong *)(uVar7 + 8);
            if (uVar5 == uVar11) goto LAB_14033f94f;
          } while ((*(byte *)(uVar5 + 0x1c) & 0x20) != 0);
          uVar5 = *(ulonglong *)(uVar5 + 8);
          bVar1 = *(byte *)(uVar5 + 0x1c);
          while ((bVar1 & 0x20) == 0) {
            uVar5 = *(ulonglong *)(uVar5 + 8);
            bVar1 = *(byte *)(uVar5 + 0x1c);
          }
          iVar14 = *(int *)(uVar5 + 0x30);
          iVar2 = *(int *)(uVar7 + 0x30);
          if (iVar14 < iVar2) {
            iVar8 = *(int *)(uVar5 + 0x38);
            iVar9 = iVar2 - iVar14;
            iVar17 = *(int *)(uVar7 + 0x38);
          }
          else {
            iVar8 = *(int *)(uVar7 + 0x38);
            iVar17 = *(int *)(uVar5 + 0x38);
            iVar9 = iVar14 - iVar2;
            iVar14 = iVar2;
          }
          iVar2 = 0x10000;
          if (0 < iVar9) {
            iVar2 = FUN_1402efa10(iVar17 - iVar8,iVar9);
          }
          uVar7 = *(ulonglong *)(uVar7 + 8);
          do {
            iVar4 = *(int *)(uVar7 + 0x30) - iVar14;
            if (iVar4 < 1) {
              lVar6 = iVar4 * lVar16;
LAB_14033f915:
              iVar4 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
            }
            else {
              if (iVar4 < iVar9) {
                lVar6 = (longlong)iVar4 * (longlong)iVar2;
                goto LAB_14033f915;
              }
              lVar6 = (iVar4 - iVar9) * lVar16;
              iVar4 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) +
                      (iVar17 - iVar8);
            }
            *(int *)(uVar7 + 0x38) = iVar4 + iVar8;
            uVar7 = *(ulonglong *)(uVar7 + 8);
          } while (uVar7 != uVar5);
        } while (uVar5 != uVar11);
      }
    }
LAB_14033f94f:
    iVar15 = iVar15 + -1;
    puVar3 = puVar3 + 2;
    iVar14 = local_res8;
  } while( true );
}

