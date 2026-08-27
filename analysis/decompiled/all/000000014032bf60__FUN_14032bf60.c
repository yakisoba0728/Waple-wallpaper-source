// Function: FUN_14032bf60
// Addr: 14032bf60
// Size: 1093 bytes


undefined8 FUN_14032bf60(undefined8 param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short *psVar18;
  uint local_res10 [2];
  ulonglong uVar13;
  
  uVar10 = param_2[0x13];
  uVar5 = FUN_14032c3b0();
  local_res10[0] = (uint)uVar5;
  if (local_res10[0] == 0) {
    uVar14 = 0;
    *param_2 = 1;
    if (param_3 < 0) {
      return uVar5;
    }
    local_res10[0] = FUN_14032b800(param_1,param_2);
    if (local_res10[0] == 0) {
      psVar18 = (short *)0x2;
      if (*(uint *)((longlong)param_2 + 0x13c) != 0) {
        uVar13 = uVar14;
        do {
          if (*(int *)(param_2[0x28] + uVar13 * 0x10) == 0x100) {
            bVar1 = true;
            local_res10[0] = 0;
            goto LAB_14032c016;
          }
          uVar11 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar11;
        } while (uVar11 < *(uint *)((longlong)param_2 + 0x13c));
      }
      bVar1 = false;
      local_res10[0] = FUN_14032ae80(param_1,param_2,2);
      if (local_res10[0] == 0) {
LAB_14032c016:
        local_res10[0] = FUN_14032b5d0(param_1,param_2);
        if ((((local_res10[0] == 0) &&
             (local_res10[0] = FUN_14032b040(param_1,param_2), local_res10[0] == 0)) &&
            (local_res10[0] = FUN_14032b250(param_1,param_2), local_res10[0] == 0)) &&
           ((uVar11 = 0, !bVar1 || (uVar11 = FUN_14032ae80(param_1,param_2,0x100), uVar11 == 0)))) {
          local_res10[0] = uVar11;
          *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 0x12;
          if (*(char *)((longlong)param_2 + 0x14b) != '\0') {
            *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) | 4;
          }
          local_res10[0] = FUN_14032bb80(param_2);
          if (local_res10[0] == 0) {
            lVar6 = FUN_14032adf0(param_2,"FAMILY_NAME");
            if ((lVar6 == 0) || (*(char *)(lVar6 + 8) == '\0')) {
              param_2[3] = 0;
            }
            else {
              uVar5 = FUN_1402f8160(uVar10,*(undefined8 *)(lVar6 + 0x10),local_res10);
              param_2[3] = uVar5;
              if (local_res10[0] != 0) {
                return 3;
              }
            }
            *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_2 + 0x35);
            *(undefined4 *)(param_2 + 5) = 1;
            psVar7 = (short *)FUN_1402f7e90(uVar10,0x10,local_res10);
            param_2[6] = psVar7;
            if (local_res10[0] == 0) {
              sVar17 = 0;
              iVar2 = *(int *)((longlong)param_2 + 0x154) + *(int *)(param_2 + 0x2a);
              iVar12 = -iVar2;
              if (iVar12 < 0) {
                iVar12 = iVar2;
              }
              if (iVar12 < 0x8000) {
                sVar15 = (short)*(int *)((longlong)param_2 + 0x154) +
                         (short)*(int *)(param_2 + 0x2a);
                sVar16 = -sVar15;
                if (sVar16 < 0) {
                  sVar16 = sVar15;
                }
              }
              else {
                sVar16 = 0x7fff;
              }
              *psVar7 = sVar16;
              lVar6 = FUN_14032adf0(param_2,"AVERAGE_WIDTH");
              if (lVar6 == 0) {
                iVar12 = sVar16 * 2 + 1;
                sVar16 = (short)(iVar12 / 3) + (short)(iVar12 >> 0x1f) +
                         (short)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU)
                                >> 0x1f);
                psVar8 = psVar7;
              }
              else {
                iVar12 = *(int *)(lVar6 + 0x10);
                iVar2 = -iVar12;
                if (-iVar12 < 0) {
                  iVar2 = iVar12;
                }
                psVar18 = psVar7;
                if (iVar2 < 0x4fff2) {
                  sVar16 = (short)((iVar12 + 5) / 10);
                  if (sVar16 < 0) {
                    lVar6 = (longlong)(iVar12 + 5) * -0x66666667;
                    sVar16 = (short)(int)(lVar6 >> 0x22) - (short)(lVar6 >> 0x3f);
                  }
                  psVar8 = (short *)0x2;
                }
                else {
                  sVar16 = 0x7fff;
                  psVar8 = (short *)0x2;
                }
              }
              *(short *)((longlong)psVar18 + (longlong)psVar8) = sVar16;
              lVar6 = FUN_14032adf0(param_2,"POINT_SIZE");
              if (lVar6 != 0) {
                iVar12 = -*(int *)(lVar6 + 0x10);
                if (-*(int *)(lVar6 + 0x10) < 0) {
                  iVar12 = *(int *)(lVar6 + 0x10);
                }
                if (iVar12 < 0x504c3) {
                  uVar3 = FUN_1402f20b0(iVar12,0x70800,0x11a4e);
                  *(undefined4 *)(psVar7 + 2) = uVar3;
                }
                else {
                  psVar7[2] = 0x7fff;
                  psVar7[3] = 0;
                }
              }
              lVar6 = FUN_14032adf0(param_2,"PIXEL_SIZE");
              if (lVar6 != 0) {
                iVar12 = *(int *)(lVar6 + 0x10);
                iVar2 = -iVar12;
                if (-iVar12 < 0) {
                  iVar2 = iVar12;
                }
                if (iVar2 < 0x8000) {
                  sVar16 = (short)iVar12;
                  iVar12 = -(int)sVar16;
                  if (-1 < sVar16) {
                    iVar12 = (int)sVar16;
                  }
                  *(int *)(psVar7 + 6) = iVar12 << 6;
                }
                else {
                  psVar7[6] = -0x40;
                  psVar7[7] = 0x1f;
                }
              }
              lVar6 = FUN_14032adf0(param_2,"RESOLUTION_X");
              if (lVar6 != 0) {
                uVar11 = *(uint *)(lVar6 + 0x10);
                uVar4 = -uVar11;
                if ((int)-uVar11 < 0) {
                  uVar4 = uVar11;
                }
                if ((int)uVar4 < 0x8000) {
                  if ((short)uVar11 < 0) {
                    uVar11 = (uint)(ushort)-(short)uVar11;
                  }
                  sVar17 = (short)uVar11;
                }
                else {
                  sVar17 = 0x7fff;
                }
              }
              lVar6 = FUN_14032adf0(param_2,"RESOLUTION_Y");
              if (lVar6 != 0) {
                uVar11 = *(uint *)(lVar6 + 0x10);
                uVar14 = (ulonglong)uVar11;
                uVar4 = -uVar11;
                if ((int)-uVar11 < 0) {
                  uVar4 = uVar11;
                }
                if ((int)uVar4 < 0x8000) {
                  if ((short)uVar11 < 0) {
                    uVar14 = (ulonglong)(ushort)-(short)uVar11;
                  }
                  uVar14 = uVar14 & 0xffff;
                }
                else {
                  uVar14 = 0x7fff;
                }
              }
              iVar12 = *(int *)(psVar7 + 6);
              sVar16 = (short)uVar14;
              if (iVar12 == 0) {
                iVar12 = *(int *)(psVar7 + 2);
                *(int *)(psVar7 + 6) = iVar12;
                if (sVar16 != 0) {
                  iVar12 = FUN_1402f20b0(iVar12,(int)sVar16,0x48);
                  *(int *)(psVar7 + 6) = iVar12;
                }
              }
              if ((sVar17 != 0) && (sVar16 != 0)) {
                iVar12 = FUN_1402f20b0(iVar12,(int)sVar17,(int)sVar16);
              }
              *(int *)(psVar7 + 4) = iVar12;
              lVar6 = FUN_14032adf0(param_2,"CHARSET_REGISTRY");
              lVar9 = FUN_14032adf0(param_2,"CHARSET_ENCODING");
              if ((((lVar6 != 0) && (*(char *)(lVar6 + 8) != '\0')) && (lVar9 != 0)) &&
                 (*(char *)(lVar9 + 8) != '\0')) {
                uVar5 = FUN_1402f8160(uVar10,*(undefined8 *)(lVar9 + 0x10),local_res10);
                param_2[0x25] = uVar5;
                if (local_res10[0] != 0) {
                  return 3;
                }
                uVar10 = FUN_1402f8160(uVar10,*(undefined8 *)(lVar6 + 0x10),local_res10);
                param_2[0x26] = uVar10;
              }
              if (local_res10[0] == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 3;
}

