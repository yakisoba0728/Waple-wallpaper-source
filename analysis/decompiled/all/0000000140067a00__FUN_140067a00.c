// Function: FUN_140067a00
// Addr: 140067a00
// Size: 5339 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140067a00(ulonglong param_1,undefined8 *param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  float fVar4;
  longlong *plVar5;
  WORD WVar6;
  char cVar7;
  int iVar8;
  LSTATUS LVar9;
  tm *ptVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  size_t sVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  HMODULE hModule;
  FARPROC pFVar18;
  FARPROC pFVar19;
  FARPROC pFVar20;
  longlong lVar21;
  undefined8 *****pppppuVar22;
  int iVar23;
  undefined8 *****pppppuVar24;
  char *****pppppcVar25;
  longlong *plVar26;
  char *pcVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  bool bVar33;
  undefined8 extraout_XMM0_Qa;
  double dVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulonglong local_res8;
  undefined8 *local_res10;
  char local_res18;
  DWORD local_res20 [2];
  longlong *local_1b8;
  HKEY local_1b0;
  undefined8 ****local_1a8;
  undefined8 uStack_1a0;
  size_t local_198;
  ulonglong local_190;
  undefined4 local_188;
  char ****local_180;
  undefined8 uStack_178;
  size_t local_170;
  ulonglong local_168;
  _SYSTEMTIME local_158;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128 [4];
  longlong *local_108;
  uint local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0 [40];
  undefined1 local_b8 [120];
  
  iVar23 = 0;
  local_res8 = param_1 & 0xffffffff00000000;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140030de0(&DAT_1404e5328,&local_1b8,param_2);
  plVar5 = local_1b8;
  if (local_1b8 == DAT_1404e5330) {
    return 0;
  }
  uStack_1a0 = 0;
  uStack_178 = 0;
  local_198 = 0;
  local_190 = 0xf;
  local_1a8 = (undefined8 *****)0x0;
  local_188 = 0;
  local_170 = 0;
  local_168 = 0xf;
  local_180 = (char ****)0x0;
  iVar8 = (int)local_1b8[0xe];
  if (iVar8 != 2) {
    if (iVar8 == 3) {
      QueryPerformanceFrequency(local_128);
      QueryPerformanceCounter(&local_130);
      GetLocalTime(&local_158);
      WVar6 = local_158.wDayOfWeek;
      iVar8 = FUN_14003dcf0();
      lVar12 = plVar5[7];
      uVar30 = (plVar5[8] - lVar12 >> 3) * -0x71c71c71c71c71c7;
      if (uVar30 != 0) {
        do {
          if ((float)((int)(((uint)WVar6 - iVar8) + 6) % 7) <
              *(float *)(lVar12 + 0x20 + (longlong)iVar23 * 0x48)) {
            FUN_140068f50(&local_1a8,lVar12 + (longlong)iVar23 * 0x48);
            break;
          }
          iVar23 = iVar23 + 1;
        } while ((ulonglong)(longlong)iVar23 < uVar30);
      }
      goto LAB_140067c70;
    }
    if (local_1b8[7] != local_1b8[8]) {
      if (param_3 == '\0') {
        if (iVar8 == 0) {
          lVar12 = local_1b8[6];
          if (lVar12 != 0) goto LAB_140068e85;
        }
        else if (iVar8 == 4) goto LAB_1400683ac;
      }
      lVar12 = local_1b8[10];
      if (lVar12 != local_1b8[0xb]) {
        do {
          lVar16 = plVar5[8];
          for (lVar21 = plVar5[7]; lVar21 != lVar16; lVar21 = lVar21 + 0x48) {
            FUN_140076fd0(&local_158,lVar12,lVar12 + 0x28);
            FUN_140076fd0(&local_130,lVar21,lVar21 + 0x28);
            cVar7 = FUN_14000d0f0(&local_130);
            FUN_140017240(&local_130);
            FUN_140017240(&local_158);
            if (cVar7 != '\0') break;
          }
          if (lVar21 == plVar5[8]) {
            plVar11 = (longlong *)FUN_14007a7e0(plVar5 + 10,local_res20,lVar12);
            lVar12 = *plVar11;
          }
          else {
            lVar12 = lVar12 + 0x48;
          }
          param_3 = local_res18;
        } while (lVar12 != plVar5[0xb]);
      }
      bVar33 = false;
      uVar28 = *(uint *)((longlong)local_1b8 + 0x74) >> 4;
      if ((local_1b8[0x16] != 0) && (param_3 == '\0')) {
        lVar12 = plVar5[8];
        for (lVar16 = plVar5[7]; lVar16 != lVar12; lVar16 = lVar16 + 0x48) {
          FUN_140076fd0(&local_158,local_1b8 + 0x14,local_1b8 + 0x18);
          FUN_140076fd0(&local_130,lVar16,lVar16 + 0x28);
          cVar7 = FUN_14000d0f0(&local_130);
          FUN_140017240(&local_130);
          FUN_140017240(&local_158);
          if (cVar7 != '\0') break;
        }
        if (lVar16 == plVar5[8]) {
          uVar32 = (uint)local_res8;
LAB_140067e74:
          bVar33 = false;
        }
        else {
          cVar7 = FUN_140018980(local_1b8 + 0x14);
          if (cVar7 == '\0') {
            FUN_140018b00(&local_130);
            cVar7 = FUN_140060f20(&local_130);
            uVar32 = 1;
            if (cVar7 == '\0') goto LAB_140067e74;
            bVar33 = true;
          }
          else {
            bVar33 = true;
            uVar32 = (uint)local_res8;
          }
        }
        if ((uVar32 & 1) != 0) {
          FUN_140016770(&local_130);
        }
        if (bVar33) {
          FUN_140068f50(&local_1a8);
        }
        plVar11 = local_1b8 + 0x14;
        local_1b8[0x16] = 0;
        if (0xf < (ulonglong)local_1b8[0x17]) {
          plVar11 = (longlong *)*plVar11;
        }
        *(undefined1 *)plVar11 = 0;
      }
      if (*(char *)((longlong)local_1b8 + 0xe1) == '\0') {
        if ((!bVar33) || (param_2 = local_res10, (char)local_1b8[0x1c] != '\0')) {
          *(undefined1 *)((longlong)local_1b8 + 0xe2) = 0;
          *(undefined1 *)(local_1b8 + 0x1c) = 0;
          if (*(int *)((longlong)plVar5 + 0x6c) == 0) {
            if (plVar5[10] == plVar5[0xb]) {
              lVar12 = plVar5[7];
              if ((uVar28 & 1) != 0) {
                lVar12 = lVar12 + 0x48;
              }
              FUN_140077240(plVar5 + 10,&local_res8,plVar5[0xb],lVar12,plVar5[8]);
              uVar30 = (plVar5[8] - plVar5[7] >> 3) * -0x71c71c71c71c71c7;
              if ((*(byte *)((longlong)plVar5 + 0x74) & 0x10) == 0) {
                bVar33 = uVar30 == 0;
                lVar12 = -1;
              }
              else {
                bVar33 = uVar30 < 2;
                lVar12 = -2;
              }
              if ((local_1b8[6] != 0) && (!bVar33 && uVar30 + lVar12 != 0)) {
                lVar12 = plVar5[0xb];
                for (lVar16 = plVar5[10]; lVar16 != lVar12; lVar16 = lVar16 + 0x48) {
                  FUN_140076fd0(&local_158,lVar16,lVar16 + 0x28);
                  FUN_140076fd0(&local_130,local_1b8[6] + 0xe0,local_1b8[6] + 0x120);
                  cVar7 = FUN_14000d0f0(&local_130,&local_158);
                  FUN_140017240(&local_130);
                  FUN_140017240(&local_158);
                  if (cVar7 != '\0') break;
                }
                if (lVar16 != plVar5[0xb]) {
                  FUN_14007a7e0(plVar5 + 10,&local_res8,lVar16);
                }
              }
            }
            param_2 = local_res10;
            if (plVar5[10] != plVar5[0xb]) {
              iVar23 = (int)(plVar5[0xb] - plVar5[10] >> 3) * 0x38e38e39;
              uVar28 = iVar23 - 1;
              iVar8 = FUN_1402c97a0();
              fVar35 = DAT_140492960;
              uVar32 = (uint)(((float)iVar8 / DAT_140492960) * (float)iVar23 + 0.0);
              if ((int)uVar32 < (int)uVar28) {
                uVar28 = uVar32;
              }
              uVar30 = (ulonglong)uVar28;
              if ((int)uVar28 < 0) {
                uVar30 = 0;
              }
              FUN_140068f50(&local_1a8,plVar5[10] + uVar30 * 0x48);
              FUN_14007a7e0(plVar5 + 10,&local_res8,plVar5[10] + uVar30 * 0x48);
              cVar7 = FUN_1400647b0(&local_1a8);
              param_2 = local_res10;
              if (cVar7 == '\0') {
                bVar33 = false;
                do {
                  if (plVar5[10] == plVar5[0xb]) {
                    param_2 = local_res10;
                    if (bVar33) break;
                    bVar33 = true;
                    FUN_140077240(plVar5 + 10,&local_res8,plVar5[0xb],plVar5[7],plVar5[8]);
                  }
                  iVar23 = (int)(plVar5[0xb] - plVar5[10] >> 3) * 0x38e38e39;
                  uVar28 = iVar23 - 1;
                  iVar8 = FUN_1402c97a0();
                  uVar32 = (uint)(((float)iVar8 / fVar35) * (float)iVar23 + 0.0);
                  if ((int)uVar32 < (int)uVar28) {
                    uVar28 = uVar32;
                  }
                  uVar30 = (ulonglong)uVar28;
                  if ((int)uVar28 < 0) {
                    uVar30 = 0;
                  }
                  FUN_140068f50(&local_1a8,plVar5[10] + uVar30 * 0x48);
                  FUN_14007a7e0(plVar5 + 10,local_res20,plVar5[10] + uVar30 * 0x48);
                  cVar7 = FUN_1400647b0(&local_1a8);
                  param_2 = local_res10;
                } while (cVar7 == '\0');
              }
            }
          }
          else {
            iVar23 = (int)((ulonglong)(longlong)(int)plVar5[0xf] %
                          (ulonglong)((plVar5[8] - plVar5[7] >> 3) * -0x71c71c71c71c71c7));
            *(int *)(plVar5 + 0xf) = iVar23;
            if ((((uVar28 & 1) != 0) && (iVar23 == 0)) &&
               (1 < (ulonglong)((plVar5[8] - plVar5[7] >> 3) * -0x71c71c71c71c71c7))) {
              *(undefined4 *)(plVar5 + 0xf) = 1;
            }
            FUN_140068f50(&local_1a8);
            *(int *)(plVar5 + 0xf) = (int)plVar5[0xf] + 1;
            uVar30 = (plVar5[8] - plVar5[7] >> 3) * -0x71c71c71c71c71c7;
            cVar7 = FUN_1400647b0(&local_1a8);
            param_2 = local_res10;
            while ((local_res10 = param_2, cVar7 == '\0' && (0 < (int)uVar30))) {
              uVar30 = (ulonglong)((int)uVar30 - 1);
              iVar23 = (int)((ulonglong)(longlong)(int)plVar5[0xf] %
                            (ulonglong)((plVar5[8] - plVar5[7] >> 3) * -0x71c71c71c71c71c7));
              *(int *)(plVar5 + 0xf) = iVar23;
              pppppuVar22 = (undefined8 *****)(plVar5[7] + (longlong)iVar23 * 0x48);
              if (&local_1a8 != pppppuVar22) {
                pppppuVar24 = pppppuVar22;
                if ((undefined8 ****)0xf < pppppuVar22[3]) {
                  pppppuVar24 = (undefined8 *****)*pppppuVar22;
                }
                FUN_14000f880(&local_1a8,pppppuVar24,pppppuVar22[2]);
              }
              local_188 = *(undefined4 *)(pppppuVar22 + 4);
              pppppcVar25 = (char *****)(pppppuVar22 + 5);
              if (&local_180 != pppppcVar25) {
                if ((undefined8 ****)0xf < pppppuVar22[8]) {
                  pppppcVar25 = (char *****)*pppppcVar25;
                }
                FUN_14000f880(&local_180,pppppcVar25,pppppuVar22[7]);
              }
              *(int *)(plVar5 + 0xf) = (int)plVar5[0xf] + 1;
              cVar7 = FUN_1400647b0(&local_1a8);
              param_2 = local_res10;
            }
          }
        }
      }
      else {
        *(undefined1 *)((longlong)local_1b8 + 0xe1) = 0;
        *(byte *)((longlong)local_1b8 + 0xe2) = (byte)uVar28 & 1;
        *(undefined4 *)(plVar5 + 0xf) = 0;
        FUN_140068f50(&local_1a8);
        *(int *)(plVar5 + 0xf) = (int)plVar5[0xf] + 1;
        uVar30 = (plVar5[8] - plVar5[7] >> 3) * -0x71c71c71c71c71c7;
        cVar7 = FUN_1400647b0(&local_1a8);
        param_2 = local_res10;
        while ((local_res10 = param_2, cVar7 == '\0' && (0 < (int)uVar30))) {
          uVar30 = (ulonglong)((int)uVar30 - 1);
          iVar23 = (int)((ulonglong)(longlong)(int)plVar5[0xf] %
                        (ulonglong)((plVar5[8] - plVar5[7] >> 3) * -0x71c71c71c71c71c7));
          *(int *)(plVar5 + 0xf) = iVar23;
          pppppuVar22 = (undefined8 *****)(plVar5[7] + (longlong)iVar23 * 0x48);
          if (&local_1a8 != pppppuVar22) {
            pppppuVar24 = pppppuVar22;
            if ((undefined8 ****)0xf < pppppuVar22[3]) {
              pppppuVar24 = (undefined8 *****)*pppppuVar22;
            }
            FUN_14000f880(&local_1a8,pppppuVar24,pppppuVar22[2]);
          }
          local_188 = *(undefined4 *)(pppppuVar22 + 4);
          pppppcVar25 = (char *****)(pppppuVar22 + 5);
          if (&local_180 != pppppcVar25) {
            if ((undefined8 ****)0xf < pppppuVar22[8]) {
              pppppcVar25 = (char *****)*pppppcVar25;
            }
            FUN_14000f880(&local_180,pppppcVar25,pppppuVar22[7]);
          }
          *(int *)(plVar5 + 0xf) = (int)plVar5[0xf] + 1;
          cVar7 = FUN_1400647b0(&local_1a8);
          param_2 = local_res10;
        }
      }
      goto LAB_1400683a4;
    }
LAB_1400683ac:
    lVar12 = 0;
    goto LAB_140068e85;
  }
  local_res8 = FUN_1402c83d4(0);
  ptVar10 = FID_conflict__localtime64((__time32_t *)&local_res8);
  lVar12 = plVar5[7];
  uVar30 = (plVar5[8] - lVar12 >> 3) * -0x71c71c71c71c71c7;
  if (uVar30 != 0) {
    do {
      pppppuVar22 = (undefined8 *****)(lVar12 + (longlong)iVar23 * 0x48);
      if ((float)(ptVar10->tm_hour * 0x3c + ptVar10->tm_min) / _DAT_140492948 <
          *(float *)(lVar12 + 0x20 + (longlong)iVar23 * 0x48)) {
        if (&local_1a8 != pppppuVar22) {
          pppppuVar24 = pppppuVar22;
          if ((undefined8 ****)0xf < pppppuVar22[3]) {
            pppppuVar24 = (undefined8 *****)*pppppuVar22;
          }
          FUN_14000f880(&local_1a8,pppppuVar24,pppppuVar22[2]);
        }
        local_188 = *(undefined4 *)(pppppuVar22 + 4);
        pppppcVar25 = (char *****)(pppppuVar22 + 5);
        if (&local_180 != pppppcVar25) {
          if ((undefined8 ****)0xf < pppppuVar22[8]) {
            pppppcVar25 = (char *****)*pppppcVar25;
          }
          FUN_14000f880(&local_180,pppppcVar25,pppppuVar22[7]);
        }
        break;
      }
      iVar23 = iVar23 + 1;
    } while ((ulonglong)(longlong)iVar23 < uVar30);
  }
