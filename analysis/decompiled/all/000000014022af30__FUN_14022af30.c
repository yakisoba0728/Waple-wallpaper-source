// Function: FUN_14022af30
// Addr: 14022af30
// Size: 2551 bytes


/* WARNING: Removing unreachable block (ram,0x00014022afcd) */

void FUN_14022af30(undefined ***param_1)

{
  char cVar1;
  undefined **ppuVar2;
  code *pcVar3;
  double dVar4;
  char ****ppppcVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  double *pdVar11;
  longlong lVar12;
  longlong *plVar13;
  size_t sVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  undefined8 *****pppppuVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined **ppuVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  char *pcVar24;
  undefined ***pppuVar25;
  char *****pppppcVar26;
  ulonglong uVar27;
  undefined ***pppuVar28;
  undefined ***pppuVar29;
  char cVar30;
  char cVar31;
  bool bVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined ***local_res8;
  longlong local_res10;
  undefined ***local_res18;
  undefined1 auStack_308 [8];
  undefined1 auStack_300 [24];
  double local_2e8;
  double local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined *local_2c8;
  longlong local_2c0;
  longlong lStack_2b8;
  longlong local_2b0;
  ulonglong local_2a8;
  char ****local_298;
  undefined8 uStack_290;
  ulonglong local_288;
  ulonglong local_280;
  longlong local_278;
  uint local_270;
  longlong local_268;
  ulonglong local_260;
  longlong local_258;
  undefined8 ****local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  ulonglong local_238;
  undefined **local_228 [3];
  longlong local_210;
  longlong local_208;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [48];
  undefined1 local_198 [16];
  undefined1 local_188 [336];
  
  puVar23 = auStack_308;
  ppuVar2 = param_1[0x129];
  pppuVar25 = param_1 + 0x128;
  ppuVar21 = *pppuVar25;
  local_res8 = param_1;
  if (ppuVar21 != ppuVar2) {
    do {
      FUN_140017240(ppuVar21 + 3);
      ppuVar21 = ppuVar21 + 7;
    } while (ppuVar21 != ppuVar2);
    param_1[0x129] = *pppuVar25;
  }
  FUN_140077f50(param_1 + 0x3f);
  pppuVar29 = param_1 + 0x36;
  plVar8 = (longlong *)FUN_140086de0(pppuVar29,"dependencies","");
  if ((*(uint *)(plVar8 + 1) & 0xff) == 6) {
    cVar30 = (undefined8 *)*plVar8 == (undefined8 *)0x0;
    if ((bool)cVar30) {
      plVar22 = (longlong *)0x0;
    }
    else {
      plVar22 = (longlong *)**(undefined8 **)*plVar8;
    }
    local_res18 = (undefined ***)CONCAT71(local_res18._1_7_,cVar30);
    cVar31 = (undefined8 *)*plVar8 == (undefined8 *)0x0;
    if ((bool)cVar31) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)*plVar8;
    }
    local_res10 = CONCAT71(local_res10._1_7_,cVar31);
