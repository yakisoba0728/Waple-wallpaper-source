// Function: FUN_140072b40
// Addr: 140072b40
// Size: 1281 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_140072b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 param_5)

{
  short *psVar1;
  short *psVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  short *psVar10;
  undefined8 *puVar11;
  undefined8 *******pppppppuVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  short *psVar16;
  ulonglong local_2a8;
  ulonglong uStack_2a0;
  ulonglong local_298;
  ulonglong uStack_290;
  undefined8 *******local_288;
  longlong lStack_280;
  longlong local_278;
  ulonglong uStack_270;
  undefined1 local_268;
  undefined7 uStack_267;
  undefined8 local_258;
  ulonglong local_250;
  undefined1 local_248;
  undefined7 uStack_247;
  undefined8 local_238;
  ulonglong local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 local_1a8;
  undefined7 uStack_1a7;
  undefined8 local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  
  plVar7 = (longlong *)FUN_140005950(&local_228,param_3);
  local_288 = (undefined8 *******)*plVar7;
  lStack_280 = plVar7[1];
  local_278 = plVar7[2];
  uStack_270 = plVar7[3];
  plVar7[2] = 0;
  plVar7[3] = 7;
  *(undefined2 *)plVar7 = 0;
  uVar15 = CONCAT44(uStack_20c,uStack_210);
  if (7 < uVar15) {
    lVar4 = CONCAT44(uStack_224,local_228);
    uVar13 = uVar15 * 2 + 2;
    lVar14 = lVar4;
    if (0xfff < uVar13) {
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar14) - 8U) goto LAB_140073a53;
      uVar13 = uVar15 * 2 + 0x29;
    }
    uVar8 = func_0x00014028b040(lVar14,uVar13);
    return uVar8;
  }
  puVar9 = (ulonglong *)FUN_140005950(&local_228,param_3);
  uVar13 = *puVar9;
  local_2a8 = *puVar9;
  uStack_2a0 = puVar9[1];
  local_298 = puVar9[2];
  uStack_290 = puVar9[3];
  puVar9[2] = 0;
  puVar9[3] = 7;
  *(undefined2 *)puVar9 = 0;
  uVar15 = CONCAT44(uStack_20c,uStack_210);
  if (7 < uVar15) {
    lVar4 = CONCAT44(uStack_224,local_228);
    uVar13 = uVar15 * 2 + 2;
    lVar14 = lVar4;
    if (0xfff < uVar13) {
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar14) - 8U) goto LAB_140073a53;
      uVar13 = uVar15 * 2 + 0x29;
    }
    uVar8 = func_0x00014028b040(lVar14,uVar13);
    return uVar8;
  }
  pppppppuVar12 = &local_288;
  if (7 < uStack_270) {
    pppppppuVar12 = local_288;
  }
  psVar2 = (short *)((longlong)pppppppuVar12 + local_278 * 2);
  psVar16 = psVar2;
  for (psVar10 = (short *)FUN_140015f60((int)uVar13,psVar2); psVar10 != psVar2;
      psVar10 = psVar10 + 1) {
    if ((*psVar10 != 0x5c) && (*psVar10 != 0x2f)) goto LAB_140072cc0;
  }