LAB_140067c70:
  if (local_198 == 0) {
    lVar12 = plVar5[7];
    if (lVar12 != plVar5[8]) {
      FUN_140068f50(&local_1a8,lVar12 + ((plVar5[8] - lVar12 >> 3) + -9) * 8);
LAB_1400683a4:
      if (local_198 != 0) goto LAB_1400683b4;
    }
    goto LAB_1400683ac;
  }
LAB_1400683b4:
  lVar12 = local_1b8[6];
  if (lVar12 != 0) {
    sVar14 = *(size_t *)(lVar12 + 0xf0);
    puVar17 = (undefined8 *)(lVar12 + 0xe0);
    pppppuVar22 = &local_1a8;
    if (0xf < local_190) {
      pppppuVar22 = (undefined8 *****)local_1a8;
    }
    if (0xf < *(ulonglong *)(lVar12 + 0xf8)) {
      puVar17 = (undefined8 *)*puVar17;
    }
    if ((sVar14 == local_198) &&
       ((sVar14 == 0 || (iVar23 = memcmp(puVar17,pppppuVar22,sVar14), iVar23 == 0)))) {
      sVar14 = *(size_t *)(lVar12 + 0x130);
      puVar17 = (undefined8 *)(lVar12 + 0x120);
      pppppcVar25 = &local_180;
      if (0xf < local_168) {
        pppppcVar25 = (char *****)local_180;
      }
      if (0xf < *(ulonglong *)(lVar12 + 0x138)) {
        puVar17 = (undefined8 *)*puVar17;
      }
      if ((sVar14 == local_170) &&
         ((sVar14 == 0 || (iVar23 = memcmp(puVar17,pppppcVar25,sVar14), iVar23 == 0))))
      goto LAB_140068e85;
    }
  }
  DAT_1404e52e4 = DAT_1404e52e4 | 0x10000;
  FUN_140068fc0(&DAT_1404e52e0,param_2,plVar5 + 0x10);
  local_100 = CONCAT31(local_100._1_3_,7);
  local_100 = local_100 & 0xfffffeff;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  plVar11 = (longlong *)FUN_14028af20(0x10);
  *plVar11 = 0;
  plVar11[1] = 0;
  lVar12 = FUN_14028af20(0x58);
  *(longlong *)lVar12 = lVar12;
  *(longlong *)(lVar12 + 8) = lVar12;
  *(longlong *)(lVar12 + 0x10) = lVar12;
  *(undefined2 *)(lVar12 + 0x18) = 0x101;
  *plVar11 = lVar12;
  pppppcVar25 = &local_180;
  if (0xf < local_168) {
    pppppcVar25 = (char *****)local_180;
  }
  pppppuVar22 = &local_1a8;
  if (0xf < local_190) {
    pppppuVar22 = (undefined8 *****)local_1a8;
  }
  local_108 = plVar11;
  FUN_140063f00(pppppuVar22,pppppcVar25,&local_108);
  *(undefined4 *)((longlong)plVar5 + 0x7c) = 0;
  uVar13 = FUN_140085090(local_b8,&local_108);
  lVar12 = FUN_140072a70(extraout_XMM0_Qa,param_2,&local_1a8,0,uVar13);
  if (lVar12 != 0) {
    pppppcVar25 = &local_180;
    if (0xf < local_168) {
      pppppcVar25 = (char *****)local_180;
    }
    sVar14 = strlen((char *)pppppcVar25);
    FUN_14000f880(lVar12 + 0x120,pppppcVar25,sVar14);
  }
  FUN_14006e0c0();
  plVar5 = DAT_1404e5330;
  if ((DAT_1404e53d8 != 0) && ((DAT_1404e52e4 >> 0xe & 1) == 0)) {
    uVar28 = 0xffffffff;
    local_158._8_4_ = ((uint)local_158._8_4_ >> 8 & 0xfffffe) << 8;
    local_148 = 0;
    uStack_140 = 0;
    plVar11 = (longlong *)*DAT_1404e5330;
    local_138 = 0;
    lVar16 = DAT_1404e5370;
    if (plVar11 == DAT_1404e5330) {
LAB_140068d8a:
      FUN_140085440(&local_158);
      goto LAB_14006896f;
    }
    do {
      plVar3 = plVar11 + 2;
      plVar26 = plVar3;
      if (0xf < (ulonglong)plVar11[5]) {
        plVar26 = (longlong *)*plVar3;
      }
      uVar30 = 0;
      uVar31 = 0xcbf29ce484222325;
      if (plVar11[4] != 0) {
        do {
          pbVar1 = (byte *)(uVar30 + (longlong)plVar26);
          uVar30 = uVar30 + 1;
          uVar31 = (uVar31 ^ *pbVar1) * 0x100000001b3;
        } while (uVar30 < (ulonglong)plVar11[4]);
      }
      lVar15 = FUN_1400110a0(&DAT_1404e5368,&local_130,plVar3,uVar31);
      lVar21 = lVar16;
      if (*(longlong *)(lVar15 + 8) != 0) {
        lVar21 = *(longlong *)(lVar15 + 8);
      }
      if (((lVar21 != lVar16) && (plVar3 = (longlong *)plVar11[6], plVar3 != (longlong *)0x0)) &&
         (bVar2 = *(byte *)(lVar21 + 0x51), bVar2 < uVar28)) {
        uVar13 = (**(code **)(*plVar3 + 0x98))(plVar3,local_e0);
        uVar13 = FUN_140086de0(uVar13,"wproperties","");
        uVar13 = FUN_140086de0(uVar13,"schemecolor","");
        FUN_140085520(&local_158,uVar13);
        FUN_140085440();
        lVar16 = DAT_1404e5370;
        uVar28 = (uint)bVar2;
      }
      param_2 = local_res10;
      plVar11 = (longlong *)*plVar11;
    } while (plVar11 != plVar5);
    if (((uVar28 == 0xffffffff) || ((char)local_158.wHour != '\a')) ||
       (lVar16 = FUN_140086de0(&local_158,"value",""), *(char *)(lVar16 + 8) != '\x04'))
    goto LAB_140068d8a;
    puVar17 = (undefined8 *)FUN_140086de0(&local_158,"value");
    pcVar27 = (char *)*puVar17;
    if (pcVar27 == (char *)0x0) {
      fVar38 = 0.0;
      fVar37 = 0.0;
      fVar35 = 0.0;
    }
    else {
      if ((*(uint *)(puVar17 + 1) >> 8 & 1) != 0) {
        pcVar27 = pcVar27 + 4;
      }
      fVar38 = 0.0;
      fVar37 = 0.0;
      fVar35 = 0.0;
      if ((pcVar27 != (char *)0x0) && (*pcVar27 != '\0')) {
        dVar34 = (double)FUN_1402d06ac(pcVar27);
        fVar38 = (float)dVar34;
        cVar7 = *pcVar27;
        while (cVar7 != '\0') {
          if (*pcVar27 == ' ') goto LAB_140068760;
          pcVar27 = pcVar27 + 1;
          cVar7 = *pcVar27;
        }
        goto LAB_14006876d;
      }
    }
    goto LAB_1400687b1;
  }
  goto LAB_14006896f;
  while (pcVar27 = pcVar27 + 1, *pcVar27 != '\0') {
LAB_140068760:
    if (*pcVar27 != ' ') break;
  }
