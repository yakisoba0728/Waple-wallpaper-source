// Function: FUN_1401c45f0
// Addr: 1401c45f0
// Size: 3729 bytes


/* WARNING: Removing unreachable block (ram,0x0001401c46be) */
/* WARNING: Removing unreachable block (ram,0x0001401c4cf2) */
/* WARNING: Removing unreachable block (ram,0x0001401c4f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401c45f0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 ****ppppuVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  longlong *plVar11;
  char cVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  size_t sVar17;
  undefined8 uVar18;
  float *pfVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  undefined8 *puVar22;
  undefined8 *****pppppuVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  char *_Str;
  char *pcVar27;
  char *pcVar28;
  uint uVar29;
  char cVar30;
  ulonglong uVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  char local_res18;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [24];
  double local_298;
  double local_290;
  undefined8 ****local_288;
  undefined8 uStack_280;
  ulonglong local_278;
  ulonglong local_270;
  undefined8 local_268;
  uint local_260;
  char local_258;
  undefined6 uStack_257;
  undefined4 uStack_251;
  undefined1 local_24d;
  undefined4 local_24c;
  ulonglong local_248;
  ulonglong local_240;
  longlong local_238;
  char local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  longlong *local_1d8;
  undefined4 *local_1d0;
  uint local_1c8;
  longlong local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  char local_198 [352];
  
  fVar9 = DAT_140492704;
  puVar26 = auStack_2b8;
  cVar30 = '\0';
  local_260 = 0;
  local_res18 = '\0';
  plVar14 = (longlong *)FUN_140086de0(param_1,"initializer","");
  local_1d8 = (longlong *)FUN_140086de0(param_1,"operator","");
  fVar8 = DAT_1404926c0;
  fVar7 = DAT_140492618;
  fVar33 = fVar9;
  fVar34 = fVar9;
  fVar35 = fVar9;
  uVar29 = 0;
  if ((*(uint *)(plVar14 + 1) & 0xff) == 6) {
    puVar22 = (undefined8 *)*plVar14;
    if (puVar22 == (undefined8 *)0x0) {
      plVar25 = (longlong *)0x0;
    }
    else {
      plVar25 = *(longlong **)*puVar22;
    }
    puVar20 = (undefined8 *)*plVar14;
    if (puVar20 == (undefined8 *)0x0) {
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = (longlong *)*puVar20;
    }
LAB_1401c4704:
    bVar32 = puVar20 == (undefined8 *)0x0;
    if (puVar22 != (undefined8 *)0x0) {
      bVar32 = plVar25 == plVar14;
    }
    if (!bVar32) {
      if ((((char)plVar25[7] == '\a') &&
          (lVar15 = FUN_140087490(plVar25 + 6,&DAT_1404748b8,&DAT_1404748bc), lVar15 != 0)) &&
         (lVar15 = FUN_140086de0(plVar25 + 6,&DAT_1404748b8,&DAT_1404748bc),
         *(char *)(lVar15 + 8) == '\x04')) {
        FUN_140085cc0(lVar15);
        uVar24 = local_278;
        ppppuVar2 = local_288;
        pppppuVar23 = &local_288;
        if (0xf < local_270) {
          pppppuVar23 = (undefined8 *****)local_288;
        }
        if ((local_278 == 0xb) && (iVar13 = memcmp(pppppuVar23,"colorrandom",0xb), iVar13 == 0)) {
          local_218 = 5;
          uStack_220 = 0;
          pcVar27 = (char *)0x0;
          local_258 = (char)(undefined7)DAT_14048f550;
          uStack_257 = (undefined6)((uint7)(undefined7)DAT_14048f550 >> 8);
          uStack_251 = ram0x00014048f557;
          local_210 = 0xf;
          local_228 = (char *)(ulonglong)CONCAT14(DAT_14048f4d8,DAT_14048f4d4);
          local_24c = 0;
          local_248 = uVar24;
          local_240 = 0xf;
          local_24d = 0;
          FUN_1401ba110(plVar25 + 6);
          plVar16 = (longlong *)FUN_140086de0(plVar25 + 6,&DAT_140488af0,&DAT_140488af3);
          if ((char)*(uint *)(plVar16 + 1) == '\x04') {
            pcVar28 = (char *)*plVar16;
            _Str = pcVar27;
            if ((pcVar28 != (char *)0x0) && (_Str = pcVar28, (*(uint *)(plVar16 + 1) >> 8 & 1) != 0)
               ) {
              _Str = pcVar28 + 4;
            }
            sVar17 = strlen(_Str);
            FUN_14000f880(&local_228,_Str,sVar17);
          }
          plVar16 = (longlong *)FUN_140086de0(plVar25 + 6,&DAT_140488af4,&DAT_140488af7);
          if ((char)*(uint *)(plVar16 + 1) == '\x04') {
            pcVar28 = (char *)*plVar16;
            if ((pcVar28 != (char *)0x0) &&
               (pcVar27 = pcVar28, (*(uint *)(plVar16 + 1) >> 8 & 1) != 0)) {
              pcVar27 = pcVar28 + 4;
            }
            sVar17 = strlen(pcVar27);
            FUN_14000f880(&local_258,pcVar27,sVar17);
          }
          fVar35 = 0.0;
          fVar34 = 0.0;
          pcVar27 = (char *)&local_228;
          if (0xf < local_210) {
            pcVar27 = local_228;
          }
          fVar33 = 0.0;
          if ((pcVar27 != (char *)0x0) && (*pcVar27 != '\0')) {
            dVar4 = (double)FUN_1402d06ac(pcVar27);
            fVar35 = (float)dVar4;
            cVar30 = *pcVar27;
            while (cVar30 != '\0') {
              if (*pcVar27 == ' ') goto LAB_1401c4910;
              pcVar27 = pcVar27 + 1;
              cVar30 = *pcVar27;
            }
            goto LAB_1401c491d;
          }
          goto LAB_1401c4964;
        }
        pppppuVar23 = &local_288;
        if (0xf < local_270) {
          pppppuVar23 = (undefined8 *****)ppppuVar2;
        }
        if ((uVar24 == 0xe) && (iVar13 = memcmp(pppppuVar23,"hsvcolorrandom",0xe), iVar13 == 0)) {
          FUN_1401ba3e0(plVar25 + 6);
          uVar18 = FUN_140086de0(plVar25 + 6,"huemin","");
          fVar33 = (float)FUN_140086220(uVar18);
          uVar18 = FUN_140086de0(plVar25 + 6,&DAT_14048f564,&DAT_14048f56a);
          fVar34 = (float)FUN_140086220(uVar18);
          uVar18 = FUN_140086de0(plVar25 + 6,"saturationmin","");
          fVar35 = (float)FUN_140086220(uVar18);
          uVar18 = FUN_140086de0(plVar25 + 6,"saturationmax","");
          fVar37 = (float)FUN_140086220(uVar18);
          uVar18 = FUN_140086de0(plVar25 + 6,"valuemin","");
          fVar38 = (float)FUN_140086220(uVar18);
          fVar36 = (fVar34 + fVar33) * fVar8;
          local_res18 = '\x01';
          fVar34 = (fVar37 + fVar35) * fVar8;
          fVar33 = 0.0;
          if (0.0 <= fVar36) {
            fVar33 = fVar36;
          }
          local_1e8 = fVar9;
          if (fVar33 <= fVar9) {
            local_1e8 = fVar33;
          }
          fVar33 = 0.0;
          if (0.0 <= fVar34) {
            fVar33 = fVar34;
          }
          local_1e4 = fVar9;
          if (fVar33 <= fVar9) {
            local_1e4 = fVar33;
          }
          uVar18 = FUN_140086de0(plVar25 + 6,"valuemax","");
          fVar33 = (float)FUN_140086220(uVar18);
          fVar34 = (fVar33 + fVar38) * fVar8;
          fVar33 = 0.0;
          if (0.0 <= fVar34) {
            fVar33 = fVar34;
          }
          local_1e0 = fVar9;
          if (fVar33 <= fVar9) {
            local_1e0 = fVar33;
          }
          pfVar19 = (float *)FUN_1401b8c70(local_1a8);
          fVar33 = pfVar19[2];
          fVar34 = pfVar19[1];
          fVar35 = *pfVar19;
          cVar30 = '\x01';
        }
        else {
          pppppuVar23 = &local_288;
          if (0xf < local_270) {
            pppppuVar23 = (undefined8 *****)ppppuVar2;
          }
          if ((uVar24 == 9) && (iVar13 = memcmp(pppppuVar23,"colorlist",9), iVar13 == 0)) {
            FUN_1401ba740(plVar25 + 6);
            plVar16 = (longlong *)FUN_140086de0(plVar25 + 6,"colors","");
            if ((*(uint *)(plVar16 + 1) & 0xff) == 6) {
              local_230 = (undefined8 *)*plVar16 == (undefined8 *)0x0;
              if ((bool)local_230) {
                local_238 = 0;
              }
              else {
                local_238 = **(longlong **)*plVar16;
              }
              if ((longlong *)*plVar16 == (longlong *)0x0) {
                bVar32 = true;
                lVar15 = 0;
              }
              else {
                lVar15 = *(longlong *)*plVar16;
                bVar32 = false;
              }
              do {
                bVar5 = bVar32;
                if (local_230 == '\0') {
                  bVar5 = local_238 == lVar15;
                }
                cVar30 = local_res18;
                if (bVar5) break;
                if ((char)*(uint *)(local_238 + 0x38) == '\x04') {
                  pcVar27 = *(char **)(local_238 + 0x30);
                  if (pcVar27 == (char *)0x0) {
                    fVar38 = 0.0;
                    fVar36 = 0.0;
                    fVar37 = 0.0;
                    goto LAB_1401c4e44;
                  }
                  if ((*(uint *)(local_238 + 0x38) >> 8 & 1) != 0) {
                    pcVar27 = pcVar27 + 4;
                  }
                  fVar38 = 0.0;
                  fVar36 = 0.0;
                  fVar37 = 0.0;
                  if ((pcVar27 == (char *)0x0) || (*pcVar27 == '\0')) goto LAB_1401c4e44;
                  dVar4 = (double)FUN_1402d06ac();
                  cVar30 = *pcVar27;
                  for (; (cVar12 = '\0', cVar30 != '\0' && (cVar12 = *pcVar27, cVar12 != ' '));
                      pcVar27 = pcVar27 + 1) {
                    cVar30 = pcVar27[1];
                  }
                  bVar5 = false;
                  if (cVar12 != '\0') {
                    do {
                      bVar6 = bVar5;
                      if (*pcVar27 != ' ') break;
                      pcVar27 = pcVar27 + 1;
                      bVar6 = true;
                      bVar5 = true;
                    } while (*pcVar27 != '\0');
                    if (bVar6) {
                      fVar38 = (float)dVar4;
                      dVar4 = (double)FUN_1402d06ac();
                      cVar30 = *pcVar27;
                      fVar36 = (float)dVar4;
                      for (; (cVar12 = '\0', cVar30 != '\0' && (cVar12 = *pcVar27, cVar12 != ' '));
                          pcVar27 = pcVar27 + 1) {
                        cVar30 = pcVar27[1];
                      }
                      bVar5 = false;
                      if (cVar12 != '\0') {
                        while (*pcVar27 == ' ') {
                          pcVar27 = pcVar27 + 1;
                          if (*pcVar27 == '\0') goto LAB_1401c4e2d;
                          bVar5 = true;
                        }
                        if (bVar5) goto LAB_1401c4e2d;
                      }
                    }
                  }
                }
                FUN_1400175a0(&local_238);
              } while( true );
            }
          }
        }
        goto LAB_1401c4e64;
      }
      goto LAB_1401c4ea0;
    }
    uVar29 = local_260;
    if (cVar30 == '\0') goto LAB_1401c4f0c;
  }
  else {
LAB_1401c4f0c:
    if ((*(uint *)(local_1d8 + 1) & 0xff) == 6) {
      puVar22 = (undefined8 *)*local_1d8;
      if (puVar22 == (undefined8 *)0x0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = *(longlong **)*puVar22;
      }
      if ((undefined8 *)*local_1d8 == (undefined8 *)0x0) {
        bVar32 = true;
        plVar25 = (longlong *)0x0;
      }
      else {
        plVar25 = *(longlong **)*local_1d8;
        bVar32 = false;
      }
LAB_1401c4f50:
      bVar5 = bVar32;
      if (puVar22 != (undefined8 *)0x0) {
        bVar5 = plVar14 == plVar25;
      }
      if (bVar5) goto LAB_1401c5215;
      if (((char)plVar14[7] == '\a') &&
         (lVar15 = FUN_140087490(plVar14 + 6,&DAT_1404748b8,&DAT_1404748bc), lVar15 != 0)) {
        lVar15 = FUN_140086de0(plVar14 + 6,&DAT_1404748b8,&DAT_1404748bc);
        if (*(char *)(lVar15 + 8) == '\x04') {
          uVar29 = uVar29 | 1;
          puVar20 = (undefined8 *)FUN_140085cc0(lVar15,&local_288);
          plVar16 = puVar20 + 2;
          if (0xf < (ulonglong)puVar20[3]) {
            puVar20 = (undefined8 *)*puVar20;
          }
          if ((*plVar16 != 0xb) || (iVar13 = memcmp(puVar20,"colorchange",0xb), iVar13 != 0))
          goto LAB_1401c4fed;
          bVar5 = false;
        }
        else {
LAB_1401c4fed:
          bVar5 = true;
        }
        if (((uVar29 & 1) != 0) && (uVar29 = 0, 0xf < local_270)) {
          uVar24 = local_270 + 1;
          pppppuVar23 = (undefined8 *****)local_288;
          if (0xfff < uVar24) {
            pppppuVar23 = (undefined8 *****)local_288[-1];
            if (0x1f < (ulonglong)((longlong)local_288 + (-8 - (longlong)pppppuVar23)))
            goto LAB_1401c545f;
            uVar24 = local_270 + 0x28;
          }
          thunk_FUN_14028af80(pppppuVar23,uVar24);
        }
        if (!bVar5) goto LAB_1401c5091;
      }
      plVar16 = (longlong *)plVar14[2];
      if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
        cVar30 = *(char *)(*plVar16 + 0x19);
        plVar14 = plVar16;
        while (cVar30 == '\0') {
          plVar14 = (longlong *)*plVar14;
          cVar30 = *(char *)(*plVar14 + 0x19);
        }
      }
      else {
        cVar30 = *(char *)(plVar14[1] + 0x19);
        plVar11 = (longlong *)plVar14[1];
        plVar16 = plVar14;
        while ((plVar14 = plVar11, cVar30 == '\0' && (plVar16 == (longlong *)plVar14[2]))) {
          cVar30 = *(char *)(plVar14[1] + 0x19);
          plVar11 = (longlong *)plVar14[1];
          plVar16 = plVar14;
        }
      }
      goto LAB_1401c4f50;
    }
  }
  goto LAB_1401c5215;
  while (pcVar27 = pcVar27 + 1, *pcVar27 != '\0') {
LAB_1401c4910:
    if (*pcVar27 != ' ') break;
  }
LAB_1401c491d:
  dVar4 = (double)FUN_1402d06ac(pcVar27);
  fVar34 = (float)dVar4;
  cVar30 = *pcVar27;
  while (cVar30 != '\0') {
    if (*pcVar27 == ' ') goto LAB_1401c4948;
    pcVar27 = pcVar27 + 1;
    cVar30 = *pcVar27;
  }
LAB_1401c4955:
  dVar4 = (double)FUN_1402d06ac(pcVar27);
  fVar33 = (float)dVar4;
LAB_1401c4964:
  pcVar27 = (char *)CONCAT17((undefined1)uStack_251,CONCAT61(uStack_257,local_258));
  fVar38 = 0.0;
  fVar37 = 0.0;
  pcVar28 = &local_258;
  if (0xf < local_240) {
    pcVar28 = pcVar27;
  }
  fVar36 = 0.0;
  if ((pcVar28 != (char *)0x0) && (*pcVar28 != '\0')) {
    dVar4 = (double)FUN_1402d06ac(pcVar28);
    fVar38 = (float)dVar4;
    cVar30 = *pcVar28;
    while (cVar30 != '\0') {
      if (*pcVar28 == ' ') goto LAB_1401c49c6;
      pcVar28 = pcVar28 + 1;
      cVar30 = *pcVar28;
    }
LAB_1401c49d3:
    dVar4 = (double)FUN_1402d06ac(pcVar28);
    fVar37 = (float)dVar4;
    cVar30 = *pcVar28;
    while (cVar30 != '\0') {
      if (*pcVar28 == ' ') goto LAB_1401c4a05;
      pcVar28 = pcVar28 + 1;
      cVar30 = *pcVar28;
    }
LAB_1401c4a12:
    dVar4 = (double)FUN_1402d06ac(pcVar28);
    pcVar27 = (char *)CONCAT17((undefined1)uStack_251,CONCAT61(uStack_257,local_258));
    fVar36 = (float)dVar4;
  }
  if (0xf < local_240) {
    uVar24 = local_240 + 1;
    pcVar28 = pcVar27;
    if (0xfff < uVar24) {
      pcVar28 = *(char **)(pcVar27 + -8);
      if ((char *)0x1f < pcVar27 + (-8 - (longlong)pcVar28)) goto LAB_1401c545f;
      uVar24 = local_240 + 0x28;
    }
    thunk_FUN_14028af80(pcVar28,uVar24);
  }
  local_248 = 0;
  local_240 = 0xf;
  local_258 = '\0';
  if (0xf < local_210) {
    pcVar27 = local_228;
    if ((0xfff < local_210 + 1) &&
       (pcVar27 = *(char **)(local_228 + -8), (char *)0x1f < local_228 + (-8 - (longlong)pcVar27)))
    goto LAB_1401c545f;
    thunk_FUN_14028af80(pcVar27);
  }
  local_res18 = '\x01';
  fVar33 = ((fVar36 - fVar33) * fVar8 + fVar33) * fVar7;
  fVar34 = ((fVar37 - fVar34) * fVar8 + fVar34) * fVar7;
  fVar35 = ((fVar38 - fVar35) * fVar8 + fVar35) * fVar7;
  cVar30 = '\x01';
LAB_1401c4e64:
  if (0xf < local_270) {
    pppppuVar23 = (undefined8 *****)ppppuVar2;
    if ((0xfff < local_270 + 1) &&
       (pppppuVar23 = (undefined8 *****)ppppuVar2[-1],
       0x1f < (ulonglong)((longlong)ppppuVar2 + (-8 - (longlong)pppppuVar23)))) goto LAB_1401c545f;
    thunk_FUN_14028af80(pppppuVar23);
  }
LAB_1401c4ea0:
  plVar16 = (longlong *)plVar25[2];
  if (*(char *)((longlong)plVar16 + 0x19) == '\0') {
    cVar12 = *(char *)(*plVar16 + 0x19);
    plVar25 = plVar16;
    while (cVar12 == '\0') {
      plVar25 = (longlong *)*plVar25;
      cVar12 = *(char *)(*plVar25 + 0x19);
    }
  }
  else {
    cVar12 = *(char *)(plVar25[1] + 0x19);
    plVar11 = (longlong *)plVar25[1];
    plVar16 = plVar25;
    while ((plVar25 = plVar11, cVar12 == '\0' && (plVar16 == (longlong *)plVar25[2]))) {
      cVar12 = *(char *)(plVar25[1] + 0x19);
      plVar11 = (longlong *)plVar25[1];
      plVar16 = plVar25;
    }
  }
  goto LAB_1401c4704;
  while (pcVar27 = pcVar27 + 1, *pcVar27 != '\0') {
LAB_1401c4948:
    if (*pcVar27 != ' ') break;
  }
  goto LAB_1401c4955;
  while (pcVar28 = pcVar28 + 1, *pcVar28 != '\0') {
LAB_1401c49c6:
    if (*pcVar28 != ' ') break;
  }
  goto LAB_1401c49d3;
  while (pcVar28 = pcVar28 + 1, *pcVar28 != '\0') {
LAB_1401c4a05:
    if (*pcVar28 != ' ') break;
  }
  goto LAB_1401c4a12;
LAB_1401c4e2d:
  dVar4 = (double)FUN_1402d06ac(pcVar27);
  fVar37 = (float)dVar4;
LAB_1401c4e44:
  local_res18 = '\x01';
  fVar33 = fVar37;
  fVar34 = fVar36;
  fVar35 = fVar38;
  cVar30 = '\x01';
  goto LAB_1401c4e64;
LAB_1401c5091:
  local_1f8 = 5;
  uStack_200 = 0;
  local_1f0 = 0xf;
  local_208 = (char *)(ulonglong)CONCAT14(DAT_14048f4f0,DAT_14048f4ec);
  FUN_1401bd2a0(plVar14 + 6);
  plVar14 = (longlong *)FUN_140086de0(plVar14 + 6,"startvalue","");
  if ((char)*(uint *)(plVar14 + 1) == '\x04') {
    pcVar27 = (char *)*plVar14;
    if (pcVar27 == (char *)0x0) {
      pcVar27 = (char *)0x0;
    }
    else if ((*(uint *)(plVar14 + 1) >> 8 & 1) != 0) {
      pcVar27 = pcVar27 + 4;
    }
    sVar17 = strlen(pcVar27);
    FUN_14000f880(&local_208,pcVar27,sVar17);
  }
  fVar35 = 0.0;
  fVar34 = 0.0;
  pcVar27 = (char *)&local_208;
  if (0xf < local_1f0) {
    pcVar27 = local_208;
  }
  fVar33 = 0.0;
  if ((pcVar27 != (char *)0x0) && (*pcVar27 != '\0')) {
    dVar4 = (double)FUN_1402d06ac(pcVar27);
    fVar35 = (float)dVar4;
    cVar30 = *pcVar27;
    while (cVar30 != '\0') {
      if (*pcVar27 == ' ') goto LAB_1401c5177;
      pcVar27 = pcVar27 + 1;
      cVar30 = *pcVar27;
    }
    goto LAB_1401c5184;
  }
  goto LAB_1401c51db;
  while (pcVar27 = pcVar27 + 1, *pcVar27 != '\0') {
LAB_1401c5177:
    if (*pcVar27 != ' ') break;
  }
LAB_1401c5184:
  dVar4 = (double)FUN_1402d06ac(pcVar27);
  fVar34 = (float)dVar4;
  cVar30 = *pcVar27;
  while (cVar30 != '\0') {
    if (*pcVar27 == ' ') goto LAB_1401c51b5;
    pcVar27 = pcVar27 + 1;
    cVar30 = *pcVar27;
  }
  goto LAB_1401c51c2;
  while (pcVar27 = pcVar27 + 1, *pcVar27 != '\0') {
LAB_1401c51b5:
    if (*pcVar27 != ' ') break;
  }
LAB_1401c51c2:
  dVar4 = (double)FUN_1402d06ac(pcVar27);
  fVar33 = (float)dVar4;
LAB_1401c51db:
  local_res18 = '\x01';
  if (0xf < local_1f0) {
    uVar24 = local_1f0 + 1;
    pcVar27 = local_208;
    if (uVar24 < 0x1000) {
LAB_1401c5210:
      thunk_FUN_14028af80(pcVar27,uVar24);
      goto LAB_1401c5215;
    }
    pcVar27 = *(char **)(local_208 + -8);
    if (local_208 + (-8 - (longlong)pcVar27) < (char *)0x20) {
      uVar24 = local_1f0 + 0x28;
      goto LAB_1401c5210;
    }
LAB_1401c545f:
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar26 = auStack_2b0;
LAB_1401c5466:
    *(undefined8 *)(puVar26 + -8) = 0x1401c5477;
    FUN_140017170(puVar26 + 0x30,
                  "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                 );
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar26 + -8) = &UNK_1401c5481;
    FUN_140084bc0(puVar26 + 0x30);
  }
LAB_1401c5215:
  FUN_1404217a0(local_198,0,0xc4);
  local_290 = (double)fVar33;
  local_298 = (double)fVar34;
  FUN_1400162a0(local_198,0xc4,"%.5f %.5f %.5f",(double)fVar35);
  local_278 = 0;
  local_270 = 0;
  local_288 = (undefined8 *****)0x0;
  uStack_280 = 0;
  sVar17 = strlen(local_198);
  FUN_140017480(&local_288,local_198,sVar17);
  uVar10 = local_270;
  uVar24 = local_278;
  ppppuVar2 = local_288;
  uVar1 = (undefined4)local_278;
  uVar31 = local_278 & 0xffffffff;
  local_1c8 = CONCAT31(local_1c8._1_3_,4);
  local_1c8 = local_1c8 | 0x100;
  local_1b0 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  pppppuVar23 = &local_288;
  if (0xf < local_270) {
    pppppuVar23 = (undefined8 *****)local_288;
  }
  puVar21 = (undefined4 *)_malloc_base(uVar31 + 5);
  if (puVar21 == (undefined4 *)0x0) goto LAB_1401c5466;
  *puVar21 = uVar1;
  FUN_1404210f0(puVar21 + 1,pppppuVar23,uVar24 & 0xffffffff);
  *(undefined1 *)((longlong)puVar21 + uVar31 + 4) = 0;
  local_1d0 = puVar21;
  uVar18 = FUN_140086de0(param_2,"colorn","");
  FUN_140085610(uVar18,&local_1d0);
  FUN_140086d30(&local_1d0);
  lVar15 = local_1c0;
  if (local_1c0 != 0) {
    FUN_140017240(local_1c0 + 0x40);
    FUN_140017240(lVar15 + 0x20);
    FUN_140017240(lVar15);
    thunk_FUN_14028af80(lVar15,0x60);
  }
  if (uVar10 < 0x10) goto LAB_1401c5399;
  uVar24 = uVar10 + 1;
  pppppuVar23 = (undefined8 *****)ppppuVar2;
  if (0xfff < uVar24) {
    pppppuVar23 = (undefined8 *****)ppppuVar2[-1];
    if (0x1f < (ulonglong)((longlong)ppppuVar2 + (-8 - (longlong)pppppuVar23))) goto LAB_1401c545f;
    uVar24 = uVar10 + 0x28;
  }
  thunk_FUN_14028af80(pppppuVar23,uVar24);
LAB_1401c5399:
  uStack_280 = CONCAT71(uStack_280._1_7_,5);
  uVar29 = (uint)uStack_280 & 0xfffffeff;
  local_288 = (undefined8 ****)CONCAT71(local_288._1_7_,local_res18);
  puVar22 = (undefined8 *)FUN_140086de0(param_2,"hascolor","");
  uVar1 = *(undefined4 *)(puVar22 + 1);
  *(uint *)(puVar22 + 1) = uVar29;
  ppppuVar2 = (undefined8 ****)*puVar22;
  uStack_280 = CONCAT44(uStack_280._4_4_,uVar1);
  *puVar22 = local_288;
  local_278 = puVar22[2];
  puVar22[2] = 0;
  local_270 = puVar22[3];
  local_268 = puVar22[4];
  puVar22[3] = 0;
  puVar22[4] = 0;
  local_288 = ppppuVar2;
  FUN_140085440(&local_288);
  return;
}

