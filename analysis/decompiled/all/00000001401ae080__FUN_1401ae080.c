// Function: FUN_1401ae080
// Addr: 1401ae080
// Size: 7531 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1401ae080(undefined8 param_1,ulonglong param_2,undefined8 param_3,code *param_4,longlong param_5
             ,longlong param_6,uint param_7,uint param_8,longlong *param_9,undefined8 *param_10)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  undefined8 uVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong *plVar22;
  uint *puVar23;
  longlong lVar24;
  uint *puVar25;
  undefined8 uVar26;
  double *pdVar27;
  code *pcVar28;
  undefined1 uVar29;
  int iVar30;
  longlong lVar31;
  int iVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  uint *puVar39;
  longlong *plVar40;
  undefined8 *puVar41;
  uint uVar42;
  int *piVar43;
  undefined8 *puVar44;
  uint uVar45;
  undefined1 *puVar46;
  int iVar47;
  int iVar48;
  uint uVar49;
  ulonglong uVar50;
  longlong lVar51;
  uint uVar52;
  uint uVar53;
  longlong lVar54;
  bool bVar55;
  uint uVar56;
  double dVar57;
  uint uVar59;
  uint uVar60;
  undefined1 auVar58 [16];
  uint uVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  float fVar65;
  double dVar66;
  double dVar67;
  float fVar68;
  uint *puVar69;
  ulonglong local_res10;
  undefined8 local_res18;
  code *local_res20;
  undefined4 local_234;
  int local_230;
  uint local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  longlong local_218;
  uint *local_210;
  int local_208;
  int local_204;
  uint *local_200 [3];
  code *local_1e8;
  undefined8 uStack_1e0;
  code *local_1d8;
  code **local_1d0;
  undefined8 local_1c8;
  longlong *local_1b8;
  longlong *plStack_1b0;
  undefined8 uStack_1a8;
  ulonglong local_1a0;
  code *local_198;
  undefined8 local_190;
  uint local_188;
  undefined4 local_184;
  uint *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  uint *local_158 [2];
  double local_148;
  double dStack_140;
  code *local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  longlong **local_100;
  undefined8 uStack_f8;
  
  uVar35 = param_8;
  lVar51 = *(longlong *)(param_4 + 0x70);
  *param_10 = 0;
  uVar45 = param_7 << 0x18 | param_8;
  uVar38 = ((ulonglong)uVar45 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3;
  uVar50 = (((uVar38 ^ (param_8 & 0xff00) >> 8) * 0x100000001b3 ^ (ulonglong)(uVar45 >> 0x10) & 0xff
            ) * 0x100000001b3 ^ (ulonglong)(uVar45 >> 0x18)) * 0x100000001b3 &
           *(ulonglong *)(lVar51 + 0x88);
  lVar31 = *(longlong *)(*(longlong *)(lVar51 + 0x70) + 8 + uVar50 * 0x10);
  if (lVar31 == *(longlong *)(lVar51 + 0x60)) {
LAB_1401ae160:
    lVar31 = 0;
  }
  else {
    uVar52 = *(uint *)(lVar31 + 0x10);
    while (uVar45 != uVar52) {
      if (lVar31 == *(longlong *)(*(longlong *)(lVar51 + 0x70) + uVar50 * 0x10)) goto LAB_1401ae160;
      lVar31 = *(longlong *)(lVar31 + 8);
      uVar52 = *(uint *)(lVar31 + 0x10);
    }
  }
  if (((lVar31 != 0) && (lVar31 != *(longlong *)(lVar51 + 0x60))) &&
     (*(char *)(*(longlong *)(lVar31 + 0x18) + 0x38) == '\0')) {
    *param_9 = *(longlong *)(lVar31 + 0x18);
    return 0;
  }
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_234 = uVar45;
  if ((0 < *(int *)(param_5 + 0x1c)) &&
     (FUN_1401607e0(param_4 + 0x78,&local_res10,param_5 + 0x1c),
     local_res10 != *(ulonglong *)(param_4 + 0x80))) {
    lVar51 = *(longlong *)(local_res10 + 0x18);
    uVar38 = (((uVar38 ^ local_234._1_1_) * 0x100000001b3 ^ (ulonglong)local_234._2_1_) *
              0x100000001b3 ^ (ulonglong)local_234._3_1_) * 0x100000001b3 &
             *(ulonglong *)(lVar51 + 0x88);
    lVar31 = *(longlong *)(*(longlong *)(lVar51 + 0x70) + 8 + uVar38 * 0x10);
    if (lVar31 == *(longlong *)(lVar51 + 0x60)) {
LAB_1401ae237:
      lVar31 = 0;
    }
    else {
      uVar52 = *(uint *)(lVar31 + 0x10);
      while (uVar45 != uVar52) {
        if (lVar31 == *(longlong *)(*(longlong *)(lVar51 + 0x70) + uVar38 * 0x10))
        goto LAB_1401ae237;
        lVar31 = *(longlong *)(lVar31 + 8);
        uVar52 = *(uint *)(lVar31 + 0x10);
      }
    }
    if (((lVar31 != 0) && (lVar31 != *(longlong *)(lVar51 + 0x60))) &&
       (*(char *)(*(longlong *)(lVar31 + 0x18) + 0x38) == '\0')) {
      *param_9 = *(longlong *)(lVar31 + 0x18);
      return 0;
    }
  }
  if (uVar35 != 0) {
    bVar12 = false;
    param_7 = param_7 & 0xffffff00;
    if (param_4[0x20] == (code)0x0) {
      iVar19 = FUN_1402f12d0(param_6,uVar35,0x100004);
      if (iVar19 != 0) {
        return 1;
      }
    }
    else if ((*(uint *)(param_6 + 8) & 0x4000) == 0) {
      iVar19 = FUN_1402f12d0(param_6,uVar35,8);
      if (iVar19 != 0) {
        return 1;
      }
      if (*(int *)(*(longlong *)(param_6 + 0x78) + 0x60) == 0x6f75746c) {
        bVar12 = true;
        param_7 = CONCAT31(param_7._1_3_,1);
      }
    }
    else {
      iVar19 = FUN_1402f12d0(param_6,uVar35,0x100004);
      if (iVar19 != 0) {
        return 1;
      }
      if (*(char *)(*(longlong *)(param_6 + 0x78) + 0x82) == '\a') {
        bVar12 = true;
        param_7 = CONCAT31(param_7._1_3_,1);
      }
    }
    iVar19 = FUN_1402ee9d0(*(undefined8 *)(param_6 + 0x78),&local_218);
    if (iVar19 == 0) {
      FUN_1402eeb40(local_218,3,&local_228);
      iVar47 = local_21c;
      iVar48 = local_220;
      iVar32 = local_224;
      iVar19 = local_228;
      if ((param_4[0x20] != (code)0x0) && ((*(uint *)(param_6 + 8) & 0x4000) == 0)) {
        plVar22 = (longlong *)FUN_1401b58f0(param_5 + 0x20,&local_198,&local_234);
        lVar51 = *plVar22;
        *(int *)(lVar51 + 0x14) = iVar19;
        *(int *)(lVar51 + 0x18) = iVar32;
        *(int *)(lVar51 + 0x1c) = iVar48;
        *(int *)(lVar51 + 0x20) = iVar47;
        param_4 = local_res20;
      }
      uVar38 = local_res10 >> 8;
      local_res10 = local_res10 & 0xffffffffffffff00;
      if ((*(int *)(*(longlong *)(param_6 + 0x78) + 0x60) == 0x62697473) &&
         (bVar55 = *(char *)(local_218 + 0x42) == '\a', local_res10 = CONCAT71((int7)uVar38,bVar55),
         bVar55)) {
        puVar23 = (uint *)FUN_1401adf30(param_4,param_5,local_220 - local_228,local_21c - local_224)
        ;
      }
      else {
        puVar23 = *(uint **)(param_4 + 0x70);
      }
      fVar14 = _UNK_140492ddc;
      fVar13 = _UNK_140492dd8;
      fVar65 = _UNK_140492dd4;
      fVar68 = _DAT_140492dd0;
      local_158[0] = (uint *)0x0;
      uVar38 = (((((ulonglong)local_234 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)local_234._1_1_) * 0x100000001b3 ^ (ulonglong)local_234._2_1_) *
                0x100000001b3 ^ (ulonglong)local_234._3_1_) * 0x100000001b3 &
               *(ulonglong *)(puVar23 + 0x22);
      lVar51 = *(longlong *)(*(longlong *)(puVar23 + 0x1c) + 8 + uVar38 * 0x10);
      if (lVar51 == *(longlong *)(puVar23 + 0x18)) {
LAB_1401ae461:
        lVar51 = 0;
      }
      else {
        uVar35 = *(uint *)(lVar51 + 0x10);
        while (local_234 != uVar35) {
          if (lVar51 == *(longlong *)(*(longlong *)(puVar23 + 0x1c) + uVar38 * 0x10))
          goto LAB_1401ae461;
          lVar51 = *(longlong *)(lVar51 + 8);
          uVar35 = *(uint *)(lVar51 + 0x10);
        }
      }
      if (((lVar51 != 0) && (lVar51 != *(longlong *)(puVar23 + 0x18))) &&
         (local_158[0] = *(uint **)(lVar51 + 0x18), (char)local_158[0][0xe] == '\0')) {
        *param_9 = (longlong)local_158[0];
        FUN_1402ee990(local_218);
        return 0;
      }
      local_208 = 0;
      local_204 = 0;
      local_168 = 1;
      if (bVar12) {
        if ((0 < local_220 - local_228) && (0 < local_21c - local_224)) {
          uVar18 = *(ushort *)(*(longlong *)(param_6 + 0x80) + 0x1a);
          if (uVar18 < 2) {
            uVar18 = 1;
          }
          iVar19 = (int)((float)(local_220 - local_228) * (DAT_1404928a8 / (float)uVar18));
          local_208 = 1;
          if (1 < iVar19) {
            local_208 = iVar19;
          }
          iVar19 = (int)((float)(local_21c - local_224) * (DAT_1404928a8 / (float)uVar18));
          local_204 = 1;
          if (1 < iVar19) {
            local_204 = iVar19;
          }
        }
        uVar35 = local_208 + 0x18;
        local_230 = local_204 + 0x18;
      }
      else {
        uVar35 = local_220 - local_228;
        local_230 = local_21c - local_224;
      }
      uVar52 = local_230 + 1;
      uVar45 = uVar35 + 1;
      local_198 = param_4 + 0xb8;
      local_178 = puVar23 + 0x10;
      local_160 = 4;
      puVar69 = local_178;
LAB_1401ae5c0:
      do {
        lVar51 = *(longlong *)(puVar23 + 0x12);
        lVar31 = *(longlong *)puVar69;
        local_22c = 0;
        iVar19 = 0;
        if (lVar51 - lVar31 >> 5 != 0) {
          do {
            piVar43 = (int *)((longlong)iVar19 * 0x20 + lVar31);
            if ((((lVar51 - lVar31 >> 5) - 1U <= (ulonglong)(longlong)iVar19) ||
                ((int)uVar52 <= *piVar43)) && ((int)uVar45 <= piVar43[1])) {
              if ((int)puVar23[1] < (int)(local_22c + uVar52)) break;
              lVar51 = *(longlong *)(piVar43 + 4);
              uVar36 = 0;
              lVar31 = *(longlong *)(piVar43 + 2);
              iVar32 = 0;
              if (lVar51 - lVar31 >> 3 != 0) {
                do {
                  uVar38 = (ulonglong)iVar32;
                  lVar24 = *(longlong *)(lVar31 + uVar38 * 8);
                  iVar48 = iVar32;
                  if ((int)uVar45 <= (int)(*(int *)(lVar24 + 0x20) - uVar36)) {
LAB_1401ae6b6:
                    if (iVar48 < 0) goto LAB_1401ae6ba;
                    iVar32 = *piVar43;
                    if (*piVar43 < local_230) {
                      iVar32 = local_230;
                    }
                    *piVar43 = iVar32;
                    puVar25 = local_158[0];
                    if (local_158[0] == (uint *)0x0) {
                      puVar25 = (uint *)FUN_14028af20(0x48);
                      puVar25[0] = 0;
                      puVar25[1] = 0;
                      puVar25[4] = 0;
                      puVar25[5] = 0;
                      puVar25[6] = 0;
                      puVar25[7] = 0;
                      *(undefined4 *)((longlong)puVar25 + 0x3b) = 0;
                      *(undefined1 *)((longlong)puVar25 + 0x3f) = 0;
                      puVar25[2] = 0;
                      puVar25[3] = 0;
                      puVar25[0xc] = 0;
                      puVar25[0xd] = 0;
                      *(undefined2 *)(puVar25 + 0xe) = 0;
                      *(undefined1 *)((longlong)puVar25 + 0x3a) = 0;
                      puVar25[0x10] = 0;
                      puVar25[0x11] = 0;
                    }
                    puVar25[8] = uVar36;
                    puVar25[9] = local_22c;
                    puVar25[10] = uVar35 + uVar36;
                    puVar25[0xb] = local_230 + local_22c;
                    puVar25[4] = (uint)((float)(int)puVar25[8] / (float)(int)*puVar23);
                    puVar25[5] = (uint)((float)(int)puVar25[9] / (float)(int)puVar23[1]);
                    puVar25[6] = (uint)((float)(int)puVar25[10] / (float)(int)*puVar23);
                    puVar25[7] = (uint)((float)(int)puVar25[0xb] / (float)(int)puVar23[1]);
                    puVar44 = (undefined8 *)(*(longlong *)(piVar43 + 2) + (longlong)iVar48 * 8);
                    puVar2 = *(undefined8 **)(piVar43 + 4);
                    local_210 = puVar25;
                    local_200[0] = puVar25;
                    if (puVar2 == *(undefined8 **)(piVar43 + 6)) {
                      FUN_14005ffa0(piVar43 + 2,puVar44);
                      local_210 = local_200[0];
                      puVar25 = local_200[0];
                    }
                    else if (puVar44 == puVar2) {
                      *puVar2 = puVar25;
                      *(longlong *)(piVar43 + 4) = *(longlong *)(piVar43 + 4) + 8;
                    }
                    else {
                      *puVar2 = puVar2[-1];
                      *(longlong *)(piVar43 + 4) = *(longlong *)(piVar43 + 4) + 8;
                      FUN_1404210f0(puVar44 + 1,puVar44);
                      *puVar44 = puVar25;
                    }
                    piVar43[1] = 0;
                    iVar32 = 0;
                    iVar48 = 0;
                    uVar38 = *(longlong *)(piVar43 + 4) - *(longlong *)(piVar43 + 2) >> 3;
                    if (uVar38 == 0) goto LAB_1401ae8a6;
                    iVar47 = 0;
                    do {
                      lVar51 = *(longlong *)(*(longlong *)(piVar43 + 2) + (longlong)iVar48 * 8);
                      iVar32 = *(int *)(lVar51 + 0x20) - iVar32;
                      if (iVar32 <= iVar47) {
                        iVar32 = iVar47;
                      }
                      iVar47 = iVar32;
                      piVar43[1] = iVar47;
                      iVar32 = *(int *)(lVar51 + 0x28);
                      if ((longlong)iVar48 == uVar38 - 1) {
                        if (iVar47 < (int)(*puVar23 - iVar32)) {
                          iVar47 = *puVar23 - iVar32;
                        }
                        piVar43[1] = iVar47;
                      }
                      iVar48 = iVar48 + 1;
                    } while ((ulonglong)(longlong)iVar48 < uVar38);
                    if (iVar47 < 2) {
LAB_1401ae8a6:
                      piVar43[1] = 0;
                    }
                    if (puVar25 != (uint *)0x0) goto LAB_1401aef50;
                    break;
                  }
                  iVar48 = *(int *)(lVar24 + 0x28);
                  uVar50 = (lVar51 - lVar31 >> 3) - 1;
                  uVar36 = iVar48 + 1;
                  if (((uVar38 == uVar50) && ((int)uVar35 <= (int)(*puVar23 - uVar36))) ||
                     ((uVar38 < uVar50 &&
                      ((int)uVar35 <=
                       *(int *)(*(longlong *)(lVar31 + (longlong)(iVar32 + 1) * 8) + 0x20) - iVar48)
                      ))) {
                    iVar48 = iVar32 + 1;
                    goto LAB_1401ae6b6;
                  }
LAB_1401ae6ba:
                  iVar32 = iVar32 + 1;
                } while ((ulonglong)(longlong)iVar32 < (ulonglong)(lVar51 - lVar31 >> 3));
              }
            }
            iVar19 = iVar19 + 1;
            lVar51 = *(longlong *)(puVar23 + 0x12);
            lVar31 = *(longlong *)(puVar23 + 0x10);
            local_22c = local_22c + *piVar43 + 1;
          } while ((ulonglong)(longlong)iVar19 < (ulonglong)(lVar51 - lVar31 >> 5));
          puVar69 = puVar23 + 0x10;
        }
        uVar36 = 0;
        iVar19 = 0;
        if (lVar51 - lVar31 >> 5 != 0) {
          do {
            lVar24 = (longlong)iVar19;
            iVar19 = iVar19 + 1;
            uVar36 = uVar36 + *(int *)(lVar24 * 0x20 + lVar31) + 1;
          } while ((ulonglong)(longlong)iVar19 < (ulonglong)(lVar51 - lVar31 >> 5));
        }
        if (((int)uVar52 <= (int)(puVar23[1] - uVar36)) && ((int)uVar45 <= (int)*puVar23)) {
          puVar25 = local_158[0];
          if (local_158[0] == (uint *)0x0) {
            puVar25 = (uint *)FUN_14028af20(0x48);
            puVar25[0] = 0;
            puVar25[1] = 0;
            puVar25[4] = 0;
            puVar25[5] = 0;
            puVar25[6] = 0;
            puVar25[7] = 0;
            *(undefined4 *)((longlong)puVar25 + 0x3b) = 0;
            *(undefined1 *)((longlong)puVar25 + 0x3f) = 0;
            puVar25[2] = 0;
            puVar25[3] = 0;
            puVar25[0xc] = 0;
            puVar25[0xd] = 0;
            *(undefined2 *)(puVar25 + 0xe) = 0;
            *(undefined1 *)((longlong)puVar25 + 0x3a) = 0;
            puVar25[0x10] = 0;
            puVar25[0x11] = 0;
          }
          iVar19 = local_230;
          puVar25[8] = 0;
          puVar25[9] = uVar36;
          puVar25[10] = uVar35;
          puVar25[0xb] = uVar36 + local_230;
          local_1b8 = (longlong *)0x0;
          local_1a0 = 0;
          puVar25[4] = (uint)((float)(int)puVar25[8] / (float)(int)*puVar23);
          puVar25[5] = (uint)((float)(int)puVar25[9] / (float)(int)puVar23[1]);
          puVar25[6] = (uint)((float)(int)puVar25[10] / (float)(int)*puVar23);
          puVar25[7] = (uint)((float)(int)puVar25[0xb] / (float)(int)puVar23[1]);
          puVar44 = *(undefined8 **)(puVar23 + 0x12);
          plStack_1b0 = (longlong *)0x0;
          uStack_1a8 = 0;
          local_210 = puVar25;
          local_200[0] = puVar25;
          if (puVar44 == *(undefined8 **)(puVar23 + 0x14)) {
            FUN_1401b6430(puVar69,puVar44,&local_1b8);
          }
          else {
            *puVar44 = 0;
            puVar44[1] = 0;
            puVar44[2] = 0;
            puVar44[3] = 0;
            *(longlong *)(puVar23 + 0x12) = *(longlong *)(puVar23 + 0x12) + 0x20;
          }
          FUN_14000d9e0(&plStack_1b0);
          lVar51 = *(longlong *)puVar69;
          lVar31 = ((*(longlong *)(puVar23 + 0x12) - lVar51 >> 5) + -1) * 0x20;
          *(int *)(lVar31 + lVar51) = iVar19;
          *(uint *)(lVar31 + 4 + lVar51) = *puVar23 - uVar45;
          puVar44 = *(undefined8 **)(lVar31 + 0x10 + lVar51);
          puVar2 = *(undefined8 **)(lVar31 + lVar51 + 8);
          if (puVar44 == *(undefined8 **)(lVar31 + 0x18 + lVar51)) {
            FUN_14005ffa0(lVar31 + lVar51 + 8,puVar2,local_200);
            local_210 = local_200[0];
            puVar25 = local_200[0];
          }
          else if (puVar2 == puVar44) {
            *puVar44 = puVar25;
            plVar22 = (longlong *)(lVar31 + 0x10 + lVar51);
            *plVar22 = *plVar22 + 8;
          }
          else {
            *puVar44 = puVar44[-1];
            plVar22 = (longlong *)(lVar31 + 0x10 + lVar51);
            *plVar22 = *plVar22 + 8;
            FUN_1404210f0(-(-8 - (longlong)puVar2),puVar2);
            *puVar2 = puVar25;
          }
          if (puVar25 != (uint *)0x0) {
LAB_1401aef50:
            *puVar25 = param_8;
            *(longlong *)(puVar25 + 2) = local_218;
            *(char *)((longlong)puVar25 + 0x39) = (char)local_res10;
            *(uint **)(puVar25 + 0x10) = puVar23;
            plVar22 = (longlong *)FUN_14004b8a0(puVar23 + 0x16,&local_198,&local_234);
            iVar32 = local_204;
            iVar19 = local_208;
            *(uint **)(*plVar22 + 0x18) = puVar25;
            uVar16 = _UNK_1404930bc;
            uVar15 = _UNK_1404930b8;
            uVar37 = _UNK_1404930b4;
            uVar53 = _DAT_1404930b0;
            uVar20 = _UNK_140492cec;
            uVar36 = _UNK_140492ce8;
            uVar52 = _UNK_140492ce4;
            uVar45 = _DAT_140492ce0;
            dVar7 = DAT_140492778;
            if (param_7._0_1_ == (code)0x0) {
              if (*(char *)(local_218 + 0x42) == '\x02') {
                uVar45 = 0;
                lVar51 = (longlong)(int)(puVar25[9] * *puVar23 + puVar25[8]) +
                         *(longlong *)(puVar23 + 4);
                if (*(int *)(local_218 + 0x28) != 0) {
                  do {
                    FUN_1404210f0(lVar51,(ulonglong)(*(int *)(local_218 + 0x2c) * uVar45) +
                                         *(longlong *)(local_218 + 0x38),*(int *)(local_218 + 0x2c))
                    ;
                    uVar45 = uVar45 + 1;
                    lVar51 = lVar51 + (int)*puVar23;
                  } while (uVar45 < *(uint *)(local_218 + 0x28));
                }
              }
              else if (*(char *)(local_218 + 0x42) == '\a') {
                uVar42 = 0;
                lVar51 = (longlong)(int)((puVar25[9] * *puVar23 + puVar25[8]) * 4) +
                         *(longlong *)(puVar23 + 4);
                if (*(int *)(local_218 + 0x28) != 0) {
                  do {
                    FUN_1404210f0(lVar51,(ulonglong)(*(int *)(local_218 + 0x2c) * uVar42 * 4) +
                                         *(longlong *)(local_218 + 0x38));
                    uVar1 = *(uint *)(local_218 + 0x2c);
                    uVar49 = 0;
                    uVar33 = uVar1 & 0x3ffffffc;
                    if (uVar33 != 0) {
                      do {
                        uVar21 = uVar49 * 4;
                        uVar49 = uVar49 + 4;
                        puVar69 = (uint *)(lVar51 + (ulonglong)uVar21);
                        uVar9 = puVar69[1];
                        uVar10 = puVar69[2];
                        uVar11 = puVar69[3];
                        uVar56 = *puVar69 & uVar45;
                        uVar59 = uVar9 & uVar52;
                        uVar60 = uVar10 & uVar36;
                        uVar61 = uVar11 & uVar20;
                        puVar39 = (uint *)(lVar51 + (ulonglong)uVar21);
                        *puVar39 = uVar56 << 0x10 | uVar56 >> 0x10 | *puVar69 & uVar53;
                        puVar39[1] = uVar59 << 0x10 | uVar59 >> 0x10 | uVar9 & uVar37;
                        puVar39[2] = uVar60 << 0x10 | uVar60 >> 0x10 | uVar10 & uVar15;
                        puVar39[3] = uVar61 << 0x10 | uVar61 >> 0x10 | uVar11 & uVar16;
                      } while (uVar49 < uVar33);
                    }
                    for (; uVar49 < (uVar1 & 0x3fffffff); uVar49 = uVar49 + 1) {
                      uVar33 = uVar49 * 4;
                      uVar29 = *(undefined1 *)(lVar51 + (ulonglong)uVar33);
                      *(undefined1 *)(lVar51 + (ulonglong)uVar33) =
                           *(undefined1 *)(lVar51 + 2 + (ulonglong)uVar33);
                      *(undefined1 *)(lVar51 + 2 + (ulonglong)uVar33) = uVar29;
                    }
                    uVar42 = uVar42 + 1;
                    lVar51 = lVar51 + (int)(*puVar23 << 2);
                  } while (uVar42 < *(uint *)(local_218 + 0x28));
                }
              }
            }
            else if ((0 < local_208) && (0 < local_204)) {
              uVar45 = (uint)DAT_140492fe0;
              uVar52 = (uint)((ulonglong)DAT_140492fe0 >> 0x20);
              local_1b8 = (longlong *)0x0;
              plStack_1b0 = (longlong *)0x0;
              uStack_1a8 = 0;
              local_1a0 = local_1a0 & 0xffffffffffffff00;
              iVar48 = *(int *)(*(longlong *)(param_6 + 0x78) + 0x60);
              if (iVar48 == 0x6f75746c) {
                local_100 = &local_1b8;
                uStack_f8 = 0;
                local_1c8 = 0;
                local_1e8 = FUN_140282920;
                local_118 = DAT_140492710;
                uStack_1e0 = FUN_140282b90;
                local_1d8 = FUN_140282db0;
                local_1d0 = (code **)FUN_1402830a0;
                local_110 = 0;
                uStack_108 = 0;
                FUN_1402f27a0(*(longlong *)(param_6 + 0x78) + 0x98,&local_1e8,&local_118);
                if ((local_1b8 != plStack_1b0) && (plStack_1b0[-3] == plStack_1b0[-2])) {
                  FUN_1401b7f60();
                  plStack_1b0 = plStack_1b0 + -3;
                }
                plVar22 = local_1b8;
                if (local_1b8 != plStack_1b0) {
                  if (DAT_1404926a8 < 0.0) {
                    dVar57 = (double)FUN_14041f780();
                  }
                  else {
                    dVar57 = SQRT(DAT_1404926a8);
                  }
                  dVar8 = DAT_1404929c8;
                  dVar57 = dVar57 * _DAT_140492788;
                  do {
                    puVar44 = (undefined8 *)plVar22[1];
                    puVar2 = (undefined8 *)*plVar22;
                    if ((longlong)puVar44 - (longlong)puVar2 == 8) {
                      local_1d8 = (code *)0x0;
                      local_1e8 = (code *)0x0;
                      uStack_1e0 = (code *)0x0;
                      (**(code **)(*(longlong *)*puVar2 + 0x70))
                                ((longlong *)*puVar2,&local_1e8,&uStack_1e0,&local_1d8);
                      plVar40 = (longlong *)*plVar22;
                      plVar3 = (longlong *)plVar22[1];
                      if (plVar40 != plVar3) {
                        do {
                          puVar44 = (undefined8 *)*plVar40;
                          if (puVar44 != (undefined8 *)0x0) {
                            (**(code **)*puVar44)(puVar44,1);
                          }
                          plVar40 = plVar40 + 1;
                        } while (plVar40 != plVar3);
                        plVar22[1] = *plVar22;
                      }
                      pcVar6 = local_1e8;
                      local_res20 = local_1e8;
                      FUN_140281fc0(plVar22,&local_res20);
                      if (pcVar6 != (code *)0x0) {
                        (*(code *)**(undefined8 **)pcVar6)(pcVar6,1);
                      }
                      pcVar6 = uStack_1e0;
                      local_res20 = uStack_1e0;
                      FUN_140281fc0(plVar22,&local_res20);
                      if (pcVar6 != (code *)0x0) {
                        (*(code *)**(undefined8 **)pcVar6)(pcVar6,1);
                      }
                      pcVar6 = local_1d8;
                      local_res20 = local_1d8;
                      FUN_140281fc0(plVar22,&local_res20);
                      if (pcVar6 != (code *)0x0) {
                        (*(code *)**(undefined8 **)pcVar6)(pcVar6,1);
                      }
                    }
                    else if (puVar2 != puVar44) {
                      puVar44 = puVar44 + -1;
                      do {
                        puVar41 = puVar2;
                        pdVar27 = (double *)
                                  (**(code **)(*(longlong *)*puVar44 + 0x28))
                                            ((longlong *)*puVar44,local_158);
                        dVar64 = pdVar27[1];
                        dVar67 = *pdVar27;
                        dVar62 = dVar64 * dVar64 + dVar67 * dVar67;
                        if (dVar62 < 0.0) {
                          dVar62 = (double)FUN_14041f780();
                        }
                        else {
                          dVar62 = SQRT(dVar62);
                        }
                        if (dVar62 == 0.0) {
                          dVar67 = 0.0;
                          dVar64 = dVar7;
                        }
                        else {
                          dVar67 = dVar67 / dVar62;
                          dVar64 = dVar64 / dVar62;
                        }
                        pdVar27 = (double *)
                                  (**(code **)(*(longlong *)*puVar41 + 0x28))
                                            ((longlong *)*puVar41,local_200);
                        dVar62 = pdVar27[1];
                        dVar66 = *pdVar27;
                        dVar63 = dVar62 * dVar62 + dVar66 * dVar66;
                        if (dVar63 < 0.0) {
                          dVar63 = (double)FUN_14041f780();
                        }
                        else {
                          dVar63 = SQRT(dVar63);
                        }
                        if (dVar63 == 0.0) {
                          dVar66 = 0.0;
                          dVar62 = dVar7;
                        }
                        else {
                          dVar66 = dVar66 / dVar63;
                          dVar62 = dVar62 / dVar63;
                        }
                        if (dVar62 * dVar64 + dVar66 * dVar67 < dVar8) {
                          dVar62 = dVar62 - dVar64;
                          dVar66 = dVar66 - dVar67;
                          dVar67 = dVar57 / dVar8;
                          dVar64 = dVar62 * dVar62 + dVar66 * dVar66;
                          if (dVar64 < 0.0) {
                            dVar64 = (double)FUN_14041f780();
                          }
                          else {
                            dVar64 = SQRT(dVar64);
                          }
                          if (dVar64 == 0.0) {
                            dVar66 = 0.0;
                            dVar62 = dVar7;
                          }
                          else {
                            dVar66 = dVar66 / dVar64;
                            dVar62 = dVar62 / dVar64;
                          }
                          puVar69 = (uint *)(dVar67 * dVar62);
                          dVar67 = dVar67 * dVar66;
                          iVar19 = FUN_14028a4c0(*puVar44,*puVar41);
                          if (iVar19 < 0) {
                            dVar67 = (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) ^ uVar52,
                                                      SUB84(dVar67,0) ^ uVar45);
                            puVar69 = (uint *)CONCAT44((uint)((ulonglong)puVar69 >> 0x20) ^ uVar52,
                                                       (uint)puVar69 ^ uVar45);
                          }
                          local_198 = (code *)CONCAT44((uint)((ulonglong)puVar69 >> 0x20) ^ uVar52,
                                                       (uint)puVar69 ^ uVar45);
                          local_190 = dVar67;
                          FUN_140281730(puVar44,1,&local_198);
                          uStack_170 = (double)CONCAT44((uint)((ulonglong)dVar67 >> 0x20) ^ uVar52,
                                                        SUB84(dVar67,0) ^ uVar45);
                          local_178 = puVar69;
                          FUN_140281730(puVar41,0,&local_178);
                        }
                        puVar2 = puVar41 + 1;
                        puVar44 = puVar41;
                      } while (puVar41 + 1 != (undefined8 *)plVar22[1]);
                    }
                    plVar22 = plVar22 + 3;
                    iVar19 = local_208;
                    iVar32 = local_204;
                  } while (plVar22 != plStack_1b0);
                }
                FUN_140281900(&local_1b8);
                FUN_140283500(&local_1b8,DAT_1404927c8);
              }
              iVar47 = local_230;
              dVar57 = DAT_140492758;
              if (iVar19 < iVar32) {
                iVar19 = iVar32;
              }
              fVar68 = (float)(local_21c - local_224);
              if ((float)(local_21c - local_224) <= (float)(local_220 - local_228)) {
                fVar68 = (float)(local_220 - local_228);
              }
              puVar46 = (undefined1 *)
                        ((longlong)(int)((puVar25[9] * *puVar23 + puVar25[8]) * 4) +
                        *(longlong *)(puVar23 + 4));
              fVar68 = (float)iVar19 / fVar68;
              fVar65 = DAT_140492890 / fVar68;
              pcVar6 = (code *)(double)(DAT_14049287c / fVar68 - (float)local_228);
              dVar8 = (double)(DAT_14049287c / fVar68 - (float)local_224);
              if (iVar48 == 0x6f75746c) {
                auVar4._8_8_ = 0;
                auVar4._0_8_ = (longlong)(int)(local_230 * uVar35 * 3);
                uVar26 = SUB168(ZEXT816(4) * auVar4,0);
                if (SUB168(ZEXT816(4) * auVar4,8) != 0) {
                  uVar26 = 0xffffffffffffffff;
                }
                pcVar28 = (code *)thunk_FUN_14028af20(uVar26);
                local_188 = uVar35 * 3;
                iVar32 = 0;
                iVar19 = 0;
                local_190 = (double)CONCAT44(iVar47,uVar35);
                dVar67 = (double)fVar65 * DAT_1404929c0;
                local_184 = 0;
                local_118 = CONCAT71(local_118._1_7_,1);
                dVar64 = (double)fVar68;
                local_110 = 0x100000002;
                uStack_f8 = 0;
                uStack_1e0 = (code *)CONCAT44(iVar47,uVar35);
                uVar26 = CONCAT44((uint)((ulonglong)dVar67 >> 0x20) ^ uVar52,
                                  SUB84(dVar67,0) ^ uVar45);
                uStack_108 = _DAT_140492f20;
                local_100 = _UNK_140492f28;
                dVar7 = dVar7 / ((double)fVar65 * dVar57 - dVar67);
                local_1d8 = (code *)(ulonglong)local_188;
                local_1e8 = pcVar28;
                local_198 = pcVar28;
                local_148 = dVar64;
                dStack_140 = dVar64;
                local_138 = pcVar6;
                local_130 = dVar8;
                local_128 = dVar7;
                local_120 = uVar26;
                FUN_140283d60(&local_1e8,&local_1b8,&local_148);
                local_148 = dVar64;
                dStack_140 = dVar64;
                local_138 = pcVar6;
                local_130 = dVar8;
                local_128 = dVar7;
                local_120 = uVar26;
                FUN_14028a910(&local_198,&local_1b8,&local_148,&local_118);
                fVar65 = DAT_140492910;
                if (0 < iVar47) {
                  do {
                    if (0 < (int)uVar35) {
                      puVar34 = puVar46;
                      iVar48 = iVar32;
                      do {
                        lVar51 = (longlong)(int)((((iVar47 - iVar19) + -1) * uVar35 + iVar48) * 3);
                        iVar30 = (int)(*(float *)(pcVar28 + lVar51 * 4) * fVar65);
                        if (iVar30 < 0xff) {
                          if (iVar30 < 0) {
                            iVar30 = iVar32;
                          }
                          uVar29 = (undefined1)iVar30;
                        }
                        else {
                          uVar29 = 0xff;
                        }
                        *puVar34 = uVar29;
                        iVar30 = (int)(*(float *)(pcVar28 + lVar51 * 4 + 4) * fVar65);
                        if (iVar30 < 0xff) {
                          if (iVar30 < 0) {
                            iVar30 = iVar32;
                          }
                          uVar29 = (undefined1)iVar30;
                        }
                        else {
                          uVar29 = 0xff;
                        }
                        puVar34[1] = uVar29;
                        iVar30 = (int)(*(float *)(pcVar28 + lVar51 * 4 + 8) * fVar65);
                        if (iVar30 < 0xff) {
                          if (iVar30 < 0) {
                            iVar30 = iVar32;
                          }
                          uVar29 = (undefined1)iVar30;
                        }
                        else {
                          uVar29 = 0xff;
                        }
                        puVar34[2] = uVar29;
                        iVar48 = iVar48 + 1;
                        puVar34[3] = 0xff;
                        puVar34 = puVar34 + 4;
                      } while (iVar48 < (int)uVar35);
                    }
                    iVar19 = iVar19 + 1;
                    puVar46 = puVar46 + (int)(*puVar23 << 2);
                  } while (iVar19 < iVar47);
                }
              }
              else {
                iVar19 = 0;
                uStack_1e0 = (code *)CONCAT44(local_230,uVar35);
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (longlong)(int)(local_230 * uVar35 * 4);
                uVar26 = SUB168(ZEXT816(4) * auVar5,0);
                local_1d8 = (code *)((ulonglong)local_1d8 & 0xffffffff00000000);
                if (SUB168(ZEXT816(4) * auVar5,8) != 0) {
                  uVar26 = 0xffffffffffffffff;
                }
                pcVar28 = (code *)thunk_FUN_14028af20(uVar26);
                local_178 = (uint *)(double)fVar68;
                uStack_170 = (double)fVar68;
                local_1e8 = pcVar28;
                local_198 = pcVar6;
                local_190 = dVar8;
                FUN_1401ab9c0(local_218,&local_1e8);
                fVar65 = DAT_140492910;
                iVar32 = iVar19;
                if (0 < iVar47) {
                  do {
                    if (0 < (int)uVar35) {
                      puVar34 = puVar46;
                      iVar48 = 0;
                      do {
                        lVar51 = (longlong)(int)((((iVar47 - iVar32) + -1) * uVar35 + iVar48) * 4);
                        iVar30 = (int)(*(float *)(pcVar28 + lVar51 * 4) * fVar65);
                        if (iVar30 < 0xff) {
                          if (iVar30 < 0) {
                            iVar30 = iVar19;
                          }
                          uVar29 = (undefined1)iVar30;
                        }
                        else {
                          uVar29 = 0xff;
                        }
                        *puVar34 = uVar29;
                        iVar30 = (int)(*(float *)(pcVar28 + lVar51 * 4 + 4) * fVar65);
                        if (iVar30 < 0xff) {
                          if (iVar30 < 0) {
                            iVar30 = iVar19;
                          }
                          uVar29 = (undefined1)iVar30;
                        }
                        else {
                          uVar29 = 0xff;
                        }
                        puVar34[1] = uVar29;
                        iVar30 = (int)(*(float *)(pcVar28 + lVar51 * 4 + 8) * fVar65);
                        if (iVar30 < 0xff) {
                          if (iVar30 < 0) {
                            iVar30 = iVar19;
                          }
                          uVar29 = (undefined1)iVar30;
                        }
                        else {
                          uVar29 = 0xff;
                        }
                        puVar34[2] = uVar29;
                        iVar30 = (int)(*(float *)(pcVar28 + lVar51 * 4 + 0xc) * fVar65);
                        if (iVar30 < 0xff) {
                          if (iVar30 < 0) {
                            iVar30 = iVar19;
                          }
                          uVar29 = (undefined1)iVar30;
                        }
                        else {
                          uVar29 = 0xff;
                        }
                        puVar34[3] = uVar29;
                        iVar48 = iVar48 + 1;
                        puVar34 = puVar34 + 4;
                      } while (iVar48 < (int)uVar35);
                    }
                    iVar32 = iVar32 + 1;
                    puVar46 = puVar46 + (int)(*puVar23 << 2);
                  } while (iVar32 < iVar47);
                }
              }
              iVar19 = 0;
              thunk_FUN_14028af80(pcVar28);
              if ((char)local_res10 != '\0') {
                param_7 = *(uint *)(local_218 + 0x28);
                param_8 = *(uint *)(local_218 + 0x2c);
                local_res20 = (code *)CONCAT44(local_res20._4_4_,*(undefined4 *)(local_218 + 0x30));
                if (((0 < (int)param_8) && (0 < (int)param_7)) &&
                   (*(longlong *)(local_218 + 0x38) != 0)) {
                  uVar45 = puVar23[0xe];
                  if ((0 < (int)(uVar45 * uVar35)) && (iVar32 = uVar45 * local_230, 0 < iVar32)) {
                    local_1e8 = (code *)&param_8;
                    param_10._0_4_ = *(int *)(local_218 + 0x20);
                    uStack_1e0 = (code *)&param_7;
                    local_1d0 = &local_res20;
                    local_1d8 = (code *)(local_218 + 0x28);
                    do {
                      iVar48 = 0;
                      fVar65 = (float)(int)param_10;
                      do {
                        FUN_1401ac4e0(&local_1e8,
                                      (float)(((double)iVar48 + dVar57) /
                                              (double)((float)(int)uVar45 * fVar68) - (double)pcVar6
                                             ) - fVar65);
                        iVar48 = iVar48 + 1;
                      } while (iVar48 < (int)(uVar45 * uVar35));
                      iVar19 = iVar19 + 1;
                      puVar25 = local_210;
                    } while (iVar19 < iVar32);
                  }
                }
              }
              FUN_1401b4400(&local_1b8);
            }
            if (((char)puVar23[2] == '\0') && (*(char *)((longlong)puVar23 + 9) == '\0')) {
              iVar19 = 1;
              local_160 = 1;
            }
            else {
              iVar19 = 4;
              local_168 = 4;
            }
            uVar45 = puVar25[9];
            if (uVar45 == 0) {
              uVar45 = puVar23[1];
            }
            uVar52 = puVar25[0xb];
            uVar36 = puVar23[1];
            puVar69 = puVar25 + 8;
            FUN_1404217a0((longlong)(int)(((uVar45 - 1) * *puVar23 + *puVar69) * iVar19) +
                          *(longlong *)(puVar23 + 4),0,(longlong)(int)(iVar19 * uVar35));
            FUN_1404217a0((longlong)
                          (int)((((int)uVar52 % (int)uVar36) * *puVar23 + *puVar69) * iVar19) +
                          *(longlong *)(puVar23 + 4),0,(longlong)(int)(iVar19 * uVar35));
            uVar26 = local_168;
            uVar45 = puVar25[9];
            if (*puVar69 == 0) {
              puVar69 = puVar23;
            }
            uVar52 = *puVar69;
            uVar36 = puVar25[10];
            uVar20 = *puVar23;
            uVar53 = puVar25[0xb];
            if ((int)uVar45 < (int)uVar53) {
              do {
                uVar17 = local_160;
                FUN_1404217a0((longlong)(int)((uVar45 * *puVar23 + (uVar52 - 1)) * (int)uVar26) +
                              *(longlong *)(puVar23 + 4),0,local_160);
                FUN_1404217a0((longlong)
                              (int)((uVar45 * *puVar23 + (int)uVar36 % (int)uVar20) * (int)uVar26) +
                              *(longlong *)(puVar23 + 4),0,uVar17);
                uVar53 = puVar25[0xb];
                uVar45 = uVar45 + 1;
              } while ((int)uVar45 < (int)uVar53);
            }
            if (*(longlong *)(puVar23 + 10) != 0) {
              uVar45 = puVar23[0xe];
              param_8 = uVar45 * *puVar23;
              iVar32 = uVar45 * puVar25[8];
              uVar52 = puVar23[1];
              iVar19 = uVar45 * puVar25[9];
              uVar36 = puVar25[10];
              lVar51 = (longlong)(int)(uVar45 * uVar35 * 4);
              puVar69 = puVar23 + 1;
              if (iVar19 != 0) {
                puVar69 = puVar25 + 9;
              }
              FUN_1404217a0((longlong)(int)(((uVar45 * *puVar69 + -1) * param_8 + iVar32) * 4) +
                            *(longlong *)(puVar23 + 10),0,lVar51);
              iVar48 = param_8;
              FUN_1404217a0((longlong)
                            (int)((((int)(uVar53 * uVar45) % (int)(uVar45 * uVar52)) * param_8 +
                                  iVar32) * 4) + *(longlong *)(puVar23 + 10),0,lVar51);
              if (iVar32 == 0) {
                iVar32 = iVar48;
              }
              for (; iVar19 < (int)(uVar53 * uVar45); iVar19 = iVar19 + 1) {
                *(undefined4 *)
                 ((longlong)((iVar19 * iVar48 + iVar32 + -1) * 4) + *(longlong *)(puVar23 + 10)) = 0
                ;
                *(undefined4 *)
                 ((longlong)((iVar19 * iVar48 + (int)(uVar45 * uVar36) % iVar48) * 4) +
                 *(longlong *)(puVar23 + 10)) = 0;
              }
            }
            *(undefined1 *)(puVar23 + 8) = 1;
            puVar25[0xc] = (uint)(float)(*(int *)(*(longlong *)(param_6 + 0x78) + 0x58) >> 6);
            *(undefined1 *)(puVar25 + 0xe) = 0;
            *param_9 = (longlong)puVar25;
            return 0;
          }
        }
        puVar25 = *(uint **)(puVar23 + 0x18);
        puVar39 = *(uint **)puVar25;
        local_200[0] = puVar25;
        if (puVar39 != puVar25) {
          while( true ) {
            lVar51 = *(longlong *)(puVar39 + 6);
            if ((((*(int *)(lVar51 + 0x34) == 0) && (*(char *)(lVar51 + 0x38) == '\0')) &&
                (uVar36 = (*(int *)(lVar51 + 0x28) - *(int *)(lVar51 + 0x20)) + 1, uVar45 <= uVar36)
                ) && (uVar52 <= (*(int *)(lVar51 + 0x2c) - *(int *)(lVar51 + 0x24)) + 1U)) {
              lVar51 = *(longlong *)puVar69;
              bVar12 = false;
              iVar19 = 0;
              if (*(longlong *)(puVar23 + 0x12) - lVar51 >> 5 != 0) {
                do {
                  lVar54 = (longlong)iVar19 * 0x20;
                  lVar24 = thunk_FUN_14028d250(*(undefined8 *)(lVar51 + 8 + lVar54),
                                               *(undefined8 *)(lVar51 + 0x10 + lVar54),
                                               *(undefined8 *)(puVar39 + 6));
                  lVar31 = *(longlong *)(lVar51 + 0x10 + lVar54);
                  if (lVar24 != lVar31) {
                    FUN_1404210f0(lVar24,lVar24 + 8,lVar31 - (lVar24 + 8));
                    plVar22 = (longlong *)(lVar51 + 0x10 + lVar54);
                    *plVar22 = *plVar22 + -8;
                    bVar12 = true;
                    uVar20 = *(uint *)(lVar51 + 4 + lVar54);
                    if (uVar20 < uVar36) {
                      uVar20 = uVar36;
                    }
                    *(uint *)(lVar51 + 4 + lVar54) = uVar20;
                  }
                  lVar51 = *(longlong *)(puVar23 + 0x10);
                  iVar19 = iVar19 + 1;
                  puVar25 = local_200[0];
                } while ((ulonglong)(longlong)iVar19 <
                         (ulonglong)(*(longlong *)(puVar23 + 0x12) - lVar51 >> 5));
              }
              FUN_1402ee990(*(undefined8 *)(*(longlong *)(puVar39 + 6) + 8));
              *(undefined8 *)(*(longlong *)(puVar39 + 6) + 8) = 0;
              *(undefined1 *)(*(longlong *)(puVar39 + 6) + 0x38) = 1;
              puVar69 = local_178;
              if (bVar12) goto LAB_1401ae5c0;
            }
            puVar39 = *(uint **)puVar39;
            if (puVar39 == puVar25) break;
            puVar69 = puVar23 + 0x10;
          }
        }
        uVar36 = *puVar23;
        if (0xfff < (int)uVar36) {
          FUN_1402ee990(local_218);
          *(uint **)CONCAT44(param_10._4_4_,(int)param_10) = puVar23;
          return 2;
        }
        local_200[0] = *(uint **)(puVar23 + 4);
        puVar69 = *(uint **)(puVar23 + 10);
        uVar20 = puVar23[1];
        uVar53 = puVar23[0xe];
        iVar19 = (int)*(undefined8 *)puVar23 * 2;
        *(ulonglong *)puVar23 =
             CONCAT44((int)((ulonglong)*(undefined8 *)puVar23 >> 0x20) << 1,iVar19);
        if (((char)puVar23[2] != '\0') || (iVar32 = 1, *(char *)((longlong)puVar23 + 9) != '\0')) {
          iVar32 = 4;
        }
        local_22c = uVar53;
        local_210 = puVar69;
        uVar26 = thunk_FUN_14028af20((longlong)(int)(iVar19 * puVar23[1] * iVar32));
        *(undefined8 *)(puVar23 + 4) = uVar26;
        FUN_1404217a0(uVar26,0,(longlong)(int)(puVar23[1] * *puVar23 * iVar32));
        if (puVar69 != (uint *)0x0) {
          uVar26 = thunk_FUN_14028af20((longlong)(int)(puVar23[1] * *puVar23 * uVar53 * uVar53 * 4))
          ;
          *(undefined8 *)(puVar23 + 10) = uVar26;
          FUN_1404217a0(uVar26,0,(longlong)(int)(puVar23[1] * *puVar23 * uVar53 * uVar53 * 4));
        }
        puVar25 = local_200[0];
        puVar44 = *(undefined8 **)(puVar23 + 0x18);
        for (puVar2 = (undefined8 *)*puVar44; puVar2 != puVar44; puVar2 = (undefined8 *)*puVar2) {
          lVar51 = puVar2[3];
          if (*(char *)(lVar51 + 0x38) == '\0') {
            auVar58._0_4_ = *(float *)(lVar51 + 0x10) * fVar68;
            auVar58._4_4_ = *(float *)(lVar51 + 0x14) * fVar65;
            auVar58._8_4_ = *(float *)(lVar51 + 0x18) * fVar13;
            auVar58._12_4_ = *(float *)(lVar51 + 0x1c) * fVar14;
            *(undefined1 (*) [16])(lVar51 + 0x10) = auVar58;
          }
        }
        lVar51 = *(longlong *)(puVar23 + 0x12);
        for (lVar31 = *(longlong *)(puVar23 + 0x10); lVar31 != lVar51; lVar31 = lVar31 + 0x20) {
          *(uint *)(lVar31 + 4) = uVar36;
        }
        uVar37 = 0;
        if (uVar20 != 0) {
          do {
            FUN_1404210f0((longlong)(int)(uVar37 * *puVar23 * iVar32) + *(longlong *)(puVar23 + 4),
                          (ulonglong)(uVar37 * iVar32 * uVar36) + (longlong)puVar25,iVar32 * uVar36)
            ;
            uVar37 = uVar37 + 1;
            puVar69 = local_210;
            uVar53 = local_22c;
          } while (uVar37 < uVar20);
        }
        if (puVar69 != (uint *)0x0) {
          iVar19 = 0;
          if (0 < (int)(uVar53 * uVar20)) {
            do {
              FUN_1404210f0((longlong)(int)(iVar19 * *puVar23 * uVar53 * 4) +
                            *(longlong *)(puVar23 + 10),
                            (ulonglong)(iVar19 * uVar36 * 4 * uVar53) + (longlong)puVar69,
                            uVar53 * uVar36 * 4);
              iVar19 = iVar19 + 1;
            } while (iVar19 < (int)(uVar53 * uVar20));
          }
        }
        FUN_1401ac7f0(local_res18,puVar23);
        thunk_FUN_14028af80(local_200[0]);
        thunk_FUN_14028af80(puVar69);
        pcVar6 = local_res20;
        puVar69 = puVar23 + 0x10;
        if (*(ulonglong *)(local_res20 + 200) != 0) {
          puVar44 = *(undefined8 **)(local_res20 + 0xc0);
          if (*(ulonglong *)(local_res20 + 200) < *(ulonglong *)(local_res20 + 0xf0) >> 3) {
            FUN_140160d40(local_198,*puVar44,puVar44);
            puVar69 = puVar23 + 0x10;
          }
          else {
            *(undefined8 *)puVar44[1] = 0;
            puVar44 = (undefined8 *)*puVar44;
            while (puVar44 != (undefined8 *)0x0) {
              puVar2 = (undefined8 *)*puVar44;
              thunk_FUN_14028af80(puVar44,0x18);
              puVar44 = puVar2;
            }
            *(undefined8 *)*(undefined8 *)(pcVar6 + 0xc0) = *(undefined8 *)(pcVar6 + 0xc0);
            *(longlong *)(*(longlong *)(pcVar6 + 0xc0) + 8) = *(longlong *)(pcVar6 + 0xc0);
            *(undefined8 *)(pcVar6 + 200) = 0;
            local_200[0] = *(uint **)(pcVar6 + 0xc0);
            FUN_14000f7d0(*(undefined8 *)(pcVar6 + 0xd0),*(undefined8 *)(pcVar6 + 0xd8),local_200);
            puVar69 = puVar23 + 0x10;
          }
        }
      } while( true );
    }
  }
  return 1;
}