LAB_14006876d:
  dVar34 = (double)FUN_1402d06ac(pcVar27);
  fVar37 = (float)dVar34;
  cVar7 = *pcVar27;
  while (cVar7 != '\0') {
    if (*pcVar27 == ' ') goto LAB_140068798;
    pcVar27 = pcVar27 + 1;
    cVar7 = *pcVar27;
  }
  goto LAB_1400687a5;
  while (pcVar27 = pcVar27 + 1, *pcVar27 != '\0') {
LAB_140068798:
    if (*pcVar27 != ' ') break;
  }
LAB_1400687a5:
  dVar34 = (double)FUN_1402d06ac(pcVar27);
  fVar35 = (float)dVar34;
LAB_1400687b1:
  fVar4 = DAT_14049290c;
  uVar28 = (uint)(fVar38 * DAT_14049290c);
  if ((int)uVar28 < 0) {
    uVar28 = 0;
  }
  uVar32 = (uint)(fVar37 * DAT_14049290c);
  if (0xff < (int)uVar28) {
    uVar28 = 0xff;
  }
  if ((int)uVar32 < 0) {
    uVar32 = 0;
  }
  if (0xff < (int)uVar32) {
    uVar32 = 0xff;
  }
  uVar29 = (int)(fVar35 * DAT_14049290c);
  if ((int)(fVar35 * DAT_14049290c) < 0) {
    uVar29 = 0;
  }
  if (0xff < (int)uVar29) {
    uVar29 = 0xff;
  }
  local_res20[0] = uVar32;
  switch((char)local_158.wHour) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x05':
    break;
  case '\x04':
    if (((uint)local_158._8_4_ >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(CONCAT26(local_158.wDay,CONCAT24(local_158.wDayOfWeek,local_158._0_4_)));
    }
    break;
  case '\x06':
  case '\a':
    lVar16 = CONCAT26(local_158.wDay,CONCAT24(local_158.wDayOfWeek,local_158._0_4_));
    if (lVar16 != 0) {
      FUN_140088e40(lVar16);
      thunk_FUN_14028af80(lVar16,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  lVar16 = local_148;
  if (local_148 != 0) {
    FUN_140017240(local_148 + 0x40);
    FUN_140017240(lVar16 + 0x20);
    FUN_140017240(lVar16);
    thunk_FUN_14028af80(lVar16,0x60);
  }
  iVar23 = DAT_1404e53d8;
  if (DAT_1404e5290 < 10) {
    hModule = LoadLibraryW(L"dwmapi.dll");
    if (hModule != (HMODULE)0x0) {
      pFVar18 = GetProcAddress(hModule,"DwmIsCompositionEnabled");
      pFVar19 = GetProcAddress(hModule,(LPCSTR)0x7f);
      pFVar20 = GetProcAddress(hModule,(LPCSTR)0x83);
      if (((pFVar18 != (FARPROC)0x0) && (pFVar19 != (FARPROC)0x0)) && (pFVar20 != (FARPROC)0x0)) {
        (*pFVar18)(&local_res8);
        if ((uint)local_res8 != 0) {
          uVar29 = ((uVar28 | 0xffffff00) << 8 | local_res20[0]) << 8 | uVar29;
          (*pFVar19)(&local_130);
          local_130.s.HighPart = uVar29;
          local_130.s.LowPart = uVar29;
          (*pFVar20)(&local_130,0);
        }
      }
      goto LAB_140068952;
    }
  }
  else {
    hModule = LoadLibraryW(L"uxtheme.dll");
    param_2 = local_res10;
    if (hModule == (HMODULE)0x0) goto LAB_14006896f;
    local_130 = (LARGE_INTEGER)GetProcAddress(hModule,(LPCSTR)0x7a);
    if ((FARPROC)local_130.QuadPart == (FARPROC)0x0) goto LAB_140068952;
    local_res20[0] = 4;
    LVar9 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                          L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Accent",0,
                          0xf003f,&local_1b0);
    if (LVar9 == 0) {
      LVar9 = RegQueryValueExW(local_1b0,L"UseNewAutoColorAccentAlgorithm",(LPDWORD)0x0,(LPDWORD)0x0
                               ,(LPBYTE)&local_res8,local_res20);
      if ((LVar9 != 0) || ((uint)local_res8 != 0)) {
        local_res8 = local_res8 & 0xffffffff00000000;
        RegSetValueExW(local_1b0,L"UseNewAutoColorAccentAlgorithm",0,4,(BYTE *)&local_res8,4);
      }
      RegCloseKey(local_1b0);
    }
    LVar9 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                          L"Software\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",0,
                          0xf003f,&local_1b0);
    if (LVar9 == 0) {
      LVar9 = RegQueryValueExW(local_1b0,L"SystemUsesLightTheme",(LPDWORD)0x0,(LPDWORD)0x0,
                               (LPBYTE)&local_res8,local_res20);
      if ((LVar9 == 0) && ((uint)local_res8 != 0)) {
        bVar33 = true;
      }
      else {
        bVar33 = false;
      }
      RegCloseKey(local_1b0);
      if (!bVar33) goto LAB_140068b64;
    }
    else {
LAB_140068b64:
      if (iVar23 == 2) {
        LVar9 = RegOpenKeyExW((HKEY)0xffffffff80000001,
                              L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",0
                              ,0xf003f,&local_1b0);
        if (LVar9 == 0) {
          local_res8 = CONCAT44(local_res8._4_4_,1);
          LVar9 = RegQueryValueExW(local_1b0,L"ColorPrevalence",(LPDWORD)0x0,(LPDWORD)0x0,
                                   (LPBYTE)&local_res8,local_res20);
          if ((LVar9 != 0) || ((uint)local_res8 != 1)) {
            local_res8 = CONCAT44(local_res8._4_4_,1);
            RegSetValueExW(local_1b0,L"ColorPrevalence",0,4,(BYTE *)&local_res8,4);
          }
          RegCloseKey(local_1b0);
        }
        LVar9 = RegOpenKeyExW((HKEY)0xffffffff80000001,L"SOFTWARE\\Microsoft\\Windows\\DWM",0,
                              0xf003f,&local_1b0);
        if (LVar9 == 0) {
          local_res8 = CONCAT44(local_res8._4_4_,1);
          LVar9 = RegQueryValueExW(local_1b0,L"ColorPrevalence",(LPDWORD)0x0,(LPDWORD)0x0,
                                   (LPBYTE)&local_res8,local_res20);
          if ((LVar9 != 0) || ((uint)local_res8 != 1)) {
            local_res8 = CONCAT44(local_res8._4_4_,1);
            RegSetValueExW(local_1b0,L"ColorPrevalence",0,4,(BYTE *)&local_res8,4);
          }
          RegCloseKey(local_1b0);
        }
      }
      fVar38 = (float)(int)uVar32;
      fVar37 = (float)(int)uVar28;
      fVar36 = (float)(int)uVar29;
      fVar35 = (fVar38 * _DAT_1404926d0 + fVar37 * _DAT_140492684 + fVar36 * _DAT_140492650) / fVar4
               - _DAT_1404926c4;
      if (0.0 < fVar35) {
        uVar28 = (uint)(fVar37 - fVar37 * fVar35);
        uVar29 = (uint)(fVar36 - fVar36 * fVar35);
        uVar32 = (uint)(fVar38 - fVar38 * fVar35);
      }
    }
    local_158._0_4_ = ((uVar29 | 0xffffff00) << 8 | uVar32) << 8 | uVar28;
    local_158.wDayOfWeek = (WORD)local_158._0_4_;
    local_158.wDay = (WORD)((uint)local_158._0_4_ >> 0x10);
    (*(code *)local_130)(&local_158,1);
LAB_140068952:
    FreeLibrary(hModule);
    param_2 = local_res10;
  }
LAB_14006896f:
  lVar16 = FUN_140086de0(&DAT_1404e6378,"selectedwallpapers","");
  if ((lVar12 != 0) && (*(char *)(lVar16 + 8) == '\a')) {
    puVar17 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar17 = (undefined8 *)*param_2;
    }
    lVar21 = FUN_140086de0(lVar16,puVar17,param_2[2] + (longlong)puVar17);
    if (*(char *)(lVar21 + 8) == '\a') {
      FUN_140084fe0(&local_130,lVar12 + 0xe0);
      puVar17 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar17 = (undefined8 *)*param_2;
      }
      uVar13 = FUN_140086de0(lVar16,puVar17,param_2[2] + (longlong)puVar17);
      uVar13 = FUN_140086de0(uVar13,&DAT_140473b68,&DAT_140473b6c);
      FUN_140085610(uVar13,&local_130);
      FUN_140085440(&local_130);
    }
  }
  if (DAT_1404e6468 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6468 + 0x10))();
  }
  plVar5 = local_108;
  DAT_1404e52e4 = DAT_1404e52e4 | 0x200000;
  switch((undefined1)local_100) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 5:
    break;
  case 4:
    if ((local_100 >> 8 & 1) != 0) {
      thunk_FUN_1402d9040(local_108);
    }
    break;
  case 6:
  case 7:
    if (local_108 != (longlong *)0x0) {
      FUN_140088e40(local_108);
      thunk_FUN_14028af80(plVar5,0x10);
    }
    break;
  default:
    FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
  }
  lVar16 = local_f8;
  if (local_f8 != 0) {
    FUN_140017240(local_f8 + 0x40);
    FUN_140017240(lVar16 + 0x20);
    FUN_140017240(lVar16);
    thunk_FUN_14028af80(lVar16,0x60);
  }
LAB_140068e85:
  FUN_140017240(&local_180);
  FUN_140017240(&local_1a8);
  return lVar12;
}

