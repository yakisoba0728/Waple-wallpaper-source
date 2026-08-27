// Function: FUN_14014af80
// Addr: 14014af80
// Size: 755 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14014af80(undefined4 *param_1,uint param_2)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  double local_418 [64];
  double adStack_218 [64];
  
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && ((param_2 & param_2 - 1) == 0)) {
    *param_1 = 0x3f800000;
    param_1[1] = 0x80000000;
    uVar7 = _UNK_140483a28;
    uVar6 = _DAT_140483a20;
    if (param_2 != 1) {
      if (param_2 == 2) {
        uVar17 = 1;
      }
      else {
        lVar9 = 0;
        if ((longlong)(int)param_2 != 0) {
          for (; ((ulonglong)(longlong)(int)param_2 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
          }
        }
        iVar11 = (int)lVar9;
        if (-1 < iVar11) {
          iVar10 = 0x20 - iVar11;
          iVar15 = 0;
          lVar9 = (longlong)(iVar10 * 2) * 8;
          if (iVar11 + 1 < 4) goto LAB_14014b15a;
          iVar14 = 0;
          iVar19 = 2;
          iVar20 = 3;
          do {
            lVar12 = (longlong)iVar15;
            dVar2 = *(double *)(&DAT_140483e60 + (longlong)iVar14 * 8 + lVar9);
            pdVar1 = (double *)
                     (&DAT_140483a40 + (longlong)iVar14 * 0x10 + (longlong)(iVar10 * 4) * 8);
            dVar4 = *pdVar1;
            dVar5 = pdVar1[1];
            adStack_218[lVar12 * 2] = dVar2;
            adStack_218[lVar12 * 2 + 1] = dVar2;
            local_418[lVar12 * 2] = dVar4;
            local_418[lVar12 * 2 + 1] = dVar5;
            lVar12 = (longlong)iVar14;
            iVar14 = iVar14 + 8;
            lVar13 = (longlong)iVar15;
            iVar15 = iVar15 + 4;
            lVar13 = lVar13 + 1;
            dVar2 = *(double *)(&DAT_140483e70 + lVar12 * 8 + lVar9);
            adStack_218[lVar13 * 2] = dVar2;
            adStack_218[lVar13 * 2 + 1] = dVar2;
            pdVar1 = (double *)(&DAT_140483a40 + (lVar12 + 2) * 0x10 + (longlong)(iVar10 * 4) * 8);
            dVar2 = pdVar1[1];
            iVar3 = iVar19 * 2;
            local_418[lVar13 * 2] = *pdVar1;
            local_418[lVar13 * 2 + 1] = dVar2;
            lVar12 = (longlong)iVar19;
            iVar19 = iVar19 + 4;
            dVar2 = *(double *)(&DAT_140483e60 + (longlong)iVar3 * 8 + lVar9);
            pdVar1 = (double *)
                     (&DAT_140483a40 + (longlong)iVar3 * 0x10 + (longlong)(iVar10 * 4) * 8);
            dVar4 = *pdVar1;
            dVar5 = pdVar1[1];
            iVar3 = iVar20 * 2;
            adStack_218[lVar12 * 2] = dVar2;
            adStack_218[lVar12 * 2 + 1] = dVar2;
            local_418[lVar12 * 2] = dVar4;
            local_418[lVar12 * 2 + 1] = dVar5;
            lVar12 = (longlong)iVar20;
            iVar20 = iVar20 + 4;
            dVar2 = *(double *)(&DAT_140483e60 + (longlong)iVar3 * 8 + lVar9);
            pdVar1 = (double *)
                     (&DAT_140483a40 + (longlong)iVar3 * 0x10 + (longlong)(iVar10 * 4) * 8);
            dVar4 = pdVar1[1];
            local_418[lVar12 * 2] = *pdVar1;
            local_418[lVar12 * 2 + 1] = dVar4;
            adStack_218[lVar12 * 2] = dVar2;
            adStack_218[lVar12 * 2 + 1] = dVar2;
          } while (iVar15 <= iVar11 + -3);
          for (; iVar15 <= iVar11; iVar15 = iVar15 + 1) {
LAB_14014b15a:
            lVar12 = (longlong)iVar15;
            dVar2 = *(double *)(&DAT_140483e60 + (longlong)(iVar15 * 2) * 8 + lVar9);
            pdVar1 = (double *)
                     (&DAT_140483a40 + (longlong)(iVar15 * 2) * 0x10 + (longlong)(iVar10 * 4) * 8);
            dVar4 = pdVar1[1];
            local_418[lVar12 * 2] = *pdVar1;
            local_418[lVar12 * 2 + 1] = dVar4;
            adStack_218[lVar12 * 2] = dVar2;
            adStack_218[lVar12 * 2 + 1] = dVar2;
          }
        }
        uVar18 = 1;
        uVar17 = 1;
        if (1 < (int)param_2 / 2) {
          do {
            uVar16 = (uint)uVar18;
            lVar9 = 0;
            if (uVar18 != 0) {
              for (; (uVar18 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
              }
            }
            iVar11 = (int)lVar9;
            lVar12 = (longlong)iVar11;
            dVar2 = local_418[lVar12 * 2];
            dVar4 = local_418[lVar12 * 2 + 1];
            *(ulonglong *)(param_1 + uVar18 * 2) =
                 CONCAT44((float)(double)((ulonglong)dVar4 | uVar7),
                          (float)(double)((ulonglong)dVar2 | uVar6));
            uVar17 = uVar16 + 1;
            uVar18 = (ulonglong)uVar17;
            *(ulonglong *)(param_1 + (longlong)(int)(param_2 - uVar16) * 2) =
                 CONCAT44((float)(double)((ulonglong)dVar2 | uVar7),
                          (float)(double)((ulonglong)dVar4 | uVar6));
            uVar8 = (ulonglong)((int)~uVar16 >> ((char)lVar9 + 2U & 0x1f));
            lVar9 = 0;
            if (uVar8 != 0) {
              for (; (uVar8 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
              }
            }
            lVar9 = (longlong)((int)lVar9 + iVar11) + 2;
            dVar4 = local_418[lVar9 * 2 + 1];
            dVar2 = local_418[((longlong)iVar11 + 1) * 2 + 1];
            dVar5 = adStack_218[lVar12 * 2 + 1];
            local_418[lVar12 * 2] =
                 (local_418[lVar9 * 2] + local_418[((longlong)iVar11 + 1) * 2]) *
                 adStack_218[lVar12 * 2];
            local_418[lVar12 * 2 + 1] = (dVar4 + dVar2) * dVar5;
          } while ((int)uVar17 < (int)param_2 / 2);
        }
      }
      param_1[(longlong)(int)uVar17 * 2] = 0x3f3504f3;
      param_1[(longlong)(int)uVar17 * 2 + 1] = 0xbf3504f3;
    }
    return 0;
  }
  return 0xffffffff;
}

