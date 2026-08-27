// Function: FUN_1401e7170
// Addr: 1401e7170
// Size: 6442 bytes


/* WARNING: Removing unreachable block (ram,0x0001401e7dff) */

undefined8 FUN_1401e7170(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  size_t _Size;
  longlong *******ppppppplVar2;
  undefined4 *puVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *******ppppppplVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  size_t sVar20;
  undefined8 uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  longlong lVar24;
  longlong ******pppppplVar25;
  longlong *******ppppppplVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  undefined8 *******pppppppuVar31;
  undefined8 *******pppppppuVar32;
  ulonglong *puVar33;
  longlong *******ppppppplVar34;
  uint uVar35;
  int iVar36;
  ulonglong uVar37;
  undefined8 ******ppppppuVar38;
  longlong *plVar39;
  undefined1 *puVar40;
  char *pcVar41;
  ulonglong uVar42;
  undefined8 *******pppppppuVar43;
  bool bVar44;
  bool bVar45;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [24];
  char local_208;
  undefined8 local_200;
  uint local_1f8;
  longlong ******local_1f0;
  undefined8 *****pppppuStack_1e8;
  undefined8 *****local_1e0;
  ulonglong local_1d8;
  undefined8 *local_1d0;
  ulonglong local_1c8;
  undefined8 local_1c0;
  undefined8 ******local_1b8;
  undefined8 ******ppppppuStack_1b0;
  undefined8 *****local_1a8;
  ulonglong local_1a0;
  undefined4 local_198 [2];
  longlong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulonglong *puStack_178;
  ulonglong *local_170;
  ulonglong *local_168;
  ulonglong *puStack_160;
  undefined8 ******local_158 [2];
  size_t local_148;
  ulonglong local_140;
  ulonglong local_138;
  undefined8 local_128;
  uint local_120;
  undefined1 local_11c;
  undefined2 local_11a;
  undefined2 local_118;
  undefined2 local_116;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 local_a0;
  ulonglong local_98;
  undefined1 local_90 [8];
  uint local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  
  puVar40 = auStack_228;
  uVar16 = 0;
  local_1f8 = 0;
  FUN_140084dd0(local_68,0);
  FUN_1400d3f80(&local_b0,*(undefined8 *)(param_1[0x19] + 0x1898),param_2,1);
  cVar9 = FUN_140017840(&local_b0,local_68,0);
  if (cVar9 == '\0') {
    FUN_140098760("Failed loading effect: %s\n",param_2);
  }
  else {
    puVar15 = (undefined8 *)FUN_14028af20(0x148);
    puVar15[2] = param_1[0x19] + 0x1c88;
    puVar15[1] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = 0;
    puVar15[8] = 0;
    *puVar15 = &PTR_FUN_1404905c0;
    local_1d0 = puVar15;
    FUN_140153760(puVar15 + 9);
    puVar15[0x1b] = 0;
    local_b8 = puVar15 + 0x1a;
    *local_b8 = 0;
    puVar15[0x1c] = 0;
    puVar15[0x19] = param_1;
    puVar15[0x1e] = 0;
    puVar15[0x1f] = 0;
    local_c8 = puVar15 + 0x1d;
    *local_c8 = 0;
    puVar15[0x20] = 0;
    puVar15[0x21] = 0;
    puVar15[0x22] = 0;
    *(undefined4 *)(puVar15 + 0x23) = 1;
    puVar15[0x24] = 0;
    puVar15[0x25] = 0;
    puVar15[0x26] = 0;
    puVar15[0x27] = 0xf;
    *(undefined1 *)(puVar15 + 0x24) = 0;
    puVar15[0x28] = 0;
    FUN_1401a38f0(puVar15 + 1,param_4);
    local_c0 = puVar15;
    if (param_4 == 0) {
      uVar16 = FUN_140084ac0();
      local_200 = uVar16;
    }
    else {
      uVar16 = FUN_140086de0(param_4,"combos","");
      local_200 = uVar16;
      FUN_1401730d0(param_1[0x19] + 0x1708,puVar15,param_4);
    }
    plVar17 = (longlong *)FUN_140086de0(local_68,&DAT_140490724,&DAT_140490728);
    uVar35 = *(uint *)(plVar17 + 1) & 0xff;
    if (((uVar35 == 6) || (uVar35 == 7)) && ((undefined8 *)*plVar17 != (undefined8 *)0x0)) {
      cVar9 = '\0';
      local_1b8 = (undefined8 ******)**(undefined8 **)*plVar17;
    }
    else {
      local_1b8 = (undefined8 *******)0x0;
      cVar9 = '\x01';
    }
    pppppppuVar32 = (undefined8 *******)0x0;
    ppppppuStack_1b0 = (undefined8 ******)CONCAT71(ppppppuStack_1b0._1_7_,cVar9);
    if (((uVar35 == 6) || (uVar35 == 7)) && ((undefined8 *)*plVar17 != (undefined8 *)0x0)) {
      pppppppuVar32 = *(undefined8 ********)*plVar17;
      bVar45 = false;
    }
    else {
      bVar45 = true;
    }
    while( true ) {
      bVar44 = bVar45;
      if (cVar9 == '\0') {
        bVar44 = (undefined8 *******)local_1b8 == pppppppuVar32;
      }
      if (bVar44) break;
      pppppppuVar43 = (undefined8 *******)(local_1b8 + 6);
      uVar18 = FUN_140086de0(pppppppuVar43,"conditions","");
      cVar9 = FUN_1401e63b0(uVar18,uVar16);
      uVar18 = uVar16;
      if (cVar9 != '\0') {
        lVar19 = FUN_140086de0(pppppppuVar43,&DAT_1404748b8,&DAT_1404748bc);
        plVar17 = (longlong *)FUN_140086de0(pppppppuVar43,"format","");
        puVar15 = local_1d0;
        if ((*(char *)(lVar19 + 8) == '\x04') && ((char)plVar17[1] == '\x04')) {
          uVar16 = FUN_140086de0(pppppppuVar43,"scale","");
          local_1c0 = FUN_140086de0(pppppppuVar43,&DAT_140490744,&DAT_140490747);
          local_1c8 = FUN_140086de0(pppppppuVar43,"width","");
          local_d8 = FUN_140086de0(pppppppuVar43,"height","");
          local_d0 = FUN_140086de0(pppppppuVar43,"unique","");
          puVar15 = (undefined8 *)FUN_140086de0(pppppppuVar43,"clear","");
          local_138 = FUN_140086de0(pppppppuVar43,&DAT_1404907b0,&DAT_1404907b3);
          pcVar41 = (char *)*plVar17;
          uVar35 = 0;
          uVar14 = 0;
          local_114 = 0;
          local_10c = 0;
          local_f0 = 0;
          local_e8 = 0xf;
          local_e0 = 0;
          uStack_f8 = 0;
          local_100 = 0;
          if (pcVar41 == (char *)0x0) {
            pcVar41 = (char *)0x0;
          }
          else if ((*(uint *)(plVar17 + 1) >> 8 & 1) != 0) {
            pcVar41 = pcVar41 + 4;
          }
          iVar11 = FUN_1402c10d0("rgba_backbuffer",pcVar41);
          if (iVar11 == 0) {
            local_120 = -(uint)((*(uint *)(param_1[0x19] + 0x118) & 0x2000) != 0) & 0xe;
          }
          else {
            iVar11 = FUN_1402c10d0("rgb_backbuffer",pcVar41);
            if (iVar11 == 0) {
              local_120 = 1;
              if ((*(uint *)(param_1[0x19] + 0x118) & 0x2000) != 0) {
                local_120 = 0xf;
              }
            }
            else {
              local_1e0 = (undefined8 ******)0x0;
              local_1d8 = 0;
              local_1f0 = (longlong ******)0x0;
              pppppuStack_1e8 = (undefined8 ******)0x0;
              sVar20 = strlen(pcVar41);
              FUN_140017480(&local_1f0,pcVar41,sVar20);
              local_120 = FUN_1401e53a0(&local_1f0);
              if (0xf < local_1d8) {
                FUN_140017200(&local_1f0,local_1f0);
              }
            }
          }
          local_128 = 0;
          if ((char)*(uint *)(puVar15 + 1) == '\x04') {
            pcVar41 = (char *)*puVar15;
            if (pcVar41 == (char *)0x0) {
              local_114 = 0;
              local_10c = 0;
            }
            else {
              if ((*(uint *)(puVar15 + 1) >> 8 & 1) != 0) {
                pcVar41 = pcVar41 + 4;
              }
              local_114 = 0;
              local_10c = 0;
              if ((pcVar41 != (char *)0x0) && (*pcVar41 != '\0')) {
                dVar5 = (double)FUN_1402d06ac();
                cVar9 = *pcVar41;
                local_114 = CONCAT44(local_114._4_4_,(float)dVar5);
                for (; (cVar10 = '\0', cVar9 != '\0' && (cVar10 = *pcVar41, cVar10 != ' '));
                    pcVar41 = pcVar41 + 1) {
                  cVar9 = pcVar41[1];
                }
                bVar44 = false;
                if (cVar10 != '\0') {
                  do {
                    bVar6 = bVar44;
                    if (*pcVar41 != ' ') break;
                    pcVar41 = pcVar41 + 1;
                    bVar6 = true;
                    bVar44 = true;
                  } while (*pcVar41 != '\0');
                  if (bVar6) {
                    dVar5 = (double)FUN_1402d06ac();
                    cVar9 = *pcVar41;
                    local_114 = CONCAT44((float)dVar5,(undefined4)local_114);
                    for (; (cVar10 = '\0', cVar9 != '\0' && (cVar10 = *pcVar41, cVar10 != ' '));
                        pcVar41 = pcVar41 + 1) {
                      cVar9 = pcVar41[1];
                    }
                    bVar44 = false;
                    uVar35 = uVar14;
                    if (cVar10 != '\0') {
                      do {
                        bVar6 = bVar44;
                        if (*pcVar41 != ' ') break;
                        pcVar41 = pcVar41 + 1;
                        bVar6 = true;
                        bVar44 = true;
                      } while (*pcVar41 != '\0');
                      if (bVar6) {
                        dVar5 = (double)FUN_1402d06ac();
                        cVar9 = *pcVar41;
                        local_10c = CONCAT44(local_10c._4_4_,(float)dVar5);
                        for (; (cVar10 = '\0', cVar9 != '\0' && (cVar10 = *pcVar41, cVar10 != ' '));
                            pcVar41 = pcVar41 + 1) {
                          cVar9 = pcVar41[1];
                        }
                        bVar44 = false;
                        if (cVar10 != '\0') {
                          do {
                            if (*pcVar41 != ' ') {
                              if (!bVar44) goto LAB_1401e777b;
                              break;
                            }
                            pcVar41 = pcVar41 + 1;
                            bVar44 = true;
                          } while (*pcVar41 != '\0');
                          dVar5 = (double)FUN_1402d06ac(pcVar41);
                          local_10c = CONCAT44((float)dVar5,(undefined4)local_10c);
                          goto LAB_1401e7771;
                        }
                      }
                    }
                  }
                }
                goto LAB_1401e777b;
              }
            }
LAB_1401e7771:
            local_e0 = 2;
            uVar35 = 2;
          }
LAB_1401e777b:
          puVar15 = (undefined8 *)FUN_140085cc0(lVar19,local_158);
          if (&local_100 != puVar15) {
            local_100 = *puVar15;
            uStack_f8 = puVar15[1];
            local_f0 = puVar15[2];
            local_e8 = puVar15[3];
            puVar15[2] = 0;
            puVar15[3] = 0xf;
            *(undefined1 *)puVar15 = 0;
          }
          FUN_140017240(local_158);
          cVar9 = FUN_1400886e0(uVar16);
          if (cVar9 == '\0') {
            local_11c = 1;
          }
          else {
            local_11c = FUN_140085ee0(uVar16);
          }
          uVar37 = local_1c0;
          cVar9 = FUN_1400886e0(local_1c0);
          if (cVar9 == '\0') {
            local_116 = 0xffff;
          }
          else {
            local_116 = FUN_140085ee0(uVar37);
          }
          uVar37 = local_1c8;
          cVar9 = FUN_1400886e0(local_1c8);
          if (cVar9 == '\0') {
            local_11a = 0xffff;
          }
          else {
            local_11a = FUN_140085ee0(uVar37);
          }
          uVar16 = local_d8;
          cVar9 = FUN_1400886e0(local_d8);
          if (cVar9 == '\0') {
            local_118 = 0xffff;
          }
          else {
            local_118 = FUN_140085ee0(uVar16);
          }
          uVar14 = uVar35;
          if (*(char *)(local_d0 + 8) == '\x05') {
            cVar9 = FUN_140086300(local_d0);
            if (cVar9 != '\0') {
              local_e0 = uVar35 | 1;
            }
            uVar14 = uVar35 | 1;
            if (cVar9 == '\0') {
              uVar14 = uVar35;
            }
          }
          uVar16 = local_200;
          uVar35 = local_1f8;
          if (*(char *)(local_138 + 8) == '\x04') {
            uVar35 = local_1f8 | 1;
            local_1f8 = uVar35;
            puVar15 = (undefined8 *)FUN_140085cc0(local_138,local_158);
            uVar16 = local_200;
            plVar17 = puVar15 + 2;
            if (0xf < (ulonglong)puVar15[3]) {
              puVar15 = (undefined8 *)*puVar15;
            }
            if ((*plVar17 != 6) || (iVar11 = memcmp(puVar15,"repeat",6), iVar11 != 0))
            goto LAB_1401e78f2;
            bVar44 = true;
          }
          else {
LAB_1401e78f2:
            bVar44 = false;
            local_200 = uVar16;
          }
          if ((uVar35 & 1) != 0) {
            local_1f8 = uVar35 & 0xfffffffe;
            FUN_140017240(local_158);
          }
          puVar15 = local_1d0;
          if (bVar44) {
            local_e0 = uVar14 | 4;
          }
          if (local_1d0[0x1e] == local_1d0[0x1f]) {
            FUN_1401f0ab0(local_1d0 + 0x1d,local_1d0[0x1e],&local_128);
            FUN_140017240(&local_100);
            uVar18 = local_200;
          }
          else {
            FUN_1401f1440();
            puVar15[0x1e] = puVar15[0x1e] + 0x50;
            FUN_140017240(&local_100);
            uVar18 = local_200;
          }
        }
      }
      local_200 = uVar18;
      FUN_1400175a0(&local_1b8);
      cVar9 = (char)ppppppuStack_1b0;
    }
    uVar18 = FUN_140086de0(local_68,"passes","");
    local_d8 = uVar18;
    iVar11 = FUN_1400863a0(uVar18);
    if (iVar11 != 0) {
      uVar35 = 0;
      local_1c8 = local_1c8 & 0xffffffff00000000;
      do {
        lVar19 = FUN_140086540(uVar18,uVar35);
        local_d0 = lVar19;
        uVar21 = FUN_140086de0(lVar19,"conditions","");
        cVar9 = FUN_1401e63b0(uVar21,uVar16);
        if (cVar9 != '\0') {
          local_88 = (local_88 >> 8 & 0xfffffe) << 8;
          local_70 = 0;
          local_80 = 0;
          uStack_78 = 0;
          if ((param_4 == 0) ||
             (lVar22 = FUN_140086de0(param_4,"passes",""), *(char *)(lVar22 + 8) != '\x06')) {
            puVar23 = local_90;
          }
          else {
            uVar18 = FUN_140086de0(param_4,"passes","");
            puVar23 = (undefined1 *)FUN_140086540(uVar18,uVar35);
          }
          plVar17 = (longlong *)FUN_140086de0(lVar19,"material","");
          lVar22 = 0;
          uStack_188 = CONCAT62(uStack_188._2_6_,0xffff);
          local_198[0] = 0;
          local_180 = 0;
          puStack_178 = (ulonglong *)0x0;
          local_190 = 0;
          uStack_188 = CONCAT44(4,(undefined4)uStack_188);
          local_170 = (ulonglong *)0x0;
          if ((char)plVar17[1] == '\x04') {
            (**(code **)(*param_1 + 200))(param_1,puVar23);
            lVar24 = *plVar17;
            if ((lVar24 != 0) && (lVar22 = lVar24, (*(uint *)(plVar17 + 1) >> 8 & 1) != 0)) {
              lVar22 = lVar24 + 4;
            }
            local_190 = FUN_140150770(param_1[0x19] + 0x1630,lVar22,puVar23);
            if (local_190 != 0) {
              if ((*(byte *)(local_190 + 0x1fc) & 2) != 0) {
                *(uint *)(puVar15 + 0x23) = *(uint *)(puVar15 + 0x23) | 2;
              }
              if ((*(longlong **)(local_190 + 0x1e0) != (longlong *)0x0) &&
                 (uVar37 = (**(code **)(**(longlong **)(local_190 + 0x1e0) + 0x20))(),
                 (uVar37 & 4) != 0)) {
                uStack_188 = uStack_188 | 0x100000000;
              }
            }
          }
          lVar22 = FUN_140086de0(lVar19,"command","");
          if (*(char *)(lVar22 + 8) == '\x04') {
            uVar18 = FUN_140086de0(lVar19,"command","");
            FUN_140085cc0(uVar18,local_158);
            uVar37 = local_140;
            sVar20 = local_148;
            ppppppuVar38 = local_158[0];
            pppppppuVar32 = local_158;
            if (0xf < local_140) {
              pppppppuVar32 = (undefined8 *******)local_158[0];
            }
            if ((local_148 == 4) && (iVar11 = memcmp(pppppppuVar32,&DAT_1404905b8,4), iVar11 == 0))
            {
              local_198[0] = 1;
            }
            else {
              pppppppuVar32 = local_158;
              if (0xf < uVar37) {
                pppppppuVar32 = (undefined8 *******)ppppppuVar38;
              }
              if ((sVar20 == 4) && (iVar11 = memcmp(pppppppuVar32,&DAT_140474f0c,4), iVar11 == 0)) {
                local_198[0] = 2;
              }
            }
            FUN_140017240(local_158);
          }
          iVar11 = 0;
          local_200 = uVar16;
          lVar22 = FUN_140086de0(lVar19,"target","");
          lVar24 = FUN_140086de0(lVar19,"source","");
          if (*(char *)(lVar22 + 8) == '\x04') {
            FUN_140085cc0(lVar22,&local_1f0);
          }
          else {
            local_1e0 = (undefined8 ******)0x0;
            pppppuStack_1e8 = (undefined8 ******)0x0;
            local_1f0 = (longlong ******)0x0;
            local_1d8 = 0xf;
          }
          if (*(char *)(lVar24 + 8) == '\x04') {
            FUN_140085cc0(lVar24,&local_1b8);
          }
          else {
            local_1a8 = (undefined8 ******)0x0;
            ppppppuStack_1b0 = (undefined8 *******)0x0;
            local_1b8 = (undefined8 *******)0x0;
            local_1a0 = 0xf;
          }
          uVar37 = local_1d8;
          local_138 = puVar15[0x1e];
          lVar22 = puVar15[0x1d];
          if (((longlong)(local_138 - lVar22) >> 4) * -0x3333333333333333 != 0) {
            do {
              lVar19 = (longlong)iVar11 * 0x50;
              uVar42 = *(ulonglong *)(lVar19 + 0x40 + lVar22);
              ppppppuVar38 = *(undefined8 *******)(lVar19 + 0x38 + lVar22);
              puVar15 = (undefined8 *)(lVar19 + 0x28 + lVar22);
              ppppppplVar34 = &local_1f0;
              if (0xf < uVar37) {
                ppppppplVar34 = (longlong *******)local_1f0;
              }
              puVar29 = puVar15;
              if (0xf < uVar42) {
                puVar29 = (undefined8 *)*puVar15;
              }
              if ((ppppppuVar38 == (undefined8 ******)local_1e0) &&
                 ((ppppppuVar38 == (undefined8 ******)0x0 ||
                  (iVar12 = memcmp(puVar29,ppppppplVar34,(size_t)ppppppuVar38), iVar12 == 0)))) {
                uStack_188 = CONCAT71(uStack_188._1_7_,(char)iVar11);
                ppppppuVar38 = *(undefined8 *******)(lVar19 + 0x38 + lVar22);
                uVar42 = *(ulonglong *)(lVar19 + 0x40 + lVar22);
              }
              pppppppuVar32 = &local_1b8;
              if (0xf < local_1a0) {
                pppppppuVar32 = (undefined8 *******)local_1b8;
              }
              if (0xf < uVar42) {
                puVar15 = (undefined8 *)*puVar15;
              }
              if ((ppppppuVar38 == (undefined8 ******)local_1a8) &&
                 ((ppppppuVar38 == (undefined8 ******)0x0 ||
                  (iVar12 = memcmp(puVar15,pppppppuVar32,(size_t)ppppppuVar38), iVar12 == 0)))) {
                uStack_188._0_2_ = CONCAT11((char)iVar11,(undefined1)uStack_188);
              }
              iVar11 = iVar11 + 1;
              lVar19 = local_d0;
            } while ((ulonglong)(longlong)iVar11 <
                     (ulonglong)(((longlong)(local_138 - *local_c8) >> 4) * -0x3333333333333333));
          }
          lVar22 = FUN_140086de0(lVar19,"compose","");
          if ((*(char *)(lVar22 + 8) == '\x05') && (cVar9 = FUN_140086300(lVar22), cVar9 != '\0')) {
            uStack_188 = uStack_188 | 0x200000000;
            *(int *)(local_1d0 + 0x28) = *(int *)(local_1d0 + 0x28) + 1;
          }
          puVar15 = local_1d0;
          plVar17 = (longlong *)FUN_140086de0(lVar19,&DAT_140490798,&DAT_14049079c);
          if ((*(uint *)(plVar17 + 1) & 0xff) == 6) {
            local_208 = (undefined8 *)*plVar17 == (undefined8 *)0x0;
            if ((bool)local_208) {
              plVar39 = (longlong *)0x0;
            }
            else {
              plVar39 = (longlong *)**(undefined8 **)*plVar17;
            }
            puVar29 = (undefined8 *)*plVar17;
            if (puVar29 == (undefined8 *)0x0) {
              plVar17 = (longlong *)0x0;
            }
            else {
              plVar17 = (longlong *)*puVar29;
            }
            while( true ) {
              uVar16 = local_200;
              bVar45 = puVar29 == (undefined8 *)0x0;
              if (local_208 == '\0') {
                bVar45 = plVar39 == plVar17;
              }
              if (bVar45) break;
              lVar19 = FUN_140086de0(plVar39 + 6,&DAT_1404748b8,&DAT_1404748bc);
              lVar22 = FUN_140086de0(plVar39 + 6,"index","");
              if ((((char)plVar39[7] == '\a') && (*(char *)(lVar19 + 8) == '\x04')) &&
                 (*(byte *)(lVar22 + 8) - 1 < 3)) {
                uVar18 = FUN_140086de0(plVar39 + 6,"conditions","");
                cVar9 = FUN_1401e63b0(uVar18,uVar16);
                if (cVar9 != '\0') {
                  uVar13 = FUN_140085ee0(lVar22);
                  local_1c0 = CONCAT44(uVar13,0xffffffff);
                  FUN_140085cc0(lVar19,local_158);
                  uVar37 = local_140;
                  ppppppuVar38 = local_158[0];
                  lVar19 = puVar15[0x1d];
                  iVar11 = 0;
                  uVar42 = (puVar15[0x1e] - lVar19 >> 4) * -0x3333333333333333;
                  if (uVar42 != 0) {
                    do {
                      lVar22 = (longlong)iVar11 * 0x50;
                      sVar20 = *(size_t *)(lVar22 + 0x38 + lVar19);
                      puVar15 = (undefined8 *)(lVar22 + 0x28 + lVar19);
                      pppppppuVar32 = local_158;
                      if (0xf < uVar37) {
                        pppppppuVar32 = (undefined8 *******)ppppppuVar38;
                      }
                      if (0xf < *(ulonglong *)(lVar22 + 0x40 + lVar19)) {
                        puVar15 = (undefined8 *)*puVar15;
                      }
                      if ((sVar20 == local_148) &&
                         ((sVar20 == 0 ||
                          (iVar12 = memcmp(puVar15,pppppppuVar32,sVar20), iVar12 == 0)))) {
                        local_1c0 = CONCAT44(local_1c0._4_4_,iVar11);
                        break;
                      }
                      iVar11 = iVar11 + 1;
                    } while ((ulonglong)(longlong)iVar11 < uVar42);
                  }
                  if (puStack_178 == local_170) {
                    FUN_14005ffa0(&local_180,puStack_178,&local_1c0);
                  }
                  else {
                    *puStack_178 = local_1c0;
                    puStack_178 = puStack_178 + 1;
                  }
                  if (0xf < uVar37) {
                    uVar42 = uVar37 + 1;
                    pppppppuVar32 = (undefined8 *******)ppppppuVar38;
                    if (0xfff < uVar42) {
                      pppppppuVar32 = (undefined8 *******)ppppppuVar38[-1];
                      if (0x1f < (ulonglong)
                                 ((longlong)ppppppuVar38 + (-8 - (longlong)pppppppuVar32)))
                      goto LAB_1401e8a84;
                      uVar42 = uVar37 + 0x28;
                    }
                    thunk_FUN_14028af80(pppppppuVar32,uVar42);
                  }
                }
              }
              plVar1 = (longlong *)plVar39[2];
              puVar15 = local_1d0;
              if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
                cVar9 = *(char *)(*plVar1 + 0x19);
                plVar39 = plVar1;
                while (cVar9 == '\0') {
                  plVar39 = (longlong *)*plVar39;
                  cVar9 = *(char *)(*plVar39 + 0x19);
                }
              }
              else {
                cVar9 = *(char *)(plVar39[1] + 0x19);
                plVar7 = (longlong *)plVar39[1];
                plVar1 = plVar39;
                while ((plVar39 = plVar7, cVar9 == '\0' && (plVar1 == (longlong *)plVar39[2]))) {
                  cVar9 = *(char *)(plVar39[1] + 0x19);
                  plVar7 = (longlong *)plVar39[1];
                  plVar1 = plVar39;
                }
              }
            }
          }
          uVar16 = local_200;
          if (puVar15[0x1b] == puVar15[0x1c]) {
            FUN_1401f0cc0(puVar15 + 0x1a,puVar15[0x1b],local_198);
          }
          else {
            FUN_1401f1550();
            puVar15[0x1b] = puVar15[0x1b] + 0x30;
          }
          if (0xf < local_1a0) {
            uVar37 = local_1a0 + 1;
            pppppppuVar32 = (undefined8 *******)local_1b8;
            if (0xfff < uVar37) {
              pppppppuVar32 = (undefined8 *******)local_1b8[-1];
              if (0x1f < (ulonglong)((longlong)local_1b8 + (-8 - (longlong)pppppppuVar32)))
              goto LAB_1401e8a84;
              uVar37 = local_1a0 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar32,uVar37);
          }
          local_1a8 = (undefined8 ******)0x0;
          local_1a0 = 0xf;
          local_1b8 = (undefined8 ******)((ulonglong)local_1b8 & 0xffffffffffffff00);
          if (0xf < local_1d8) {
            uVar37 = local_1d8 + 1;
            ppppppplVar34 = (longlong *******)local_1f0;
            if (0xfff < uVar37) {
              ppppppplVar34 = (longlong *******)local_1f0[-1];
              if (0x1f < (ulonglong)((longlong)local_1f0 + (-8 - (longlong)ppppppplVar34)))
              goto LAB_1401e8a84;
              uVar37 = local_1d8 + 0x28;
            }
            thunk_FUN_14028af80(ppppppplVar34,uVar37);
          }
          local_1e0 = (undefined8 ******)0x0;
          local_1d8 = 0xf;
          local_1f0 = (longlong ******)((ulonglong)local_1f0 & 0xffffffffffffff00);
          FUN_14000d9e0(&local_180);
          FUN_140085440(local_90);
          uVar18 = local_d8;
          uVar35 = (uint)local_1c8;
        }
        uVar35 = uVar35 + 1;
        local_1c8 = CONCAT44(local_1c8._4_4_,uVar35);
        uVar14 = FUN_1400863a0(uVar18);
      } while (uVar35 < uVar14);
    }
    lVar19 = puVar15[0x1a];
    iVar11 = 0;
    iVar12 = iVar11;
    if ((puVar15[0x1b] - lVar19 >> 4) * -0x5555555555555555 != 0) {
      do {
        lVar22 = (longlong)iVar12;
        uVar42 = (ulonglong)(iVar12 + 1);
        uVar37 = uVar42;
        if (uVar42 < (ulonglong)((puVar15[0x1b] - lVar19 >> 4) * -0x5555555555555555)) {
          do {
            iVar36 = (int)uVar37;
            if (*(int *)(lVar19 + (longlong)iVar36 * 0x30) == 0) {
              uVar35 = *(uint *)(lVar19 + 0x14 + lVar22 * 0x30);
              if (*(char *)(lVar19 + 0x10 + (longlong)iVar36 * 0x30) < '\0') {
                uVar35 = uVar35 | 4;
              }
              else {
                uVar35 = uVar35 & 0xfffffffb;
              }
              *(uint *)(lVar19 + 0x14 + lVar22 * 0x30) = uVar35;
              break;
            }
            uVar37 = (ulonglong)(iVar36 + 1U);
          } while ((ulonglong)(longlong)(int)(iVar36 + 1U) <
                   (ulonglong)((puVar15[0x1b] - lVar19 >> 4) * -0x5555555555555555));
        }
        if (*(int *)(lVar19 + lVar22 * 0x30) == 0) {
          *(int *)((longlong)puVar15 + 0x144) = iVar12;
        }
        lVar19 = puVar15[0x1a];
        iVar12 = iVar12 + 1;
      } while (uVar42 < (ulonglong)((puVar15[0x1b] - lVar19 >> 4) * -0x5555555555555555));
    }
    uVar16 = FUN_140086de0(local_68,"functions","");
    local_200 = uVar16;
    FUN_140088360(uVar16,&local_1b8);
    plVar17 = puVar15 + 0x1a;
    pppppppuVar43 = (undefined8 *******)ppppppuStack_1b0;
    pppppppuVar32 = (undefined8 *******)local_1b8;
    if ((longlong)ppppppuStack_1b0 - (longlong)local_1b8 >> 5 != 0) {
      local_1c8 = local_1c8 & 0xffffffff00000000;
      do {
        ppppppplVar34 = (longlong *******)0x0;
        local_1e0 = (undefined8 ******)0x0;
        local_1f0 = (longlong ******)0x0;
        pppppuStack_1e8 = (undefined8 ******)0x0;
        local_1d8 = 0;
        pppppppuVar31 = pppppppuVar32 + (longlong)iVar11 * 4;
        ppppppuVar38 = pppppppuVar31[2];
        if ((undefined8 ******)0xf < pppppppuVar31[3]) {
          pppppppuVar31 = (undefined8 *******)*pppppppuVar31;
        }
        if ((undefined8 ******)0x7fffffffffffffff < ppppppuVar38) goto LAB_1401e8a8b;
        if (ppppppuVar38 < (undefined8 ******)0x10) {
          local_1d8 = 0xf;
          local_1f0 = *pppppppuVar31;
          pppppuStack_1e8 = pppppppuVar31[1];
          local_1e0 = ppppppuVar38;
        }
        else {
          uVar37 = (ulonglong)ppppppuVar38 | 0xf;
          if (uVar37 < 0x8000000000000000) {
            if (uVar37 < 0x16) {
              uVar37 = 0x16;
            }
            uVar42 = uVar37 + 1;
            ppppppplVar26 = ppppppplVar34;
            if (uVar42 != 0) {
              if (0xfff < uVar42) {
                uVar30 = uVar37 + 0x28;
                if (uVar30 <= uVar42) {
                    /* WARNING: Subroutine does not return */
                  FUN_140017370();
                }
                goto LAB_1401e8340;
              }
              ppppppplVar26 = (longlong *******)FUN_14028af20(uVar42);
            }
          }
          else {
            uVar37 = 0x7fffffffffffffff;
            uVar30 = 0x8000000000000027;
LAB_1401e8340:
            pppppplVar25 = (longlong ******)FUN_14028af20(uVar30);
            if (pppppplVar25 == (longlong ******)0x0) goto LAB_1401e8a84;
            ppppppplVar26 = (longlong *******)((longlong)pppppplVar25 + 0x27U & 0xffffffffffffffe0);
            ppppppplVar26[-1] = pppppplVar25;
          }
          local_1f0 = (longlong ******)ppppppplVar26;
          local_1e0 = ppppppuVar38;
          local_1d8 = uVar37;
          FUN_1404210f0(ppppppplVar26,pppppppuVar31,(longlong)ppppppuVar38 + 1);
          uVar16 = local_200;
        }
        if ((undefined8 ******)local_1e0 == (undefined8 ******)0x0) {
joined_r0x0001401e8408:
          if (0xf < local_1d8) {
            uVar37 = local_1d8 + 1;
            ppppppplVar34 = (longlong *******)local_1f0;
            if (0xfff < uVar37) {
              ppppppplVar34 = (longlong *******)local_1f0[-1];
              if (0x1f < (ulonglong)((longlong)local_1f0 + (-8 - (longlong)ppppppplVar34)))
              goto LAB_1401e8a84;
              uVar37 = local_1d8 + 0x28;
            }
            thunk_FUN_14028af80(ppppppplVar34,uVar37);
          }
        }
        else {
          ppppppplVar26 = &local_1f0;
          if (0xf < local_1d8) {
            ppppppplVar26 = (longlong *******)local_1f0;
          }
          lVar19 = FUN_140086de0(uVar16,ppppppplVar26,(longlong)local_1e0 + (longlong)ppppppplVar26)
          ;
          if (*(char *)(lVar19 + 8) != '\a') goto joined_r0x0001401e8408;
          lVar22 = FUN_140086de0(lVar19,"action","");
          uVar35 = local_1f8;
          if (*(char *)(lVar22 + 8) == '\x04') {
            uVar35 = local_1f8 | 2;
            local_1f8 = uVar35;
            puVar15 = (undefined8 *)FUN_140085cc0(lVar22,local_158);
            plVar17 = puVar15 + 2;
            if (0xf < (ulonglong)puVar15[3]) {
              puVar15 = (undefined8 *)*puVar15;
            }
            if ((*plVar17 != 5) || (iVar12 = memcmp(puVar15,"clear",5), iVar12 != 0))
            goto LAB_1401e8472;
            bVar45 = false;
          }
          else {
LAB_1401e8472:
            bVar45 = true;
          }
          if (((uVar35 & 2) != 0) && (local_1f8 = uVar35 & 0xfffffffd, 0xf < local_140)) {
            uVar37 = local_140 + 1;
            pppppppuVar31 = (undefined8 *******)local_158[0];
            if (0xfff < uVar37) {
              pppppppuVar31 = (undefined8 *******)local_158[0][-1];
              if (0x1f < (ulonglong)((longlong)local_158[0] + (-8 - (longlong)pppppppuVar31)))
              goto LAB_1401e8a84;
              uVar37 = local_140 + 0x28;
            }
            thunk_FUN_14028af80(pppppppuVar31,uVar37);
          }
          if ((bVar45) ||
             (plVar17 = (longlong *)FUN_140086de0(lVar19,&DAT_140490724,&DAT_140490728),
             (char)plVar17[1] != '\x06')) goto joined_r0x0001401e8408;
          ppppppplVar26 = &local_1f0;
          if (0xf < local_1d8) {
            ppppppplVar26 = (longlong *******)local_1f0;
          }
          uStack_188 = 0;
          local_198[0] = 0;
          local_180 = 0;
          puStack_178 = (ulonglong *)0xf;
          local_190 = 0;
          local_170 = (ulonglong *)0x0;
          local_168 = (ulonglong *)0x0;
          puStack_160 = (ulonglong *)0x0;
          FUN_14000f880(&local_190,ppppppplVar26,local_1e0);
          local_198[0] = 0;
          uVar35 = *(uint *)(plVar17 + 1) & 0xff;
          if (((uVar35 == 6) || (uVar35 == 7)) && ((undefined8 *)*plVar17 != (undefined8 *)0x0)) {
            bVar45 = false;
            ppppppplVar26 = (longlong *******)**(longlong **)*plVar17;
          }
          else {
            bVar45 = true;
            ppppppplVar26 = ppppppplVar34;
          }
          if (((uVar35 == 6) || (uVar35 == 7)) && ((undefined8 *)*plVar17 != (undefined8 *)0x0)) {
            ppppppplVar34 = *(longlong ********)*plVar17;
            local_208 = '\0';
          }
          else {
            local_208 = '\x01';
          }
          while( true ) {
            puVar15 = local_1d0;
            iVar11 = 0;
            cVar9 = local_208;
            if (!bVar45) {
              cVar9 = ppppppplVar26 == ppppppplVar34;
            }
            if (cVar9 != '\0') break;
            if (*(char *)(ppppppplVar26 + 7) == '\x04') {
              FUN_140085cc0(ppppppplVar26 + 6,local_158);
              sVar20 = local_148;
              ppppppuVar38 = local_158[0];
              if (local_148 == 0) {
                if (0xf < local_140) {
                  uVar37 = local_140 + 1;
                  pppppppuVar32 = (undefined8 *******)local_158[0];
                  if (0xfff < uVar37) {
                    pppppppuVar32 = (undefined8 *******)local_158[0][-1];
                    if (0x1f < (ulonglong)((longlong)local_158[0] + (-8 - (longlong)pppppppuVar32)))
                    goto LAB_1401e8a84;
                    uVar37 = local_140 + 0x28;
                  }
                  thunk_FUN_14028af80(pppppppuVar32,uVar37);
                }
              }
              else {
                lVar19 = *local_c8;
                uVar37 = (local_1d0[0x1e] - lVar19 >> 4) * -0x3333333333333333;
                if (uVar37 != 0) {
                  do {
                    lVar22 = (longlong)iVar11 * 0x50;
                    puVar15 = (undefined8 *)(lVar19 + 0x28 + lVar22);
                    _Size = *(size_t *)(lVar22 + 0x38 + lVar19);
                    pppppppuVar32 = local_158;
                    if (0xf < local_140) {
                      pppppppuVar32 = (undefined8 *******)ppppppuVar38;
                    }
                    if (0xf < *(ulonglong *)(lVar22 + 0x40 + lVar19)) {
                      puVar15 = (undefined8 *)*puVar15;
                    }
                    if ((_Size == sVar20) &&
                       ((_Size == 0 || (iVar12 = memcmp(puVar15,pppppppuVar32,_Size), iVar12 == 0)))
                       ) {
                      puVar28 = local_168;
                      if (local_168 == puStack_160) {
                        uVar37 = (longlong)local_168 - (longlong)local_170;
                        lVar19 = (longlong)uVar37 >> 2;
                        if (lVar19 == 0x3fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          FUN_140013050();
                        }
                        local_138 = lVar19 + 1;
                        uVar42 = (longlong)puStack_160 - (longlong)local_170 >> 2;
                        if (0x3fffffffffffffff - (uVar42 >> 1) < uVar42) {
                          local_1c0 = 0x3fffffffffffffff;
                        }
                        else {
                          local_1c0 = (uVar42 >> 1) + uVar42;
                          if (local_1c0 < local_138) {
                            local_1c0 = local_138;
                          }
                        }
                        puVar27 = (ulonglong *)FUN_1400399f0(uVar42,local_1c0);
                        uVar37 = uVar37 & 0xfffffffffffffffc;
                        *(int *)(uVar37 + (longlong)puVar27) = iVar11;
                        if (puVar28 == local_168) {
                          lVar19 = (longlong)local_168 - (longlong)local_170;
                          puVar33 = puVar27;
                          puVar28 = local_170;
                        }
                        else {
                          FUN_1404210f0(puVar27,local_170,(longlong)puVar28 - (longlong)local_170);
                          lVar19 = (longlong)local_168 - (longlong)puVar28;
                          puVar33 = (ulonglong *)(uVar37 + 4 + (longlong)puVar27);
                        }
                        FUN_1404210f0(puVar33,puVar28,lVar19);
                        if (local_170 != (ulonglong *)0x0) {
                          uVar37 = ((longlong)puStack_160 - (longlong)local_170 >> 2) * 4;
                          puVar28 = local_170;
                          if (0xfff < uVar37) {
                            if (0x1f < (ulonglong)
                                       ((longlong)local_170 + (-8 - (longlong)local_170[-1])))
                            goto LAB_1401e8a84;
                            uVar37 = uVar37 + 0x27;
                            puVar28 = (ulonglong *)local_170[-1];
                          }
                          thunk_FUN_14028af80(puVar28,uVar37);
                        }
                        local_168 = (ulonglong *)((longlong)puVar27 + local_138 * 4);
                        puStack_160 = (ulonglong *)((longlong)puVar27 + local_1c0 * 4);
                        local_170 = puVar27;
                      }
                      else {
                        *(int *)local_168 = iVar11;
                        local_168 = (ulonglong *)((longlong)local_168 + 4);
                      }
                      break;
                    }
                    iVar11 = iVar11 + 1;
                  } while ((ulonglong)(longlong)iVar11 < uVar37);
                }
                if (0xf < local_140) {
                  uVar37 = local_140 + 1;
                  pppppppuVar32 = (undefined8 *******)ppppppuVar38;
                  if (0xfff < uVar37) {
                    pppppppuVar32 = (undefined8 *******)ppppppuVar38[-1];
                    if (0x1f < (ulonglong)((longlong)ppppppuVar38 + (-8 - (longlong)pppppppuVar32)))
                    goto LAB_1401e8a84;
                    uVar37 = local_140 + 0x28;
                  }
                  thunk_FUN_14028af80(pppppppuVar32,uVar37);
                }
              }
            }
            ppppppplVar2 = (longlong *******)ppppppplVar26[2];
            if (*(char *)((longlong)ppppppplVar2 + 0x19) == '\0') {
              cVar9 = *(char *)((longlong)*ppppppplVar2 + 0x19);
              ppppppplVar26 = ppppppplVar2;
              while (cVar9 == '\0') {
                ppppppplVar26 = (longlong *******)*ppppppplVar26;
                cVar9 = *(char *)((longlong)*ppppppplVar26 + 0x19);
              }
            }
            else {
              cVar9 = *(char *)((longlong)ppppppplVar26[1] + 0x19);
              ppppppplVar8 = (longlong *******)ppppppplVar26[1];
              ppppppplVar2 = ppppppplVar26;
              while ((ppppppplVar26 = ppppppplVar8, cVar9 == '\0' &&
                     (ppppppplVar2 == (longlong *******)ppppppplVar26[2]))) {
                cVar9 = *(char *)((longlong)ppppppplVar26[1] + 0x19);
                ppppppplVar8 = (longlong *******)ppppppplVar26[1];
                ppppppplVar2 = ppppppplVar26;
              }
            }
          }
          if (local_170 != local_168) {
            puVar3 = (undefined4 *)local_1d0[0x21];
            if (puVar3 == (undefined4 *)local_1d0[0x22]) {
              FUN_1401f0ed0(local_1d0 + 0x20,puVar3,local_198);
            }
            else {
              *puVar3 = local_198[0];
              FUN_140016fc0(puVar3 + 2,&local_190);
              FUN_140031bf0(puVar3 + 10,&local_170);
              puVar15[0x21] = puVar15[0x21] + 0x40;
            }
          }
          FUN_140031b80(&local_170);
          FUN_140017240(&local_190);
          if (0xf < local_1d8) {
            uVar37 = local_1d8 + 1;
            ppppppplVar34 = (longlong *******)local_1f0;
            if (0xfff < uVar37) {
              ppppppplVar34 = (longlong *******)local_1f0[-1];
              if (0x1f < (ulonglong)((longlong)local_1f0 + (-8 - (longlong)ppppppplVar34)))
              goto LAB_1401e8a84;
              uVar37 = local_1d8 + 0x28;
            }
            thunk_FUN_14028af80(ppppppplVar34,uVar37);
          }
          pppppppuVar43 = (undefined8 *******)ppppppuStack_1b0;
          pppppppuVar32 = (undefined8 *******)local_1b8;
          iVar11 = (uint)local_1c8;
        }
        iVar11 = iVar11 + 1;
        local_1c8 = CONCAT44(local_1c8._4_4_,iVar11);
        uVar16 = local_200;
        plVar17 = local_b8;
      } while ((ulonglong)(longlong)iVar11 <
               (ulonglong)((longlong)pppppppuVar43 - (longlong)pppppppuVar32 >> 5));
    }
    if ((*(byte *)(local_1d0 + 0x23) & 1) != 0) {
      *(uint *)(param_1 + 100) =
           (int)param_1[100] +
           ((byte)~(byte)(*(uint *)((longlong)param_1 + 0x304) >> 0xd) & 1) +
           *(int *)(local_1d0 + 0x28);
      *(int *)((longlong)param_1 + 0x324) =
           *(int *)((longlong)param_1 + 0x324) +
           (int)(local_1d0[0x1b] - *plVar17 >> 4) * -0x55555555;
    }
    puVar15 = (undefined8 *)param_1[0x62];
    if (puVar15 == (undefined8 *)param_1[99]) {
      FUN_14005ffa0(param_1 + 0x61,puVar15,&local_c0);
      puVar15 = local_c0;
    }
    else {
      *puVar15 = local_1d0;
      param_1[0x62] = param_1[0x62] + 8;
      puVar15 = local_1d0;
    }
    uVar16 = puVar15[1];
    pppppppuVar31 = pppppppuVar32;
    if (pppppppuVar32 != (undefined8 *******)0x0) {
      for (; pppppppuVar31 != pppppppuVar43; pppppppuVar31 = pppppppuVar31 + 4) {
        FUN_140017240(pppppppuVar31);
      }
      uVar37 = (longlong)local_1a8 - (longlong)pppppppuVar32 & 0xffffffffffffffe0;
      if (0xfff < uVar37) {
        if (0x1f < (ulonglong)((longlong)pppppppuVar32 + (-8 - (longlong)pppppppuVar32[-1])))
        goto LAB_1401e8a84;
        uVar37 = uVar37 + 0x27;
        pppppppuVar32 = (undefined8 *******)pppppppuVar32[-1];
      }
      thunk_FUN_14028af80(pppppppuVar32,uVar37);
    }
  }
  if (0xf < local_98) {
    lVar22 = CONCAT71(uStack_af,local_b0);
    uVar37 = local_98 + 1;
    lVar19 = lVar22;
    if (0xfff < uVar37) {
      lVar19 = *(longlong *)(lVar22 + -8);
      if (0x1f < (lVar22 - lVar19) - 8U) {
LAB_1401e8a84:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar40 = auStack_220;
LAB_1401e8a8b:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar40 + -8) = &UNK_1401e8a90;
        FUN_1400172e0();
      }
      uVar37 = local_98 + 0x28;
    }
    thunk_FUN_14028af80(lVar19,uVar37);
  }
  local_a0 = 0;
  local_98 = 0xf;
  local_b0 = 0;
  FUN_140085440(local_68);
  return uVar16;
}

