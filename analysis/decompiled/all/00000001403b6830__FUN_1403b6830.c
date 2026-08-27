// Function: FUN_1403b6830
// Addr: 1403b6830
// Size: 626 bytes


uint FUN_1403b6830(byte *param_1,longlong *param_2)

{
  longlong lVar1;
  char *_Str;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char *_Str_00;
  size_t sVar6;
  size_t sVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  bool bVar17;
  
  uVar16 = (uint)param_1[1] * 0x10000 + (uint)param_1[2] * 0x100 + (uint)*param_1 * 0x1000000 +
           (uint)param_1[3];
  uVar14 = (uint)param_1[9] * 0x10000 + (uint)param_1[10] * 0x100 + (uint)param_1[8] * 0x1000000 +
           (uint)param_1[0xb];
  if (uVar14 != 0) {
    uVar15 = 0;
    do {
      lVar1 = uVar15 * 0xc;
      iVar13 = (uint)param_1[lVar1 + 0x11] + (uint)param_1[uVar15 * 0xc + 0x10] * 0x100;
      iVar9 = (uint)param_1[uVar15 * 0xc + 0x13] + (uint)param_1[uVar15 * 0xc + 0x12] * 0x100;
      iVar10 = *(int *)((longlong)param_2 + 0x3c) + -1;
      while( true ) {
        iVar12 = 0;
        iVar11 = iVar10;
        if (-1 < iVar10) {
          do {
            uVar3 = (uint)(iVar11 + iVar12) >> 1;
            iVar4 = *(int *)(param_2[8] + (ulonglong)uVar3 * 0x10);
            bVar17 = SBORROW4(iVar13,iVar4);
            iVar2 = iVar13 - iVar4;
            if (iVar13 == iVar4) {
              iVar4 = *(int *)(param_2[8] + 4 + (ulonglong)uVar3 * 0x10);
              bVar17 = SBORROW4(iVar9,iVar4);
              iVar2 = iVar9 - iVar4;
              if (iVar9 == iVar4) goto LAB_1403b6a23;
            }
            iVar4 = 1;
            if (bVar17 != iVar2 < 0) {
              iVar4 = -1;
            }
            if (iVar4 < 0) {
              iVar11 = uVar3 - 1;
            }
            else {
              if (iVar4 < 1) goto LAB_1403b6a23;
              iVar12 = uVar3 + 1;
            }
          } while (iVar12 <= iVar11);
        }
        if (iVar13 != 3) break;
        if (iVar9 != 3) goto LAB_1403b6a67;
        iVar9 = 1;
        iVar13 = 0x25;
      }
      if ((iVar13 == 0x27) && (iVar9 != 0)) {
        lVar5 = FUN_140398920(*param_2 + 0x180);
        if (iVar9 - 1U <
            (uint)*(byte *)(lVar5 + 9) * 0x10000 + (uint)*(byte *)(lVar5 + 10) * 0x100 +
            (uint)*(byte *)(lVar5 + 8) * 0x1000000 + (uint)*(byte *)(lVar5 + 0xb)) {
          pbVar8 = (byte *)(lVar5 + ((ulonglong)(iVar9 - 1U) + 3) * 4);
        }
        else {
          pbVar8 = (byte *)&DAT_14045dd10;
        }
        _Str_00 = (char *)FUN_140416cd0((ulonglong)*pbVar8 * 0x100 + (ulonglong)pbVar8[1] + lVar5,
                                        (uint)pbVar8[2] * 0x100 + (uint)pbVar8[3]);
        _Str = (char *)param_2[2];
        if (_Str_00 == _Str) {
LAB_1403b6a23:
          uVar16 = uVar16 & (uint)param_1[lVar1 + 0x19] * 0x10000 +
                            (uint)param_1[lVar1 + 0x1a] * 0x100 +
                            (uint)param_1[lVar1 + 0x18] * 0x1000000 + (uint)param_1[lVar1 + 0x1b] |
                   (uint)param_1[lVar1 + 0x15] * 0x10000 + (uint)param_1[lVar1 + 0x16] * 0x100 +
                   (uint)param_1[lVar1 + 0x14] * 0x1000000 + (uint)param_1[lVar1 + 0x17];
        }
        else if ((_Str_00 != (char *)0x0) && (_Str != (char *)0x0)) {
          sVar6 = strlen(_Str_00);
          sVar7 = strlen(_Str);
          if ((((uint)sVar6 <= (uint)sVar7) &&
              (iVar9 = strncmp(_Str_00,_Str,sVar6 & 0xffffffff), iVar9 == 0)) &&
             ((_Str[sVar6 & 0xffffffff] == '\0' || (_Str[sVar6 & 0xffffffff] == '-'))))
          goto LAB_1403b6a23;
        }
      }
LAB_1403b6a67:
      uVar3 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar3;
    } while (uVar3 < uVar14);
  }
  return uVar16;
}