LAB_14022b005:
    if (cVar30 == '\0') {
      cVar31 = plVar22 == plVar8;
    }
    if (cVar31 != '\0') goto LAB_14022b36f;
    uVar9 = FUN_140086de0(plVar22 + 6,&DAT_14048e5bc,&DAT_14048e5be);
    plVar10 = (longlong *)FUN_140086de0(plVar22 + 6,&DAT_140474874,&DAT_140474878);
    pdVar11 = (double *)FUN_140086de0(plVar22 + 6,"index","");
    lVar12 = FUN_140086de0(plVar22 + 6,&DAT_14048f9a0,&DAT_14048f9a4);
    cVar30 = FUN_140088800(uVar9);
    if (((cVar30 != '\0') && (cVar30 = FUN_140088760(pdVar11), cVar30 != '\0')) &&
       ((char)plVar10[1] == '\x04')) {
      lStack_2b8 = 0;
      uVar27 = 0xf;
      local_2c0 = 0;
      local_2d8 = 0;
      local_2d0 = 0;
      local_2b0 = 0;
      local_2a8 = 0xf;
      local_2c8 = (undefined *)FUN_140086000(uVar9);
      cVar30 = *(char *)(pdVar11 + 1);
      if (cVar30 == '\0') {
        uVar20 = 0;
      }
      else if ((cVar30 == '\x01') || (cVar30 == '\x02')) {
        uVar20 = *(uint *)pdVar11;
      }
      else if (cVar30 == '\x03') {
        uVar20 = (uint)(longlong)*pdVar11;
      }
      else {
        if (cVar30 != '\x05') {
          FUN_140089050(local_228);
          FUN_14000c990(local_228,"Value is not convertible to UInt.");
          FID_conflict__assert
                    (L"false && oss.str().c_str()",
                     L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x2e5);
                    /* WARNING: Subroutine does not return */
          FUN_1402c97e4();
        }
        uVar20 = (uint)(*(char *)pdVar11 != '\0');
      }
      bVar32 = local_2c8 != (undefined *)0x0;
      local_2d8 = CONCAT44(uVar20,(uint)bVar32);
      if (*(char *)(lVar12 + 8) == '\x04') {
        plVar13 = (longlong *)FUN_140085cc0(lVar12,&local_278);
        if (&local_2c0 != plVar13) {
          local_2c0 = *plVar13;
          uVar27 = plVar13[3];
          lStack_2b8 = plVar13[1];
          local_2b0 = plVar13[2];
          plVar13[2] = 0;
          plVar13[3] = 0xf;
          *(undefined1 *)plVar13 = 0;
          local_2a8 = uVar27;
        }
        if (0xf < local_260) {
          uVar19 = local_260 + 1;
          lVar12 = local_278;
          if (0xfff < uVar19) {
            lVar12 = *(longlong *)(local_278 + -8);
            if (0x1f < (local_278 - lVar12) - 8U) goto LAB_14022b8cb;
            uVar19 = local_260 + 0x28;
          }
          thunk_FUN_14028af80(lVar12,uVar19);
        }
      }
      pcVar24 = (char *)*plVar10;
      if ((pcVar24 != (char *)0x0) && ((*(uint *)(plVar10 + 1) >> 8 & 1) != 0)) {
        pcVar24 = pcVar24 + 4;
      }
      iVar7 = strcmp(pcVar24,"emitterimage");
      if (iVar7 == 0) {
        local_2d0 = 1;
      }
      else {
        iVar7 = strcmp(pcVar24,"collisionmodel");
        if (iVar7 != 0) {
          param_1 = local_res8;
          if (0xf < uVar27) {
            uVar19 = uVar27 + 1;
            lVar12 = local_2c0;
            if (0xfff < uVar19) {
              lVar12 = *(longlong *)(local_2c0 + -8);
              if (0x1f < (local_2c0 - lVar12) - 8U) goto LAB_14022b8cb;
              uVar19 = uVar27 + 0x28;
            }
            thunk_FUN_14028af80(lVar12,uVar19);
            param_1 = local_res8;
          }
          goto LAB_14022b2fb;
        }
        local_2d0 = 3;
      }
      param_1 = local_res8;
      ppuVar2 = local_res8[0x129];
      if (ppuVar2 == local_res8[0x12a]) {
        FUN_140255d40(local_res8 + 0x128,ppuVar2,&local_2d8);
      }
      else {
        *(undefined4 *)(ppuVar2 + 1) = local_2d0;
        ppuVar2[2] = local_2c8;
        *(uint *)ppuVar2 = (uint)bVar32;
        *(uint *)((longlong)ppuVar2 + 4) = uVar20;
        FUN_140016fc0(ppuVar2 + 3,&local_2c0);
        param_1[0x129] = param_1[0x129] + 7;
      }
      FUN_140078250(param_1 + 0x3f,&local_298,&local_2c8);
      if (0xf < local_2a8) {
        uVar27 = local_2a8 + 1;
        lVar12 = local_2c0;
        if (0xfff < uVar27) {
          lVar12 = *(longlong *)(local_2c0 + -8);
          if (0x1f < (local_2c0 - lVar12) - 8U) goto LAB_14022b8cb;
          uVar27 = local_2a8 + 0x28;
        }
        thunk_FUN_14028af80(lVar12,uVar27);
      }
    }
LAB_14022b2fb:
    plVar10 = (longlong *)plVar22[2];
    cVar30 = (char)local_res18;
    cVar31 = (char)local_res10;
    if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar10 + 0x19);
      plVar22 = plVar10;
      while (cVar1 == '\0') {
        plVar22 = (longlong *)*plVar22;
        cVar1 = *(char *)(*plVar22 + 0x19);
      }
    }
    else {
      cVar1 = *(char *)(plVar22[1] + 0x19);
      plVar13 = (longlong *)plVar22[1];
      plVar10 = plVar22;
      while ((plVar22 = plVar13, cVar1 == '\0' && (plVar10 == (longlong *)plVar22[2]))) {
        cVar1 = *(char *)(plVar22[1] + 0x19);
        plVar13 = (longlong *)plVar22[1];
        plVar10 = plVar22;
      }
    }
    goto LAB_14022b005;
  }
