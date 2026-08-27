// Function: FUN_140051fc0
// Addr: 140051fc0
// Size: 3907 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_140051fc0(undefined8 *param_1,uint *******param_2,uint *param_3)

{
  longlong lVar1;
  code *pcVar2;
  short *******pppppppsVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  short *******pppppppsVar12;
  uint *******pppppppuVar13;
  uint ******ppppppuVar14;
  short *psVar15;
  uint *******pppppppuVar16;
  uint *******pppppppuVar17;
  short *psVar18;
  uint *******pppppppuVar19;
  short *******pppppppsVar20;
  uint *******pppppppuVar21;
  short *psVar22;
  short *psVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  uint *******pppppppuVar26;
  short *psVar27;
  undefined1 uVar28;
  short *psVar29;
  ulonglong uVar30;
  undefined8 *******pppppppuVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  short *psVar34;
  undefined8 *******pppppppuVar35;
  uint *******pppppppuVar36;
  bool bVar37;
  undefined1 local_res18;
  ulonglong local_res20;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  uint ******local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  short *******local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  ulonglong uStack_130;
  uint *******local_128;
  undefined8 *******local_120;
  uint *******local_118;
  short *local_110;
  uint *******local_108 [2];
  longlong local_f8;
  ulonglong local_f0;
  short *local_e8;
  undefined8 *******local_e0;
  undefined8 uStack_d8;
  ulonglong local_d0;
  ulonglong uStack_c8;
  short *******local_c0;
  undefined8 uStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined8 *******local_a0;
  undefined8 uStack_98;
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  short *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *******local_48;
  
  puVar24 = auStack_198;
  uStack_c8 = 7;
  *param_3 = 0;
  local_d0 = 0;
  uStack_d8 = 0;
  local_e0 = (undefined8 *******)0x0;
  *(undefined ***)(param_3 + 2) = &PTR_PTR_1404df530;
  uVar10 = FUN_140051c90(&local_e0);
  if (uVar10 == 0) {
    *param_1 = local_e0;
    param_1[1] = uStack_d8;
    param_1[2] = local_d0;
    param_1[3] = uStack_c8;
    return param_1;
  }
  if (uVar10 < 0x41) {
    if (((uVar10 != 0x40) && (uVar10 != 2)) && (uVar10 != 3)) {
      bVar37 = uVar10 == 0x35;
LAB_140052074:
      if (!bVar37) {
        param_3[1] = local_80._4_4_;
        *param_3 = uVar10;
        *(undefined ***)(param_3 + 2) = &PTR_PTR_1404df530;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 7;
        *(undefined2 *)param_1 = 0;
LAB_140052ece:
        if (uStack_c8 < 8) {
          return param_1;
        }
        FUN_140016a90(&local_e0,local_e0);
        return param_1;
      }
    }
  }
  else if ((uVar10 != 0x7b) && (uVar10 != 0xa1)) {
    bVar37 = uVar10 == 0x10b;
    goto LAB_140052074;
  }
  pppppppuVar21 = param_2 + 2;
  local_res18 = SUB81(param_3,0);
  if (*pppppppuVar21 == (uint ******)0x0) {
    uStack_a8 = 7;
    uStack_b8 = 0;
    local_c0 = (short *******)0x0;
    local_b0 = 0;
    pppppppsVar20 = (short *******)&local_c0;
  }
  else {
    if ((uint ******)0x7 < param_2[3]) {
      param_2 = (uint *******)*param_2;
    }
    pppppppuVar21 = (uint *******)((longlong)param_2 + (longlong)*pppppppuVar21 * 2);
    local_118 = pppppppuVar21;
    pppppppuVar17 = (uint *******)FUN_140015e90(param_2,pppppppuVar21);
    uStack_130 = 0;
    local_138 = 0;
    local_148 = (short *******)0x0;
    uStack_140 = 0;
    if (param_2 == pppppppuVar17) {
      local_148 = (short *******)0x0;
      uStack_130 = 7;
    }
    else {
      FUN_140016170(&local_148,param_2,(longlong)pppppppuVar17 - (longlong)param_2 >> 1);
    }
    pppppppsVar20 = local_148;
    pppppppsVar12 = (short *******)&local_148;
    if (7 < uStack_130) {
      pppppppsVar12 = local_148;
    }
    lVar1 = local_138 * 2;
    pppppppsVar3 = (short *******)&local_148;
    if (7 < uStack_130) {
      pppppppsVar3 = local_148;
    }
    for (; pppppppsVar3 != (short *******)((longlong)pppppppsVar12 + lVar1);
        pppppppsVar3 = (short *******)((longlong)pppppppsVar3 + 2)) {
      if (*(short *)pppppppsVar3 == 0x2f) {
        *(short *)pppppppsVar3 = 0x5c;
      }
    }
    local_res20 = 0x13;
    pppppppuVar13 = (uint *******)FUN_140051b40(pppppppsVar20,&local_res20);
    uVar28 = 0;
    uVar32 = local_res20 >> 8;
    local_res20 = local_res20 & 0xffffffffffffff00;
    pppppppuVar16 = pppppppuVar13 + 0x26;
    pppppppuVar36 = pppppppuVar13;
    local_128 = pppppppuVar13;
    if (pppppppuVar17 == pppppppuVar21) {
LAB_1400524db:
      pppppppuVar21 = pppppppuVar13;
      local_118 = pppppppuVar16;
      if (pppppppuVar13 != pppppppuVar36) {
        cVar5 = (char)local_res20;
        pppppppuVar17 = pppppppuVar13;
        pppppppuVar16 = pppppppuVar13;
        do {
          ppppppuVar14 = pppppppuVar16[1];
          pppppppuVar19 = pppppppuVar16 + 2;
          local_120 = (undefined8 *******)*pppppppuVar16;
          pppppppuVar21 = pppppppuVar17;
          if (ppppppuVar14 == (uint ******)0x1) {
            iVar11 = FUN_1400158b0(local_120,&DAT_140475e30,1);
            if (iVar11 == 0) goto joined_r0x00014005257e;
LAB_1400525ae:
            pppppppuVar21 = pppppppuVar17 + 2;
            *pppppppuVar17 = (uint ******)local_120;
            pppppppuVar17[1] = ppppppuVar14;
            if (pppppppuVar19 == pppppppuVar36) break;
            pppppppuVar21 = pppppppuVar17 + 4;
          }
          else {
            if ((ppppppuVar14 != (uint ******)0x2) ||
               (iVar11 = FUN_1400158b0(local_120,&DAT_140475e34,2), iVar11 != 0))
            goto LAB_1400525ae;
            if ((pppppppuVar17 == pppppppuVar13) ||
               ((pppppppuVar17[-3] == (uint ******)0x2 &&
                (iVar11 = FUN_1400158b0(pppppppuVar17[-4],&DAT_140475e34), iVar11 == 0)))) {
              if (cVar5 != '\0') goto joined_r0x00014005257e;
              pppppppuVar21 = pppppppuVar17 + 2;
              *pppppppuVar17 = (uint ******)&DAT_140475e34;
              pppppppuVar17[1] = (uint ******)0x2;
              if (pppppppuVar19 == pppppppuVar36) break;
              pppppppuVar21 = pppppppuVar17 + 4;
            }
            else {
              pppppppuVar21 = pppppppuVar17 + -4;
joined_r0x00014005257e:
              if (pppppppuVar19 == pppppppuVar36) break;
            }
          }
          pppppppuVar16 = pppppppuVar16 + 4;
          pppppppuVar17 = pppppppuVar21;
        } while (pppppppuVar16 != pppppppuVar36);
      }
      pppppppuVar16 = local_118;
      local_128 = pppppppuVar13;
      if (pppppppuVar21 != pppppppuVar36) {
        pppppppuVar36 = pppppppuVar21;
      }
    }
    else {
      if ((*(short *)pppppppuVar17 != 0x5c) && (*(short *)pppppppuVar17 != 0x2f)) {
LAB_140052244:
        local_res20 = CONCAT71(local_res20._1_7_,uVar28);
        pppppppuVar19 = pppppppuVar13;
        do {
          pppppppuVar13 = pppppppuVar19;
          if ((*(short *)pppppppuVar17 == 0x5c) ||
             (pppppppuVar26 = pppppppuVar17, *(short *)pppppppuVar17 == 0x2f)) {
            if ((pppppppuVar19 == pppppppuVar36) || (pppppppuVar36[-1] != (uint ******)0x0)) {
              if (pppppppuVar36 == pppppppuVar16) {
                uVar32 = (longlong)pppppppuVar36 - (longlong)pppppppuVar19;
                if ((longlong)uVar32 >> 4 == 0xfffffffffffffff) goto LAB_140052f00;
                uVar30 = (longlong)pppppppuVar16 - (longlong)pppppppuVar19 >> 4;
                pppppppuVar35 = (undefined8 *******)(((longlong)uVar32 >> 4) + 1);
                uVar25 = uVar30 >> 1;
                if (0xfffffffffffffff - uVar25 < uVar30) {
                  pppppppuVar31 = (undefined8 *******)0xfffffffffffffff;
                }
                else {
                  pppppppuVar31 = (undefined8 *******)(uVar30 + uVar25);
                  if ((undefined8 *******)(uVar30 + uVar25) < pppppppuVar35) {
                    pppppppuVar31 = pppppppuVar35;
                  }
                }
                local_120 = pppppppuVar31;
                pppppppuVar13 = (uint *******)FUN_140051b40(uVar25,&local_120);
                *(undefined8 *)((longlong)pppppppuVar13 + (uVar32 & 0xfffffffffffffff0)) = 0;
                *(undefined8 *)((longlong)pppppppuVar13 + (uVar32 & 0xfffffffffffffff0) + 8) = 0;
                FUN_1404210f0(pppppppuVar13,pppppppuVar19,uVar32);
                if (pppppppuVar19 != (uint *******)0x0) {
                  uVar30 = uVar30 * 0x10;
                  if (0xfff < uVar30) {
                    if (0x1f < (ulonglong)
                               ((longlong)pppppppuVar19 + (-8 - (longlong)pppppppuVar19[-1])))
                    goto LAB_140052eed;
                    uVar30 = uVar30 + 0x27;
                    pppppppuVar19 = (uint *******)pppppppuVar19[-1];
                  }
                  thunk_FUN_14028af80(pppppppuVar19,uVar30);
                }
                pppppppuVar36 = pppppppuVar13 + (longlong)pppppppuVar35 * 2;
                pppppppuVar16 = pppppppuVar13 + (longlong)pppppppuVar31 * 2;
                pppppppuVar21 = local_118;
              }
              else {
                *pppppppuVar36 = (uint ******)0x0;
                pppppppuVar36[1] = (uint ******)0x0;
                pppppppuVar36 = pppppppuVar36 + 2;
              }
            }
            pppppppuVar26 = (uint *******)((longlong)pppppppuVar17 + 2);
          }
          else {
            do {
              pppppppuVar26 = (uint *******)((longlong)pppppppuVar26 + 2);
              if ((pppppppuVar26 == pppppppuVar21) || (*(short *)pppppppuVar26 == 0x5c)) break;
            } while (*(short *)pppppppuVar26 != 0x2f);
            local_120 = (undefined8 *******)((longlong)pppppppuVar26 - (longlong)pppppppuVar17 >> 1)
            ;
            if (pppppppuVar36 == pppppppuVar16) {
              local_128 = (uint *******)((longlong)pppppppuVar36 - (longlong)pppppppuVar19);
              if ((longlong)local_128 >> 4 == 0xfffffffffffffff) {
LAB_140052f00:
                    /* WARNING: Subroutine does not return */
                FUN_140013050();
              }
              uVar32 = (longlong)pppppppuVar16 - (longlong)pppppppuVar19 >> 4;
              if (0xfffffffffffffff - (uVar32 >> 1) < uVar32) {
LAB_140052efa:
                    /* WARNING: Subroutine does not return */
                FUN_140017370();
              }
              uVar33 = ((longlong)local_128 >> 4) + 1;
              uVar25 = (uVar32 >> 1) + uVar32;
              uVar30 = uVar33;
              if (uVar33 <= uVar25) {
                uVar30 = uVar25;
              }
              if (0xfffffffffffffff < uVar30) goto LAB_140052efa;
              uVar25 = uVar30 * 0x10;
              if (uVar25 == 0) {
                pppppppuVar13 = (uint *******)0x0;
              }
              else if (uVar25 < 0x1000) {
                pppppppuVar13 = (uint *******)FUN_14028af20(uVar25);
              }
              else {
                if (uVar25 + 0x27 <= uVar25) goto LAB_140052efa;
                ppppppuVar14 = (uint ******)FUN_14028af20();
                if (ppppppuVar14 == (uint ******)0x0) goto LAB_140052eed;
                pppppppuVar13 = (uint *******)((longlong)ppppppuVar14 + 0x27U & 0xffffffffffffffe0);
                pppppppuVar13[-1] = ppppppuVar14;
              }
              *(uint ********)
               ((longlong)pppppppuVar13 + ((ulonglong)local_128 & 0xfffffffffffffff0)) =
                   pppppppuVar17;
              *(undefined8 ********)
               ((longlong)pppppppuVar13 + ((ulonglong)local_128 & 0xfffffffffffffff0) + 8) =
                   local_120;
              FUN_1404210f0(pppppppuVar13,pppppppuVar19);
              if (pppppppuVar19 != (uint *******)0x0) {
                uVar32 = uVar32 * 0x10;
                if (0xfff < uVar32) {
                  if (0x1f < (ulonglong)
                             ((longlong)pppppppuVar19 + (-8 - (longlong)pppppppuVar19[-1])))
                  goto LAB_140052eed;
                  uVar32 = uVar32 + 0x27;
                  pppppppuVar19 = (uint *******)pppppppuVar19[-1];
                }
                thunk_FUN_14028af80(pppppppuVar19,uVar32);
              }
              pppppppuVar16 = pppppppuVar13 + uVar30 * 2;
              pppppppuVar36 = pppppppuVar13 + uVar33 * 2;
              pppppppuVar21 = local_118;
            }
            else {
              *pppppppuVar36 = (uint ******)pppppppuVar17;
              pppppppuVar36[1] = (uint ******)local_120;
              pppppppuVar36 = pppppppuVar36 + 2;
            }
          }
          pppppppuVar17 = pppppppuVar26;
          pppppppuVar19 = pppppppuVar13;
        } while (pppppppuVar26 != pppppppuVar21);
        goto LAB_1400524db;
      }
      local_res20 = CONCAT71((int7)uVar32,1);
      if (local_138 < uStack_130) {
        pppppppsVar20 = (short *******)&local_148;
        if (7 < uStack_130) {
          pppppppsVar20 = local_148;
        }
        psVar22 = (short *)((longlong)pppppppsVar20 + local_138 * 2);
        local_138 = local_138 + 1;
        psVar22[0] = 0x5c;
        psVar22[1] = 0;
        uVar28 = 1;
      }
      else {
        FUN_140015f90(&local_148,1,(ulonglong)param_3 & 0xff,0x5c);
        uVar28 = (char)local_res20;
      }
      pppppppuVar17 = (uint *******)((longlong)pppppppuVar17 + 2);
      if (pppppppuVar17 == pppppppuVar21) goto LAB_1400524db;
      do {
        if ((*(short *)pppppppuVar17 != 0x5c) && (*(short *)pppppppuVar17 != 0x2f))
        goto LAB_140052244;
        pppppppuVar17 = (uint *******)((longlong)pppppppuVar17 + 2);
      } while (pppppppuVar17 != pppppppuVar21);
    }
    pppppppuVar21 = pppppppuVar13;
    ppppppuVar14 = local_178;
    if ((((0x1f < (ulonglong)((longlong)pppppppuVar36 - (longlong)pppppppuVar13)) &&
         (pppppppuVar36[-1] == (uint ******)0x0)) && (pppppppuVar36[-3] == (uint ******)0x2)) &&
       (iVar11 = FUN_1400158b0(pppppppuVar36[-4],&DAT_140475e34), ppppppuVar14 = local_178,
       iVar11 == 0)) {
      pppppppuVar36 = pppppppuVar36 + -2;
    }
    for (; local_178 = ppppppuVar14, pppppppuVar13 != pppppppuVar36;
        pppppppuVar13 = pppppppuVar13 + 2) {
      local_178 = pppppppuVar13[1];
      if (local_178 == (uint ******)0x0) {
        if (local_138 < uStack_130) {
          pppppppsVar20 = (short *******)&local_148;
          if (7 < uStack_130) {
            pppppppsVar20 = local_148;
          }
          psVar22 = (short *)((longlong)pppppppsVar20 + local_138 * 2);
          local_138 = local_138 + 1;
          psVar22[0] = 0x5c;
          psVar22[1] = 0;
          local_178 = ppppppuVar14;
        }
        else {
          local_178 = ppppppuVar14;
          FUN_140015f90(&local_148,1,(ulonglong)param_3 & 0xff,0x5c);
        }
      }
      else if ((uint ******)(uStack_130 - local_138) < local_178) {
        FUN_140016310(&local_148,local_178,(ulonglong)param_3 & 0xff);
      }
      else {
        uVar32 = local_138 + (longlong)local_178;
        lVar1 = (longlong)local_178 * 2;
        pppppppsVar20 = (short *******)&local_148;
        if (7 < uStack_130) {
          pppppppsVar20 = local_148;
        }
        lVar4 = local_138 * 2;
        local_178 = ppppppuVar14;
        local_138 = uVar32;
        FUN_1404210f0((short *)((longlong)pppppppsVar20 + lVar4),*pppppppuVar13,lVar1);
        *(short *)((longlong)pppppppsVar20 + uVar32 * 2) = 0;
      }
      pppppppuVar21 = local_128;
      ppppppuVar14 = local_178;
    }
    if (local_138 == 0) {
      FUN_140016ae0(&local_148,&DAT_140475e30,1);
    }
    uStack_a8 = uStack_130;
    local_b0 = local_138;
    local_c0 = local_148;
    local_138 = 0;
    uStack_130 = 7;
    local_148 = (short *******)((ulonglong)local_148 & 0xffffffffffff0000);
    uStack_b8 = uStack_140;
    if (pppppppuVar21 != (uint *******)0x0) {
      uVar32 = (longlong)pppppppuVar16 - (longlong)pppppppuVar21 & 0xfffffffffffffff0;
      if (0xfff < uVar32) {
        if (0x1f < (ulonglong)((longlong)pppppppuVar21 + (-8 - (longlong)pppppppuVar21[-1])))
        goto LAB_140052eed;
        uVar32 = uVar32 + 0x27;
        pppppppuVar21 = (uint *******)pppppppuVar21[-1];
      }
      thunk_FUN_14028af80(pppppppuVar21,uVar32);
      if (7 < uStack_130) {
        uVar32 = uStack_130 * 2 + 2;
        pppppppsVar20 = local_148;
        if (0xfff < uVar32) {
          pppppppsVar20 = (short *******)local_148[-1];
          if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)pppppppsVar20)))
          goto LAB_140052eed;
          uVar32 = uStack_130 * 2 + 0x29;
        }
        thunk_FUN_14028af80(pppppppsVar20,uVar32);
      }
    }
    pppppppsVar20 = (short *******)&local_c0;
    if (7 < uStack_a8) {
      pppppppsVar20 = local_c0;
    }
  }
  psVar22 = (short *)((longlong)pppppppsVar20 + local_b0 * 2);
  for (psVar15 = (short *)FUN_140015e90(pppppppsVar20);
      (psVar15 != psVar22 && ((*psVar15 == 0x5c || (*psVar15 == 0x2f)))); psVar15 = psVar15 + 1) {
  }
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (undefined8 *******)0x0;
  uStack_160 = 0;
  FUN_140016170(&local_168,pppppppsVar20,(longlong)psVar15 - (longlong)pppppppsVar20 >> 1);
  pppppppsVar20 = (short *******)&local_c0;
  if (7 < uStack_a8) {
    pppppppsVar20 = local_c0;
  }
  psVar22 = (short *)((longlong)pppppppsVar20 + local_b0 * 2);
  for (psVar15 = (short *)FUN_140015e90();
      (psVar15 != psVar22 && ((*psVar15 == 0x5c || (*psVar15 == 0x2f)))); psVar15 = psVar15 + 1) {
  }
  local_90 = 0;
  local_88 = 0;
  local_a0 = (undefined8 *******)0x0;
  uStack_98 = 0;
  FUN_140016170(&local_a0,psVar15,(longlong)psVar22 - (longlong)psVar15 >> 1);
  local_res20 = CONCAT71(local_res20._1_7_,1);
  FUN_140051bb0(&local_a0,&local_110);
  pppppppuVar35 = &local_a0;
  if (7 < local_88) {
    pppppppuVar35 = local_a0;
  }
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 7;
  psVar22 = (short *)((longlong)pppppppuVar35 + local_90 * 2);
  local_68 = 0;
  local_70 = psVar22;
  local_48 = &local_a0;
  if (local_110 != psVar22) {
LAB_140052910:
    uVar32 = local_f0;
    pppppppuVar21 = local_108[0];
    pppppppuVar17 = (uint *******)local_108;
    if (7 < local_f0) {
      pppppppuVar17 = local_108[0];
    }
    lVar1 = local_f8 * 2;
    if ((lVar1 >> 1 < 2) || (0x19 < (*(uint *)pppppppuVar17 & 0xffffffdf) - 0x3a0041)) {
      pppppppuVar16 =
           (uint *******)FUN_140015e90(pppppppuVar17,(short *)(lVar1 + (longlong)pppppppuVar17));
      if (pppppppuVar17 == pppppppuVar16) goto LAB_14005296f;
LAB_140052a2a:
      pppppppuVar17 = (uint *******)local_108;
      if (7 < uVar32) {
        pppppppuVar17 = pppppppuVar21;
      }
      FUN_140016ae0(&local_168,pppppppuVar17,local_f8);
    }
    else {
      if ((2 < lVar1 >> 1) &&
         ((*(short *)((longlong)pppppppuVar17 + 4) == 0x5c ||
          (*(short *)((longlong)pppppppuVar17 + 4) == 0x2f)))) goto LAB_140052a2a;
LAB_14005296f:
      uVar32 = uStack_150;
      local_120 = (undefined8 *******)&local_168;
      if (7 < uStack_150) {
        local_120 = local_168;
      }
      pppppppuVar17 = (uint *******)local_108;
      if (7 < local_f0) {
        pppppppuVar17 = pppppppuVar21;
      }
      local_128 = (uint *******)((longlong)local_120 + local_158 * 2);
      pppppppuVar21 = (uint *******)(lVar1 + (longlong)pppppppuVar17);
      uVar25 = local_158;
      local_118 = pppppppuVar17;
      pppppppuVar16 = (uint *******)FUN_140015e90(local_120,local_128);
      local_80 = pppppppuVar16;
      pppppppuVar17 = (uint *******)FUN_140015e90(pppppppuVar17,pppppppuVar21);
      uVar33 = (longlong)pppppppuVar16 - (longlong)local_120;
      uVar30 = (longlong)uVar33 >> 1;
      if ((local_118 == pppppppuVar17) ||
         (iVar11 = FUN_1400153a0(local_120,uVar30,local_118,
                                 (longlong)pppppppuVar17 - (longlong)local_118 >> 1),
         uVar25 = local_158, uVar32 = uStack_150, iVar11 == 0)) {
        if ((pppppppuVar17 == pppppppuVar21) ||
           ((*(short *)pppppppuVar17 != 0x5c && (*(short *)pppppppuVar17 != 0x2f)))) {
          if (local_80 == local_128) {
            if (5 < (longlong)uVar33) {
              if (uVar25 < uVar32) goto LAB_140052ad4;
LAB_140052af5:
              FUN_140015f90(&local_168,1,local_res18,0x5c);
            }
          }
          else if ((*(short *)((longlong)local_128 + -2) != 0x5c) &&
                  (*(short *)((longlong)local_128 + -2) != 0x2f)) {
            if (uVar32 <= uVar25) goto LAB_140052af5;
LAB_140052ad4:
            local_158 = uVar25 + 1;
            pppppppuVar35 = (undefined8 *******)&local_168;
            if (7 < uVar32) {
              pppppppuVar35 = local_168;
            }
            *(undefined4 *)((longlong)pppppppuVar35 + uVar25 * 2) = 0x5c;
          }
        }
        else {
          if (uVar25 < uVar30) goto LAB_140052ef4;
          pppppppuVar35 = (undefined8 *******)&local_168;
          if (7 < uVar32) {
            pppppppuVar35 = local_168;
          }
          local_158 = uVar30;
          *(undefined2 *)((longlong)pppppppuVar35 + (uVar33 & 0xfffffffffffffffe)) = 0;
        }
        FUN_1400164d0(&local_168,pppppppuVar17,
                      (longlong)pppppppuVar21 - (longlong)pppppppuVar17 >> 1);
      }
      else {
        pppppppuVar21 = (uint *******)local_108;
        if (7 < local_f0) {
          pppppppuVar21 = local_108[0];
        }
        FUN_140016ae0(&local_168,pppppppuVar21,local_f8);
      }
    }
    if ((char)local_res20 != '\0') {
      local_d0 = 0;
      pppppppuVar35 = &local_e0;
      if (7 < uStack_c8) {
        pppppppuVar35 = local_e0;
      }
      *(undefined2 *)pppppppuVar35 = 0;
      uVar10 = FUN_140051c90(&local_e0,&local_168);
      if (uVar10 == 0) {
        if (7 < uStack_150) {
          uVar32 = uStack_150 * 2 + 2;
          pppppppuVar35 = local_168;
          if (0xfff < uVar32) {
            pppppppuVar35 = (undefined8 *******)local_168[-1];
            if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)pppppppuVar35)))
            goto LAB_140052eed;
            uVar32 = uStack_150 * 2 + 0x29;
          }
          thunk_FUN_14028af80(pppppppuVar35,uVar32);
        }
        uStack_150 = uStack_c8;
        local_158 = local_d0;
        local_168 = local_e0;
        local_d0 = 0;
        uStack_c8 = 7;
        local_e0 = (undefined8 *******)((ulonglong)local_e0 & 0xffffffffffff0000);
        uStack_160 = uStack_d8;
      }
      else {
        if (uVar10 < 0x41) {
          if (((uVar10 != 0x40) && (uVar10 != 2)) && (uVar10 != 3)) {
            bVar37 = uVar10 == 0x35;
LAB_140052be3:
            if (!bVar37) {
              param_3[1] = local_80._4_4_;
              *param_3 = uVar10;
              *(undefined ***)(param_3 + 2) = &PTR_PTR_1404df530;
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = 0;
              param_1[3] = 7;
              *(undefined2 *)param_1 = 0;
              FUN_140016770(local_108);
              if (7 < local_88) {
                FUN_140016a90(&local_a0,local_a0);
              }
              local_90 = 0;
              local_88 = 7;
              local_a0 = (undefined8 *******)((ulonglong)local_a0 & 0xffffffffffff0000);
              if (7 < uStack_150) {
                FUN_140016a90(&local_168,local_168);
              }
              local_158 = 0;
              uStack_150 = 7;
              local_168 = (undefined8 *******)((ulonglong)local_168 & 0xffffffffffff0000);
              if (7 < uStack_a8) {
                FUN_140016a90(&local_c0,local_c0);
              }
              local_b0 = 0;
              uStack_a8 = 7;
              local_c0 = (short *******)((ulonglong)local_c0 & 0xffffffffffff0000);
              goto LAB_140052ece;
            }
          }
        }
        else if ((uVar10 != 0x7b) && (uVar10 != 0xa1)) {
          bVar37 = uVar10 == 0x10b;
          goto LAB_140052be3;
        }
        local_res20 = local_res20 & 0xffffffffffffff00;
      }
    }
    psVar15 = local_e8;
    if (7 < *(ulonglong *)(local_e8 + 0xc)) {
      psVar15 = *(short **)local_e8;
    }
    lVar1 = *(longlong *)(local_e8 + 8);
    if (psVar15 == local_110) {
      psVar29 = local_110 + local_f8;
      psVar34 = local_e8;
      if (7 < *(ulonglong *)(local_e8 + 0xc)) {
        psVar34 = *(short **)local_e8;
      }
      psVar23 = psVar34 + *(longlong *)(local_e8 + 8);
      local_110 = psVar29;
      psVar18 = (short *)FUN_140015e90(psVar34);
      for (psVar27 = psVar18; (psVar27 != psVar23 && ((*psVar27 == 0x5c || (*psVar27 == 0x2f))));
          psVar27 = psVar27 + 1) {
      }
      if ((psVar34 == psVar18) || (psVar18 == psVar27)) {
LAB_140052c9f:
        psVar15 = psVar15 + lVar1;
        if (psVar29 != psVar15) {
          do {
            psVar34 = psVar29;
            if ((*psVar34 != 0x5c) && (psVar29 = psVar34, *psVar34 != 0x2f))
            goto joined_r0x000140052dd8;
            local_110 = psVar34 + 1;
            psVar29 = local_110;
          } while (local_110 != psVar15);
          local_110 = psVar34;
        }
        local_f8 = 0;
        pppppppuVar21 = (uint *******)local_108;
        if (7 < local_f0) {
          pppppppuVar21 = local_108[0];
        }
        *(short *)pppppppuVar21 = 0;
      }
      else {
        FUN_140016ae0(local_108,psVar18,(longlong)psVar27 - (longlong)psVar18 >> 1);
      }
    }
    else {
      if (((*local_110 != 0x5c) && (*local_110 != 0x2f)) || (local_f8 != 0)) {
        psVar29 = local_110 + local_f8;
        local_110 = psVar29;
        goto LAB_140052c9f;
      }
      local_110 = local_110 + 1;
    }
    goto LAB_140052cf3;
  }