LAB_140072cdd:
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  FUN_140016240(&local_188,psVar16,(longlong)psVar2 - (longlong)psVar16 >> 1);
  local_228 = (undefined4)local_188;
  uStack_224 = local_188._4_4_;
  uStack_220 = (undefined4)uStack_180;
  uStack_21c = uStack_180._4_4_;
  local_218 = (undefined4)local_178;
  uStack_214 = local_178._4_4_;
  uStack_210 = (undefined4)uStack_170;
  uStack_20c = uStack_170._4_4_;
  puVar11 = (undefined8 *)FUN_140018db0(&local_228,&local_1a8);
  if (0xf < (ulonglong)puVar11[3]) {
    puVar11 = (undefined8 *)*puVar11;
  }
  iVar6 = FUN_1402c11a0(puVar11,"project.json");
  if (0xf < local_190) {
    lVar4 = CONCAT71(uStack_1a7,local_1a8);
    uVar15 = local_190 + 1;
    lVar14 = lVar4;
    if (0xfff < uVar15) {
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar14) - 8U) goto LAB_140073a53;
      uVar15 = local_190 + 0x28;
    }
    uVar8 = func_0x00014028b040(lVar14,uVar15);
    return uVar8;
  }
  uVar15 = CONCAT44(uStack_20c,uStack_210);
  local_198 = 0;
  local_190 = 0xf;
  local_1a8 = 0;
  if (7 < uVar15) {
    lVar4 = CONCAT44(uStack_224,local_228);
    uVar13 = uVar15 * 2 + 2;
    lVar14 = lVar4;
    if (0xfff < uVar13) {
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar14) - 8U) goto LAB_140073a53;
      uVar13 = uVar15 * 2 + 0x29;
    }
    uVar8 = func_0x00014028b040(lVar14,uVar13);
    return uVar8;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400166d0(&local_228,&local_288);
  }
  FUN_140018db0(&local_288,&local_248);
  FUN_140018db0(&local_2a8,&local_268);
  if ((param_4 != 0) || (param_4 = FUN_14011e5f0(&local_268), param_4 != 0)) {
    if ((param_4 != 2) || (cVar5 = FUN_140018a50(&local_268), cVar5 == '\0')) {
      FUN_140018880(&local_248);
      FUN_140018880(&local_268);
    }
    uVar8 = FUN_140054050(&local_2a8,&local_228);
    puVar11 = (undefined8 *)FUN_140018db0(uVar8,&local_1a8);
    if (param_4 == 4) {
      plVar7 = puVar11 + 2;
      if (0xf < (ulonglong)puVar11[3]) {
        puVar11 = (undefined8 *)*puVar11;
      }
      if (*plVar7 == 5) {
        func_0x0001404210c0(puVar11,".webm");
      }
    }
    if (local_190 < 0x10) {
      local_198 = 0;
      local_190 = 0xf;
      local_1a8 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_140016840(&local_228);
    }
    lVar4 = CONCAT71(uStack_1a7,local_1a8);
    uVar15 = local_190 + 1;
    lVar14 = lVar4;
    if (0xfff < uVar15) {
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar14) - 8U) goto LAB_140073a53;
      uVar15 = local_190 + 0x28;
    }
    uVar8 = func_0x00014028b040(lVar14,uVar15);
    return uVar8;
  }
  if (0xf < local_250) {
    lVar4 = CONCAT71(uStack_267,local_268);
    uVar15 = local_250 + 1;
    lVar14 = lVar4;
    if (0xfff < uVar15) {
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar14) - 8U) goto LAB_140073a53;
      uVar15 = local_250 + 0x28;
    }
    uVar8 = func_0x00014028b040(lVar14,uVar15);
    return uVar8;
  }
  local_258 = 0;
  local_250 = 0xf;
  local_268 = 0;
  if (0xf < local_230) {
    lVar4 = CONCAT71(uStack_247,local_248);
    uVar15 = local_230 + 1;
    lVar14 = lVar4;
    if (0xfff < uVar15) {
      lVar14 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar14) - 8U) {
LAB_140073a53:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
                    /* WARNING: Subroutine does not return */
        FUN_140017440();
      }
      uVar15 = local_230 + 0x28;
    }
    uVar8 = func_0x00014028b040(lVar14,uVar15);
    return uVar8;
  }
  local_238 = 0;
  local_230 = 0xf;
  local_248 = 0;
  if (uStack_290 < 8) {
    local_2a8 = local_2a8 & 0xffffffffffff0000;
    uStack_290 = 7;
    local_298 = 0;
    if (7 < uStack_270) {
      FUN_140016b60(&local_288,local_288);
    }
    local_278 = 0;
    uStack_270 = 7;
    local_288 = (undefined8 *******)((ulonglong)local_288 & 0xffffffffffff0000);
    func_0x000140085510(param_5);
    return 0;
  }
  uVar15 = uStack_290 * 2 + 2;
  uVar13 = local_2a8;
  if (0xfff < uVar15) {
    uVar13 = *(ulonglong *)(local_2a8 - 8);
    if (0x1f < (local_2a8 - uVar13) - 8) goto LAB_140073a53;
    uVar15 = uStack_290 * 2 + 0x29;
  }
  uVar8 = func_0x00014028b040(uVar13,uVar15);
  return uVar8;
LAB_140072cc0:
  psVar1 = psVar16 + -1;
  if (psVar16[-1] == 0x5c) goto LAB_140072cdd;
  if ((psVar16[-1] == 0x2f) || (psVar16 = psVar1, psVar10 == psVar1)) goto LAB_140072cdd;
  goto LAB_140072cc0;
}