LAB_14022b37d:
  plVar8 = (longlong *)FUN_140086de0(pppuVar29,"particle","");
  if ((char)*(uint *)(plVar8 + 1) == '\x04') {
    pcVar24 = (char *)*plVar8;
    if ((pcVar24 != (char *)0x0) && ((*(uint *)(plVar8 + 1) >> 8 & 1) != 0)) {
      pcVar24 = pcVar24 + 4;
    }
  }
  else {
    pcVar24 = "";
  }
  local_240 = 0;
  local_238 = 0;
  local_250 = (undefined8 *****)0x0;
  uStack_248 = 0;
  sVar14 = strlen(pcVar24);
  FUN_140017480(&local_250,pcVar24,sVar14);
  pppuVar28 = param_1 + 0x58;
  pppppuVar18 = &local_250;
  if (0xf < local_238) {
    pppppuVar18 = (undefined8 *****)local_250;
  }
  local_res18 = pppuVar28;
  FUN_14022c3c0(pppuVar28,pppppuVar18,0);
  FUN_14022cfa0(pppuVar28,pppuVar25);
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xff6f;
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) | *(ushort *)((longlong)param_1 + 0x2dc)
  ;
  lVar12 = FUN_140086de0(pppuVar29,"instanceoverride","");
  lVar15 = FUN_140087490(lVar12,"color","");
  if (lVar15 != 0) {
    puVar16 = (undefined8 *)FUN_140086de0(lVar12,"color","");
    pcVar24 = (char *)*puVar16;
    if (pcVar24 == (char *)0x0) {
      fVar33 = 0.0;
      fVar35 = 0.0;
      fVar34 = 0.0;
    }
    else {
      if ((*(uint *)(puVar16 + 1) >> 8 & 1) != 0) {
        pcVar24 = pcVar24 + 4;
      }
      fVar33 = 0.0;
      fVar35 = 0.0;
      fVar34 = 0.0;
      if ((pcVar24 != (char *)0x0) && (*pcVar24 != '\0')) {
        dVar4 = (double)FUN_1402d06ac(pcVar24);
        fVar33 = (float)dVar4;
        cVar30 = *pcVar24;
        while (cVar30 != '\0') {
          if (*pcVar24 == ' ') goto LAB_14022b507;
          pcVar24 = pcVar24 + 1;
          cVar30 = *pcVar24;
        }
LAB_14022b514:
        dVar4 = (double)FUN_1402d06ac(pcVar24);
        fVar35 = (float)dVar4;
        cVar30 = *pcVar24;
        while (cVar30 != '\0') {
          if (*pcVar24 == ' ') goto LAB_14022b545;
          pcVar24 = pcVar24 + 1;
          cVar30 = *pcVar24;
        }
LAB_14022b552:
        dVar4 = (double)FUN_1402d06ac(pcVar24);
        fVar34 = (float)dVar4;
      }
    }
    FUN_1404217a0(local_228,0,0xc4);
    local_2e0 = (double)(fVar34 / DAT_14049290c);
    local_2e8 = (double)(fVar35 / DAT_14049290c);
    FUN_1400162a0(local_228,0xc4,"%.5f %.5f %.5f",(double)(fVar33 / DAT_14049290c));
    local_288 = 0;
    local_280 = 0;
    local_298 = (char ****)0x0;
    uStack_290 = 0;
    sVar14 = strlen((char *)local_228);
    FUN_140017480(&local_298,local_228,sVar14);
    uVar27 = local_280;
    ppppcVar5 = local_298;
    uVar6 = (undefined4)local_288;
    uVar19 = local_288 & 0xffffffff;
    local_270 = CONCAT31(local_270._1_3_,4);
    local_res10 = uVar19 + 5;
    pppppcVar26 = &local_298;
    if (0xf < local_280) {
      pppppcVar26 = (char *****)local_298;
    }
    puVar17 = (undefined4 *)_malloc_base(local_res10);
    if (puVar17 == (undefined4 *)0x0) {
      FUN_140017170(&local_278,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_278);
    }
    *puVar17 = uVar6;
    uVar20 = local_270 | 0x100;
    FUN_1404210f0(puVar17 + 1,pppppcVar26,uVar19);
    *(undefined1 *)((longlong)puVar17 + local_res10 + -1) = 0;
    plVar8 = (longlong *)FUN_140086de0(lVar12,"colorn");
    local_270 = (uint)plVar8[1];
    *(uint *)(plVar8 + 1) = uVar20;
    local_278 = *plVar8;
    *plVar8 = (longlong)puVar17;
    lVar15 = plVar8[2];
    plVar8[2] = 0;
    local_258 = plVar8[4];
    local_260 = plVar8[3];
    plVar8[3] = 0;
    plVar8[4] = 0;
    local_268 = lVar15;
    FUN_140086d30(&local_278);
    if (lVar15 != 0) {
      FUN_140017240(lVar15 + 0x40);
      FUN_140017240(lVar15 + 0x20);
      FUN_140017240(lVar15);
      thunk_FUN_14028af80(lVar15,0x60);
    }
    if (0xf < uVar27) {
      uVar19 = uVar27 + 1;
      pppppcVar26 = (char *****)ppppcVar5;
      if (0xfff < uVar19) {
        pppppcVar26 = (char *****)ppppcVar5[-1];
        if (0x1f < (ulonglong)((longlong)ppppcVar5 + (-8 - (longlong)pppppcVar26)))
        goto LAB_14022b8cb;
        uVar19 = uVar27 + 0x28;
      }
      thunk_FUN_14028af80(pppppcVar26,uVar19);
    }
    uStack_290 = 5;
    local_298 = (char ****)0x140489070;
    FUN_1400878f0(lVar12,&local_298);
    param_1 = local_res8;
    pppuVar28 = local_res18;
  }
  if (*(char *)(lVar12 + 8) == '\a') {
    FUN_1401a38f0(param_1 + 0xf0,lVar12);
    FUN_1401730d0(param_1[0x19] + 0x2e1,param_1 + 0xef,lVar12);
  }
  else {
    uVar9 = FUN_14024d760(local_228,param_1[0x19] + 0x391);
    FUN_14022b930(param_1 + 0xef,uVar9);
    FUN_14000d9e0(local_188);
    FUN_14015a700(local_198);
    FUN_14000d9e0(local_1c8);
    FUN_14015a780(local_1d8);
    local_228[0] = &PTR_FUN_14048b760;
    for (; local_210 != local_208; local_210 = local_210 + 0x40) {
      plVar8 = *(longlong **)(local_210 + 0x38);
      local_res8 = local_228;
      if (plVar8 == (longlong *)0x0) goto LAB_14022b8d2;
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_res8);
    }
    FUN_1400317e0(local_1f8);
    FUN_1400317e0(&local_210);
  }
  fVar33 = DAT_140492620;
  if (DAT_140492620 <= *(float *)((longlong)param_1 + 0x854)) {
    fVar33 = *(float *)((longlong)param_1 + 0x854);
  }
  *(undefined1 *)(param_1 + 0x125) = 0;
  *(float *)((longlong)param_1 + 0x854) = fVar33;
  FUN_14022bd40(pppuVar28,1);
  if (0xf < local_238) {
    uVar27 = local_238 + 1;
    pppppuVar18 = (undefined8 *****)local_250;
    if (0xfff < uVar27) {
      pppppuVar18 = (undefined8 *****)local_250[-1];
      if (0x1f < (ulonglong)((longlong)local_250 + (-8 - (longlong)pppppuVar18))) {
LAB_14022b8cb:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        puVar23 = auStack_300;
LAB_14022b8d2:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar23 + -8) = &UNK_14022b8d7;
        FUN_14028c2c0();
      }
      uVar27 = local_238 + 0x28;
    }
    thunk_FUN_14028af80(pppppuVar18,uVar27);
  }
  return;
LAB_14022b36f:
  pppuVar25 = param_1 + 0x128;
  pppuVar29 = param_1 + 0x36;
  goto LAB_14022b37d;
  while (pcVar24 = pcVar24 + 1, *pcVar24 != '\0') {
LAB_14022b507:
    if (*pcVar24 != ' ') break;
  }
  goto LAB_14022b514;
  while (pcVar24 = pcVar24 + 1, *pcVar24 != '\0') {
LAB_14022b545:
    if (*pcVar24 != ' ') break;
  }
  goto LAB_14022b552;
}

