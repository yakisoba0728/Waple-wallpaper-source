// Function: FUN_140154480
// Addr: 140154480
// Size: 4549 bytes


/* WARNING: Removing unreachable block (ram,0x000140154d20) */
/* WARNING: Removing unreachable block (ram,0x000140154d35) */

void FUN_140154480(longlong param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  char *_Str;
  size_t sVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined8 *****pppppuVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  uint *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined8 *****pppppuVar21;
  undefined8 ****ppppuVar22;
  ulonglong uVar23;
  char *pcVar24;
  longlong *plVar25;
  undefined1 *puVar26;
  char *pcVar27;
  longlong *plVar28;
  undefined1 uVar29;
  undefined8 ****ppppuVar30;
  char *pcVar31;
  char *pcVar32;
  char cVar33;
  bool bVar34;
  uint local_res18 [2];
  undefined8 *local_res20;
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  uint *local_150;
  uint local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_128;
  char local_120;
  undefined8 ****local_118;
  undefined8 ***pppuStack_110;
  undefined8 ***local_108;
  undefined8 ***pppuStack_100;
  longlong local_f8;
  ulonglong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [8];
  char local_c8;
  undefined1 *local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined1 local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [48];
  
  puVar26 = auStack_198;
  FUN_1401730d0(*(longlong *)(param_1 + 200) + 0x1708,param_1,param_2);
  FUN_140031950(local_88);
  plVar8 = (longlong *)FUN_140087490(param_2,"combos","");
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)FUN_140084ac0();
  }
  if ((*(uint *)(plVar8 + 1) & 0xff) == 7) {
    local_120 = (undefined8 *)*plVar8 == (undefined8 *)0x0;
    if ((bool)local_120) {
      local_128 = 0;
    }
    else {
      local_128 = **(longlong **)*plVar8;
    }
    cVar33 = (longlong *)*plVar8 == (longlong *)0x0;
    if ((bool)cVar33) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)*plVar8;
    }
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,cVar33);
    while( true ) {
      lVar15 = local_128;
      if (local_120 == '\0') {
        cVar33 = local_128 == lVar11;
      }
      if (cVar33 != '\0') break;
      pcVar24 = *(char **)(local_128 + 0x20);
      if ((pcVar24 != (char *)0x0) &&
         (pcVar32 = pcVar24 + (*(uint *)(local_128 + 0x28) >> 2), pcVar24 < pcVar32)) {
        _Str = (char *)thunk_FUN_14028af20(pcVar32 + (1 - (longlong)pcVar24));
        pcVar27 = pcVar24;
        pcVar31 = _Str;
        do {
          iVar6 = toupper((int)*pcVar27);
          pcVar27 = pcVar27 + 1;
          *pcVar31 = (char)iVar6;
          pcVar31 = pcVar31 + 1;
        } while (pcVar27 != pcVar32);
        pcVar32[(longlong)_Str - (longlong)pcVar24] = '\0';
        uVar7 = FUN_140085ee0(lVar15 + 0x30);
        local_168 = 0;
        uStack_160 = 0;
        local_178 = (undefined4 *)0x0;
        uStack_170 = 0;
        sVar9 = strlen(_Str);
        FUN_140017480(&local_178,_Str,sVar9);
        puVar10 = (undefined4 *)FUN_14015a440(local_88,&local_178);
        *puVar10 = uVar7;
        FUN_140017240(&local_178);
        thunk_FUN_14028af80(_Str);
      }
      FUN_1400175a0(&local_128);
      cVar33 = (char)local_res18[0];
    }
  }
  lVar11 = FUN_140087490(param_2,"constantshadervalues","");
  if (lVar11 == 0) {
    lVar11 = FUN_140084ac0();
  }
  local_128 = param_1 + 0x248;
  FUN_140085520(local_128,lVar11);
  lVar11 = FUN_140087490(param_2,"usertextures","");
  if (lVar11 == 0) {
    local_f8 = lVar11;
    lVar11 = FUN_140084ac0();
  }
  local_f8 = lVar11;
  if (*(char *)(lVar11 + 8) == '\x06') {
    local_res18[0] = 0;
    iVar6 = FUN_1400863a0(lVar11);
    local_res20 = (undefined8 *)CONCAT44(local_res20._4_4_,iVar6);
    if ((int)local_res18[0] < iVar6) {
      do {
        lVar11 = FUN_140086b80(lVar11,local_res18[0]);
        uVar20 = *(uint *)(lVar11 + 8) & 0xff;
        if ((uVar20 == 4) || (uVar20 == 7)) {
          ppppuVar22 = (undefined8 ****)0x0;
          pppuStack_100 = (undefined8 ****)0xf;
          local_108 = (undefined8 ****)0x0;
          ppppuVar30 = (undefined8 ****)0xf;
          uVar7 = 0;
          pppuStack_110 = (undefined8 ****)0x0;
          local_118 = (undefined8 *****)0x0;
          uVar29 = 0;
          if (uVar20 == 4) {
            pppppuVar12 = (undefined8 *****)FUN_140085cc0(lVar11,&local_150);
            if (&local_118 != pppppuVar12) {
              ppppuVar22 = pppppuVar12[2];
              ppppuVar30 = pppppuVar12[3];
              local_118 = *pppppuVar12;
              pppuStack_110 = pppppuVar12[1];
              pppppuVar12[2] = (undefined8 ****)0x0;
              pppppuVar12[3] = (undefined8 ****)0xf;
              *(undefined1 *)pppppuVar12 = 0;
              local_108 = ppppuVar22;
              pppuStack_100 = ppppuVar30;
            }
            FUN_140017240(&local_150);
          }
          else {
            lVar15 = FUN_140087490(lVar11,&DAT_1404748b8,&DAT_1404748bc);
            if (lVar15 == 0) {
              lVar15 = FUN_140084ac0();
            }
            if (*(char *)(lVar15 + 8) == '\x04') {
              pppppuVar12 = (undefined8 *****)FUN_140085cc0(lVar15,&local_150);
              if (&local_118 != pppppuVar12) {
                ppppuVar22 = pppppuVar12[2];
                ppppuVar30 = pppppuVar12[3];
                local_118 = *pppppuVar12;
                pppuStack_110 = pppppuVar12[1];
                pppppuVar12[2] = (undefined8 ****)0x0;
                pppppuVar12[3] = (undefined8 ****)0xf;
                *(undefined1 *)pppppuVar12 = 0;
                local_108 = ppppuVar22;
                pppuStack_100 = ppppuVar30;
              }
              FUN_140017240(&local_150);
            }
            plVar8 = (longlong *)FUN_140087490(lVar11,&DAT_140474874,&DAT_140474878);
            if (plVar8 == (longlong *)0x0) {
              plVar8 = (longlong *)FUN_140084ac0();
            }
            uVar7 = 0;
            if ((char)*(uint *)(plVar8 + 1) == '\x04') {
              lVar15 = *plVar8;
              if ((lVar15 != 0) && ((*(uint *)(plVar8 + 1) >> 8 & 1) != 0)) {
                lVar15 = lVar15 + 4;
              }
              iVar6 = FUN_1402c10d0(lVar15,"system");
              if (iVar6 == 0) {
                uVar7 = 1;
              }
              else {
                iVar6 = FUN_1402c10d0(lVar15,"usershortcut");
                uVar7 = 0;
                if (iVar6 == 0) {
                  uVar7 = 2;
                }
              }
            }
            lVar11 = FUN_140087490(lVar11,"keepaspect","");
            if (lVar11 == 0) {
              lVar11 = FUN_140084ac0();
            }
            if (*(char *)(lVar11 + 8) == '\x05') {
              cVar33 = FUN_140086300(lVar11);
              uVar29 = 0;
              if (cVar33 != '\0') {
                uVar29 = 1;
              }
            }
          }
          if (ppppuVar22 == (undefined8 ****)0x0) {
            if ((undefined8 ****)0xf < ppppuVar30) {
              ppppuVar22 = (undefined8 ****)((longlong)ppppuVar30 + 1);
              pppppuVar12 = (undefined8 *****)local_118;
              if ((undefined8 ****)0xfff < ppppuVar22) {
                pppppuVar12 = (undefined8 *****)local_118[-1];
                if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)pppppuVar12)))
                goto LAB_1401553a1;
                ppppuVar22 = ppppuVar30 + 5;
              }
              thunk_FUN_14028af80(pppppuVar12,ppppuVar22);
            }
          }
          else {
            puVar13 = (undefined8 *)FUN_14028af20(0x58);
            pppppuVar12 = (undefined8 *****)(puVar13 + 7);
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            *pppppuVar12 = (undefined8 ****)0x0;
            puVar13[8] = 0;
            puVar13[9] = 0;
            puVar13[10] = 0xf;
            *(undefined1 *)pppppuVar12 = 0;
            *(undefined1 *)(puVar13 + 6) = 1;
            if (pppppuVar12 != &local_118) {
              pppppuVar21 = &local_118;
              if ((undefined8 ****)0xf < ppppuVar30) {
                pppppuVar21 = (undefined8 *****)local_118;
              }
              FUN_14000f880(pppppuVar12,pppppuVar21,ppppuVar22);
              ppppuVar30 = (undefined8 ****)pppuStack_100;
            }
            *(uint *)((longlong)puVar13 + 4) = local_res18[0];
            puVar13[1] = FUN_1401538d0;
            *(undefined4 *)puVar13 = 5;
            puVar14 = (undefined8 *)FUN_14028af20(0x60);
            puVar17 = puVar14 + 4;
            *puVar14 = &PTR_FUN_14048b700;
            *(undefined4 *)(puVar14 + 3) = 0;
            *puVar17 = 0;
            puVar14[5] = 0;
            puVar14[6] = 0;
            puVar14[7] = 0xf;
            *(undefined1 *)puVar17 = 0;
            puVar14[8] = 0;
            puVar14[9] = 0;
            puVar14[10] = 0;
            puVar14[0xb] = 0xf;
            *(undefined1 *)(puVar14 + 8) = 0;
            puVar14[1] = param_1;
            puVar14[2] = puVar13;
            if (puVar14 != puVar13 + 3) {
              pppppuVar21 = pppppuVar12;
              if (0xf < (ulonglong)puVar13[10]) {
                pppppuVar21 = (undefined8 *****)*pppppuVar12;
              }
              FUN_14000f880(puVar17,pppppuVar21,puVar13[9]);
            }
            *(undefined4 *)(puVar14 + 3) = uVar7;
            puVar17 = (undefined8 *)FUN_14028af20(0x38);
            puVar17[2] = 0;
            puVar17[3] = 0;
            puVar17[4] = 0;
            puVar1 = puVar17 + 2;
            puVar17[5] = 0xf;
            *(undefined1 *)puVar1 = 0;
            *(undefined1 *)(puVar17 + 6) = uVar29;
            puVar17[1] = puVar13;
            *puVar17 = puVar14;
            if (0xf < (ulonglong)puVar13[10]) {
              pppppuVar12 = (undefined8 *****)*pppppuVar12;
            }
            lVar11 = *(longlong *)(param_1 + 200) + 0x1718;
            sVar9 = strlen((char *)pppppuVar12);
            lVar15 = FUN_140087490(lVar11,pppppuVar12,(longlong)pppppuVar12 + sVar9);
            if (lVar15 == 0) {
LAB_140154aaf:
              local_e0 = 0;
              uStack_e8 = 0;
              local_f0 = 0;
              uStack_d8 = 0xf;
            }
            else {
              sVar9 = strlen((char *)pppppuVar12);
              uVar16 = FUN_140086de0(lVar11,pppppuVar12,(longlong)pppppuVar12 + sVar9);
              lVar11 = FUN_140087490(uVar16,"value","");
              if ((lVar11 == 0) ||
                 (lVar11 = FUN_140086de0(uVar16,"value",""), *(char *)(lVar11 + 8) != '\x04'))
              goto LAB_140154aaf;
              FUN_140085cc0(lVar11,&local_f0);
            }
            if (puVar1 != &local_f0) {
              FUN_140017240(puVar1);
              uVar4 = uStack_d8;
              uVar16 = local_e0;
              uVar23 = local_f0;
              local_e0 = 0;
              uStack_d8 = 0xf;
              local_f0 = local_f0 & 0xffffffffffffff00;
              *puVar1 = uVar23;
              puVar17[3] = uStack_e8;
              puVar17[4] = uVar16;
              puVar17[5] = uVar4;
            }
            FUN_140017240(&local_f0);
            FUN_140175880(*(longlong *)(param_1 + 200) + 0x1708,puVar14);
            plVar8 = (longlong *)FUN_14004b8a0(param_1 + 0x270,&local_178,local_res18);
            *(undefined8 **)(*plVar8 + 0x18) = puVar17;
            if ((undefined8 ****)0xf < ppppuVar30) {
              ppppuVar22 = (undefined8 ****)((longlong)ppppuVar30 + 1);
              pppppuVar12 = (undefined8 *****)local_118;
              if ((undefined8 ****)0xfff < ppppuVar22) {
                pppppuVar12 = (undefined8 *****)local_118[-1];
                if (0x1f < (ulonglong)((longlong)local_118 + (-8 - (longlong)pppppuVar12)))
                goto LAB_1401553a1;
                ppppuVar22 = ppppuVar30 + 5;
              }
              thunk_FUN_14028af80(pppppuVar12,ppppuVar22);
            }
          }
        }
        local_res18[0] = local_res18[0] + 1;
        lVar11 = local_f8;
      } while ((int)local_res18[0] < (int)local_res20);
    }
  }
  lVar11 = param_1 + 0x248;
  FUN_1401556e0(param_1,param_2);
  if (*(char *)(param_1 + 0x1f0) == '\x03') {
    local_168 = 0xf;
    uStack_160 = 0xf;
    local_178 = (undefined4 *)s_ALPHATOCOVERAGE_14048b5a0._0_8_;
    uStack_170 = (ulonglong)
                 CONCAT16(s_ALPHATOCOVERAGE_14048b5a0[0xe],
                          CONCAT24(s_ALPHATOCOVERAGE_14048b5a0._12_2_,
                                   s_ALPHATOCOVERAGE_14048b5a0._8_4_));
    puVar10 = (undefined4 *)FUN_14015a440(local_88,&local_178);
    *puVar10 = 1;
    if (0xf < uStack_160) {
      uVar23 = uStack_160 + 1;
      puVar10 = local_178;
      if (0xfff < uVar23) {
        puVar10 = *(undefined4 **)(local_178 + -2);
        if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)puVar10))) goto LAB_1401553a1;
        uVar23 = uStack_160 + 0x28;
      }
      thunk_FUN_14028af80(puVar10,uVar23);
    }
  }
  if (*(char *)(param_1 + 0x1f0) == '\x02') {
    local_168 = 8;
    local_178 = (undefined4 *)s_ADDITIVE_14048b628._0_8_;
    uStack_170 = 0;
    uStack_160 = 0xf;
    puVar10 = (undefined4 *)FUN_14015a440(local_88,&local_178);
    *puVar10 = 1;
    if (0xf < uStack_160) {
      uVar23 = uStack_160 + 1;
      puVar10 = local_178;
      if (0xfff < uVar23) {
        puVar10 = *(undefined4 **)(local_178 + -2);
        if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)puVar10))) goto LAB_1401553a1;
        uVar23 = uStack_160 + 0x28;
      }
      thunk_FUN_14028af80(puVar10,uVar23);
    }
  }
  local_a8 = local_88;
  uStack_160 = 0xf;
  uStack_170 = 0;
  local_168 = 6;
  local_178 = (undefined4 *)(ulonglong)CONCAT24(s_shader_14048b4bc._4_2_,s_shader_14048b4bc._0_4_);
  local_a0 = 0;
  uStack_98 = 0;
  plVar8 = (longlong *)FUN_140087490(param_2,&local_178,(longlong)&local_178 + 6);
  if (0xf < uStack_160) {
    uVar23 = uStack_160 + 1;
    puVar10 = local_178;
    if (0xfff < uVar23) {
      puVar10 = *(undefined4 **)(local_178 + -2);
      if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)puVar10))) {
LAB_1401553a1:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        puVar26 = auStack_190;
LAB_1401553a8:
        plVar8 = (longlong *)**(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x20);
        cVar33 = *(char *)((longlong)plVar8 + 0x19);
        do {
          if (cVar33 != '\0') {
            puVar13 = *(undefined8 **)(param_1 + 0x50);
            puVar17 = (undefined8 *)*puVar13;
            do {
              if (puVar17 == puVar13) {
                lVar11 = *(longlong *)(param_1 + 200);
                *(undefined8 *)(puVar26 + -8) = 0x1401555d5;
                FUN_1401730d0(lVar11 + 0x1708,param_1,param_1 + 0x248);
                *(uint *)(param_1 + 0x1f8) = *(uint *)(param_1 + 0x1f8) | 3;
                *(undefined8 *)(puVar26 + -8) = 0x1401555e6;
                FUN_14000d9e0(local_70);
                *(undefined8 *)(puVar26 + -8) = 0x1401555ef;
                FUN_140030c70(local_80);
                return;
              }
              lVar11 = *(longlong *)(param_1 + 0x30);
              lVar15 = *(longlong *)(param_1 + 0x38);
              if (lVar11 != lVar15) {
                do {
                  plVar8 = *(longlong **)(lVar11 + 0x38);
                  local_res18[0] = local_res18[0] & 0xffffff00;
                  local_res20 = puVar17 + 6;
                  if (plVar8 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                    *(undefined **)(puVar26 + -8) = &UNK_14015562b;
                    FUN_14028c2c0();
                  }
                  pcVar2 = *(code **)(*plVar8 + 0x10);
                  *(undefined8 *)(puVar26 + -8) = 0x1401555a0;
                  (*pcVar2)(plVar8,&local_res20,local_res18);
                  lVar11 = lVar11 + 0x40;
                } while (lVar11 != lVar15);
              }
              puVar17 = (undefined8 *)*puVar17;
            } while( true );
          }
          plVar25 = plVar8 + 0x11;
          *(undefined8 *)(puVar26 + -8) = 0x1401553f7;
          FUN_14015ac40(param_1 + 0x48,puVar26 + 0x70,plVar25);
          lVar11 = *(longlong *)(puVar26 + 0x70);
          plVar28 = (longlong *)(lVar11 + 0x30);
          *(undefined1 *)(lVar11 + 0x60) = 1;
          if (plVar28 != plVar8 + 10) {
            if (0xf < (ulonglong)plVar8[0x14]) {
              plVar25 = (longlong *)*plVar25;
            }
            lVar15 = plVar8[0x13];
            *(undefined8 *)(puVar26 + -8) = 0x14015542d;
            FUN_14000f880(lVar11 + 0x68,plVar25,lVar15);
          }
          cVar33 = *(char *)((longlong)plVar8 + 0x45);
          *(undefined8 *)(lVar11 + 0x40) = 0;
          *(int *)(lVar11 + 0x34) = cVar33 * 4 + 0x120;
          *(undefined1 **)(lVar11 + 0x58) = &LAB_1401538c0;
          if ((*(byte *)((longlong)plVar8 + 0xac) & 0x20) != 0) {
            *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 4;
          }
          cVar33 = *(char *)((longlong)plVar8 + 0x44);
          if (cVar33 == '\x01') {
            *(undefined4 *)plVar28 = 4;
            *(code **)(lVar11 + 0x38) = FUN_1401a4b00;
            *(undefined1 **)(lVar11 + 0x50) = &LAB_1401a4a10;
            puVar19 = &LAB_1401a49f0;
LAB_1401554f8:
            *(undefined1 **)(lVar11 + 0x48) = puVar19;
          }
          else {
            if (cVar33 == '\x02') {
              *(undefined4 *)plVar28 = 1;
              *(code **)(lVar11 + 0x38) = FUN_1401a3fc0;
              *(undefined1 **)(lVar11 + 0x50) = &LAB_1401a4220;
              puVar19 = &LAB_1401a4200;
              goto LAB_1401554f8;
            }
            if (cVar33 == '\x03') {
              *(undefined4 *)plVar28 = 2;
              *(code **)(lVar11 + 0x38) = FUN_1401a4230;
              *(undefined1 **)(lVar11 + 0x50) = &LAB_1401a4560;
              puVar19 = &LAB_1401a4530;
              goto LAB_1401554f8;
            }
            if (cVar33 == '\x04') {
              *(undefined4 *)plVar28 = 3;
              *(code **)(lVar11 + 0x38) = FUN_1401a4580;
              *(undefined1 **)(lVar11 + 0x50) = &LAB_1401a4920;
              *(undefined1 **)(lVar11 + 0x48) = &LAB_1401a4900;
            }
          }
          plVar25 = (longlong *)plVar8[2];
          if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
            cVar33 = *(char *)(*plVar25 + 0x19);
            while (cVar33 == '\0') {
              plVar25 = (longlong *)*plVar25;
              cVar33 = *(char *)(*plVar25 + 0x19);
            }
          }
          else {
            cVar33 = *(char *)(plVar8[1] + 0x19);
            plVar28 = (longlong *)plVar8[1];
            while ((plVar25 = plVar28, cVar33 == '\0' && (plVar8 == (longlong *)plVar25[2]))) {
              cVar33 = *(char *)(plVar25[1] + 0x19);
              plVar28 = (longlong *)plVar25[1];
              plVar8 = plVar25;
            }
          }
          cVar33 = *(char *)((longlong)plVar25 + 0x19);
          plVar8 = plVar25;
        } while( true );
      }
      uVar23 = uStack_160 + 0x28;
    }
    thunk_FUN_14028af80(puVar10,uVar23);
  }
  local_168 = 0;
  uStack_160 = 0xf;
  local_178 = (undefined4 *)((ulonglong)local_178 & 0xffffffffffffff00);
  if ((plVar8 == (longlong *)0x0) || ((char)*(uint *)(plVar8 + 1) != '\x04')) {
    pcVar24 = "error";
  }
  else {
    pcVar24 = (char *)*plVar8;
    if ((pcVar24 != (char *)0x0) && ((*(uint *)(plVar8 + 1) >> 8 & 1) != 0)) {
      pcVar24 = pcVar24 + 4;
    }
  }
  local_a0 = param_1 + 0xd0;
  lVar15 = FUN_1401a5c40(*(longlong *)(param_1 + 200) + 0x15a8,pcVar24,&local_a8);
  *(longlong *)(param_1 + 0x1e0) = lVar15;
  plVar8 = (longlong *)**(longlong **)(lVar15 + 0x20);
  cVar33 = *(char *)((longlong)plVar8 + 0x19);
  while (cVar33 == '\0') {
    plVar25 = plVar8 + 4;
    plVar28 = plVar25;
    if (0xf < (ulonglong)plVar8[7]) {
      plVar28 = (longlong *)*plVar25;
    }
    lVar15 = FUN_140087490(lVar11,plVar28,plVar8[6] + (longlong)plVar28);
    if (lVar15 == 0) {
      plVar28 = plVar8 + 9;
      if (*(char *)((longlong)plVar8 + 0x44) == '\x01') {
        if (0xf < (ulonglong)plVar8[0xc]) {
          plVar28 = (longlong *)*plVar28;
        }
        local_148 = CONCAT31(local_148._1_3_,3);
        local_148 = local_148 & 0xfffffeff;
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        local_150 = (uint *)FUN_1402d06ac(plVar28);
        if (0xf < (ulonglong)plVar8[7]) {
          plVar25 = (longlong *)*plVar25;
        }
        uVar16 = FUN_140086de0(lVar11,plVar25,plVar8[6] + (longlong)plVar25);
        FUN_140085610(uVar16,&local_150);
        FUN_140086d30(&local_150);
        lVar15 = local_140;
        if (local_140 != 0) {
          FUN_140017240(local_140 + 0x40);
          FUN_140017240(lVar15 + 0x20);
          FUN_140017240(lVar15);
          thunk_FUN_14028af80(lVar15,0x60);
        }
      }
      else {
        uVar20 = *(uint *)(plVar8 + 0xb);
        uVar23 = (ulonglong)uVar20;
        local_148 = CONCAT31(local_148._1_3_,4);
        local_148 = local_148 | 0x100;
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        if (0xf < (ulonglong)plVar8[0xc]) {
          plVar28 = (longlong *)*plVar28;
        }
        puVar18 = (uint *)_malloc_base(uVar23 + 5);
        if (puVar18 == (uint *)0x0) {
          FUN_140017170(&local_150,
                        "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                       );
                    /* WARNING: Subroutine does not return */
          FUN_140084bc0(&local_150);
        }
        *puVar18 = uVar20;
        FUN_1404210f0(puVar18 + 1,plVar28,uVar23);
        lVar11 = local_128;
        *(undefined1 *)(uVar23 + 4 + (longlong)puVar18) = 0;
        if (0xf < (ulonglong)plVar8[7]) {
          plVar25 = (longlong *)*plVar25;
        }
        local_150 = puVar18;
        uVar16 = FUN_140086de0(local_128,plVar25,plVar8[6] + (longlong)plVar25);
        FUN_140085610(uVar16,&local_150);
        FUN_140085440(&local_150);
      }
    }
    plVar25 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar25 + 0x19) == '\0') {
      cVar33 = *(char *)(*plVar25 + 0x19);
      plVar8 = plVar25;
      while (cVar33 == '\0') {
        plVar8 = (longlong *)*plVar8;
        cVar33 = *(char *)(*plVar8 + 0x19);
      }
    }
    else {
      cVar33 = *(char *)(plVar8[1] + 0x19);
      plVar28 = (longlong *)plVar8[1];
      plVar25 = plVar8;
      while ((plVar8 = plVar28, cVar33 == '\0' && (plVar25 == (longlong *)plVar8[2]))) {
        cVar33 = *(char *)(plVar8[1] + 0x19);
        plVar28 = (longlong *)plVar8[1];
        plVar25 = plVar8;
      }
    }
    cVar33 = *(char *)((longlong)plVar8 + 0x19);
  }
  plVar8 = (longlong *)FUN_140087490(param_2,"usershadervalues","");
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)FUN_140084ac0();
  }
  if ((((char)plVar8[1] == '\x06') || ((char)plVar8[1] == '\a')) &&
     ((undefined8 *)*plVar8 != (undefined8 *)0x0)) {
    bVar3 = false;
    plVar25 = (longlong *)**(undefined8 **)*plVar8;
  }
  else {
    plVar25 = (longlong *)0x0;
    bVar3 = true;
  }
  do {
    if ((((char)plVar8[1] == '\x06') || ((char)plVar8[1] == '\a')) &&
       ((undefined8 *)*plVar8 != (undefined8 *)0x0)) {
      plVar28 = *(longlong **)*plVar8;
      bVar34 = false;
    }
    else {
      plVar28 = (longlong *)0x0;
      bVar34 = true;
    }
    if (!bVar3) {
      bVar34 = plVar25 == plVar28;
    }
    if (bVar34) goto LAB_1401553a8;
    puVar17 = (undefined8 *)FUN_140085cc0(plVar25 + 6,&local_178);
    puVar13 = puVar17;
    if (0xf < (ulonglong)puVar17[3]) {
      puVar13 = (undefined8 *)*puVar17;
    }
    uVar16 = FUN_140086de0(lVar11,puVar13,puVar17[2] + (longlong)puVar13);
    FUN_140085090(local_d0,uVar16);
    if (0xf < uStack_160) {
      uVar23 = uStack_160 + 1;
      puVar10 = local_178;
      if (0xfff < uVar23) {
        puVar10 = *(undefined4 **)(local_178 + -2);
        if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)puVar10))) goto LAB_1401553a1;
        uVar23 = uStack_160 + 0x28;
      }
      thunk_FUN_14028af80(puVar10,uVar23);
    }
    if ((local_c8 == '\a') && (lVar11 = FUN_140087490(local_d0,"value",""), lVar11 != 0)) {
      uVar16 = FUN_140086de0(local_d0,"value","");
      FUN_140085520(local_d0,uVar16);
    }
    local_148 = CONCAT31(local_148._1_3_,7);
    local_148 = local_148 & 0xfffffeff;
    local_140 = 0;
    uStack_138 = 0;
    local_130 = 0;
    puVar18 = (uint *)FUN_14028af20(0x10);
    puVar18[0] = 0;
    puVar18[1] = 0;
    puVar18[2] = 0;
    puVar18[3] = 0;
    lVar11 = FUN_14028af20(0x58);
    *(longlong *)lVar11 = lVar11;
    *(longlong *)(lVar11 + 8) = lVar11;
    *(longlong *)(lVar11 + 0x10) = lVar11;
    *(undefined2 *)(lVar11 + 0x18) = 0x101;
    *(longlong *)puVar18 = lVar11;
    local_150 = puVar18;
    uVar16 = FUN_140086de0(&local_150,"value","");
    FUN_140085520(uVar16,local_d0);
    uVar23 = uStack_170;
    uStack_170 = CONCAT71(uStack_170._1_7_,4);
    local_158 = 0;
    pcVar24 = "";
    if ((char *)plVar25[4] != (char *)0x0) {
      pcVar24 = (char *)plVar25[4];
    }
    uStack_170._4_4_ = SUB84(uVar23,4);
    uStack_170 = CONCAT44(uStack_170._4_4_,(undefined4)uStack_170) | 0x100;
    local_168 = 0;
    uStack_160 = 0;
    sVar9 = strlen(pcVar24);
    puVar10 = (undefined4 *)_malloc_base((sVar9 & 0xffffffff) + 5);
    if (puVar10 == (undefined4 *)0x0) {
      FUN_140017170(&local_150,
                    "in Json::Value::duplicateAndPrefixStringValue(): Failed to allocate string value buffer"
                   );
                    /* WARNING: Subroutine does not return */
      FUN_140084bc0(&local_150);
    }
    *puVar10 = (int)sVar9;
    FUN_1404210f0(puVar10 + 1,pcVar24,sVar9 & 0xffffffff);
    *(undefined1 *)((sVar9 & 0xffffffff) + 4 + (longlong)puVar10) = 0;
    local_178 = puVar10;
    uVar16 = FUN_140086de0(&local_150,&DAT_1404737fc,&DAT_140473800);
    FUN_1400856e0(&local_178,uVar16);
    FUN_140085440(&local_178);
    puVar17 = (undefined8 *)FUN_140085cc0(plVar25 + 6,&local_178);
    lVar11 = local_128;
    puVar13 = puVar17;
    if (0xf < (ulonglong)puVar17[3]) {
      puVar13 = (undefined8 *)*puVar17;
    }
    uVar16 = FUN_140086de0(local_128,puVar13,puVar17[2] + (longlong)puVar13);
    FUN_140085520(uVar16,&local_150);
    if (0xf < uStack_160) {
      uVar23 = uStack_160 + 1;
      puVar10 = local_178;
      if (0xfff < uVar23) {
        puVar10 = *(undefined4 **)(local_178 + -2);
        if (0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)puVar10))) goto LAB_1401553a1;
        uVar23 = uStack_160 + 0x28;
      }
      thunk_FUN_14028af80(puVar10,uVar23);
    }
    puVar18 = local_150;
    switch((undefined1)local_148) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      if ((local_148 >> 8 & 1) != 0) {
        thunk_FUN_1402d9040(local_150);
      }
      break;
    case 6:
    case 7:
      if (local_150 != (uint *)0x0) {
        FUN_140088e40(local_150);
        thunk_FUN_14028af80(puVar18,0x10);
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
    }
    lVar15 = local_140;
    if (local_140 != 0) {
      FUN_140017240(local_140 + 0x40);
      FUN_140017240(lVar15 + 0x20);
      FUN_140017240(lVar15);
      thunk_FUN_14028af80(lVar15,0x60);
    }
    FUN_140085440(local_d0);
    plVar28 = (longlong *)plVar25[2];
    if (*(char *)((longlong)plVar28 + 0x19) == '\0') {
      cVar33 = *(char *)(*plVar28 + 0x19);
      plVar25 = plVar28;
      while (cVar33 == '\0') {
        plVar25 = (longlong *)*plVar25;
        cVar33 = *(char *)(*plVar25 + 0x19);
      }
    }
    else {
      cVar33 = *(char *)(plVar25[1] + 0x19);
      plVar5 = (longlong *)plVar25[1];
      plVar28 = plVar25;
      while ((plVar25 = plVar5, cVar33 == '\0' && (plVar28 == (longlong *)plVar25[2]))) {
        cVar33 = *(char *)(plVar25[1] + 0x19);
        plVar5 = (longlong *)plVar25[1];
        plVar28 = plVar25;
      }
    }
  } while( true );
}

