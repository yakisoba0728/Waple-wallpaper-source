// Function: FUN_140330220
// Addr: 140330220
// Size: 1599 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140330220(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong *plVar18;
  byte *pbVar19;
  byte bVar20;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  int *local_e0;
  byte *local_d8;
  uint local_d0;
  int local_cc;
  uint local_c8;
  uint local_c4;
  longlong *local_c0;
  uint local_b8;
  byte *local_b0;
  longlong local_a8;
  byte *local_a0;
  longlong local_98;
  longlong local_90;
  byte *local_88;
  byte *local_80;
  int local_78;
  undefined4 local_70 [4];
  int local_60;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_108;
  local_c4 = param_4;
  local_c0 = param_1;
  local_a8 = param_3;
  local_90 = param_2;
  FUN_14032fda0(param_1,&local_88);
  if (local_78 == 0) {
    return 3;
  }
  iVar11 = *(int *)(param_2 + 0x14);
  local_c8 = 1;
  local_b0 = local_80;
  local_d0 = 0;
  if (iVar11 == 7) {
    lVar9 = *param_1;
    lVar10 = local_c0[2];
    local_c0[2] = (longlong)(local_80 + -1);
    *local_c0 = (longlong)(local_88 + 1);
    FUN_14032fda0(local_c0,local_70);
    *local_c0 = lVar9;
    local_c0[2] = lVar10;
    param_1 = local_c0;
    pbVar19 = local_80;
    uVar17 = local_d0;
    if (local_60 != 3) goto LAB_140330343;
    iVar11 = 8;
    param_4 = local_c4;
    uVar17 = local_c8;
LAB_140330314:
    local_c8 = uVar17;
    local_b0 = local_80 + -1;
    local_88 = local_88 + 1;
    if (param_4 == 0) {
      return 3;
    }
    uVar17 = 1;
    local_d0 = 1;
  }
  else {
    uVar17 = param_4;
    if (local_78 == 3) goto LAB_140330314;
    uVar17 = 0;
  }
  pbVar19 = local_b0;
  if (local_c8 == 0) {
    return 0;
  }
