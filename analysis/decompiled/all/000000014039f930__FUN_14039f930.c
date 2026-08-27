// Function: FUN_14039f930
// Addr: 14039f930
// Size: 3078 bytes


void FUN_14039f930(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  char cVar12;
  char cVar13;
  ushort uVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  ushort uVar18;
  ulonglong uVar19;
  longlong lVar20;
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
  lVar20 = *(longlong *)(param_1 + 0x20);
  uVar23 = *(int *)(lVar20 + 0x54);
  if (*(int *)(lVar20 + 0x54) == 4) {
    uVar23 = 2;
  }
  local_60 = *(undefined8 *)(param_2 + 0x10);
  local_res20[0] = CONCAT31(local_res20[0]._1_3_,1);
  local_58 = FUN_1403bd7c0;
  if (*(code **)(lVar20 + 0x30) != (code *)0x0) {
    local_58 = *(code **)(lVar20 + 0x30);
  }
  local_50 = FUN_1403b6d20;
  if (*(code **)(lVar20 + 0x38) != (code *)0x0) {
    local_50 = *(code **)(lVar20 + 0x38);
  }
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,(uVar23 - 1 & 0xfffffffd) != 0);
  local_res18 = param_3;
  local_7c = uVar23;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  cVar12 = FUN_1403ec530(param_2,param_3,"start decompose");
  cVar13 = '\x01';
  if (cVar12 != '\0') {
    uVar15 = 0;
    uVar22 = *(uint *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
    *(undefined2 *)(param_2 + 0x59) = 1;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0;
LAB_14039fa50:
    uVar24 = uVar15 + 1;
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
    cVar13 = '\0';
    if ((char)local_res10[0] == '\0') {
LAB_14039fb48:
      uVar15 = *(uint *)(param_2 + 0x5c);
      pcVar1 = (char *)(param_2 + 0x58);
      lVar20 = local_70;
      while ((local_70 = lVar20, uVar15 < uVar24 && (*pcVar1 != '\0'))) {
        uVar15 = *(uint *)(*(longlong *)(lVar20 + 0x70) + (ulonglong)*(uint *)(lVar20 + 0x5c) * 0x14
                          );
        local_84 = 0;
        uVar5 = 0;
        if (cVar13 == '\0') {
LAB_14039fbde:
          iVar16 = FUN_1403bd190(&local_78,uVar5,uVar15);
          if (iVar16 == 0) {
            if ((char)local_res10[0] == '\0') {
              local_84 = *(int *)(lVar20 + 0x28);
              lVar6 = *(longlong *)(*(longlong *)(local_68 + 0x90) + 0x10);
              uVar17 = 0;
              if (lVar6 != 0) {
                uVar17 = *(undefined8 *)(lVar6 + 0x10);
              }
              iVar16 = (**(code **)(*(longlong *)(local_68 + 0x90) + 0x30))
                                 (local_68,*(undefined8 *)(local_68 + 0x98),uVar15,&local_84,uVar17)
              ;
              if (iVar16 == 0) goto LAB_14039fc39;
LAB_14039fdea:
              uVar15 = *(uint *)(lVar20 + 0x5c);
              iVar16 = local_84;
            }
            else {
LAB_14039fc39:
              if ((*(byte *)(*(longlong *)(lVar20 + 0x70) + 0x10 +
                            (ulonglong)*(uint *)(lVar20 + 0x5c) * 0x14) & 0x1f) == 0x1d) {
                if (uVar15 < 0x2001) {
                  if (uVar15 == 0x2000) {
switchD_14039fcb5_caseD_2002:
                    uVar21 = 0x200;
                    goto LAB_14039fd02;
                  }
                  if ((uVar15 == 0x20) || (uVar15 == 0xa0)) {
                    uVar21 = 0x1200;
                    goto LAB_14039fd02;
                  }
                  goto LAB_14039fdea;
                }
                if (0x3000 < uVar15) goto switchD_14039fcb5_caseD_200b;
                if (uVar15 == 0x3000) {
switchD_14039fcb5_caseD_2001:
                  uVar21 = 0x100;
                }
                else {
                  switch(uVar15) {
                  case 0x2001:
                  case 0x2003:
                    goto switchD_14039fcb5_caseD_2001;
                  case 0x2002:
                    goto switchD_14039fcb5_caseD_2002;
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
                    goto switchD_14039fcb5_caseD_200b;
                  case 0x202f:
                    uVar21 = 0x1500;
                    break;
                  case 0x205f:
                    uVar21 = 0x1100;
                  }
                }
LAB_14039fd02:
                local_80 = 0;
                lVar6 = *(longlong *)(*(longlong *)(local_68 + 0x90) + 0x10);
                uVar17 = 0;
                if (lVar6 != 0) {
                  uVar17 = *(undefined8 *)(lVar6 + 0x10);
                }
                iVar16 = (**(code **)(*(longlong *)(local_68 + 0x90) + 0x30))
                                   (local_68,*(undefined8 *)(local_68 + 0x98),0x20,&local_80,uVar17)
                ;
                if ((iVar16 != 0) || (local_80 = *(int *)(lVar20 + 0x24), local_80 != 0)) {
                  uVar14 = *(ushort *)
                            (*(longlong *)(lVar20 + 0x70) + 0x10 +
                            (ulonglong)*(uint *)(lVar20 + 0x5c) * 0x14);
                  if (((byte)uVar14 & 0x1f) == 0x1d) {
                    *(ushort *)
                     (*(longlong *)(lVar20 + 0x70) + (ulonglong)*(uint *)(lVar20 + 0x5c) * 0x14 +
                     0x10) = uVar14 & 0xff | uVar21;
                  }
                  *(int *)(*(longlong *)(lVar20 + 0x70) + 0xc +
                          (ulonglong)*(uint *)(lVar20 + 0x5c) * 0x14) = local_80;
                  FUN_1403ecfd0(lVar20);
                  *(uint *)(lVar20 + 0xd8) = *(uint *)(lVar20 + 0xd8) | 4;
                  goto LAB_14039fe04;
                }
              }
switchD_14039fcb5_caseD_200b:
              if (uVar15 != 0x2011) goto LAB_14039fdea;
              local_80 = 0;
              lVar6 = *(longlong *)(*(longlong *)(local_68 + 0x90) + 0x10);
              uVar17 = 0;
              if (lVar6 != 0) {
                uVar17 = *(undefined8 *)(lVar6 + 0x10);
              }
              iVar16 = (**(code **)(*(longlong *)(local_68 + 0x90) + 0x30))
                                 (local_68,*(undefined8 *)(local_68 + 0x98),0x2010,&local_80,uVar17)
              ;
              if (iVar16 == 0) goto LAB_14039fdea;
              uVar15 = *(uint *)(lVar20 + 0x5c);
              iVar16 = local_80;
            }
            *(int *)(*(longlong *)(lVar20 + 0x70) + 0xc + (ulonglong)uVar15 * 0x14) = iVar16;
            goto LAB_14039fdfc;
          }
          *(int *)(lVar20 + 0x5c) = *(int *)(lVar20 + 0x5c) + 1;
        }
        else {
          local_84 = *(int *)(lVar20 + 0x28);
          lVar6 = *(longlong *)(*(longlong *)(local_68 + 0x90) + 0x10);
          uVar17 = 0;
          if (lVar6 != 0) {
            uVar17 = *(undefined8 *)(lVar6 + 0x10);
          }
          iVar16 = (**(code **)(*(longlong *)(local_68 + 0x90) + 0x30))
                             (local_68,*(undefined8 *)(local_68 + 0x98),uVar15,&local_84,uVar17);
          if (iVar16 == 0) {
            uVar5 = (char)local_res10[0];
            goto LAB_14039fbde;
          }
          *(int *)(*(longlong *)(lVar20 + 0x70) + 0xc + (ulonglong)*(uint *)(lVar20 + 0x5c) * 0x14)
               = local_84;
LAB_14039fdfc:
          FUN_1403ecfd0(lVar20);
        }
LAB_14039fe04:
        uVar15 = *(uint *)(param_2 + 0x5c);
        cVar13 = (char)local_res10[0];
        lVar20 = local_70;
      }
      if ((uVar15 == uVar22) || (*pcVar1 == '\0')) goto LAB_14039fee5;
      uVar19 = (ulonglong)(uVar15 + 1);
      local_res20[0] = local_res20[0] & 0xffffff00;
      if (uVar15 + 1 < uVar22) {
        do {
          if (2 < (*(ushort *)(*(longlong *)(param_2 + 0x70) + 0x10 + uVar19 * 0x14) & 0x1f) - 10)
          break;
          uVar15 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar15;
        } while (uVar15 < uVar22);
      }
      uVar15 = *(uint *)(lVar20 + 0x5c);
      uVar24 = (uint)uVar19;
      if ((uVar15 < uVar24) && (*(char *)(lVar20 + 0x58) != '\0')) {
        do {
          iVar16 = *(int *)(*(longlong *)(lVar20 + 0x70) + (ulonglong)uVar15 * 0x14);
          if ((iVar16 - 0xfe00U < 0x10) || (iVar16 - 0xe0100U < 0xf0)) {
            FUN_1403d06c0(&local_78,uVar19,uVar23 == 0);
            goto LAB_14039feb8;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar24);
        do {
          if (*(char *)(lVar20 + 0x58) == '\0') break;
          FUN_1403bd440(&local_78,uVar23 == 0);
        } while (*(uint *)(lVar20 + 0x5c) < uVar24);
      }
LAB_14039feb8:
      uVar15 = *(uint *)(param_2 + 0x5c);
      cVar13 = '\0';
      if ((uVar22 <= uVar15) || (param_3 = local_res18, *pcVar1 == '\0')) goto LAB_14039feea;
      goto LAB_14039fa50;
    }
    lVar20 = *(longlong *)(param_2 + 0x70) + (ulonglong)uVar15 * 0x14;
    lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
    uVar17 = 0;
    if (lVar6 != 0) {
      uVar17 = *(undefined8 *)(lVar6 + 0x18);
    }
    uVar15 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x38))
                       (param_3,*(undefined8 *)(param_3 + 0x98),uVar24 - uVar15,lVar20,0x14,
                        lVar20 + 0xc,0x14,uVar17);
    if (*(char *)(param_2 + 0x59) == '\0') {
LAB_14039fb41:
      *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + uVar15;
      cVar13 = (char)local_res10[0];
      goto LAB_14039fb48;
    }
    if ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_2 + 0x70)) &&
       (*(int *)(param_2 + 100) == *(int *)(param_2 + 0x5c))) {
LAB_14039fb3e:
      *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar15;
      goto LAB_14039fb41;
    }
    cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + uVar15);
    if (cVar13 != '\0') {
      FUN_1404210f0(*(longlong *)(param_2 + 0x78) + (ulonglong)*(uint *)(param_2 + 100) * 0x14,
                    *(longlong *)(param_2 + 0x70) + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14,
                    (ulonglong)uVar15 * 0x14);
      goto LAB_14039fb3e;
    }
