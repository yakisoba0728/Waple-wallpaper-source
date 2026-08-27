// Function: FUN_140300a50
// Addr: 140300a50
// Size: 737 bytes


uint FUN_140300a50(longlong param_1,int param_2,uint param_3,int param_4,byte param_5,byte param_6)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar5 = *(uint *)(param_1 + 0x117c);
  if ((uVar5 & 4) != 0) {
    lVar7 = (longlong)param_2 * 0x204 + *(longlong *)(param_1 + 0x1180);
    if (*(char *)(lVar7 + 0x118) == '\0') {
      uVar4 = -param_3;
      if ((int)-param_3 < 0) {
        uVar4 = param_3;
      }
      if (param_2 == 1) {
        uVar6 = uVar5 & 2;
      }
      else {
        uVar6 = uVar5 & 1;
      }
      if (uVar6 == 0) {
        if ((((param_6 & 2) != 0) && (param_2 == 1)) && ((int)uVar4 < 0xc0)) {
          uVar5 = -uVar4;
          if (-1 < (int)param_3) {
            uVar5 = uVar4;
          }
          return uVar5;
        }
        if ((param_5 & 1) == 0) {
          uVar6 = 0x38;
          bVar11 = SBORROW4(uVar4,0x38);
          iVar9 = -0x38;
        }
        else {
          uVar6 = 0x40;
          bVar11 = SBORROW4(uVar4,0x50);
          iVar9 = -0x50;
        }
        uVar5 = uVar4;
        if (bVar11 != (int)(uVar4 + iVar9) < 0) {
          uVar5 = uVar6;
        }
        if (*(int *)(lVar7 + 0x4c) != 0) {
          uVar4 = *(uint *)(lVar7 + 0x54);
          iVar9 = uVar4 - uVar5;
          if (-1 < (int)(uVar5 - uVar4)) {
            iVar9 = uVar5 - uVar4;
          }
          if (iVar9 < 0x28) {
            if ((int)uVar4 < 0x30) {
              uVar4 = 0x30;
            }
            uVar5 = -uVar4;
            if (-1 < (int)param_3) {
              uVar5 = uVar4;
            }
            return uVar5;
          }
          if ((int)uVar5 < 0xc0) {
            uVar4 = uVar5 & 0x3f;
            if (9 < uVar4) {
              if (uVar4 < 0x20) {
                uVar4 = (uVar5 & 0xffffffc0) + 10;
                uVar5 = -uVar4;
                if (-1 < (int)param_3) {
                  uVar5 = uVar4;
                }
                return uVar5;
              }
              if (uVar4 < 0x36) {
                uVar4 = 0x36;
              }
            }
            uVar4 = (uVar5 & 0xffffffc0) + uVar4;
            uVar5 = -uVar4;
            if (-1 < (int)param_3) {
              uVar5 = uVar4;
            }
            return uVar5;
          }
          iVar9 = 0;
          if (((0 < (int)param_3) && (0 < param_4)) || (((int)param_3 < 0 && (param_4 < 0)))) {
            uVar1 = *(ushort *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1180) + 8) + 0x80) +
                     0x18);
            if (9 < uVar1) {
              if (0x1d < uVar1) goto LAB_140300c49;
              param_4 = (int)((0x1e - (uint)uVar1) * param_4) / 0x14;
            }
            iVar9 = param_4;
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
          }
LAB_140300c49:
          uVar4 = (uVar5 - iVar9) + 0x20 & 0xffffffc0;
          uVar5 = -uVar4;
          if (-1 < (int)param_3) {
            uVar5 = uVar4;
          }
          return uVar5;
        }
      }
      else {
        uVar10 = 0;
        iVar9 = 0x62;
        uVar6 = uVar4;
        uVar2 = uVar4;
        if (*(uint *)(lVar7 + 0x4c) != 0) {
          do {
            uVar6 = *(uint *)(lVar7 + 0x54 + uVar10 * 0xc);
            iVar3 = uVar6 - uVar4;
            if (-1 < (int)(uVar4 - uVar6)) {
              iVar3 = uVar4 - uVar6;
            }
            if (iVar9 <= iVar3) {
              uVar6 = uVar2;
              iVar3 = iVar9;
            }
            iVar9 = iVar3;
            uVar8 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar8;
            uVar2 = uVar6;
          } while (uVar8 < *(uint *)(lVar7 + 0x4c));
        }
        uVar2 = uVar6 + 0x20 & 0xffffffc0;
        if ((int)uVar4 < (int)uVar6) {
          uVar8 = uVar4;
          if ((int)(uVar2 - 0x30) < (int)uVar4) {
            uVar8 = uVar6;
          }
        }
        else {
          uVar8 = uVar6;
          if ((int)(uVar2 + 0x30) <= (int)uVar4) {
            uVar8 = uVar4;
          }
        }
        if (param_2 == 1) {
          if (0x3f < (int)uVar8) {
            uVar4 = uVar8 + 0x10 & 0xffffffc0;
            uVar5 = -uVar4;
            if (-1 < (int)param_3) {
              uVar5 = uVar4;
            }
            return uVar5;
          }
LAB_140300ca0:
          uVar5 = 0xffffffc0;
          if (-1 < (int)param_3) {
            uVar5 = 0x40;
          }
          return uVar5;
        }
        if ((uVar5 & 8) == 0) {
          if ((int)uVar8 < 0x30) {
            uVar4 = (int)(uVar8 + 0x40) >> 1;
            uVar5 = -uVar4;
            if (-1 < (int)param_3) {
              uVar5 = uVar4;
            }
            return uVar5;
          }
          if ((int)uVar8 < 0x80) {
            uVar5 = uVar8 + 0x16 & 0xffffffc0;
            iVar9 = uVar4 - uVar5;
            if (-1 < (int)(uVar5 - uVar4)) {
              iVar9 = uVar5 - uVar4;
            }
            if ((0xf < iVar9) && (uVar5 = uVar4, (int)uVar4 < 0x30)) {
              uVar4 = (int)(uVar4 + 0x40) >> 1;
              uVar5 = -uVar4;
              if (-1 < (int)param_3) {
                uVar5 = uVar4;
              }
              return uVar5;
            }
            goto LAB_140300d18;
          }
        }
        else if ((int)uVar8 < 0x40) goto LAB_140300ca0;
        uVar5 = uVar8 + 0x20 & 0xffffffc0;
      }
LAB_140300d18:
      uVar4 = -uVar5;
      if (-1 < (int)param_3) {
        uVar4 = uVar5;
      }
      return uVar4;
    }
  }
  return param_3;
}

