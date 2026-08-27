// Function: FUN_1400740d0
// Addr: 1400740d0
// Size: 3271 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400740d0(ulonglong param_1,longlong param_2)

{
  byte *pbVar1;
  char cVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  undefined7 uVar6;
  longlong *plVar7;
  byte bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *****pppppuVar17;
  undefined8 *puVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  byte bVar31;
  int iVar32;
  ulonglong uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  ulonglong uVar37;
  int iVar38;
  ulonglong uVar39;
  bool bVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [40];
  char local_148;
  char cStack_147;
  uint uStack_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined8 ****local_130;
  undefined8 uStack_128;
  size_t local_120;
  ulonglong local_118;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [8];
  char local_e0;
  undefined7 uStack_df;
  longlong local_d0 [3];
  ulonglong local_b8;
  longlong local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  undefined1 local_80 [64];
  
  puVar25 = auStack_178;
  uVar37 = 0;
  uVar39 = 0x100000001b3;
  puVar28 = (undefined8 *)*DAT_1404e5370;
  local_res8 = param_1;
  local_res10 = param_2;
  if (puVar28 != DAT_1404e5370) {
    do {
      lVar30 = DAT_1404e5380;
      puVar23 = DAT_1404e5370;
      if ((*(byte *)((longlong)puVar28 + 0x53) & 2) == 0) {
        *(byte *)((longlong)puVar28 + 0x53) = *(byte *)((longlong)puVar28 + 0x53) & 0xfe;
        *(undefined1 *)(puVar28 + 10) = 0xff;
        puVar23 = (undefined8 *)*puVar28;
      }
      else {
        if ((ulonglong)puVar28[5] < 0x10) {
          puVar22 = puVar28 + 2;
        }
        else {
          puVar22 = (undefined8 *)puVar28[2];
        }
        uVar20 = 0xcbf29ce484222325;
        uVar33 = uVar37;
        if (puVar28[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar22 + uVar33);
            uVar33 = uVar33 + 1;
            uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
          } while (uVar33 < (ulonglong)puVar28[4]);
        }
        uVar20 = uVar20 & _DAT_1404e5398;
        puVar22 = *(undefined8 **)(DAT_1404e5380 + uVar20 * 0x10);
        if (*(undefined8 **)(DAT_1404e5380 + 8 + uVar20 * 0x10) == puVar28) {
          if (puVar22 == puVar28) {
            *(undefined8 **)(DAT_1404e5380 + uVar20 * 0x10) = DAT_1404e5370;
            *(undefined8 **)(lVar30 + 8 + uVar20 * 0x10) = puVar23;
          }
          else {
            *(undefined8 *)(DAT_1404e5380 + 8 + uVar20 * 0x10) = puVar28[1];
          }
        }
        else if (puVar22 == puVar28) {
          *(undefined8 *)(DAT_1404e5380 + uVar20 * 0x10) = *puVar28;
        }
        puVar23 = (undefined8 *)*puVar28;
        DAT_1404e5378 = DAT_1404e5378 + -1;
        *(undefined8 **)puVar28[1] = puVar23;
        puVar23[1] = puVar28[1];
        FUN_140017240(puVar28 + 0x13);
        FUN_140017240(puVar28 + 6);
        FUN_140017240(puVar28 + 2);
        thunk_FUN_14028af80(puVar28,200);
      }
      puVar28 = puVar23;
    } while (puVar23 != DAT_1404e5370);
  }
  lVar30 = local_res10;
  uVar12 = FUN_140086de0(&DAT_1404e6378,"profile","");
  FUN_140085520(uVar12,lVar30);
  puVar23 = DAT_1404e5370;
  puVar28 = (undefined8 *)&DAT_1404e5368;
  if (DAT_1404e52e0 == 1) {
    iVar19 = 0x7fffffff;
    iVar36 = -0x80000000;
    iVar38 = 0x7fffffff;
    iVar34 = -0x80000000;
    iVar11 = -0x80000000;
    iVar15 = 0x7fffffff;
    puVar28 = (undefined8 *)*DAT_1404e5370;
    iVar35 = -0x80000000;
    puVar22 = puVar28;
    puVar26 = auStack_178;
    iVar10 = iVar38;
    if (puVar28 != DAT_1404e5370) {
      do {
        iVar32 = *(int *)(puVar22 + 0xb);
        if (iVar19 <= *(int *)(puVar22 + 0xb)) {
          iVar32 = iVar19;
        }
        iVar19 = iVar32;
        iVar32 = *(int *)((longlong)puVar22 + 0x5c);
        if (iVar38 <= *(int *)((longlong)puVar22 + 0x5c)) {
          iVar32 = iVar38;
        }
        iVar38 = iVar32;
        iVar32 = *(int *)(puVar22 + 0xc);
        if (*(int *)(puVar22 + 0xc) <= iVar36) {
          iVar32 = iVar36;
        }
        iVar36 = iVar32;
        iVar32 = *(int *)((longlong)puVar22 + 100);
        if (*(int *)((longlong)puVar22 + 100) <= iVar11) {
          iVar32 = iVar11;
        }
        iVar11 = iVar32;
        iVar32 = *(int *)(puVar22 + 0xd);
        if (iVar10 <= *(int *)(puVar22 + 0xd)) {
          iVar32 = iVar10;
        }
        iVar10 = *(int *)((longlong)puVar22 + 0x6c);
        if (iVar15 <= *(int *)((longlong)puVar22 + 0x6c)) {
          iVar10 = iVar15;
        }
        iVar15 = iVar10;
        iVar10 = *(int *)(puVar22 + 0xe);
        if (*(int *)(puVar22 + 0xe) <= iVar34) {
          iVar10 = iVar34;
        }
        iVar34 = iVar10;
        puVar18 = (undefined8 *)*puVar22;
        iVar10 = *(int *)((longlong)puVar22 + 0x74);
        if (*(int *)((longlong)puVar22 + 0x74) <= iVar35) {
          iVar10 = iVar35;
        }
        iVar35 = iVar10;
        puVar22 = puVar18;
        iVar10 = iVar32;
      } while (puVar18 != DAT_1404e5370);
      do {
        if (*(char *)((longlong)puVar28 + 0x51) == '\0') {
          *(byte *)((longlong)puVar28 + 0x53) = *(byte *)((longlong)puVar28 + 0x53) & 0xfe;
          *(int *)(puVar28 + 0xb) = iVar19;
          *(int *)((longlong)puVar28 + 0x5c) = iVar38;
          *(int *)(puVar28 + 0xc) = iVar36;
          *(int *)((longlong)puVar28 + 100) = iVar11;
          *(int *)(puVar28 + 0xd) = iVar32;
          *(int *)((longlong)puVar28 + 0x6c) = iVar15;
          *(int *)(puVar28 + 0xe) = iVar34;
          *(int *)((longlong)puVar28 + 0x74) = iVar35;
        }
        else {
          *(byte *)((longlong)puVar28 + 0x53) = *(byte *)((longlong)puVar28 + 0x53) | 1;
        }
        puVar28 = (undefined8 *)*puVar28;
        puVar26 = auStack_178;
      } while (puVar28 != puVar23);
    }
    goto LAB_140074c6f;
  }
  if (DAT_1404e52e0 == 2) {
    for (puVar28 = (undefined8 *)*DAT_1404e5370; puVar28 != puVar23;
        puVar28 = (undefined8 *)*puVar28) {
      *(undefined4 *)(puVar28 + 0xb) = *(undefined4 *)(puVar28 + 0xf);
      *(undefined4 *)((longlong)puVar28 + 0x5c) = *(undefined4 *)((longlong)puVar28 + 0x7c);
      *(undefined4 *)(puVar28 + 0xc) = *(undefined4 *)(puVar28 + 0x10);
      *(undefined4 *)((longlong)puVar28 + 100) = *(undefined4 *)((longlong)puVar28 + 0x84);
      puVar28[0xd] = puVar28[0x11];
      puVar28[0xe] = puVar28[0x12];
    }
    uStack_144 = 0;
    local_140 = 0x1fffffff;
    local_13c = 0x1fffffff;
    uVar39 = 0x10000000100;
    local_138 = -0x20000000;
    local_134 = -0x20000000;
    local_res8 = local_res8 & 0xffffffffffffff00;
    uVar12 = FUN_140086de0(lVar30,"monitorconfig","");
    FUN_1400316b0(local_98);
    puVar23 = DAT_1404e5370;
    for (puVar28 = (undefined8 *)*DAT_1404e5370; puVar28 != puVar23;
        puVar28 = (undefined8 *)*puVar28) {
      FUN_140032bc0(local_98,&local_f8,puVar28 + 2);
    }
    FUN_1400316b0(local_e8);
    FUN_140061a10(local_98,uVar12,local_e8);
    puVar23 = DAT_1404e5370;
    local_res18 = local_res18 & 0xffffffffffffff00;
    puVar28 = (undefined8 *)*DAT_1404e5370;
    uVar41 = local_f8;
    uVar42 = uStack_f4;
    uVar43 = uStack_f0;
    uVar44 = uStack_ec;
    if (puVar28 != DAT_1404e5370) {
      lVar30 = CONCAT71(uStack_df,local_e0);
      uVar37 = local_b8;
      do {
        uVar39 = puVar28[5];
        puVar22 = puVar28 + 2;
        uVar33 = puVar28[4];
        if (0xf < uVar39) {
          puVar22 = (undefined8 *)*puVar22;
        }
        uVar21 = 0;
        uVar20 = 0xcbf29ce484222325;
        if (uVar33 != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar22 + uVar21);
            uVar21 = uVar21 + 1;
            uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
          } while (uVar21 < uVar33);
        }
        puVar22 = puVar28 + 2;
        lVar13 = *(longlong *)(local_d0[0] + 8 + (uVar37 & uVar20) * 0x10);
        local_res20 = uVar39;
        if (lVar13 != lVar30) {
          lVar14 = *(longlong *)(local_d0[0] + (uVar37 & uVar20) * 0x10);
          while( true ) {
            puVar18 = (undefined8 *)(lVar13 + 0x10);
            if (0xf < *(ulonglong *)(lVar13 + 0x28)) {
              puVar18 = (undefined8 *)*puVar18;
            }
            puVar16 = puVar22;
            if (0xf < uVar39) {
              puVar16 = (undefined8 *)*puVar22;
            }
            if ((uVar33 == *(ulonglong *)(lVar13 + 0x20)) &&
               ((uVar33 == 0 ||
                (iVar11 = memcmp(puVar16,puVar18,uVar33), uVar39 = local_res20, iVar11 == 0))))
            goto LAB_140074519;
            if (lVar13 == lVar14) break;
            lVar13 = *(longlong *)(lVar13 + 8);
          }
        }
        lVar13 = 0;
LAB_140074519:
        uVar37 = local_b8;
        uVar6 = uStack_df;
        cVar2 = local_e0;
        if ((lVar13 == 0) || (lVar13 == lVar30)) {
          bVar8 = *(byte *)((longlong)puVar28 + 0x53) & 0xfb;
        }
        else {
          bVar8 = *(byte *)((longlong)puVar28 + 0x53) | 4;
        }
        *(byte *)((longlong)puVar28 + 0x53) = bVar8;
        if (*(char *)((longlong)puVar28 + 0x51) == '\0') {
          local_138 = *(int *)(puVar28 + 0xc);
          local_140 = *(int *)(puVar28 + 0xb);
          local_13c = *(int *)((longlong)puVar28 + 0x5c);
          local_134 = *(int *)((longlong)puVar28 + 100);
          uVar41 = *(undefined4 *)(puVar28 + 0xd);
          uVar42 = *(undefined4 *)((longlong)puVar28 + 0x6c);
          uVar43 = *(undefined4 *)(puVar28 + 0xe);
          uVar44 = *(undefined4 *)((longlong)puVar28 + 0x74);
          iVar11 = local_134 - local_13c;
          if (local_134 - local_13c < 1) {
            iVar11 = 0;
          }
          iVar15 = local_138 - local_140;
          if (local_138 - local_140 < 1) {
            iVar15 = 0;
          }
          local_res8 = CONCAT71(local_res8._1_7_,iVar11 <= iVar15);
          puVar18 = puVar22;
          if (0xf < uVar39) {
            puVar18 = (undefined8 *)*puVar22;
          }
          uVar21 = 0;
          uVar20 = 0xcbf29ce484222325;
          if (uVar33 != 0) {
            do {
              pbVar1 = (byte *)((longlong)puVar18 + uVar21);
              uVar21 = uVar21 + 1;
              uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
            } while (uVar21 < uVar33);
          }
          uVar29 = CONCAT71(uStack_df,local_e0);
          uVar21 = *(ulonglong *)(local_d0[0] + 8 + (local_b8 & uVar20) * 0x10);
          if (uVar21 != uVar29) {
            uVar20 = *(ulonglong *)(local_d0[0] + (local_b8 & uVar20) * 0x10);
            local_res18 = uVar20;
            while( true ) {
              puVar18 = (undefined8 *)(uVar21 + 0x10);
              if (0xf < *(ulonglong *)(uVar21 + 0x28)) {
                puVar18 = (undefined8 *)*puVar18;
              }
              puVar16 = puVar22;
              if (0xf < uVar39) {
                puVar16 = (undefined8 *)*puVar22;
              }
              if ((uVar33 == *(ulonglong *)(uVar21 + 0x20)) &&
                 ((uVar33 == 0 ||
                  (iVar11 = memcmp(puVar16,puVar18,uVar33), uVar20 = local_res18,
                  uVar39 = local_res20, iVar11 == 0)))) goto LAB_140074640;
              if (uVar21 == uVar20) break;
              uVar21 = *(ulonglong *)(uVar21 + 8);
            }
          }
          uVar21 = 0;
LAB_140074640:
          uVar39 = uVar29;
          if (uVar21 != 0) {
            uVar39 = uVar21;
          }
          local_res18 = CONCAT71(local_res18._1_7_,uVar39 != uVar29);
        }
        lVar30 = CONCAT71(uVar6,cVar2);
        puVar28 = (undefined8 *)*puVar28;
      } while (puVar28 != puVar23);
      uVar39 = local_res8 & 0xff;
      lVar30 = local_res10;
    }
    lVar13 = FUN_140086de0(lVar30,"source","");
    if (*(char *)(lVar13 + 8) == '\x04') {
      FUN_140085cc0(lVar13,&local_130);
    }
    else {
      local_120 = 0;
      uStack_128 = 0;
      local_130 = (undefined8 *****)0x0;
      local_118 = 0xf;
    }
    ppppuVar5 = local_130;
    puVar23 = DAT_1404e5370;
    cStack_147 = '\0';
    puVar28 = (undefined8 *)*DAT_1404e5370;
    if (puVar28 != DAT_1404e5370) {
      lVar30 = CONCAT71(uStack_df,local_e0);
      do {
        iVar11 = *(int *)(puVar28 + 0xc);
        puVar22 = puVar28 + 2;
        uVar9 = 0;
        iVar15 = iVar11 - *(int *)(puVar28 + 0xb);
        iVar10 = 0;
        local_104 = iVar15;
        if (iVar15 < 1) {
          local_104 = iVar10;
        }
        iVar19 = *(int *)((longlong)puVar28 + 100) - *(int *)((longlong)puVar28 + 0x5c);
        local_108 = iVar19;
        if (iVar19 < 1) {
          local_108 = iVar10;
        }
        local_fc = local_138 - local_140;
        if (local_138 - local_140 < 1) {
          local_fc = iVar10;
        }
        local_100 = local_134 - local_13c;
        if (local_134 - local_13c < 1) {
          local_100 = iVar10;
        }
        if (iVar15 < 1) {
          iVar15 = iVar10;
        }
        if (iVar19 < 1) {
          iVar19 = iVar10;
        }
        if (((char)uVar39 == '\0') && (iVar19 <= iVar15)) {
          uVar9 = 1;
LAB_140074760:
          local_res20 = CONCAT71(local_res20._1_7_,uVar9);
          local_res8 = CONCAT71(local_res8._1_7_,1);
          if (iVar19 <= iVar15) {
            local_res20 = CONCAT71(local_res20._1_7_,uVar9);
            goto LAB_140074795;
          }
          local_148 = '\0';
        }
        else {
          local_res20 = local_res20 & 0xffffffffffffff00;
          if (((char)uVar39 != '\0') || (iVar19 <= iVar15)) goto LAB_140074760;
          local_res8 = (ulonglong)local_res8._1_7_ << 8;
LAB_140074795:
          local_148 = '\x01';
        }
        uVar39 = puVar28[5];
        uVar37 = puVar28[4];
        if (0xf < uVar39) {
          puVar22 = (undefined8 *)*puVar22;
        }
        pppppuVar17 = &local_130;
        if (0xf < local_118) {
          pppppuVar17 = (undefined8 *****)ppppuVar5;
        }
        if (local_120 == uVar37) {
          if (local_120 == 0) {
            uVar41 = *(undefined4 *)(puVar28 + 0xd);
            uVar42 = *(undefined4 *)((longlong)puVar28 + 0x6c);
            uVar43 = *(undefined4 *)(puVar28 + 0xe);
            uVar44 = *(undefined4 *)((longlong)puVar28 + 0x74);
            uStack_144 = (uint)*(byte *)((longlong)puVar28 + 0x51);
LAB_14007490b:
            cStack_147 = '\x01';
          }
          else {
            iVar15 = memcmp(pppppuVar17,puVar22,local_120);
            bVar40 = iVar15 == 0;
            if (!bVar40) {
              uVar39 = puVar28[5];
              goto LAB_1400747fa;
            }
LAB_1400748fa:
            uStack_144 = (uint)*(byte *)((longlong)puVar28 + 0x51);
            uVar41 = *(undefined4 *)(puVar28 + 0xd);
            uVar42 = *(undefined4 *)((longlong)puVar28 + 0x6c);
            uVar43 = *(undefined4 *)(puVar28 + 0xe);
            uVar44 = *(undefined4 *)((longlong)puVar28 + 0x74);
            if (bVar40) goto LAB_14007490b;
          }
          local_res18 = local_res18 & 0xffffffffffffff00;
          local_140 = *(int *)(puVar28 + 0xb);
          local_13c = *(int *)((longlong)puVar28 + 0x5c);
          local_134 = *(int *)((longlong)puVar28 + 100);
          local_138 = iVar11;
        }
        else {
          bVar40 = false;
LAB_1400747fa:
          puVar22 = puVar28 + 2;
          if (cStack_147 == '\0') {
            if (0xf < uVar39) {
              puVar22 = (undefined8 *)*puVar22;
            }
            uVar33 = 0;
            uVar20 = 0xcbf29ce484222325;
            if (uVar37 != 0) {
              do {
                pbVar1 = (byte *)((longlong)puVar22 + uVar33);
                uVar33 = uVar33 + 1;
                uVar20 = (uVar20 ^ *pbVar1) * 0x100000001b3;
              } while (uVar33 < uVar37);
              lVar30 = CONCAT71(uStack_df,local_e0);
            }
            lVar13 = *(longlong *)(local_d0[0] + 8 + (local_b8 & uVar20) * 0x10);
            if (lVar13 != lVar30) {
              lVar14 = *(longlong *)(local_d0[0] + (local_b8 & uVar20) * 0x10);
              local_a8 = lVar14;
              while( true ) {
                puVar18 = puVar28 + 2;
                puVar22 = (undefined8 *)(lVar13 + 0x10);
                if (0xf < *(ulonglong *)(lVar13 + 0x28)) {
                  puVar22 = (undefined8 *)*puVar22;
                }
                if (0xf < uVar39) {
                  puVar18 = (undefined8 *)*puVar18;
                }
                if (uVar37 == *(ulonglong *)(lVar13 + 0x20)) {
                  if ((uVar37 == 0) || (iVar11 = memcmp(puVar18,puVar22,uVar37), iVar11 == 0))
                  goto LAB_1400748bd;
                  uVar39 = puVar28[5];
                  lVar14 = local_a8;
                }
                if (lVar13 == lVar14) break;
                lVar13 = *(longlong *)(lVar13 + 8);
              }
            }
            lVar13 = 0;
LAB_1400748bd:
            if (((lVar13 == 0) || (lVar13 == lVar30)) &&
               (((local_148 != '\0' && (local_100 * local_fc < local_108 * local_104)) ||
                (((char)local_res20 != '\0' || ((char)local_res18 != '\0')))))) {
              iVar11 = *(int *)(puVar28 + 0xc);
              goto LAB_1400748fa;
            }
          }
        }
        puVar28 = (undefined8 *)*puVar28;
        uVar39 = local_res8 & 0xff;
      } while (puVar28 != puVar23);
      for (puVar22 = (undefined8 *)*puVar23; puVar22 != puVar23; puVar22 = (undefined8 *)*puVar22) {
        bVar40 = *(char *)((longlong)puVar22 + 0x51) == '\0';
        bVar8 = *(byte *)((longlong)puVar22 + 0x53) | 1;
        if (bVar40) {
          bVar8 = *(byte *)((longlong)puVar22 + 0x53) & 0xfe;
        }
        *(byte *)((longlong)puVar22 + 0x53) = bVar8;
        puVar18 = DAT_1404e5370;
        if ((bVar40) && (uStack_144 != 0)) {
          for (puVar16 = (undefined8 *)*DAT_1404e5370; puVar16 != puVar18;
              puVar16 = (undefined8 *)*puVar16) {
            if (*(byte *)((longlong)puVar16 + 0x51) == uStack_144) {
              uVar12 = puVar22[0x10];
              puVar16[0xb] = puVar22[0xf];
              puVar16[0xc] = uVar12;
              uVar12 = puVar22[0x12];
              puVar16[0xd] = puVar22[0x11];
              puVar16[0xe] = uVar12;
              bVar8 = *(byte *)((longlong)puVar22 + 0x53);
              bVar31 = bVar8 | 4;
              if ((*(byte *)((longlong)puVar16 + 0x53) & 4) == 0) {
                bVar31 = bVar8 & 0xfb;
              }
              *(byte *)((longlong)puVar22 + 0x53) = bVar31;
              if ((bVar8 & 4) == 0) {
                bVar8 = *(byte *)((longlong)puVar16 + 0x53) & 0xfb;
              }
              else {
                bVar8 = *(byte *)((longlong)puVar16 + 0x53) | 4;
              }
              *(byte *)((longlong)puVar16 + 0x53) = bVar8;
            }
          }
          *(int *)(puVar22 + 0xb) = local_140;
          *(int *)((longlong)puVar22 + 0x5c) = local_13c;
          *(int *)(puVar22 + 0xc) = local_138;
          *(int *)((longlong)puVar22 + 100) = local_134;
          uStack_144 = 0;
          *(undefined4 *)(puVar22 + 0xd) = uVar41;
          *(undefined4 *)((longlong)puVar22 + 0x6c) = uVar42;
          *(undefined4 *)(puVar22 + 0xe) = uVar43;
          *(undefined4 *)((longlong)puVar22 + 0x74) = uVar44;
        }
      }
    }
    uVar37 = local_118;
    if (0xf < local_118) {
      uVar33 = local_118 + 1;
      pppppuVar17 = (undefined8 *****)local_130;
      if (0xfff < uVar33) {
        pppppuVar17 = (undefined8 *****)local_130[-1];
        if (0x1f < (ulonglong)((longlong)local_130 + (-8 - (longlong)pppppuVar17))) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar25 = auStack_170;
          goto LAB_140074ad0;
        }
        uVar33 = local_118 + 0x28;
      }
      thunk_FUN_14028af80(pppppuVar17,uVar33);
    }
    uVar37 = 0;
    local_118 = 0xf;
    local_120 = 0;
    local_130 = (undefined8 ****)((ulonglong)local_130 & 0xffffffffffffff00);
    FUN_14000d9e0(local_d0);
    FUN_140031340(&local_e0);
    FUN_14000d9e0(local_80);
    FUN_140031340(local_90);
    puVar26 = auStack_178;
  }
  else {
LAB_140074ad0:
    *(undefined8 *)(puVar25 + -8) = 0x140074ae6;
    uVar12 = FUN_140086de0(lVar30,"groups","");
    *(undefined8 *)(puVar25 + -8) = 0x140074af2;
    FUN_140085090(local_e8,uVar12);
    *(undefined8 *)(puVar25 + -8) = 0x140074b08;
    uVar12 = FUN_140086de0(lVar30,"splits","");
    *(undefined8 *)(puVar25 + -8) = 0x140074b15;
    FUN_140085090(puVar25 + 0x48,uVar12);
    if (puVar25[0x50] == '\a') {
      uVar33 = uVar37 & 0xffffffff;
      if (0 < (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f) {
        do {
          local_res8 = CONCAT44(local_res8._4_4_,(int)uVar37);
          lVar30 = (longlong)(int)uVar33 * 0x88 + DAT_1404e8ec8;
          puVar23 = (undefined8 *)(lVar30 + 0x18);
          puVar28 = puVar23;
          if (0xf < *(ulonglong *)(lVar30 + 0x30)) {
            puVar28 = (undefined8 *)*puVar23;
          }
          lVar13 = *(longlong *)(lVar30 + 0x28);
          *(undefined8 *)(puVar25 + -8) = 0x140074b86;
          lVar13 = FUN_140086de0(puVar25 + 0x48,puVar28,lVar13 + (longlong)puVar28);
          puVar28 = puVar23;
          if (0xf < *(ulonglong *)(lVar30 + 0x30)) {
            puVar28 = (undefined8 *)*puVar23;
          }
          uVar21 = 0xcbf29ce484222325;
          uVar20 = uVar37;
          if (*(ulonglong *)(lVar30 + 0x28) != 0) {
            do {
              pbVar1 = (byte *)((longlong)puVar28 + uVar20);
              uVar20 = uVar20 + 1;
              uVar21 = (uVar21 ^ *pbVar1) * uVar39;
            } while (uVar20 < *(ulonglong *)(lVar30 + 0x28));
          }
          puVar28 = (undefined8 *)&DAT_1404e5368;
          *(undefined8 *)(puVar25 + -8) = 0x140074bda;
          lVar30 = FUN_1400110a0(&DAT_1404e5368,&local_f8,puVar23,uVar21);
          puVar22 = DAT_1404e5370;
          if (*(undefined8 **)(lVar30 + 8) != (undefined8 *)0x0) {
            puVar22 = *(undefined8 **)(lVar30 + 8);
          }
          if (((*(char *)(lVar13 + 8) == '\a') && (puVar22 != DAT_1404e5370)) &&
             ((*(byte *)((longlong)puVar22 + 0x53) & 1) == 0)) {
            *(ulonglong **)(puVar25 + 0x28) = &local_res8;
            *(undefined **)(puVar25 + 0x20) = &DAT_1404e5368;
            *(undefined8 *)(puVar25 + -8) = 0x140074c27;
            FUN_140061280(puVar23,puVar25 + 0x48,lVar13,puVar22 + 6);
          }
          uVar27 = (int)uVar33 + 1;
          uVar33 = (ulonglong)uVar27;
        } while ((int)uVar27 < (int)(DAT_1404e8ed0 - DAT_1404e8ec8 >> 3) * -0xf0f0f0f);
      }
    }
    if (local_e0 == '\a') {
      *(undefined8 *)(puVar25 + -8) = 0x140074c5c;
      FUN_140061b50(local_e8,puVar28);
    }
    *(undefined8 *)(puVar25 + -8) = 0x140074c66;
    FUN_140085440(puVar25 + 0x48);
    *(undefined8 *)(puVar25 + -8) = 0x140074c6f;
    FUN_140085440(local_e8);
    puVar26 = puVar25;
  }
LAB_140074c6f:
  *(undefined8 *)(puVar26 + -8) = 0x140074c82;
  FUN_140064450(&DAT_1404e53a8,&DAT_1404e5368);
  *(undefined8 *)(puVar26 + -8) = 0x140074c8e;
  iVar11 = FUN_140290d80(&DAT_1404e6290);
  if (iVar11 != 0) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar26 + -8) = &UNK_140074d98;
    FUN_140290d30(5);
  }
  if (DAT_1404e62dc != 0x7fffffff) {
    plVar24 = (longlong *)*DAT_1404e6270;
    cVar2 = *(char *)((longlong)plVar24 + 0x19);
    while (cVar2 == '\0') {
      if ((longlong *)plVar24[9] != (longlong *)0x0) {
        pcVar3 = *(code **)(*(longlong *)plVar24[9] + 0x28);
        *(undefined8 *)(puVar26 + -8) = 0x140074cc4;
        (*pcVar3)();
      }
      plVar4 = (longlong *)plVar24[2];
      if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar4 + 0x19);
        plVar24 = plVar4;
        while (cVar2 == '\0') {
          plVar24 = (longlong *)*plVar24;
          cVar2 = *(char *)(*plVar24 + 0x19);
        }
      }
      else {
        cVar2 = *(char *)(plVar24[1] + 0x19);
        plVar7 = (longlong *)plVar24[1];
        plVar4 = plVar24;
        while ((plVar24 = plVar7, cVar2 == '\0' && (plVar4 == (longlong *)plVar24[2]))) {
          cVar2 = *(char *)(plVar24[1] + 0x19);
          plVar7 = (longlong *)plVar24[1];
          plVar4 = plVar24;
        }
      }
      cVar2 = *(char *)((longlong)plVar24 + 0x19);
    }
    *(undefined8 *)(puVar26 + -8) = 0x140074d1e;
    FUN_140290ea0(&DAT_1404e6290);
    DAT_1404e52ec = (uint)uVar37;
    uVar37 = uVar37 & 0xffffffff;
    for (puVar28 = (undefined8 *)*DAT_1404e5370; puVar28 != DAT_1404e5370;
        puVar28 = (undefined8 *)*puVar28) {
      DAT_1404e52ec = (uint)uVar37 | 1 << (*(byte *)((longlong)puVar28 + 0x51) & 0x1f);
      uVar37 = (ulonglong)DAT_1404e52ec;
    }
    return;
  }
  DAT_1404e62dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar26 + -8) = &UNK_140074d8d;
  FUN_140290d30(6);
}

