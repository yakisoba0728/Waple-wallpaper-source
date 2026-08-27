// Function: FUN_140325a80
// Addr: 140325a80
// Size: 1556 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140325a80(longlong param_1,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  uint local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  pbVar14 = param_2 + 1;
  local_64 = 0;
  if ((pbVar14 <= param_3) && (bVar2 = *param_2, -1 < (char)bVar2)) {
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 2) == 0) {
        uVar10 = 0;
      }
      else {
        if (param_3 < param_2 + 2) {
          return 8;
        }
        uVar10 = (ulonglong)*pbVar14;
        pbVar14 = param_2 + 2;
      }
      uVar19 = 0;
      local_68 = (uint)uVar10;
      pbVar13 = pbVar14;
      if ((bVar2 & 1) != 0) {
        pbVar13 = pbVar14 + 1;
        if (param_3 < pbVar13) {
          return 8;
        }
        uVar19 = (uint)*pbVar14;
      }
    }
    else {
      if (param_3 < param_2 + 2) {
        return 8;
      }
      local_68 = *pbVar14 & 0xf;
      uVar10 = (ulonglong)local_68;
      uVar19 = (uint)(*pbVar14 >> 4);
      pbVar13 = param_2 + 2;
    }
    uVar11 = uVar19 + (int)uVar10;
    if (*(uint *)(param_1 + 4) < uVar11) {
      local_70 = &local_64;
      local_78 = *(undefined8 *)(param_1 + 8);
      uVar12 = uVar11 + 7 & 0xfffffff8;
      uVar8 = FUN_1402f80b0(**(undefined8 **)(param_1 + 0x28),4,*(uint *)(param_1 + 4),uVar12);
      *(undefined8 *)(param_1 + 8) = uVar8;
      if (local_64 != 0) {
        return local_64;
      }
      uVar10 = (ulonglong)local_68;
      *(uint *)(param_1 + 4) = uVar12;
    }
    uVar18 = 0;
    uVar12 = 0;
    uVar16 = 0;
    *(ulonglong *)(param_1 + 0x10) = *(longlong *)(param_1 + 8) + uVar10 * 4;
    if (uVar11 != 0) {
      do {
        pbVar14 = pbVar13;
        if ((uVar16 & 7) == 0) {
          pbVar14 = pbVar13 + 1;
          if (param_3 < pbVar14) {
            return 8;
          }
          uVar18 = (ulonglong)*pbVar13;
        }
        if ((uVar18 & 1) == 0) {
          pbVar13 = pbVar14 + 1;
          if (param_3 < pbVar13) {
            return 8;
          }
          uVar12 = uVar12 + *pbVar14;
        }
        else {
          pbVar13 = pbVar14 + 2;
          if (param_3 < pbVar13) {
            return 8;
          }
          uVar12 = (int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1];
        }
        uVar18 = uVar18 >> 1;
        *(uint *)(*(longlong *)(param_1 + 8) + uVar16 * 4) = uVar12;
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while (uVar15 < uVar11);
      uVar10 = (ulonglong)local_68;
    }
    pbVar14 = pbVar13;
    if ((bVar2 & 8) != 0) {
      pbVar14 = pbVar13 + 1;
      if (param_3 < pbVar14) {
        return 8;
      }
      uVar11 = (uint)*pbVar13;
      if (*pbVar13 != 0) {
        do {
          if (param_3 < pbVar14 + 2) {
            return 8;
          }
          pbVar14 = pbVar14 + 2 + *pbVar14;
          if (param_3 < pbVar14) {
            return 8;
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      local_64 = 0;
    }
    local_60 = 0;
    uVar8 = 0;
    local_48 = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
    if (pbVar14 + 1 <= param_3) {
      do {
        bVar2 = *pbVar14 >> 4;
        uVar11 = *pbVar14 & 0xf;
        uVar18 = (ulonglong)uVar11;
        switch(bVar2) {
        case 0:
switchD_140325c9f_caseD_0:
          FUN_140325510(param_1);
          FUN_1402f0740(*(undefined8 *)(param_1 + 0x28));
          return local_64;
        case 1:
        case 4:
        case 5:
          uVar11 = 1;
          break;
        case 2:
          if ((uint)uVar10 <= uVar11) {
            return 8;
          }
          pbVar14 = pbVar14 + 1;
          local_60 = CONCAT44((int)((ulonglong)local_48 >> 0x20),
                              *(undefined4 *)(*(longlong *)(param_1 + 8) + uVar18 * 4));
          local_48 = local_60;
          goto LAB_140325ea4;
        case 3:
          if (uVar19 <= uVar11) {
            return 8;
          }
          pbVar14 = pbVar14 + 1;
          local_60 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar18 * 4),
                              (int)local_48);
          local_48 = local_60;
          goto LAB_140325ea4;
        case 6:
          uVar11 = 3;
          uVar18 = 0xb8e;
          break;
        case 7:
          uVar11 = 3;
          uVar18 = 0xe2b;
          break;
        default:
          uVar11 = 4;
        }
        puVar17 = (uint *)&local_60;
        uVar12 = 0;
        pbVar14 = pbVar14 + 1;
        do {
          while( true ) {
            uVar15 = (uint)uVar18 & 3;
            if ((uVar18 & 3) == 0) {
              if (param_3 < pbVar14 + 1) {
                return 8;
              }
              if (local_68 <= *pbVar14) {
                return 8;
              }
              uVar9 = *(uint *)(*(longlong *)(param_1 + 8) + (ulonglong)(uint)*pbVar14 * 4);
              pbVar14 = pbVar14 + 1;
            }
            else if (uVar15 == 1) {
              if (param_3 < pbVar14 + 2) {
                return 8;
              }
              uVar9 = (int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1];
              pbVar14 = pbVar14 + 2;
            }
            else {
              uVar9 = (uint)uVar8;
              if (uVar15 == 2) {
                if (param_3 < pbVar14 + 1) {
                  return 8;
                }
                uVar9 = (int)(char)*pbVar14 + uVar9;
                pbVar14 = pbVar14 + 1;
              }
            }
            *puVar17 = uVar9;
            uVar15 = (uint)(uVar18 >> 2) & 3;
            if ((uVar18 >> 2 & 3) == 0) {
              if (param_3 < pbVar14 + 1) {
                return 8;
              }
              if (uVar19 <= *pbVar14) {
                return 8;
              }
              local_48._4_4_ =
                   *(uint *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(uint)*pbVar14 * 4);
              pbVar14 = pbVar14 + 1;
            }
            else if (uVar15 == 1) {
              if (param_3 < pbVar14 + 2) {
                return 8;
              }
              local_48._4_4_ = (int)(short)((ushort)*pbVar14 << 8) | (uint)pbVar14[1];
              pbVar14 = pbVar14 + 2;
            }
            else if (uVar15 == 2) {
              if (param_3 < pbVar14 + 1) {
                return 8;
              }
              local_48._4_4_ = local_48._4_4_ + (int)(char)*pbVar14;
              pbVar14 = pbVar14 + 1;
            }
            puVar17[1] = local_48._4_4_;
            if ((uVar12 != 0) || (uVar11 != 4)) break;
            if (param_3 < pbVar14 + 1) {
              return 8;
            }
            uVar8 = *(undefined8 *)puVar17;
            uVar11 = 3;
            uVar18 = (ulonglong)*pbVar14;
            puVar17 = puVar17 + 2;
            uVar12 = 1;
            local_48 = uVar8;
            pbVar14 = pbVar14 + 1;
          }
          uVar8 = *(undefined8 *)puVar17;
          uVar12 = uVar12 + 1;
          puVar17 = puVar17 + 2;
          uVar18 = uVar18 >> 4;
          local_48 = uVar8;
        } while (uVar12 < uVar11);
        switch(bVar2) {
        case 0:
          goto switchD_140325c9f_caseD_0;
        case 1:
        case 2:
        case 3:
LAB_140325ea4:
          uVar8 = local_48;
          uVar6 = local_60;
          if (*(char *)(param_1 + 0x30) == '\0') {
            iVar7 = 8;
          }
          else {
            lVar4 = *(longlong *)(param_1 + 0x28);
            if (*(uint *)(lVar4 + 8) <
                *(ushort *)(lVar4 + 0x1a) + 1 + (uint)*(ushort *)(lVar4 + 0x62)) {
              iVar7 = FUN_1402f0870(lVar4,1,0);
              if (iVar7 != 0) break;
            }
            else {
              iVar7 = 0;
            }
            uVar3 = *(ushort *)(lVar4 + 0x62);
            *(undefined8 *)(*(longlong *)(lVar4 + 0x68) + (ulonglong)uVar3 * 8) = uVar6;
            *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x70)) = 1;
            *(short *)(lVar4 + 0x62) = *(short *)(lVar4 + 0x62) + 1;
          }
          break;
        case 4:
        case 5:
          lVar4 = *(longlong *)(param_1 + 0x28);
          FUN_140325510(param_1);
          *(undefined1 *)(param_1 + 0x30) = 1;
          if (((*(ushort *)(lVar4 + 0x62) + 1 + (uint)*(ushort *)(lVar4 + 0x1a) <=
                *(uint *)(lVar4 + 8)) &&
              (*(ushort *)(lVar4 + 0x60) + 1 + (uint)*(ushort *)(lVar4 + 0x18) <=
               *(uint *)(lVar4 + 0xc))) || (iVar7 = FUN_1402f0870(lVar4,1,1), iVar7 == 0)) {
            if (*(char *)(param_1 + 0x30) == '\0') {
              iVar7 = 8;
            }
            else {
              lVar4 = *(longlong *)(param_1 + 0x28);
              if (*(uint *)(lVar4 + 8) <
                  *(ushort *)(lVar4 + 0x1a) + 1 + (uint)*(ushort *)(lVar4 + 0x62)) {
                iVar7 = FUN_1402f0870(lVar4,1,0);
                if (iVar7 != 0) break;
              }
              else {
                iVar7 = 0;
              }
              uVar3 = *(ushort *)(lVar4 + 0x62);
              *(undefined8 *)(*(longlong *)(lVar4 + 0x68) + (ulonglong)uVar3 * 8) = local_60;
              *(undefined1 *)((ulonglong)uVar3 + *(longlong *)(lVar4 + 0x70)) = 1;
              *(short *)(lVar4 + 0x62) = *(short *)(lVar4 + 0x62) + 1;
            }
          }
          break;
        default:
          if (*(char *)(param_1 + 0x30) == '\0') {
            iVar7 = 8;
          }
          else {
            lVar4 = *(longlong *)(param_1 + 0x28);
            if (*(uint *)(lVar4 + 8) <
                *(ushort *)(lVar4 + 0x1a) + 3 + (uint)*(ushort *)(lVar4 + 0x62)) {
              iVar7 = FUN_1402f0870(lVar4,3,0);
              if (iVar7 != 0) break;
            }
            else {
              iVar7 = 0;
            }
            uVar10 = (ulonglong)*(ushort *)(lVar4 + 0x62);
            lVar5 = *(longlong *)(lVar4 + 0x70);
            puVar1 = (undefined8 *)(*(longlong *)(lVar4 + 0x68) + uVar10 * 8);
            *puVar1 = local_60;
            puVar1[1] = local_58;
            puVar1[2] = local_50;
            *(undefined2 *)(lVar5 + uVar10) = 0x202;
            *(undefined1 *)(lVar5 + 2 + uVar10) = 1;
            *(short *)(lVar4 + 0x62) = *(short *)(lVar4 + 0x62) + 3;
          }
        }
        if (iVar7 != 0) {
          return iVar7;
        }
        if (param_3 < pbVar14 + 1) {
          return 8;
        }
        uVar10 = (ulonglong)local_68;
        local_64 = 0;
      } while( true );
    }
  }
  return 8;
}

