// Function: FUN_1402ff410
// Addr: 1402ff410
// Size: 575 bytes


void FUN_1402ff410(longlong param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  ushort uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ushort *puVar8;
  longlong lVar9;
  int iVar10;
  ushort *puVar11;
  
  psVar3 = *(short **)((longlong)param_2 * 0x898 + 0x60 + param_1);
  if (psVar3 != (short *)0x0) {
    psVar1 = psVar3 + (ulonglong)*(uint *)((longlong)param_2 * 0x898 + 0x58 + param_1) * 0x24;
    uVar4 = 4;
    if (param_2 != 0) {
      uVar4 = 8;
    }
    if (psVar3 < psVar1) {
      puVar11 = *(ushort **)(param_1 + 0x20);
      puVar8 = puVar11 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
      for (; puVar11 < puVar8; puVar11 = puVar11 + 0x18) {
        if (((uVar4 & *puVar11) == 0) && ((*puVar11 & 0x10) == 0)) {
          lVar6 = 8;
          if (param_2 != 1) {
            lVar6 = 4;
          }
          lVar7 = 0xe;
          if (param_2 != 1) {
            lVar7 = 0xc;
          }
          iVar10 = (int)*(short *)(lVar7 + (longlong)puVar11);
          if (*psVar3 - iVar10 < 0) {
            if (iVar10 - psVar1[-0x24] < 0) {
              lVar6 = ((longlong)psVar1 - (longlong)psVar3) / 0x12 +
                      ((longlong)psVar1 - (longlong)psVar3 >> 0x3f);
              lVar7 = (lVar6 >> 2) - (lVar6 >> 0x3f);
              lVar6 = 0;
              if (lVar7 < 9) {
                if (0 < lVar7) {
                  do {
                    if (iVar10 <= psVar3[lVar6 * 0x24]) break;
                    lVar6 = lVar6 + 1;
                  } while (lVar6 < lVar7);
                }
                if (psVar3[lVar6 * 0x24] == iVar10) {
                  iVar10 = *(int *)(psVar3 + lVar6 * 0x24 + 4);
                  goto LAB_1402ff60a;
                }
              }
              else {
                do {
                  lVar9 = lVar7 + lVar6 >> 1;
                  if (psVar3[lVar9 * 0x24] <= iVar10) {
                    if (iVar10 <= psVar3[lVar9 * 0x24]) {
                      iVar10 = *(int *)(psVar3 + lVar9 * 0x24 + 4);
                      goto LAB_1402ff60a;
                    }
                    lVar6 = lVar9 + 1;
                    lVar9 = lVar7;
                  }
                  lVar7 = lVar9;
                } while (lVar6 < lVar9);
              }
              iVar5 = *(int *)(psVar3 + lVar6 * 0x24 + -0x1c);
              psVar2 = psVar3 + lVar6 * 0x24;
              if (iVar5 == 0) {
                iVar5 = FUN_1402efa10(*(int *)(psVar2 + 4) - *(int *)(psVar2 + -0x20),
                                      (int)*psVar2 - (int)psVar2[-0x24]);
                *(int *)(psVar2 + -0x1c) = iVar5;
              }
              lVar6 = (longlong)(iVar10 - psVar2[-0x24]) * (longlong)iVar5;
              iVar10 = (int)((ulonglong)((lVar6 >> 0x3f) + lVar6 + 0x8000) >> 0x10) +
                       *(int *)(psVar2 + -0x20);
            }
            else {
              iVar10 = (*(int *)(psVar1 + -0x20) - *(int *)(psVar1 + -0x22)) +
                       *(int *)(lVar6 + (longlong)puVar11);
            }
          }
          else {
            iVar10 = (*(int *)(psVar3 + 4) - *(int *)(psVar3 + 2)) +
                     *(int *)(lVar6 + (longlong)puVar11);
          }
LAB_1402ff60a:
          if (param_2 == 0) {
            *(int *)(puVar11 + 8) = iVar10;
          }
          else {
            *(int *)(puVar11 + 10) = iVar10;
          }
          *puVar11 = *puVar11 | uVar4;
        }
      }
    }
  }
  return;
}

