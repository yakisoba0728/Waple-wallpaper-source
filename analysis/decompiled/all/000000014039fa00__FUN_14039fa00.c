// Function: FUN_14039fa00
// Addr: 14039fa00
// Size: 2886 bytes


void FUN_14039fa00(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  char cVar13;
  char cVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  undefined8 uVar18;
  ushort uVar19;
  ulonglong uVar20;
  ushort uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 local_res10 [2];
  longlong local_res18;
  uint local_res20 [2];
  int local_84;
  int local_80;
  uint local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  code *local_50;
  
  if (*(int *)(param_2 + 0x60) == 0) {
    return;
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  uVar23 = *(int *)(lVar6 + 0x54);
  if (*(int *)(lVar6 + 0x54) == 4) {
    uVar23 = 2;
  }
  local_60 = *(undefined8 *)(param_2 + 0x10);
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
  local_58 = FUN_1403bd890;
  if (*(code **)(lVar6 + 0x30) != (code *)0x0) {
    local_58 = *(code **)(lVar6 + 0x30);
  }
  local_50 = (code *)&UNWIND_INFO_1403b6d61.field_0x8f;
  if (*(code **)(lVar6 + 0x38) != (code *)0x0) {
    local_50 = *(code **)(lVar6 + 0x38);
  }
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,(uVar23 - 1 & 0xfffffffd) != 0);
  local_res18 = param_3;
  local_7c = uVar23;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  cVar13 = FUN_1403ec600(param_2,param_3,"start decompose");
  cVar14 = '\x01';
  if (cVar13 != '\0') {
    uVar16 = 0;
    uVar22 = *(uint *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
    *(undefined2 *)(param_2 + 0x59) = 1;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
LAB_14039fb20:
    uVar24 = uVar16 + 1;
    if (uVar24 < uVar22) {
      do {
        if ((*(ushort *)(*(longlong *)(param_2 + 0x70) + 0x10 + (ulonglong)uVar24 * 0x14) & 0x1f) -
            10 < 3) {
          uVar24 = uVar24 - 1;
          break;
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 < uVar22);
    }
    cVar14 = '\0';
    if ((char)local_res10[0] == '\0') {
LAB_14039fc18:
      uVar16 = *(uint *)(param_2 + 0x5c);
      pcVar1 = (char *)(param_2 + 0x58);
      lVar6 = local_70;
      while ((local_70 = lVar6, uVar16 < uVar24 && (*pcVar1 != '\0'))) {
        uVar16 = *(uint *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
        local_84 = 0;
        uVar5 = 0;
        if (cVar14 == '\0') {
LAB_14039fcae:
          iVar17 = FUN_1403bd260(&local_78,uVar5,uVar16);
          if (iVar17 == 0) {
            if ((char)local_res10[0] == '\0') {
              local_84 = *(int *)(lVar6 + 0x28);
              lVar7 = *(longlong *)(*(longlong *)(local_68 + 0x90) + 0x10);
              uVar18 = 0;
              if (lVar7 != 0) {
                uVar18 = *(undefined8 *)(lVar7 + 0x10);
              }
              iVar17 = (**(code **)(*(longlong *)(local_68 + 0x90) + 0x30))
                                 (local_68,*(undefined8 *)(local_68 + 0x98),uVar16,&local_84,uVar18)
              ;
              if (iVar17 == 0) goto LAB_14039fd09;
LAB_14039feba:
              uVar16 = *(uint *)(lVar6 + 0x5c);
              iVar17 = local_84;
            }
            else {
LAB_14039fd09:
              if ((*(byte *)(*(longlong *)(lVar6 + 0x70) + 0x10 +
                            (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14) & 0x1f) == 0x1d) {
                if (uVar16 < 0x2001) {
                  if (uVar16 == 0x2000) {
switchD_14039fd85_caseD_2002:
                    uVar21 = 0x200;
                    goto LAB_14039fdd2;
                  }
                  if ((uVar16 == 0x20) || (uVar16 == 0xa0)) {
                    uVar21 = 0x1200;
                    goto LAB_14039fdd2;
                  }
                  goto LAB_14039feba;
                }
                if (0x3000 < uVar16) goto switchD_14039fd85_caseD_200b;
                if (uVar16 == 0x3000) {
switchD_14039fd85_caseD_2001:
                  uVar21 = 0x100;
                }
                else {
                  switch(uVar16) {
                  case 0x2001:
                  case 0x2003:
                    goto switchD_14039fd85_caseD_2001;
                  case 0x2002:
                    goto switchD_14039fd85_caseD_2002;
                  case 0x2004:
                    uVar21 = 0x300;
                    break;
                  case 0x2005:
                    uVar21 = 0x400;
                    break;
                  case 0x2006:
                    uVar21 = 0x600;
                    break;
                  case 0x2007:
                    uVar21 = 0x1300;
                    break;
                  case 0x2008:
                    uVar21 = 0x1400;
                    break;
                  case 0x2009:
                    uVar21 = 0x500;
                    break;
                  case 0x200a:
                    uVar21 = 0x1000;
                    break;
                  default:
                    goto switchD_14039fd85_caseD_200b;
                  case 0x202f:
                    uVar21 = 0x1500;
                    break;
                  case 0x205f:
                    uVar21 = 0x1100;
                  }
                }
LAB_14039fdd2:
                local_80 = 0;
                lVar7 = *(longlong *)(*(longlong *)(local_68 + 0x90) + 0x10);
                uVar18 = 0;
                if (lVar7 != 0) {
                  uVar18 = *(undefined8 *)(lVar7 + 0x10);
                }
                iVar17 = (**(code **)(*(longlong *)(local_68 + 0x90) + 0x30))
                                   (local_68,*(undefined8 *)(local_68 + 0x98),0x20,&local_80,uVar18)
                ;
                if ((iVar17 != 0) || (local_80 = *(int *)(lVar6 + 0x24), local_80 != 0)) {
                  uVar15 = *(ushort *)
                            (*(longlong *)(lVar6 + 0x70) + 0x10 +
                            (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14);
                  if (((byte)uVar15 & 0x1f) == 0x1d) {
                    *(ushort *)
                     (*(longlong *)(lVar6 + 0x70) + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14 + 0x10
                     ) = uVar15 & 0xff | uVar21;
                  }
                  *(int *)(*(longlong *)(lVar6 + 0x70) + 0xc +
                          (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14) = local_80;
                  FUN_1403ed0a0(lVar6);
                  *(uint *)(lVar6 + 0xd8) = *(uint *)(lVar6 + 0xd8) | 4;
                  goto LAB_14039fed4;
                }
              }
switchD_14039fd85_caseD_200b:
              if (uVar16 != 0x2011) goto LAB_14039feba;
              local_80 = 0;
              lVar7 = *(longlong *)(*(longlong *)(local_68 + 0x90) + 0x10);
              uVar18 = 0;
              if (lVar7 != 0) {
                uVar18 = *(undefined8 *)(lVar7 + 0x10);
              }
              iVar17 = (**(code **)(*(longlong *)(local_68 + 0x90) + 0x30))
                                 (local_68,*(undefined8 *)(local_68 + 0x98),0x2010,&local_80,uVar18)
              ;
              if (iVar17 == 0) goto LAB_14039feba;
              uVar16 = *(uint *)(lVar6 + 0x5c);
              iVar17 = local_80;
            }
            *(int *)(*(longlong *)(lVar6 + 0x70) + 0xc + (ulonglong)uVar16 * 0x14) = iVar17;
            goto LAB_14039fecc;
          }
          *(int *)(lVar6 + 0x5c) = *(int *)(lVar6 + 0x5c) + 1;
        }
        else {
          local_84 = *(int *)(lVar6 + 0x28);
          lVar7 = *(longlong *)(*(longlong *)(local_68 + 0x90) + 0x10);
          uVar18 = 0;
          if (lVar7 != 0) {
            uVar18 = *(undefined8 *)(lVar7 + 0x10);
          }
          iVar17 = (**(code **)(*(longlong *)(local_68 + 0x90) + 0x30))
                             (local_68,*(undefined8 *)(local_68 + 0x98),uVar16,&local_84,uVar18);
          if (iVar17 == 0) {
            uVar5 = (char)local_res10[0];
            goto LAB_14039fcae;
          }
          *(int *)(*(longlong *)(lVar6 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar6 + 0x5c) * 0x14) =
               local_84;
LAB_14039fecc:
          FUN_1403ed0a0(lVar6);
        }
LAB_14039fed4:
        uVar16 = *(uint *)(param_2 + 0x5c);
        cVar14 = (char)local_res10[0];
        lVar6 = local_70;
      }
      if ((uVar16 == uVar22) || (*pcVar1 == '\0')) goto LAB_14039ffb5;
      cVar14 = '\0';
      uVar20 = (ulonglong)(uVar16 + 1);
      local_res20[0] = local_res20[0] & 0xffffff00;
      if (uVar16 + 1 < uVar22) {
        do {
          if (2 < (*(ushort *)(*(longlong *)(param_2 + 0x70) + 0x10 + uVar20 * 0x14) & 0x1f) - 10)
          break;
          uVar16 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar16;
        } while (uVar16 < uVar22);
      }
      uVar16 = *(uint *)(lVar6 + 0x5c);
      uVar24 = (uint)uVar20;
      if ((uVar16 < uVar24) && (*(char *)(lVar6 + 0x58) != '\0')) {
        do {
          iVar17 = *(int *)(*(longlong *)(lVar6 + 0x70) + (ulonglong)uVar16 * 0x14);
          if ((iVar17 - 0xfe00U < 0x10) || (iVar17 - 0xe0100U < 0xf0)) {
            FUN_1403d0790(&local_78,uVar20,uVar23 == 0);
            goto LAB_14039ff88;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar24);
        do {
          if (*(char *)(lVar6 + 0x58) == '\0') break;
          FUN_1403bd510(&local_78,uVar23 == 0);
        } while (*(uint *)(lVar6 + 0x5c) < uVar24);
      }
LAB_14039ff88:
      uVar16 = *(uint *)(param_2 + 0x5c);
      if ((uVar22 <= uVar16) || (param_3 = local_res18, *pcVar1 == '\0')) goto LAB_14039ffba;
      goto LAB_14039fb20;
    }
    lVar6 = *(longlong *)(param_2 + 0x70) + (ulonglong)uVar16 * 0x14;
    lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
    uVar18 = 0;
    if (lVar7 != 0) {
      uVar18 = *(undefined8 *)(lVar7 + 0x18);
    }
    uVar16 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x38))
                       (param_3,*(undefined8 *)(param_3 + 0x98),uVar24 - uVar16,lVar6,0x14,
                        lVar6 + 0xc,0x14,uVar18);
    if (*(char *)(param_2 + 0x59) == '\0') {
LAB_14039fc11:
      *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + uVar16;
      cVar14 = (char)local_res10[0];
      goto LAB_14039fc18;
    }
    if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
       (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x5c))) {
      *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar16;
      goto LAB_14039fc11;
    }
    cVar14 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + uVar16);
    if (cVar14 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(*(longlong *)(param_2 + 0x78) + (ulonglong)*(uint *)(param_2 + 100) * 0x14,
                    *(longlong *)(param_2 + 0x70) + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14,
                    (ulonglong)uVar16 * 0x14);
    }
LAB_14039ffb5:
    cVar14 = (char)local_res20[0];
LAB_14039ffba:
    if ((*(char *)(param_2 + 0x58) != '\0') &&
       (cVar13 = func_0x0001403ed130(param_2,*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c)),
       cVar13 != '\0')) {
      if (*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) {
        *(longlong *)(param_2 + 0x80) = *(longlong *)(param_2 + 0x70);
        *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x78);
      }
      *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 100);
    }
    param_3 = local_res18;
    *(undefined1 *)(param_2 + 0x59) = 0;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
    *(undefined4 *)(param_2 + 0x5c) = 0;
    FUN_1403ec600(param_2,local_res18,"end decompose");
    uVar23 = local_7c;
    if ((cVar14 == '\0') &&
       (cVar13 = FUN_1403ec600(param_2,param_3,"start reorder"), uVar23 = local_7c, cVar13 != '\0'))
    {
      uVar23 = *(uint *)(param_2 + 0x60);
      uVar20 = 0;
      lVar6 = *(longlong *)(param_2 + 0x70);
      if (uVar23 != 0) {
        do {
          uVar16 = (uint)uVar20;
          uVar22 = uVar16;
          if (((*(ushort *)(lVar6 + 0x10 + uVar20 * 0x14) & 0x1f) - 10 < 3) &&
             (0xff < *(ushort *)(lVar6 + 0x10 + uVar20 * 0x14))) {
            while( true ) {
              uVar22 = uVar22 + 1;
              uVar12 = (ulonglong)uVar22;
              if (uVar23 <= uVar22) break;
              uVar21 = *(ushort *)(lVar6 + 0x10 + uVar12 * 0x14);
              if ((2 < (uVar21 & 0x1f) - 10) || (uVar21 < 0x100)) break;
            }
            if (uVar22 - uVar16 < 0x21) {
              func_0x00014040c1d0(param_2,uVar20,uVar12,&LAB_1403b4b80);
              pcVar8 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x48);
              if (pcVar8 != (code *)0x0) {
                (*pcVar8)(param_1,param_2,uVar20,uVar12);
              }
            }
          }
          uVar20 = (ulonglong)(uVar22 + 1);
        } while (uVar22 + 1 < uVar23);
      }
      FUN_1403ec600(param_2,param_3,"end reorder");
      cVar14 = (char)local_res20[0];
      uVar23 = local_7c;
    }
  }
  uVar22 = 1;
  if ((*(byte *)(param_2 + 0xd8) & 0x10) != 0) {
    uVar16 = *(uint *)(param_2 + 0x60);
    uVar20 = 1;
    lVar6 = *(longlong *)(param_2 + 0x70);
    if (2 < uVar16) {
      do {
        iVar17 = (int)uVar20;
        if ((*(int *)(lVar6 + uVar20 * 0x14) == 0x34f) &&
           ((((uVar21 = *(ushort *)(lVar6 + 0x10 + (ulonglong)(iVar17 + 1) * 0x14),
              2 < (uVar21 & 0x1f) - 10 || (uVar21 = uVar21 >> 8, uVar21 == 0)) ||
             (uVar15 = *(ushort *)(lVar6 + 0x10 + (ulonglong)(iVar17 - 1) * 0x14),
             2 < (uVar15 & 0x1f) - 10)) || (uVar15 >> 8 <= uVar21)))) {
          puVar2 = (ushort *)(lVar6 + uVar20 * 0x14 + 0x10);
          *puVar2 = *puVar2 & 0xffbf;
        }
        uVar20 = (ulonglong)(iVar17 + 1);
      } while (iVar17 + 2U < uVar16);
    }
  }
  if (cVar14 != '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x58) == '\0') {
    return;
  }
  if (uVar23 != 2 && uVar23 != 3) {
    return;
  }
  cVar14 = FUN_1403ec600(param_2,param_3,"start compose");
  if (cVar14 == '\0') {
    return;
  }
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  local_7c = *(uint *)(param_2 + 0x60);
  *(undefined2 *)(param_2 + 0x59) = 1;
  *(undefined4 *)(param_2 + 100) = 1;
  *(undefined4 *)(param_2 + 0x5c) = 1;
  if (1 < local_7c) {
    uVar23 = 0;
    do {
      uVar21 = *(ushort *)(*(longlong *)(param_2 + 0x70) + 0x10 + (ulonglong)uVar22 * 0x14);
      if ((uVar21 & 0x1f) - 10 < 3) {
        uVar16 = *(int *)(param_2 + 100) - 1;
        if (uVar23 != uVar16) {
          uVar24 = 0;
          if (*(int *)(param_2 + 100) != 0) {
            uVar24 = uVar16;
          }
          uVar15 = *(ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + (ulonglong)uVar24 * 0x14);
          uVar19 = uVar15 >> 8;
          if (2 < (uVar15 & 0x1f) - 10) {
            uVar19 = 0;
          }
          if (uVar21 >> 8 <= uVar19) goto LAB_1403a0489;
        }
        cVar14 = (*local_50)(&local_78,
                             *(undefined4 *)
                              (*(longlong *)(param_2 + 0x78) + (ulonglong)uVar23 * 0x14),
                             *(undefined4 *)
                              (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar22 * 0x14),local_res10
                            );
        if (cVar14 == '\0') goto LAB_1403a0489;
        local_res20[0] = 0;
        lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
        uVar18 = 0;
        if (lVar6 != 0) {
          uVar18 = *(undefined8 *)(lVar6 + 0x10);
        }
        iVar17 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                           (param_3,*(undefined8 *)(param_3 + 0x98),local_res10[0],local_res20,
                            uVar18);
        if (iVar17 == 0) goto LAB_1403a0489;
        if (*(char *)(param_2 + 0x59) != '\0') {
          if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
             (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
            cVar14 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar14 == '\0') break;
            uVar22 = *(uint *)(param_2 + 0x5c);
            lVar6 = *(longlong *)(param_2 + 0x70);
            uVar16 = *(uint *)(param_2 + 100);
            puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar22 * 0x14);
            uVar9 = puVar3[1];
            uVar10 = puVar3[2];
            uVar11 = puVar3[3];
            lVar7 = *(longlong *)(param_2 + 0x78);
            puVar4 = (undefined4 *)(lVar7 + (ulonglong)uVar16 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            *(undefined4 *)(lVar7 + (ulonglong)uVar16 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar22 * 0x14);
          }
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
        }
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
        if ((1 < *(int *)(param_2 + 100) - uVar23) && (*(uint *)(param_2 + 0x1c) < 2)) {
          FUN_1403ec4c0(param_2,uVar23);
        }
        *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + -1;
        *(undefined4 *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar23 * 0x14) = local_res10[0];
        *(uint *)(*(longlong *)(param_2 + 0x78) + 0xc + (ulonglong)uVar23 * 0x14) = local_res20[0];
        lVar6 = *(longlong *)(param_2 + 0x10);
        lVar7 = *(longlong *)(param_2 + 0x78);
        uVar22 = *(uint *)(lVar7 + (ulonglong)uVar23 * 0x14);
        uVar16 = (**(code **)(lVar6 + 0x28))(lVar6,uVar22,*(undefined8 *)(lVar6 + 0x68));
        uVar21 = (ushort)uVar16;
        if (0x7f < uVar22) {
          iVar17 = FUN_1403e69d0(uVar22);
          uVar24 = uVar16;
          if (iVar17 != 0) {
            *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 2;
            uVar24 = uVar16 | 0x20;
            if (uVar22 == 0x200c) {
              uVar24 = uVar16 | 0x220;
            }
            else if (uVar22 == 0x200d) {
              uVar24 = uVar16 | 0x120;
            }
            else {
              if (((2 < uVar22 - 0x180b) && (uVar22 != 0x180f)) && (0x5f < uVar22 - 0xe0020)) {
                if (uVar22 != 0x34f) goto LAB_1403a040c;
                *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 0x10;
              }
              uVar24 = uVar16 | 0x60;
            }
          }
LAB_1403a040c:
          uVar21 = (ushort)uVar24;
          if ((uVar16 < 0x20) && (uVar16 - 10 < 3)) {
            *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 0x80;
            if (uVar22 == 0x1a60) {
              uVar15 = 0xfe;
            }
            else if (uVar22 == 0xfc6) {
              uVar15 = 0xfe;
            }
            else if (uVar22 == 0xf39) {
              uVar15 = 0x7f;
            }
            else {
              iVar17 = (**(code **)(lVar6 + 0x18))(lVar6,uVar22,*(undefined8 *)(lVar6 + 0x58));
              uVar15 = (ushort)(byte)(&DAT_14045c270)[iVar17];
            }
            uVar21 = uVar21 | uVar15 << 8 | 0x80;
          }
        }
        *(ushort *)(lVar7 + (ulonglong)uVar23 * 0x14 + 0x10) = uVar21;
        param_3 = local_res18;
      }
      else {
LAB_1403a0489:
        if (*(char *)(param_2 + 0x59) != '\0') {
          if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
             (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
            cVar14 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar14 == '\0') break;
            uVar22 = *(uint *)(param_2 + 0x5c);
            lVar6 = *(longlong *)(param_2 + 0x70);
            uVar16 = *(uint *)(param_2 + 100);
            puVar3 = (undefined4 *)(lVar6 + (ulonglong)uVar22 * 0x14);
            uVar9 = puVar3[1];
            uVar10 = puVar3[2];
            uVar11 = puVar3[3];
            lVar7 = *(longlong *)(param_2 + 0x78);
            puVar4 = (undefined4 *)(lVar7 + (ulonglong)uVar16 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar9;
            puVar4[2] = uVar10;
            puVar4[3] = uVar11;
            *(undefined4 *)(lVar7 + (ulonglong)uVar16 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar6 + 0x10 + (ulonglong)uVar22 * 0x14);
          }
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
        }
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
        uVar22 = *(int *)(param_2 + 100) - 1;
        uVar20 = (ulonglong)uVar22;
        if (*(int *)(param_2 + 100) == 0) {
          uVar20 = 0;
        }
        uVar21 = *(ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar20 * 0x14);
        if ((2 < (uVar21 & 0x1f) - 10) || (uVar21 < 0x100)) {
          uVar23 = uVar22;
        }
      }
      uVar22 = *(uint *)(param_2 + 0x5c);
    } while (uVar22 < local_7c);
  }
  if (*(char *)(param_2 + 0x58) != '\0') {
    lVar6 = *(longlong *)(param_2 + 0x70);
    if (*(char *)(param_2 + 0x59) != '\0') {
      uVar23 = *(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c);
      if ((*(longlong *)(param_2 + 0x78) != lVar6) ||
         (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
        cVar14 = func_0x0001403bf270(param_2,*(int *)(param_2 + 100) + uVar23);
        if (cVar14 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(*(longlong *)(param_2 + 0x78) + (ulonglong)*(uint *)(param_2 + 100) * 0x14,
                        *(longlong *)(param_2 + 0x70) + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14,
                        (ulonglong)uVar23 * 0x14);
        }
        goto code_r0x0001403a05a6;
      }
      *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar23;
    }
    if (*(longlong *)(param_2 + 0x78) != lVar6) {
      *(longlong *)(param_2 + 0x80) = lVar6;
      *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x78);
    }
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 100);
  }
code_r0x0001403a05a6:
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  FUN_1403ec600(param_2,param_3,"end compose");
  return;
}

