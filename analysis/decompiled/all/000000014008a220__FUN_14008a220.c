// Function: FUN_14008a220
// Addr: 14008a220
// Size: 2475 bytes


/* WARNING: Type propagation algorithm not settling */

ulonglong * FUN_14008a220(ulonglong *param_1,byte *param_2,longlong param_3,char param_4)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined2 *puVar3;
  byte bVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  size_t sVar9;
  longlong *plVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *******pppppppuVar12;
  byte *pbVar13;
  ulonglong uVar14;
  undefined8 *******pppppppuVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  uint uVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  undefined *puVar23;
  bool bVar24;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 local_a8;
  undefined8 *******local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  ulonglong uStack_80;
  undefined8 *******local_78;
  longlong lStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58 [4];
  
  if (param_2 == (byte *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    return param_1;
  }
  pbVar2 = param_2 + param_3;
  pbVar13 = param_2;
  if (param_3 != 0) {
    do {
      bVar4 = *pbVar13;
      if (((bVar4 == 0x5c) || (bVar4 == 0x22)) || (0x5f < (byte)(bVar4 - 0x20))) {
        local_88 = 0;
        uStack_90 = 0;
        local_98 = (undefined8 *******)0x0;
        uStack_80 = 0xf;
        FUN_140052fb0(&local_98,param_3 * 2 + 3);
        if (uStack_80 == local_88) {
          local_a8 = 1;
          FUN_140053110(&local_98,1,(ulonglong)pbVar2 & 0xff,&DAT_140474de4);
        }
        else {
          pppppppuVar12 = &local_98;
          if (0xf < uStack_80) {
            pppppppuVar12 = local_98;
          }
          puVar3 = (undefined2 *)((longlong)pppppppuVar12 + local_88);
          local_88 = local_88 + 1;
          *puVar3 = 0x22;
        }
        goto LAB_14008a408;
      }
      pbVar13 = pbVar13 + 1;
    } while (pbVar13 != pbVar2);
  }
  local_58[1] = 0;
  local_58[0] = (ulonglong)DAT_140474de4 & 0xffffffffffff00ff;
  local_58[2] = 1;
  local_58[3] = 0xf;
  sVar9 = strlen((char *)param_2);
  plVar10 = (longlong *)FUN_1400532a0(local_58,param_2,sVar9);
  local_78 = (undefined8 *******)*plVar10;
  lStack_70 = plVar10[1];
  uVar17 = plVar10[2];
  uStack_60 = plVar10[3];
  plVar10[2] = 0;
  plVar10[3] = 0xf;
  *(undefined1 *)plVar10 = 0;
  if (uStack_60 == uVar17) {
    local_a8 = 1;
    local_68 = uVar17;
    pppppppuVar12 =
         (undefined8 *******)FUN_140053110(&local_78,1,(ulonglong)pbVar2 & 0xff,&DAT_140474de4);
  }
  else {
    local_68 = uVar17 + 1;
    pppppppuVar12 = &local_78;
    if (0xf < uStack_60) {
      pppppppuVar12 = local_78;
    }
    *(undefined2 *)((longlong)pppppppuVar12 + uVar17) = 0x22;
    pppppppuVar12 = &local_78;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar6 = *(undefined4 *)((longlong)pppppppuVar12 + 4);
  uVar7 = *(undefined4 *)(pppppppuVar12 + 1);
  uVar8 = *(undefined4 *)((longlong)pppppppuVar12 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)pppppppuVar12;
  *(undefined4 *)((longlong)param_1 + 4) = uVar6;
  *(undefined4 *)(param_1 + 1) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar8;
  uVar6 = *(undefined4 *)((longlong)pppppppuVar12 + 0x14);
  uVar7 = *(undefined4 *)(pppppppuVar12 + 3);
  uVar8 = *(undefined4 *)((longlong)pppppppuVar12 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(pppppppuVar12 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
  pppppppuVar12[2] = (undefined8 ******)0x0;
  pppppppuVar12[3] = (undefined8 ******)0xf;
  *(undefined1 *)pppppppuVar12 = 0;
  if (0xf < uStack_60) {
    uVar17 = uStack_60 + 1;
    pppppppuVar12 = local_78;
    if (0xfff < uVar17) {
      pppppppuVar12 = (undefined8 *******)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pppppppuVar12)))
      goto LAB_14008abba;
      uVar17 = uStack_60 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar12,uVar17);
  }
  local_68 = 0;
  uStack_60 = 0xf;
  local_78 = (undefined8 *******)((ulonglong)local_78 & 0xffffffffffffff00);
  if (0xf < local_58[3]) {
    uVar18 = local_58[3] + 1;
    uVar17 = local_58[0];
    if (0xfff < uVar18) {
      uVar17 = *(ulonglong *)(local_58[0] - 8);
      if (0x1f < (local_58[0] - uVar17) - 8) {
LAB_14008abba:
        pcVar5 = (code *)swi(0x29);
        (*pcVar5)(5);
        puVar21 = auStack_c0;
LAB_14008abc1:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar21 + -8) = &UNK_14008abc6;
        FUN_1400172e0();
      }
      uVar18 = local_58[3] + 0x28;
    }
    thunk_FUN_14028af80(uVar17,uVar18);
  }
  return param_1;