LAB_14039fee5:
    cVar13 = (char)local_res20[0];
LAB_14039feea:
    if ((*(char *)(param_2 + 0x58) != '\0') &&
       (cVar12 = FUN_1403ed060(param_2,*(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c)),
       cVar12 != '\0')) {
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
    FUN_1403ec530(param_2,local_res18,"end decompose");
    uVar23 = local_7c;
    if ((cVar13 == '\0') &&
       (cVar12 = FUN_1403ec530(param_2,param_3,"start reorder"), uVar23 = local_7c, cVar12 != '\0'))
    {
      uVar23 = *(uint *)(param_2 + 0x60);
      uVar19 = 0;
      lVar20 = *(longlong *)(param_2 + 0x70);
      if (uVar23 != 0) {
        do {
          uVar15 = (uint)uVar19;
          uVar22 = uVar15;
          if (((*(ushort *)(lVar20 + 0x10 + uVar19 * 0x14) & 0x1f) - 10 < 3) &&
             (0xff < *(ushort *)(lVar20 + 0x10 + uVar19 * 0x14))) {
            while( true ) {
              uVar22 = uVar22 + 1;
              uVar11 = (ulonglong)uVar22;
              if (uVar23 <= uVar22) break;
              uVar21 = *(ushort *)(lVar20 + 0x10 + uVar11 * 0x14);
              if ((2 < (uVar21 & 0x1f) - 10) || (uVar21 < 0x100)) break;
            }
            if (uVar22 - uVar15 < 0x21) {
              FUN_14040c100(param_2,uVar19,uVar11,&LAB_1403b4ab0);
              pcVar7 = *(code **)(*(longlong *)(param_1 + 0x20) + 0x48);
              if (pcVar7 != (code *)0x0) {
                (*pcVar7)(param_1,param_2,uVar19,uVar11);
              }
            }
          }
          uVar19 = (ulonglong)(uVar22 + 1);
        } while (uVar22 + 1 < uVar23);
      }
      FUN_1403ec530(param_2,param_3,"end reorder");
      cVar13 = (char)local_res20[0];
      uVar23 = local_7c;
    }
  }
  uVar22 = 1;
  if ((*(byte *)(param_2 + 0xd8) & 0x10) != 0) {
    uVar15 = *(uint *)(param_2 + 0x60);
    uVar19 = 1;
    lVar20 = *(longlong *)(param_2 + 0x70);
    if (2 < uVar15) {
      do {
        iVar16 = (int)uVar19;
        if ((*(int *)(lVar20 + uVar19 * 0x14) == 0x34f) &&
           ((((uVar21 = *(ushort *)(lVar20 + 0x10 + (ulonglong)(iVar16 + 1) * 0x14),
              2 < (uVar21 & 0x1f) - 10 || (uVar21 = uVar21 >> 8, uVar21 == 0)) ||
             (uVar14 = *(ushort *)(lVar20 + 0x10 + (ulonglong)(iVar16 - 1) * 0x14),
             2 < (uVar14 & 0x1f) - 10)) || (uVar14 >> 8 <= uVar21)))) {
          puVar2 = (ushort *)(lVar20 + uVar19 * 0x14 + 0x10);
          *puVar2 = *puVar2 & 0xffbf;
        }
        uVar19 = (ulonglong)(iVar16 + 1);
      } while (iVar16 + 2U < uVar15);
    }
  }
  if (cVar13 != '\0') {
    return;
  }
  if (*(char *)(param_2 + 0x58) == '\0') {
    return;
  }
  if (uVar23 != 2 && uVar23 != 3) {
    return;
  }
  cVar13 = FUN_1403ec530(param_2,param_3,"start compose");
  if (cVar13 == '\0') {
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
        uVar15 = *(int *)(param_2 + 100) - 1;
        if (uVar23 != uVar15) {
          uVar24 = 0;
          if (*(int *)(param_2 + 100) != 0) {
            uVar24 = uVar15;
          }
          uVar14 = *(ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + (ulonglong)uVar24 * 0x14);
          uVar18 = uVar14 >> 8;
          if (2 < (uVar14 & 0x1f) - 10) {
            uVar18 = 0;
          }
          if (uVar21 >> 8 <= uVar18) goto LAB_1403a03b9;
        }
        cVar13 = (*local_50)(&local_78,
                             *(undefined4 *)
                              (*(longlong *)(param_2 + 0x78) + (ulonglong)uVar23 * 0x14),
                             *(undefined4 *)
                              (*(longlong *)(param_2 + 0x70) + (ulonglong)uVar22 * 0x14),local_res10
                            );
        if (cVar13 == '\0') goto LAB_1403a03b9;
        local_res20[0] = 0;
        lVar20 = *(longlong *)(*(longlong *)(param_3 + 0x90) + 0x10);
        uVar17 = 0;
        if (lVar20 != 0) {
          uVar17 = *(undefined8 *)(lVar20 + 0x10);
        }
        iVar16 = (**(code **)(*(longlong *)(param_3 + 0x90) + 0x30))
                           (param_3,*(undefined8 *)(param_3 + 0x98),local_res10[0],local_res20,
                            uVar17);
        if (iVar16 == 0) goto LAB_1403a03b9;
        if (*(char *)(param_2 + 0x59) != '\0') {
          if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
             (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
            cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar13 == '\0') break;
            uVar22 = *(uint *)(param_2 + 0x5c);
            lVar20 = *(longlong *)(param_2 + 0x70);
            uVar15 = *(uint *)(param_2 + 100);
            puVar3 = (undefined4 *)(lVar20 + (ulonglong)uVar22 * 0x14);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            lVar6 = *(longlong *)(param_2 + 0x78);
            puVar4 = (undefined4 *)(lVar6 + (ulonglong)uVar15 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar8;
            puVar4[2] = uVar9;
            puVar4[3] = uVar10;
            *(undefined4 *)(lVar6 + (ulonglong)uVar15 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar20 + 0x10 + (ulonglong)uVar22 * 0x14);
          }
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
        }
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
        if ((1 < *(int *)(param_2 + 100) - uVar23) && (*(uint *)(param_2 + 0x1c) < 2)) {
          FUN_1403ec3f0(param_2,uVar23);
        }
        *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + -1;
        *(undefined4 *)(*(longlong *)(param_2 + 0x78) + (ulonglong)uVar23 * 0x14) = local_res10[0];
        *(uint *)(*(longlong *)(param_2 + 0x78) + 0xc + (ulonglong)uVar23 * 0x14) = local_res20[0];
        lVar20 = *(longlong *)(param_2 + 0x10);
        lVar6 = *(longlong *)(param_2 + 0x78);
        uVar22 = *(uint *)(lVar6 + (ulonglong)uVar23 * 0x14);
        uVar15 = (**(code **)(lVar20 + 0x28))(lVar20,uVar22,*(undefined8 *)(lVar20 + 0x68));
        uVar21 = (ushort)uVar15;
        if (0x7f < uVar22) {
          iVar16 = FUN_1403e6900(uVar22);
          uVar24 = uVar15;
          if (iVar16 != 0) {
            *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 2;
            uVar24 = uVar15 | 0x20;
            if (uVar22 == 0x200c) {
              uVar24 = uVar15 | 0x220;
            }
            else if (uVar22 == 0x200d) {
              uVar24 = uVar15 | 0x120;
            }
            else {
              if (((2 < uVar22 - 0x180b) && (uVar22 != 0x180f)) && (0x5f < uVar22 - 0xe0020)) {
                if (uVar22 != 0x34f) goto LAB_1403a033c;
                *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 0x10;
              }
              uVar24 = uVar15 | 0x60;
            }
          }
LAB_1403a033c:
          uVar21 = (ushort)uVar24;
          if ((uVar15 < 0x20) && (uVar15 - 10 < 3)) {
            *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 0x80;
            if (uVar22 == 0x1a60) {
              uVar14 = 0xfe;
            }
            else if (uVar22 == 0xfc6) {
              uVar14 = 0xfe;
            }
            else if (uVar22 == 0xf39) {
              uVar14 = 0x7f;
            }
            else {
              iVar16 = (**(code **)(lVar20 + 0x18))(lVar20,uVar22,*(undefined8 *)(lVar20 + 0x58));
              uVar14 = (ushort)(byte)(&DAT_14045c1a0)[iVar16];
            }
            uVar21 = uVar21 | uVar14 << 8 | 0x80;
          }
        }
        *(ushort *)(lVar6 + (ulonglong)uVar23 * 0x14 + 0x10) = uVar21;
        param_3 = local_res18;
      }
      else {
LAB_1403a03b9:
        if (*(char *)(param_2 + 0x59) != '\0') {
          if ((*(longlong *)(param_2 + 0x78) != *(longlong *)(param_2 + 0x70)) ||
             (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
            cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + 1);
            if (cVar13 == '\0') break;
            uVar22 = *(uint *)(param_2 + 0x5c);
            lVar20 = *(longlong *)(param_2 + 0x70);
            uVar15 = *(uint *)(param_2 + 100);
            puVar3 = (undefined4 *)(lVar20 + (ulonglong)uVar22 * 0x14);
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            lVar6 = *(longlong *)(param_2 + 0x78);
            puVar4 = (undefined4 *)(lVar6 + (ulonglong)uVar15 * 0x14);
            *puVar4 = *puVar3;
            puVar4[1] = uVar8;
            puVar4[2] = uVar9;
            puVar4[3] = uVar10;
            *(undefined4 *)(lVar6 + (ulonglong)uVar15 * 0x14 + 0x10) =
                 *(undefined4 *)(lVar20 + 0x10 + (ulonglong)uVar22 * 0x14);
          }
          *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + 1;
        }
        *(int *)(param_2 + 0x5c) = *(int *)(param_2 + 0x5c) + 1;
        uVar22 = *(int *)(param_2 + 100) - 1;
        uVar19 = (ulonglong)uVar22;
        if (*(int *)(param_2 + 100) == 0) {
          uVar19 = 0;
        }
        uVar21 = *(ushort *)(*(longlong *)(param_2 + 0x78) + 0x10 + uVar19 * 0x14);
        if ((2 < (uVar21 & 0x1f) - 10) || (uVar21 < 0x100)) {
          uVar23 = uVar22;
        }
      }
      uVar22 = *(uint *)(param_2 + 0x5c);
    } while (uVar22 < local_7c);
  }
  if (*(char *)(param_2 + 0x58) != '\0') {
    lVar20 = *(longlong *)(param_2 + 0x70);
    if (*(char *)(param_2 + 0x59) != '\0') {
      uVar23 = *(int *)(param_2 + 0x60) - *(int *)(param_2 + 0x5c);
      if ((*(longlong *)(param_2 + 0x78) != lVar20) ||
         (*(int *)(param_2 + 100) != *(int *)(param_2 + 0x5c))) {
        cVar13 = FUN_1403bf1a0(param_2,*(int *)(param_2 + 100) + uVar23);
        if (cVar13 == '\0') goto LAB_1403a04d6;
        FUN_1404210f0(*(longlong *)(param_2 + 0x78) + (ulonglong)*(uint *)(param_2 + 100) * 0x14,
                      *(longlong *)(param_2 + 0x70) + (ulonglong)*(uint *)(param_2 + 0x5c) * 0x14,
                      (ulonglong)uVar23 * 0x14);
        lVar20 = *(longlong *)(param_2 + 0x70);
      }
      *(int *)(param_2 + 100) = *(int *)(param_2 + 100) + uVar23;
    }
    if (*(longlong *)(param_2 + 0x78) != lVar20) {
      *(longlong *)(param_2 + 0x80) = lVar20;
      *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x78);
    }
    *(undefined4 *)(param_2 + 0x60) = *(undefined4 *)(param_2 + 100);
  }
LAB_1403a04d6:
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
  *(undefined1 *)(param_2 + 0x59) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  FUN_1403ec530(param_2,param_3,"end compose");
  return;
}