LAB_140330343:
  local_b8 = iVar11 - 1;
  pbVar13 = local_88;
  do {
    for (; lVar9 = local_90, uVar3 = local_c4, pbVar13 < pbVar19; pbVar13 = pbVar13 + 1) {
      bVar20 = *pbVar13;
      if ((0x20 < bVar20) || ((0x100003601U >> ((ulonglong)bVar20 & 0x3f) & 1) == 0)) {
        if (bVar20 != 0x25) break;
        for (; ((pbVar13 < pbVar19 && (*pbVar13 != 0xd)) && (*pbVar13 != 10)); pbVar13 = pbVar13 + 1
            ) {
        }
      }
    }
    if (7 < local_b8) {
      return 3;
    }
    plVar18 = (longlong *)
              (*(longlong *)(local_a8 + (ulonglong)uVar17 * 8) +
              (ulonglong)*(uint *)(local_90 + 0x20));
    pbVar14 = pbVar13;
    local_d8 = pbVar13;
    switch(local_b8) {
    case 0:
      pbVar8 = pbVar13 + 3;
      if ((((pbVar8 < pbVar19) && (*pbVar13 == 0x74)) && (pbVar13[1] == 0x72)) &&
         ((pbVar13[2] == 0x75 && (*pbVar8 == 0x65)))) {
        uVar7 = 1;
        pbVar14 = pbVar13 + 5;
      }
      else {
        uVar7 = 0;
        if ((((pbVar13 + 4 < pbVar19) && ((*pbVar13 == 0x66 && (pbVar13[1] == 0x61)))) &&
            (pbVar13[2] == 0x6c)) && ((*pbVar8 == 0x73 && (pbVar13[4] == 0x65)))) {
          pbVar14 = pbVar13 + 6;
        }
      }
      goto LAB_1403304c6;
    case 1:
      uVar7 = FUN_140332d30(&local_d8,pbVar19,10);
      if (local_d8 == pbVar13) {
        uVar7 = 0;
      }
      else {
        pbVar14 = local_d8;
        if ((local_d8 < pbVar19) && (*local_d8 == 0x23)) {
          pbVar8 = local_d8 + 1;
          local_d8 = pbVar8;
          uVar7 = FUN_140332d30(&local_d8,pbVar19,uVar7);
          pbVar14 = local_d8;
          if (local_d8 == pbVar8) {
            uVar7 = 0;
            pbVar14 = pbVar13;
          }
        }
      }
      goto LAB_1403304c6;
    case 2:
      uVar16 = 0;
      goto LAB_140330448;
    case 3:
      uVar16 = 3;
LAB_140330448:
      uVar7 = FUN_140332e50(&local_d8,pbVar19,uVar16);
      pbVar14 = local_d8;
LAB_1403304c6:
      if (*(char *)(lVar9 + 0x24) == '\x01') {
        *(char *)plVar18 = (char)uVar7;
      }
      else if (*(char *)(lVar9 + 0x24) == '\x02') {
        *(short *)plVar18 = (short)uVar7;
      }
      else {
        *(undefined4 *)plVar18 = uVar7;
      }
      break;
    default:
      if (pbVar13 < pbVar19) {
        iVar11 = (int)pbVar19 - (int)pbVar13;
        if (local_78 == 4) {
          uVar17 = iVar11 - 1;
        }
        else {
          if (local_78 != 2) {
            return 3;
          }
          uVar17 = iVar11 - 2;
        }
        pbVar14 = pbVar13 + 1;
        lVar9 = param_1[4];
        if (*plVar18 != 0) {
          FUN_1402f7f90(lVar9);
          *plVar18 = 0;
        }
        lVar9 = FUN_1402f7fa0(lVar9,uVar17 + 1,&local_cc);
        if (local_cc != 0) {
          return local_cc;
        }
        FUN_1404210f0(lVar9,pbVar14,(ulonglong)uVar17);
        *(undefined1 *)((ulonglong)uVar17 + lVar9) = 0;
        *plVar18 = lVar9;
      }
      break;
    case 6:
      iVar11 = 0;
      if (pbVar13 < pbVar19) {
        if (*pbVar13 == 0x5b) {
          bVar20 = 0x5d;
LAB_14033059e:
          pbVar14 = pbVar13 + 1;
        }
        else {
          bVar20 = 0x7d;
          if (*pbVar13 == 0x7b) goto LAB_14033059e;
          bVar20 = 0;
        }
        iVar11 = 0;
        iVar5 = 0;
        if (pbVar14 < pbVar19) {
          do {
            for (; iVar11 = iVar5, pbVar14 < pbVar19; pbVar14 = pbVar14 + 1) {
              bVar1 = *pbVar14;
              if ((0x20 < bVar1) || ((0x100003601U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
                if (bVar1 != 0x25) break;
                for (; ((pbVar14 < pbVar19 && (*pbVar14 != 0xd)) && (*pbVar14 != 10));
                    pbVar14 = pbVar14 + 1) {
                }
              }
              iVar5 = iVar11;
            }
            local_d8 = pbVar14;
            if (pbVar19 <= pbVar14) break;
            if (*pbVar14 == bVar20) {
              pbVar14 = pbVar14 + 1;
              break;
            }
            if (3 < iVar11) goto LAB_140330651;
            uVar7 = FUN_140332e50(&local_d8,pbVar19,0);
            local_70[iVar11] = uVar7;
            if (pbVar14 == local_d8) {
              return 3;
            }
            iVar11 = iVar11 + 1;
            pbVar14 = local_d8;
            if ((bVar20 == 0) || (iVar5 = iVar11, pbVar19 <= local_d8)) break;
          } while( true );
        }
      }
      if (iVar11 < 4) {
        return 3;
      }
LAB_140330651:
      uVar7 = FUN_1402f4b60(local_70[0]);
      *(undefined4 *)plVar18 = uVar7;
      uVar7 = FUN_1402f4b60(local_70[1]);
      *(undefined4 *)((longlong)plVar18 + 4) = uVar7;
      uVar7 = FUN_1402f4b60(local_70[2]);
      *(undefined4 *)(plVar18 + 1) = uVar7;
      uVar7 = FUN_1402f4b60(local_70[3]);
      *(undefined4 *)((longlong)plVar18 + 0xc) = uVar7;
      break;
    case 7:
      lVar9 = param_1[4];
      local_e0 = &local_cc;
      uVar12 = 0;
      local_e8 = 0;
      local_98 = lVar9;
      lVar10 = FUN_1402f7ff0(lVar9,4,0,local_c4 * 4);
      uVar15 = uVar12;
      if (local_cc != 0) {
        return local_cc;
      }
      do {
        local_e8 = local_e8 & 0xffffffff00000000;
        uVar6 = FUN_14033c1a0(&local_d8,pbVar19,uVar3,(ulonglong)(uVar3 * (int)uVar15) * 4 + lVar10)
        ;
        lVar4 = local_a8;
        uVar17 = local_c4;
        if (((int)uVar6 < 0) || (uVar6 < uVar3)) {
          local_cc = 3;
          FUN_1402f7f90(lVar9,lVar10);
          return local_cc;
        }
        for (; local_d8 < pbVar19; local_d8 = local_d8 + 1) {
          bVar20 = *local_d8;
          lVar9 = local_98;
          if ((0x20 < bVar20) || ((0x100003601U >> ((ulonglong)bVar20 & 0x3f) & 1) == 0)) {
            if (bVar20 != 0x25) break;
            for (; ((local_d8 < pbVar19 && (*local_d8 != 0xd)) && (*local_d8 != 10));
                local_d8 = local_d8 + 1) {
            }
          }
        }
        uVar6 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar6;
        local_a0 = local_d8;
      } while (uVar6 < 4);
      if (uVar3 != 0) {
        do {
          iVar11 = (int)uVar12;
          puVar2 = *(undefined4 **)(lVar4 + uVar12 * 8);
          uVar7 = FUN_1402f4b60(*(undefined4 *)(lVar10 + uVar12 * 4));
          *puVar2 = uVar7;
          uVar7 = FUN_1402f4b60(*(undefined4 *)(lVar10 + (ulonglong)(uVar17 + iVar11) * 4));
          puVar2[1] = uVar7;
          uVar7 = FUN_1402f4b60(*(undefined4 *)(lVar10 + (ulonglong)(uVar3 * 2 + iVar11) * 4));
          puVar2[2] = uVar7;
          uVar7 = FUN_1402f4b60(*(undefined4 *)(lVar10 + (ulonglong)(uVar3 * 3 + iVar11) * 4));
          uVar12 = (ulonglong)(iVar11 + 1U);
          puVar2[3] = uVar7;
          pbVar19 = local_b0;
        } while (iVar11 + 1U < uVar17);
      }
      pbVar14 = local_a0;
      FUN_1402f7f90(local_98,lVar10);
    }
    local_d0 = local_d0 + 1;
    local_c8 = local_c8 - 1;
    pbVar13 = pbVar14;
    uVar17 = local_d0;
    param_1 = local_c0;
    if (local_c8 == 0) {
      return 0;
    }
  } while( true );
}