LAB_14008a408:
  uVar18 = uStack_80;
  uVar17 = local_88;
  bVar4 = *param_2;
  uVar20 = (uint)bVar4;
  switch(bVar4) {
  case 8:
    if (uStack_80 - local_88 < 2) {
      puVar23 = &DAT_1404789a0;
LAB_14008a48c:
      local_a8 = 2;
      FUN_140053110(&local_98,2,(ulonglong)pbVar2 & 0xff,puVar23);
    }
    else {
      pppppppuVar12 = &local_98;
      if (0xf < uStack_80) {
        pppppppuVar12 = local_98;
      }
      puVar3 = (undefined2 *)((longlong)pppppppuVar12 + local_88);
      local_88 = local_88 + 2;
      *puVar3 = 0x625c;
      *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 2) = 0;
    }
    break;
  case 9:
    FUN_1400532a0(&local_98,&DAT_1404789b0,2);
    break;
  case 10:
    if (uStack_80 - local_88 < 2) {
      puVar23 = &DAT_1404789a8;
      goto LAB_14008a48c;
    }
    pppppppuVar12 = &local_98;
    if (0xf < uStack_80) {
      pppppppuVar12 = local_98;
    }
    puVar3 = (undefined2 *)((longlong)pppppppuVar12 + local_88);
    local_88 = local_88 + 2;
    *puVar3 = 0x6e5c;
    *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 2) = 0;
    break;
  default:
    if (param_4 == '\0') {
      if (bVar4 < 0x80) {
LAB_14008a860:
        if (0x1f < uVar20) {
          if (uVar20 < 0x80) {
            uVar19 = (undefined1)uVar20;
            if (local_88 < uStack_80) {
              pppppppuVar12 = &local_98;
              if (0xf < uStack_80) {
                pppppppuVar12 = local_98;
              }
              puVar21 = (undefined1 *)((longlong)pppppppuVar12 + local_88);
              local_88 = local_88 + 1;
              *puVar21 = uVar19;
              *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 1) = 0;
              break;
            }
            puVar21 = auStack_c8;
            if (local_88 == 0x7fffffffffffffff) goto LAB_14008abc1;
            uVar16 = local_88 + 1;
            uVar22 = uVar16 | 0xf;
            if (uVar22 < 0x8000000000000000) {
              if (0x7fffffffffffffff - (uStack_80 >> 1) < uStack_80) {
                uVar22 = 0x7fffffffffffffff;
                uVar14 = 0x8000000000000027;
                goto LAB_14008a91c;
              }
              uVar14 = (uStack_80 >> 1) + uStack_80;
              if (uVar22 < uVar14) {
                uVar22 = uVar14;
              }
              uVar1 = uVar22 + 1;
              if (uVar1 == 0) {
                pppppppuVar12 = (undefined8 *******)0x0;
              }
              else {
                if (0xfff < uVar1) {
                  uVar14 = uVar22 + 0x28;
                  if (uVar14 <= uVar1) {
LAB_14008abc7:
                    /* WARNING: Subroutine does not return */
                    FUN_140017370();
                  }
                  goto LAB_14008a91c;
                }
                pppppppuVar12 = (undefined8 *******)FUN_14028af20(uVar1);
              }
            }
            else {
              uVar22 = 0x7fffffffffffffff;
              uVar14 = 0x8000000000000027;
LAB_14008a91c:
              ppppppuVar11 = (undefined8 ******)FUN_14028af20(uVar14);
              if (ppppppuVar11 == (undefined8 ******)0x0) goto LAB_14008abba;
              pppppppuVar12 =
                   (undefined8 *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
              pppppppuVar12[-1] = ppppppuVar11;
            }
            pppppppuVar15 = local_98;
            local_88 = uVar16;
            uStack_80 = uVar22;
            if (uVar18 < 0x10) {
              FUN_1404210f0(pppppppuVar12,&local_98,uVar17);
              *(undefined1 *)(uVar17 + (longlong)pppppppuVar12) = uVar19;
              *(undefined1 *)(uVar17 + 1 + (longlong)pppppppuVar12) = 0;
              local_98 = pppppppuVar12;
            }
            else {
              FUN_1404210f0(pppppppuVar12,local_98,uVar17);
              *(undefined1 *)(uVar17 + (longlong)pppppppuVar12) = uVar19;
              *(undefined1 *)(uVar17 + 1 + (longlong)pppppppuVar12) = 0;
              if (0xfff < uVar18 + 1) {
                if ((ulonglong)((longlong)pppppppuVar15 + (-8 - (longlong)pppppppuVar15[-1])) < 0x20
                   ) {
                  thunk_FUN_14028af80(pppppppuVar15[-1],uVar18 + 0x28);
                  local_98 = pppppppuVar12;
                  break;
                }
                goto LAB_14008abba;
              }
              thunk_FUN_14028af80(pppppppuVar15);
              local_98 = pppppppuVar12;
            }
            break;
          }
          if (0xffff < uVar20) {
            FUN_14008a0f0(&local_98,uVar20 - 0x10000 >> 10 & 0x3ff | 0xd800);
            uVar20 = uVar20 - 0x10000 & 0x3ff | 0xdc00;
          }
        }
      }
      else {
        if (bVar4 < 0xe0) {
          if (1 < (longlong)pbVar2 - (longlong)param_2) {
            pbVar13 = param_2 + 1;
            uVar20 = (int)(char)param_2[1] & 0x3fU | (uVar20 & 0x1f) << 6;
            bVar24 = uVar20 < 0x80;
LAB_14008a85c:
            param_2 = pbVar13;
            if (bVar24) {
              uVar20 = 0xfffd;
            }
            goto LAB_14008a860;
          }
        }
        else if (bVar4 < 0xf0) {
          if (2 < (longlong)pbVar2 - (longlong)param_2) {
            pbVar13 = param_2 + 2;
            uVar20 = ((int)(char)param_2[1] & 0x3fU | (uVar20 & 0xf) << 6) << 6 |
                     (int)(char)param_2[2] & 0x3fU;
            param_2 = pbVar13;
            if (0x7ff < uVar20 - 0xd800) {
              bVar24 = uVar20 < 0x800;
              goto LAB_14008a85c;
            }
          }
        }
        else if ((bVar4 < 0xf8) && (3 < (longlong)pbVar2 - (longlong)param_2)) {
          pbVar13 = param_2 + 3;
          uVar20 = (((int)(char)param_2[1] & 0x3fU | (uVar20 & 7) << 6) << 6 |
                   (int)(char)param_2[2] & 0x3fU) << 6 | (int)(char)param_2[3] & 0x3fU;
          bVar24 = uVar20 < 0x10000;
          goto LAB_14008a85c;
        }
        uVar20 = 0xfffd;
      }
LAB_14008aa1c:
      FUN_14008a0f0(&local_98,uVar20);
    }
    else {
      if (bVar4 < 0x20) goto LAB_14008aa1c;
      if (local_88 < uStack_80) {
        pppppppuVar12 = &local_98;
        if (0xf < uStack_80) {
          pppppppuVar12 = local_98;
        }
        pbVar13 = (byte *)((longlong)pppppppuVar12 + local_88);
        local_88 = local_88 + 1;
        *pbVar13 = bVar4;
        *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 1) = 0;
        break;
      }
      puVar21 = auStack_c8;
      if (local_88 == 0x7fffffffffffffff) goto LAB_14008abc1;
      uVar16 = local_88 + 1;
      uVar22 = uVar16 | 0xf;
      if (uVar22 < 0x8000000000000000) {
        if (0x7fffffffffffffff - (uStack_80 >> 1) < uStack_80) {
          uVar22 = 0x7fffffffffffffff;
          uVar14 = 0x8000000000000027;
          goto LAB_14008a6b0;
        }
        uVar14 = (uStack_80 >> 1) + uStack_80;
        if (uVar22 < uVar14) {
          uVar22 = uVar14;
        }
        uVar1 = uVar22 + 1;
        if (uVar1 == 0) {
          pppppppuVar12 = (undefined8 *******)0x0;
        }
        else {
          if (0xfff < uVar1) {
            uVar14 = uVar22 + 0x28;
            if (uVar14 <= uVar1) goto LAB_14008abc7;
            goto LAB_14008a6b0;
          }
          pppppppuVar12 = (undefined8 *******)FUN_14028af20(uVar1);
        }
      }
      else {
        uVar22 = 0x7fffffffffffffff;
        uVar14 = 0x8000000000000027;
LAB_14008a6b0:
        ppppppuVar11 = (undefined8 ******)FUN_14028af20(uVar14);
        if (ppppppuVar11 == (undefined8 ******)0x0) goto LAB_14008abba;
        pppppppuVar12 = (undefined8 *******)((longlong)ppppppuVar11 + 0x27U & 0xffffffffffffffe0);
        pppppppuVar12[-1] = ppppppuVar11;
      }
      pppppppuVar15 = local_98;
      local_88 = uVar16;
      uStack_80 = uVar22;
      if (uVar18 < 0x10) {
        FUN_1404210f0(pppppppuVar12,&local_98,uVar17);
        *(byte *)((longlong)pppppppuVar12 + uVar17) = bVar4;
        *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 1) = 0;
        local_98 = pppppppuVar12;
      }
      else {
        FUN_1404210f0(pppppppuVar12,local_98,uVar17);
        uVar16 = uVar18 + 1;
        *(byte *)((longlong)pppppppuVar12 + uVar17) = bVar4;
        *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 1) = 0;
        if (0xfff < uVar16) {
          if (0x1f < (ulonglong)((longlong)pppppppuVar15 + (-8 - (longlong)pppppppuVar15[-1])))
          goto LAB_14008abba;
          uVar16 = uVar18 + 0x28;
          pppppppuVar15 = (undefined8 *******)pppppppuVar15[-1];
        }
        thunk_FUN_14028af80(pppppppuVar15,uVar16);
        local_98 = pppppppuVar12;
      }
    }
    break;
  case 0xc:
    if (uStack_80 - local_88 < 2) {
      puVar23 = &DAT_1404789ac;
      goto LAB_14008a48c;
    }
    pppppppuVar12 = &local_98;
    if (0xf < uStack_80) {
      pppppppuVar12 = local_98;
    }
    puVar3 = (undefined2 *)((longlong)pppppppuVar12 + local_88);
    local_88 = local_88 + 2;
    *puVar3 = 0x665c;
    *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 2) = 0;
    break;
  case 0xd:
    FUN_1400532a0(&local_98,&DAT_1404789b4,2);
    break;
  case 0x22:
    if (uStack_80 - local_88 < 2) {
      puVar23 = &DAT_140478998;
      goto LAB_14008a48c;
    }
    pppppppuVar12 = &local_98;
    if (0xf < uStack_80) {
      pppppppuVar12 = local_98;
    }
    puVar3 = (undefined2 *)((longlong)pppppppuVar12 + local_88);
    local_88 = local_88 + 2;
    *puVar3 = 0x225c;
    *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 2) = 0;
    break;
  case 0x5c:
    if (uStack_80 - local_88 < 2) {
      puVar23 = &DAT_1404789a4;
      goto LAB_14008a48c;
    }
    pppppppuVar12 = &local_98;
    if (0xf < uStack_80) {
      pppppppuVar12 = local_98;
    }
    puVar3 = (undefined2 *)((longlong)pppppppuVar12 + local_88);
    local_88 = local_88 + 2;
    *puVar3 = 0x5c5c;
    *(undefined1 *)((longlong)pppppppuVar12 + uVar17 + 2) = 0;
  }
  param_2 = param_2 + 1;
  if (param_2 == pbVar2) {
    if (uStack_80 == local_88) {
      local_a8 = 1;
      FUN_140053110(&local_98,1,(ulonglong)pbVar2 & 0xff,&DAT_140474de4);
    }
    else {
      pppppppuVar12 = &local_98;
      if (0xf < uStack_80) {
        pppppppuVar12 = local_98;
      }
      puVar3 = (undefined2 *)((longlong)pppppppuVar12 + local_88);
      local_88 = local_88 + 1;
      *puVar3 = 0x22;
    }
    *param_1 = (ulonglong)local_98;
    param_1[1] = uStack_90;
    param_1[2] = local_88;
    param_1[3] = uStack_80;
    return param_1;
  }
  goto LAB_14008a408;
}

