// Function: FUN_140329c30
// Addr: 140329c30
// Size: 1902 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140329c30(uint *param_1,uint param_2)

{
  longlong lVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  uint uVar9;
  ushort uVar10;
  uint uVar11;
  undefined1 auStack_108 [32];
  int local_e8;
  uint local_e4;
  short local_e0;
  ushort local_de;
  uint local_dc;
  short local_d8;
  ushort local_d6;
  ushort local_d4;
  undefined1 local_d0 [4];
  uint local_cc;
  int local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  short local_ac;
  ushort local_aa;
  short local_a8;
  short local_a6;
  int local_a4;
  undefined1 local_98 [8];
  int local_90;
  int local_88;
  undefined1 local_80 [12];
  ushort local_74;
  ushort local_72;
  undefined1 local_70 [12];
  ushort local_64;
  ushort local_62;
  ushort local_54;
  ushort local_52;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_108;
  local_c0 = *(undefined8 *)(param_1 + 0x26);
  lVar1 = *(longlong *)(param_1 + 0x28);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  uVar9 = -param_2;
  if ((int)-param_2 < 0) {
    uVar9 = param_2;
  }
  local_e8 = FUN_1402f5c50(lVar1,0);
  if ((local_e8 != 0) || (iVar4 = FUN_1402f5610(lVar1,&DAT_14043fa08,&local_e0), iVar4 != 0)) {
    return 2;
  }
  local_e8 = 2;
  if (local_e0 != 0x5a4d) goto LAB_14032a30e;
  local_e8 = FUN_1402f5c50(lVar1,local_de);
  if (local_e8 != 0) {
    return local_e8;
  }
  iVar4 = FUN_1402f5610(lVar1,&DAT_14043fa20,&local_d8);
  if (iVar4 != 0) {
    return iVar4;
  }
  uVar11 = uVar9 & 0xffff;
  uVar9 = uVar9 & 0xffff;
  local_e8 = 2;
  local_dc = uVar9;
  if (local_d8 == 0x454e) {
    local_e8 = FUN_1402f5c50(lVar1,(uint)local_d6 + (uint)local_de);
    if (local_e8 != 0) {
      return local_e8;
    }
    local_e8 = FUN_1402f4fe0(lVar1,(uint)local_d4 - (uint)local_d6);
    if (local_e8 != 0) {
      return local_e8;
    }
    uVar2 = FUN_1402f52d0(lVar1);
    local_e4 = CONCAT22(local_e4._2_2_,uVar2);
    if (0x10 < uVar2) {
      local_e8 = 3;
      FUN_1402f5100();
      return local_e8;
    }
    sVar3 = FUN_1402f52d0(lVar1);
    while( true ) {
      if (sVar3 == 0) {
        FUN_1402f5100(lVar1);
        return 3;
      }
      uVar2 = FUN_1402f52d0(lVar1);
      if (sVar3 == -0x7ff8) break;
      *(ulonglong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + (ulonglong)uVar2 * 0xc + 4;
      sVar3 = FUN_1402f52d0(lVar1);
    }
    iVar5 = FUN_1402f54a0(lVar1);
    iVar4 = *(int *)(lVar1 + 0x38);
    iVar6 = *(int *)(lVar1 + 0x40);
    FUN_1402f5100(lVar1);
    uVar11 = local_dc;
    if (uVar2 == 0) {
      return 3;
    }
    iVar5 = (iVar4 - iVar6) + 4 + iVar5;
    if (iVar5 == 0) {
      return 3;
    }
    uVar9 = (uint)uVar2;
    if (*(uint *)(lVar1 + 8) < uVar9 * 0x76) {
      return 3;
    }
    *param_1 = uVar9;
    if ((int)param_2 < 0) {
      return local_e8;
    }
    if (uVar9 <= local_dc) {
      return 6;
    }
    uVar7 = FUN_1402f7e90(local_c0,0xb8,&local_e8);
    *(undefined8 *)(param_1 + 0x36) = uVar7;
    if (local_e8 != 0) {
      return local_e8;
    }
    local_e8 = FUN_1402f5c50(lVar1,iVar5 + uVar11 * 0xc);
    if ((local_e8 == 0) && (local_e8 = FUN_1402f4fe0(lVar1,0xc), uVar9 = local_e4, local_e8 == 0)) {
      piVar8 = *(int **)(param_1 + 0x36);
      uVar2 = FUN_1402f52d0(lVar1);
      *piVar8 = (uint)uVar2 << ((byte)uVar9 & 0x1f);
      uVar2 = FUN_1402f52d0(lVar1);
      *(uint *)(*(longlong *)(param_1 + 0x36) + 0xa8) = (uint)uVar2 << ((byte)uVar9 & 0x1f);
      *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 8;
      FUN_1402f5100(lVar1);
      local_e8 = FUN_14032a420(*(undefined8 *)(param_1 + 0x36),lVar1);
      goto LAB_14032a2f0;
    }
  }
  else {
    if (local_d8 == 0x4550) {
      local_e8 = FUN_1402f5c50(lVar1,local_de);
      if (local_e8 != 0) {
        return local_e8;
      }
      iVar4 = FUN_1402f5610(lVar1,&DAT_14043fa38,&local_b0);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (local_b0 != 0x4550) {
        return 3;
      }
      if (local_ac != 0x14c) {
        return 3;
      }
      if (local_a8 != 0xe0) {
        return 3;
      }
      if (local_a6 != 0x10b) {
        return 3;
      }
      uVar2 = 0;
      *param_1 = 0;
      if (local_aa == 0) {
        return 3;
      }
      while( true ) {
        local_e8 = 0;
        local_e8 = FUN_1402f5610(lVar1,&DAT_14043fa70,local_98);
        if (local_e8 != 0) {
          return local_e8;
        }
        if (local_a4 == local_90) break;
        uVar2 = uVar2 + 1;
        if (local_aa <= uVar2) {
          return 3;
        }
      }
      local_e8 = FUN_1402f5c50(lVar1,local_88);
      if (local_e8 != 0) {
        return local_e8;
      }
      iVar6 = FUN_1402f5610(lVar1,&DAT_14043fa90);
      iVar4 = local_88;
      if (iVar6 != 0) {
        return iVar6;
      }
      local_e4 = 0;
      local_e8 = 0;
      if ((uint)local_52 + (uint)local_54 != 0) {
        local_e8 = 0;
        do {
          local_e8 = FUN_1402f5c50(lVar1,iVar4 + 0x10 + (local_e4 & 0xffff) * 8);
          if (local_e8 != 0) {
            return local_e8;
          }
          local_e8 = FUN_1402f5610(lVar1,&DAT_14043fab0,&local_c8);
          if (local_e8 != 0) {
            return local_e8;
          }
          if (-1 < (int)local_c4) {
            return 3;
          }
          local_c4 = local_c4 & 0x7fffffff;
          iVar6 = local_88 + local_c4;
          local_e8 = FUN_1402f5c50(lVar1,iVar6);
          if (local_e8 != 0) {
            return local_e8;
          }
          iVar5 = FUN_1402f5610(lVar1,&DAT_14043fa90,local_70);
          if (iVar5 != 0) {
            return iVar5;
          }
          uVar2 = 0;
          local_e8 = 0;
          if ((uint)local_62 + (uint)local_64 != 0) {
            local_dc = iVar6 + 0x10;
            local_e8 = 0;
            do {
              local_e8 = FUN_1402f5c50(lVar1,local_dc + (uint)uVar2 * 8);
              if (local_e8 != 0) {
                return local_e8;
              }
              local_e8 = FUN_1402f5610(lVar1,&DAT_14043fab0,local_d0);
              if (local_e8 != 0) {
                return local_e8;
              }
              if (-1 < (int)local_cc) {
                return 3;
              }
              local_cc = local_cc & 0x7fffffff;
              iVar6 = local_88 + local_cc;
              local_e8 = FUN_1402f5c50(lVar1,iVar6);
              if (local_e8 != 0) {
                return local_e8;
              }
              iVar5 = FUN_1402f5610(lVar1,&DAT_14043fa90,local_80);
              if (iVar5 != 0) {
                return iVar5;
              }
              uVar10 = 0;
              local_e8 = 0;
              if ((uint)local_72 + (uint)local_74 != 0) {
                local_e8 = 0;
                do {
                  local_e8 = FUN_1402f5c50(lVar1,iVar6 + 0x10 + (uint)uVar10 * 8);
                  if (local_e8 != 0) {
                    return local_e8;
                  }
                  local_e8 = FUN_1402f5610(lVar1,&DAT_14043fab0,local_b8);
                  if (local_e8 != 0) {
                    return local_e8;
                  }
                  if ((local_cc & 0x80000000) != 0) {
                    return 3;
                  }
                  iVar5 = 0;
                  if (local_c8 == 8) {
                    local_e8 = FUN_1402f5c50(lVar1,local_b4 + iVar4);
                    if (local_e8 != 0) {
                      return local_e8;
                    }
                    local_e8 = FUN_1402f5610(lVar1,&DAT_14043fac0,&local_50);
                    if (local_e8 != 0) {
                      return local_e8;
                    }
                    iVar5 = 0;
                    if (uVar9 == *param_1) {
                      piVar8 = (int *)FUN_1402f7e90(local_c0,0xb8,&local_e8);
                      *(int **)(param_1 + 0x36) = piVar8;
                      if (local_e8 != 0) {
                        return local_e8;
                      }
                      *piVar8 = (local_50 - local_90) + local_88;
                      *(undefined4 *)(*(longlong *)(param_1 + 0x36) + 0xa8) = local_4c;
                      local_e8 = FUN_14032a420(*(undefined8 *)(param_1 + 0x36),lVar1);
                      iVar5 = local_e8;
                      if (local_e8 != 0) goto LAB_14032a30a;
                    }
                    local_e8 = iVar5;
                    *param_1 = *param_1 + 1;
                    iVar5 = local_e8;
                  }
                  local_e8 = iVar5;
                  uVar10 = uVar10 + 1;
                } while ((uint)uVar10 < (uint)local_72 + (uint)local_74);
              }
              uVar2 = uVar2 + 1;
            } while ((uint)uVar2 < (uint)local_62 + (uint)local_64);
          }
          uVar2 = (short)local_e4 + 1;
          local_e4 = CONCAT22((short)(local_e4 >> 0x10),uVar2);
        } while ((uint)uVar2 < (uint)local_52 + (uint)local_54);
      }
    }
LAB_14032a2f0:
    if (*param_1 == 0) {
      return 3;
    }
    if ((int)*param_1 <= (int)uVar11) {
      return 6;
    }
  }
LAB_14032a30a:
  if (local_e8 == 0) {
    return 0;
  }
LAB_14032a30e:
  lVar1 = *(longlong *)(param_1 + 0x36);
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x26);
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FUN_1402f5c00(*(undefined8 *)(param_1 + 0x28));
    }
    FUN_1402f7f90(uVar7,*(undefined8 *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    FUN_1402f7f90(uVar7,lVar1);
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    return local_e8;
  }
  return local_e8;
}