LAB_140052cfc:
  FUN_140016770(&local_68);
  FUN_140016770(local_108);
  uVar6 = (undefined4)local_158;
  uVar7 = local_158._4_4_;
  uVar8 = (undefined4)uStack_150;
  uVar9 = uStack_150._4_4_;
  local_158 = 0;
  uStack_150 = 7;
  *(undefined4 *)param_1 = (undefined4)local_168;
  *(undefined4 *)((longlong)param_1 + 4) = local_168._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_160;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_160._4_4_;
  local_168 = (undefined8 *******)((ulonglong)local_168 & 0xffffffffffff0000);
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  *(undefined4 *)(param_1 + 3) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar9;
  FUN_140016770(&local_a0);
  if (7 < uStack_150) {
    uVar32 = uStack_150 * 2 + 2;
    pppppppuVar35 = local_168;
    if (0xfff < uVar32) {
      pppppppuVar35 = (undefined8 *******)local_168[-1];
      if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)pppppppuVar35))) {
LAB_140052eed:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar24 = auStack_190;
LAB_140052ef4:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar24 + -8) = &UNK_140052ef9;
        FUN_140012940();
      }
      uVar32 = uStack_150 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pppppppuVar35,uVar32);
  }
  local_158 = 0;
  uStack_150 = 7;
  local_168 = (undefined8 *******)((ulonglong)local_168 & 0xffffffffffff0000);
  FUN_140016770(&local_c0);
  FUN_140016770(&local_e0);
  return param_1;
joined_r0x000140052dd8:
  for (; (psVar29 != psVar15 && ((*psVar29 != 0x5c && (*psVar29 != 0x2f)))); psVar29 = psVar29 + 1)
  {
  }
  FUN_140016ae0(local_108,psVar34,(longlong)psVar29 - (longlong)psVar34 >> 1);
LAB_140052cf3:
  if (local_110 == psVar22) goto LAB_140052cfc;
  goto LAB_140052910;
}

