// Function: FUN_140004d00
// Addr: 140004d00
// Size: 2467 bytes


undefined8 * FUN_140004d00(undefined8 *param_1,undefined8 param_2,char param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined7 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [24];
  char local_2c8;
  undefined6 uStack_2c7;
  char cStack_2c1;
  char cStack_2c0;
  char cStack_2bf;
  char cStack_2be;
  char cStack_2bd;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  ulonglong local_2b0;
  longlong local_2a8;
  uint local_2a0;
  longlong local_298;
  longlong lStack_290;
  longlong local_288;
  undefined **local_280;
  undefined1 local_278 [48];
  undefined1 local_248 [16];
  undefined1 local_238 [32];
  longlong *local_218;
  longlong *local_210;
  longlong *local_1f8;
  ulonglong *local_1f0;
  int *local_1e0;
  ulonglong local_1c8;
  uint local_1c0;
  undefined1 local_148 [16];
  undefined1 local_138 [32];
  longlong *local_118;
  longlong *local_110;
  longlong *local_f8;
  ulonglong *local_f0;
  int *local_e0;
  ulonglong local_c8;
  uint local_c0;
  
  puVar17 = auStack_2e8;
  if (param_3 == '\0') {
    lVar14 = *(longlong *)ThreadLocalStoragePointer;
    if ((*(uint *)(lVar14 + 0x148) & 2) == 0) {
      *(uint *)(lVar14 + 0x148) = *(uint *)(lVar14 + 0x148) | 2;
      FUN_14028b030(&LAB_140423ef0);
    }
    if (*(longlong *)(lVar14 + 0x138) == 0) {
      FUN_14008c080(&local_280);
      local_2a0 = CONCAT31(local_2a0._1_3_,4);
      local_2a0 = local_2a0 | 0x100;
      local_288 = 0;
      local_298 = 0;
      lStack_290 = 0;
      local_2a8 = FUN_140084b30(&DAT_140472248,4);
      local_2b8 = 0xc;
      local_2b0 = 0xf;
      local_2c8 = (char)s_commentStyle_140472238._0_8_;
      uStack_2c7 = SUB86(s_commentStyle_140472238._0_8_,1);
      cStack_2c1 = SUB81(s_commentStyle_140472238._0_8_,7);
      cStack_2c0 = (char)s_commentStyle_140472238._8_4_;
      cStack_2bf = SUB41(s_commentStyle_140472238._8_4_,1);
      cStack_2be = SUB41(s_commentStyle_140472238._8_4_,2);
      cStack_2bd = SUB41(s_commentStyle_140472238._8_4_,3);
      uStack_2bc = 0;
      uVar6 = FUN_140086de0(local_278,&local_2c8,&uStack_2bc);
      FUN_140085610(uVar6,&local_2a8);
      if (0xf < local_2b0) {
        lVar9 = CONCAT17(cStack_2c1,CONCAT61(uStack_2c7,local_2c8));
        uVar13 = local_2b0 + 1;
        lVar11 = lVar9;
        if (0xfff < uVar13) {
          lVar11 = *(longlong *)(lVar9 + -8);
          if (0x1f < (lVar9 - lVar11) - 8U) goto LAB_140005620;
          uVar13 = local_2b0 + 0x28;
        }
        thunk_FUN_14028af80(lVar11,uVar13);
      }
      local_2b8 = 0;
      local_2b0 = 0xf;
      local_2c8 = '\0';
      FUN_140085440(&local_2a8);
      local_2a0 = CONCAT31(local_2a0._1_3_,4);
      local_2a0 = local_2a0 | 0x100;
      local_288 = 0;
      local_298 = 0;
      lStack_290 = 0;
      local_2a8 = FUN_140084b30(&DAT_140474480,0);
      local_2b8 = 0xb;
      local_2c8 = (char)s_indentation_140472250._0_7_;
      uStack_2c7 = SUB76(s_indentation_140472250._0_7_,1);
      uStack_2bc = 0;
      local_2b0 = 0xf;
      cStack_2c1 = (char)s_indentation_140472250._7_4_;
      cStack_2c0 = SUB41(s_indentation_140472250._7_4_,1);
      cStack_2bf = SUB41(s_indentation_140472250._7_4_,2);
      cStack_2be = SUB41(s_indentation_140472250._7_4_,3);
      cStack_2bd = '\0';
      uVar6 = FUN_140086de0(local_278,&local_2c8,&cStack_2bd);
      FUN_140085610(uVar6,&local_2a8);
      if (0xf < local_2b0) {
        FUN_140017200(&local_2c8,CONCAT17(cStack_2c1,CONCAT61(uStack_2c7,local_2c8)));
      }
      local_2b8 = 0;
      local_2b0 = 0xf;
      local_2c8 = '\0';
      FUN_140085440(&local_2a8);
      local_2a0 = CONCAT31(local_2a0._1_3_,5);
      local_2a0 = local_2a0 & 0xfffffeff;
      cStack_2bf = '\0';
      cStack_2be = 0;
      cStack_2bd = '\0';
      uStack_2bc = 0;
      local_288 = 0;
      local_298 = 0;
      lStack_290 = 0;
      local_2a8 = CONCAT71(local_2a8._1_7_,1);
      local_2b8 = 8;
      local_2b0 = 0xf;
      local_2c8 = (char)s_emitUTF8_140472260._0_8_;
      uStack_2c7 = SUB86(s_emitUTF8_140472260._0_8_,1);
      cStack_2c1 = SUB81(s_emitUTF8_140472260._0_8_,7);
      cStack_2c0 = '\0';
      uVar6 = FUN_140086de0(local_278,&local_2c8,&cStack_2c0);
      FUN_140085610(uVar6,&local_2a8);
      if (0xf < local_2b0) {
        FUN_140017200(&local_2c8,CONCAT17(cStack_2c1,CONCAT61(uStack_2c7,local_2c8)));
      }
      local_2b8 = 0;
      local_2b0 = 0xf;
      local_2c8 = '\0';
      FUN_140085440(&local_2a8);
      cStack_2c0 = s_precision_140472270[8];
      local_2a0 = CONCAT31(local_2a0._1_3_,1);
      local_2a0 = local_2a0 & 0xfffffeff;
      cStack_2be = '\0';
      cStack_2bd = '\0';
      uStack_2bc = 0;
      local_2b8 = 9;
      local_298 = 0;
      lStack_290 = 0;
      local_288 = 0;
      local_2a8 = 8;
      local_2b0 = 0xf;
      local_2c8 = (char)s_precision_140472270._0_8_;
      uStack_2c7 = SUB86(s_precision_140472270._0_8_,1);
      cStack_2c1 = SUB81(s_precision_140472270._0_8_,7);
      cStack_2bf = '\0';
      uVar6 = FUN_140086de0(local_278,&local_2c8,&cStack_2bf);
      FUN_140085610(uVar6,&local_2a8);
      if (0xf < local_2b0) {
        FUN_140017200(&local_2c8,CONCAT17(cStack_2c1,CONCAT61(uStack_2c7,local_2c8)));
      }
      local_2b8 = 0;
      local_2b0 = 0xf;
      local_2c8 = '\0';
      FUN_140085440(&local_2a8);
      uVar6 = FUN_14008c580(&local_280);
      puVar1 = *(undefined8 **)(lVar14 + 0x138);
      *(undefined8 *)(lVar14 + 0x138) = uVar6;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      local_280 = &PTR__scalar_deleting_destructor__140485060;
      FUN_140085440(local_278);
    }
    FUN_14000ef10(local_148);
    (**(code **)(**(longlong **)(lVar14 + 0x138) + 8))
              (*(longlong **)(lVar14 + 0x138),param_2,local_138);
    uVar13 = (ulonglong)local_c0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    puVar17 = auStack_2e8;
    if ((((byte)local_c0 & 0x22) == 2) || (uVar18 = *local_f0, puVar17 = auStack_2e8, uVar18 == 0))
    {
LAB_140005627:
      if (((uVar13 & 4) == 0) && (*local_f8 != 0)) {
        lVar14 = *local_118;
        uVar18 = (longlong)*local_e0 + *local_f8;
        goto LAB_140005652;
      }
    }
    else {
      lVar14 = *local_110;
      puVar17 = auStack_2e8;
      if (uVar18 < local_c8) {
        puVar17 = auStack_2e8;
        uVar18 = local_c8;
      }
LAB_140005652:
      if (lVar14 != 0) {
        *(undefined8 *)(puVar17 + -8) = 0x140005665;
        FUN_14000f880(param_1,lVar14,uVar18 - lVar14);
      }
    }
    puVar12 = local_148;
    goto LAB_14000566c;
  }
  lVar14 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(uint *)(lVar14 + 0x148) & 1) == 0) {
    *(uint *)(lVar14 + 0x148) = *(uint *)(lVar14 + 0x148) | 1;
    FUN_14028b030(&LAB_140423f20);
  }
  if (*(longlong *)(lVar14 + 0x140) == 0) {
    FUN_14008c080(&local_280);
    local_2a0 = CONCAT31(local_2a0._1_3_,4);
    local_2a0 = local_2a0 | 0x100;
    local_288 = 0;
    local_298 = 0;
    lStack_290 = 0;
    local_2a8 = FUN_140084b30(&DAT_140472248,4);
    local_2b8 = 0xc;
    local_2b0 = 0xf;
    local_2c8 = (char)s_commentStyle_140472238._0_8_;
    uStack_2c7 = SUB86(s_commentStyle_140472238._0_8_,1);
    cStack_2c1 = SUB81(s_commentStyle_140472238._0_8_,7);
    cStack_2c0 = (char)s_commentStyle_140472238._8_4_;
    cStack_2bf = SUB41(s_commentStyle_140472238._8_4_,1);
    cStack_2be = SUB41(s_commentStyle_140472238._8_4_,2);
    cStack_2bd = SUB41(s_commentStyle_140472238._8_4_,3);
    uStack_2bc = 0;
    uVar6 = FUN_140086de0(local_278,&local_2c8,&uStack_2bc);
    FUN_140085610(uVar6,&local_2a8);
    if (0xf < local_2b0) {
      lVar9 = CONCAT17(cStack_2c1,CONCAT61(uStack_2c7,local_2c8));
      uVar13 = local_2b0 + 1;
      lVar11 = lVar9;
      if (uVar13 < 0x1000) {
LAB_140004e37:
        thunk_FUN_14028af80(lVar11,uVar13);
        goto LAB_140004e3c;
      }
      lVar11 = *(longlong *)(lVar9 + -8);
      if ((lVar9 - lVar11) - 8U < 0x20) {
        uVar13 = local_2b0 + 0x28;
        goto LAB_140004e37;
      }
LAB_140005620:
      uVar13 = 5;
      pcVar2 = (code *)swi(0x29);
      (*pcVar2)();
      puVar17 = auStack_2e0;
      goto LAB_140005627;
    }
LAB_140004e3c:
    local_2b8 = 0;
    local_2b0 = 0xf;
    local_2c8 = '\0';
    FUN_140085440(&local_2a8);
    local_2a0 = CONCAT31(local_2a0._1_3_,4);
    puVar7 = (undefined4 *)_malloc_base(6);
    uVar4 = s_indentation_140472250._0_7_;
    if (puVar7 == (undefined4 *)0x0) {
      FUN_140017170(&local_2a8,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_2a8);
    }
    *puVar7 = 1;
    uVar15 = local_2a0 | 0x100;
    *(char *)(puVar7 + 1) = (char)DAT_14047225c;
    uVar5 = s_indentation_140472250._7_4_;
    local_2b8 = 0xb;
    local_2c8 = (char)uVar4;
    uStack_2c7 = SUB76(uVar4,1);
    *(undefined1 *)((longlong)puVar7 + 5) = 0;
    uStack_2bc = 0;
    local_2b0 = 0xf;
    cStack_2c1 = (char)uVar5;
    cStack_2c0 = SUB41(uVar5,1);
    cStack_2bf = SUB41(uVar5,2);
    cStack_2be = SUB41(uVar5,3);
    cStack_2bd = '\0';
    plVar8 = (longlong *)FUN_140086de0(local_278,&local_2c8,&cStack_2bd);
    local_2a0 = *(uint *)(plVar8 + 1);
    *(uint *)(plVar8 + 1) = uVar15;
    local_2a8 = *plVar8;
    *plVar8 = (longlong)puVar7;
    lVar11 = plVar8[2];
    plVar8[2] = 0;
    lStack_290 = plVar8[3];
    local_288 = plVar8[4];
    plVar8[4] = 0;
    plVar8[3] = 0;
    local_298 = lVar11;
    if (0xf < local_2b0) {
      lVar10 = CONCAT17(cStack_2c1,CONCAT61(uStack_2c7,local_2c8));
      uVar13 = local_2b0 + 1;
      lVar9 = lVar10;
      if (0xfff < uVar13) {
        lVar9 = *(longlong *)(lVar10 + -8);
        if (0x1f < (lVar10 - lVar9) - 8U) goto LAB_140005620;
        uVar13 = local_2b0 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar13);
    }
    local_2b8 = 0;
    local_2b0 = 0xf;
    local_2c8 = '\0';
    FUN_140086d30(&local_2a8);
    if (lVar11 != 0) {
      FUN_140017240(lVar11 + 0x40);
      FUN_140017240(lVar11 + 0x20);
      FUN_140017240(lVar11);
      thunk_FUN_14028af80(lVar11,0x60);
    }
    local_2a0 = CONCAT31(local_2a0._1_3_,5);
    cStack_2bf = '\0';
    cStack_2be = '\0';
    cStack_2bd = '\0';
    uStack_2bc = 0;
    local_2b8 = 8;
    uVar16 = local_2a0 & 0xfffffeff;
    local_2a8 = CONCAT71(local_2a8._1_7_,1);
    local_2b0 = 0xf;
    local_2c8 = (char)s_emitUTF8_140472260._0_8_;
    uStack_2c7 = SUB86(s_emitUTF8_140472260._0_8_,1);
    cStack_2c1 = SUB81(s_emitUTF8_140472260._0_8_,7);
    cStack_2c0 = '\0';
    plVar8 = (longlong *)FUN_140086de0(local_278,&local_2c8,&cStack_2c0);
    uVar15 = *(uint *)(plVar8 + 1);
    *(uint *)(plVar8 + 1) = uVar16;
    lVar11 = *plVar8;
    *plVar8 = local_2a8;
    lVar9 = plVar8[2];
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar8[4] = 0;
    if (0xf < local_2b0) {
      lVar3 = CONCAT17(cStack_2c1,CONCAT61(uStack_2c7,local_2c8));
      uVar13 = local_2b0 + 1;
      lVar10 = lVar3;
      if (0xfff < uVar13) {
        lVar10 = *(longlong *)(lVar3 + -8);
        if (0x1f < (lVar3 - lVar10) - 8U) goto LAB_140005620;
        uVar13 = local_2b0 + 0x28;
      }
      thunk_FUN_14028af80(lVar10,uVar13);
    }
    local_2b8 = 0;
    local_2b0 = 0xf;
    local_2c8 = '\0';
    switch(uVar15 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((uVar15 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(lVar11);
      }
      break;
    case 6:
    case 7:
      if (lVar11 != 0) {
        FUN_140088e40(lVar11);
        thunk_FUN_14028af80(lVar11,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    if (lVar9 != 0) {
      FUN_140017240(lVar9 + 0x40);
      FUN_140017240(lVar9 + 0x20);
      FUN_140017240(lVar9);
      thunk_FUN_14028af80(lVar9,0x60);
    }
    cStack_2c0 = s_precision_140472270[8];
    local_2a0 = CONCAT31(local_2a0._1_3_,1);
    local_2a0 = local_2a0 & 0xfffffeff;
    cStack_2be = '\0';
    cStack_2bd = '\0';
    uStack_2bc = 0;
    local_2b8 = 9;
    local_298 = 0;
    lStack_290 = 0;
    local_288 = 0;
    local_2a8 = 8;
    local_2b0 = 0xf;
    local_2c8 = (char)s_precision_140472270._0_8_;
    uStack_2c7 = SUB86(s_precision_140472270._0_8_,1);
    cStack_2c1 = SUB81(s_precision_140472270._0_8_,7);
    cStack_2bf = '\0';
    uVar6 = FUN_140086de0(local_278,&local_2c8,&cStack_2bf);
    FUN_140085610(uVar6,&local_2a8);
    if (0xf < local_2b0) {
      lVar9 = CONCAT17(cStack_2c1,CONCAT61(uStack_2c7,local_2c8));
      uVar13 = local_2b0 + 1;
      lVar11 = lVar9;
      if (0xfff < uVar13) {
        lVar11 = *(longlong *)(lVar9 + -8);
        if (0x1f < (lVar9 - lVar11) - 8U) goto LAB_140005620;
        uVar13 = local_2b0 + 0x28;
      }
      thunk_FUN_14028af80(lVar11,uVar13);
    }
    local_2b8 = 0;
    local_2b0 = 0xf;
    local_2c8 = '\0';
    FUN_140085440(&local_2a8);
    uVar6 = FUN_14008c580(&local_280);
    puVar1 = *(undefined8 **)(lVar14 + 0x140);
    *(undefined8 *)(lVar14 + 0x140) = uVar6;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    local_280 = &PTR__scalar_deleting_destructor__140485060;
    FUN_140085440(local_278);
  }
  FUN_14000ef10(local_248);
  (**(code **)(**(longlong **)(lVar14 + 0x140) + 8))
            (*(longlong **)(lVar14 + 0x140),param_2,local_238);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if ((((byte)local_1c0 & 0x22) == 2) || (uVar13 = *local_1f0, uVar13 == 0)) {
    if (((local_1c0 & 4) == 0) && (*local_1f8 != 0)) {
      lVar14 = *local_218;
      uVar13 = (longlong)*local_1e0 + *local_1f8;
      goto LAB_140005261;
    }
  }
  else {
    lVar14 = *local_210;
    if (uVar13 < local_1c8) {
      uVar13 = local_1c8;
    }
LAB_140005261:
    if (lVar14 != 0) {
      FUN_14000f880(param_1,lVar14,uVar13 - lVar14);
    }
  }
  puVar12 = local_248;
LAB_14000566c:
  *(undefined8 *)(puVar17 + -8) = 0x140005671;
  FUN_1400056d0(puVar12);
  return param_1;
}

