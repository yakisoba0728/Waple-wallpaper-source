// Function: FUN_14033f4e0
// Addr: 14033f4e0
// Size: 654 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14033f4e0(uint *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  uint uVar5;
  ulonglong *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int *local_d0;
  int local_c8 [4];
  ulonglong local_b8 [16];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_f8;
  uVar13 = *(ulonglong *)(param_1 + 2);
  uVar16 = (ulonglong)*param_1 * 0x40 + uVar13;
  uVar9 = uVar13;
  uVar11 = 0;
  if (uVar13 < uVar16) {
    do {
      uVar5 = uVar11 + 1;
      if ((*(byte *)(uVar9 + 0x1c) & 0x10) == 0) {
        uVar5 = uVar11;
      }
      uVar9 = uVar9 + 0x40;
      uVar11 = uVar5;
    } while (uVar9 < uVar16);
    if (uVar5 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 6);
      iVar1 = *(int *)(((longlong)param_2 + 1) * 0xcc + *(longlong *)(param_1 + 10));
      if (uVar5 < 0x11) {
        puVar6 = local_b8;
      }
      else {
        local_d0 = local_c8;
        local_d8 = 0;
        puVar6 = (ulonglong *)FUN_1402f7ff0(uVar3,8,0);
        if (local_c8[0] != 0) {
          return;
        }
      }
      uVar12 = 0;
      uVar9 = uVar13;
      do {
        if ((*(byte *)(uVar9 + 0x1c) & 0x10) != 0) {
          puVar4 = puVar6 + uVar12;
          while (puVar6 < puVar4) {
            if (*(int *)(puVar4[-1] + 0x30) <= *(int *)(uVar9 + 0x30)) break;
            *puVar4 = puVar4[-1];
            puVar4 = puVar4 + -1;
          }
          *puVar4 = uVar9;
          uVar12 = (ulonglong)((int)uVar12 + 1);
        }
        uVar9 = uVar9 + 0x40;
      } while (uVar9 < uVar16);
      do {
        if ((*(uint *)(uVar13 + 0x1c) & 0x10) == 0) {
          if ((*(uint *)(uVar13 + 0x18) & 2) != 0) {
            if (((*(int *)(uVar13 + 0x20) == 0) ||
                (*(int *)(uVar13 + 0x20) != *(int *)(uVar13 + 0x24))) ||
               ((*(uint *)(uVar13 + 0x1c) & 0x40) == 0)) goto LAB_14033f709;
            *(uint *)(uVar13 + 0x18) = *(uint *)(uVar13 + 0x18) & 0xfffffffd;
          }
          uVar11 = (uint)uVar12;
          if (uVar11 == 0) {
LAB_14033f6da:
            uVar9 = *puVar6;
            iVar15 = *(int *)(uVar13 + 0x30) - *(int *)(uVar9 + 0x30);
LAB_14033f6e6:
            lVar8 = (longlong)iVar15 * (longlong)iVar1;
            iVar7 = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10) +
                    *(int *)(uVar9 + 0x38);
          }
          else {
            iVar15 = *(int *)(uVar13 + 0x30);
            uVar9 = 0;
            do {
              if (iVar15 < *(int *)(puVar6[uVar9] + 0x30)) break;
              uVar5 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar5;
            } while (uVar5 < uVar11);
            if ((int)uVar9 == 0) goto LAB_14033f6da;
            uVar10 = uVar12;
            do {
              uVar5 = (uint)uVar10;
              uVar14 = uVar5 - 1;
              uVar10 = (ulonglong)uVar14;
              if (*(int *)(puVar6[uVar10] + 0x30) < iVar15) break;
              uVar5 = 0;
            } while (uVar14 != 0);
            if (uVar5 == uVar11) {
              uVar9 = puVar6[uVar5 - 1];
              iVar15 = iVar15 - *(int *)(uVar9 + 0x30);
              goto LAB_14033f6e6;
            }
            uVar9 = puVar6[(int)uVar9 - 1];
            iVar2 = *(int *)(uVar9 + 0x30);
            if (iVar15 == iVar2) {
              iVar7 = *(int *)(uVar9 + 0x38);
            }
            else {
              uVar10 = puVar6[uVar5];
              if (iVar15 == *(int *)(uVar10 + 0x30)) {
                iVar7 = *(int *)(uVar10 + 0x38);
              }
              else {
                iVar7 = *(int *)(uVar9 + 0x38);
                iVar15 = FUN_1402f20b0(iVar15 - iVar2,*(int *)(uVar10 + 0x38) - iVar7,
                                       *(int *)(uVar10 + 0x30) - iVar2);
                iVar7 = iVar7 + iVar15;
              }
            }
          }
          *(int *)(uVar13 + 0x38) = iVar7;
          *(uint *)(uVar13 + 0x1c) = *(uint *)(uVar13 + 0x1c) | 0x20;
        }
LAB_14033f709:
        uVar13 = uVar13 + 0x40;
      } while (uVar13 < uVar16);
      if (puVar6 != local_b8) {
        FUN_1402f7f90(uVar3,puVar6);
      }
    }
  }
  return;
}

