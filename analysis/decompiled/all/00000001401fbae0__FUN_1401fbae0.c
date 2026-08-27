// Function: FUN_1401fbae0
// Addr: 1401fbae0
// Size: 4400 bytes


/* WARNING: Removing unreachable block (ram,0x0001401fc1b0) */

void FUN_1401fbae0(longlong param_1,undefined8 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  undefined8 *puVar18;
  code *pcVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  bool bVar45;
  bool bVar46;
  undefined1 *puVar47;
  char cVar48;
  longlong *plVar49;
  longlong lVar50;
  ulonglong *puVar51;
  undefined8 *puVar52;
  undefined8 uVar53;
  undefined4 *puVar54;
  longlong *plVar55;
  longlong lVar56;
  void *pvVar57;
  void *pvVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  undefined8 ****ppppuVar61;
  longlong lVar62;
  ulonglong uVar63;
  longlong lVar64;
  undefined8 *puVar65;
  undefined1 *puVar66;
  longlong lVar67;
  int iVar68;
  uint uVar69;
  int iVar70;
  undefined4 *puVar71;
  uint uVar72;
  ulonglong uVar73;
  size_t _Size;
  float fVar74;
  undefined1 *local_res18;
  undefined4 *local_res20;
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  undefined1 *local_198;
  undefined4 *local_190;
  undefined4 local_188;
  undefined8 ***local_178;
  char local_170;
  ulonglong local_160;
  undefined8 ***local_158 [3];
  ulonglong local_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  uint local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  puVar66 = auStack_1b8;
  plVar55 = (longlong *)(param_1 + 0x4b8);
  FUN_1401fa8c0(*(undefined8 *)(param_1 + 200),plVar55);
  local_108 = CONCAT31(local_108._1_3_,7);
  local_108 = local_108 & 0xfffffeff;
  uVar63 = 0;
  local_f0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  plVar49 = (longlong *)FUN_14028af20(0x10);
  *plVar49 = 0;
  plVar49[1] = 0;
  lVar50 = FUN_14028af20(0x58);
  *(longlong *)lVar50 = lVar50;
  *(longlong *)(lVar50 + 8) = lVar50;
  *(longlong *)(lVar50 + 0x10) = lVar50;
  *(undefined2 *)(lVar50 + 0x18) = 0x101;
  *plVar49 = lVar50;
  local_110 = plVar49;
  FUN_1401fd330(param_1,&local_110);
  lVar50 = FUN_140086de0(&local_110,"puppet","");
  if ((*(char *)(lVar50 + 8) != '\x04') || ((*(byte *)(param_1 + 0x304) & 0x22) != 0))
  goto LAB_1401fcbd2;
  FUN_140085cc0(lVar50,local_158);
  cVar48 = *(char *)(*(longlong *)(param_1 + 200) + 0x3058);
  uStack_128 = 0;
  local_130 = 0;
  local_138[0] = 1;
  local_120 = 0;
  local_118 = 0xf;
  local_138[0] = FUN_14017dfc0();
  FUN_14000f880(&local_130,"PUED0002",8);
  if (cVar48 == '\0') {
LAB_1401fbcab:
    puVar52 = (undefined8 *)FUN_14028af20(0x448);
    *puVar52 = 0;
    FUN_1401d5ca0(puVar52 + 1);
    puVar52[0x4a] = 0;
    puVar52[0x4b] = 0;
    puVar52[0x4c] = 0;
    puVar52[0x45] = 0;
    puVar52[0x46] = 0;
    puVar52[0x47] = 0;
    puVar52[0x48] = 0;
    puVar52[0x49] = 0;
    puVar52[0x4d] = 0;
    puVar52[0x4e] = 0;
    puVar52[0x4f] = 0;
    puVar52[0x50] = 0;
    puVar52[0x51] = 0;
    puVar52[0x52] = 0;
    puVar52[0x53] = 0;
    puVar52[0x54] = 0;
    puVar52[0x55] = 0;
    puVar52[0x56] = 0;
    puVar52[0x57] = 0;
    puVar52[0x58] = 0;
    puVar52[0x59] = 0;
    puVar52[0x5a] = 0;
    puVar52[0x5b] = 0;
    puVar52[0x5c] = 0;
    puVar52[0x5d] = 0;
    puVar52[0x5e] = 0;
    puVar52[0x5f] = 0;
    puVar52[0x60] = 0;
    puVar52[0x61] = 0;
    puVar52[0x62] = 0;
    puVar52[99] = 0;
    puVar52[100] = 0;
    puVar52[0x65] = 0;
    puVar52[0x66] = 0;
    puVar52[0x67] = 0;
    puVar52[0x68] = 0;
    puVar52[0x69] = 0;
    puVar52[0x6a] = 0;
    puVar52[0x6b] = 0;
    puVar52[0x6c] = 0;
    puVar52[0x6d] = 0;
    puVar52[0x6e] = 0;
    puVar52[0x6f] = 0;
    puVar52[0x70] = 0;
    puVar52[0x71] = 0;
    puVar52[0x74] = 0;
    puVar52[0x75] = 0;
    puVar52[0x76] = 0;
    *(undefined4 *)(puVar52 + 0x72) = 0xffffffff;
    puVar52[0x73] = 0;
    puVar52[0x77] = 0;
    puVar52[0x78] = 0;
    puVar52[0x79] = 0;
    puVar52[0x7a] = 0;
    puVar52[0x7b] = 0;
    puVar52[0x7c] = 0;
    puVar52[0x7d] = 0;
    puVar52[0x7e] = 0;
    puVar52[0x7f] = 0;
    puVar52[0x80] = 0;
    puVar52[0x81] = 0;
    puVar52[0x82] = 0;
    puVar52[0x83] = 0;
    puVar52[0x84] = 0;
    puVar52[0x85] = 0;
    puVar52[0x86] = 0;
    puVar52[0x87] = 0;
    puVar52[0x88] = 0;
    *plVar55 = (longlong)puVar52;
    ppppuVar61 = local_158;
    if (0xf < local_140) {
      ppppuVar61 = (undefined8 ****)local_158[0];
    }
    uVar53 = FUN_1400d4160(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1898),ppppuVar61,
                           &local_res18,1);
    *(undefined8 *)*plVar55 = uVar53;
    lVar50 = *(longlong *)*plVar55;
    if (lVar50 != 0) {
      FUN_140261880(lVar50,(ulonglong)local_res18 & 0xffffffff,(longlong *)*plVar55 + 1);
      lVar50 = *plVar55;
      lVar64 = *(longlong *)(lVar50 + 0x18);
      if ((*(longlong *)(lVar50 + 0x20) - lVar64 >> 3) * -0x70a3d70a3d70a3d7 != 0) {
        do {
          iVar70 = (int)uVar63;
          if ((*(byte *)(lVar64 + 0x18 + (longlong)iVar70 * 200) & 2) != 0) {
            *(int *)(lVar50 + 0x390) = iVar70;
            break;
          }
          uVar63 = (ulonglong)(iVar70 + 1U);
        } while ((ulonglong)(longlong)(int)(iVar70 + 1U) <
                 (ulonglong)((*(longlong *)(lVar50 + 0x20) - lVar64 >> 3) * -0x70a3d70a3d70a3d7));
      }
      lVar50 = *(longlong *)(*plVar55 + 0x18);
      FUN_1401aa940(*plVar55 + 0x3a0,
                    *(longlong *)(lVar50 + 0x70) - *(longlong *)(lVar50 + 0x68) >> 6);
      if (*(longlong *)(lVar50 + 0x68) != *(longlong *)(lVar50 + 0x70)) {
        uVar72 = *(uint *)(lVar50 + 100);
        uVar69 = (int)(*(longlong *)(lVar50 + 0x70) - *(longlong *)(lVar50 + 0x68) >> 6) * uVar72 +
                 1;
        fVar74 = (float)uVar69;
        if (fVar74 < 0.0) {
          fVar74 = (float)FUN_14041ad10(fVar74);
        }
        else {
          fVar74 = SQRT(fVar74);
        }
        fVar74 = (float)FUN_14041a5c0(fVar74);
        iVar70 = (int)(longlong)fVar74;
        uVar63 = (ulonglong)(iVar70 + 1);
        if (uVar69 <= (uint)(iVar70 * iVar70)) {
          uVar63 = (longlong)fVar74 & 0xffffffff;
        }
        iVar70 = (int)uVar63;
        local_res18 = (undefined1 *)CONCAT44(local_res18._4_4_,iVar70);
        uVar53 = FUN_1401a37d0(*(longlong *)(param_1 + 200) + 0x1c88);
        uVar53 = FUN_140153110(&local_e8,uVar53);
        FUN_14002fd20(&local_178,"morph_",uVar53);
        FUN_140017240(&local_e8);
        auVar20 = ZEXT816(2) * ZEXT416((uint)(iVar70 * iVar70 * 4));
        uVar53 = auVar20._0_8_;
        if (auVar20._8_8_ != 0) {
          uVar53 = 0xffffffffffffffff;
        }
        puVar54 = (undefined4 *)thunk_FUN_14028af20(uVar53);
        local_res20 = puVar54;
        FUN_1404217a0(puVar54,0,iVar70 * iVar70 * 8);
        puVar54[1] = 0x7fff0000;
        *puVar54 = 0;
        lVar64 = *(longlong *)(lVar50 + 0x68);
        if (*(longlong *)(lVar50 + 0x70) - lVar64 >> 6 != 0) {
          puVar54 = puVar54 + 2;
          iVar70 = 0;
          do {
            if ((*(uint *)(lVar50 + 0x18) & 0x1000) != 0) {
              uVar69 = 0;
              if (uVar72 != 0) {
                do {
                  lVar62 = *(longlong *)(lVar64 + 0x10 + (longlong)iVar70 * 0x40);
                  iVar68 = uVar69 * 4;
                  *(undefined4 *)((longlong)puVar54 + (longlong)iVar68 * 2) =
                       *(undefined4 *)(lVar62 + (longlong)(int)(uVar69 * 3) * 2);
                  *(undefined2 *)((longlong)puVar54 + (longlong)iVar68 * 2 + 4) =
                       *(undefined2 *)(lVar62 + 4 + (longlong)(int)(uVar69 * 3) * 2);
                  lVar62 = (longlong)(int)uVar69;
                  uVar69 = uVar69 + 1;
                  *(undefined2 *)((longlong)puVar54 + (longlong)iVar68 * 2 + 6) =
                       *(undefined2 *)
                        (*(longlong *)(lVar64 + 0x28 + (longlong)iVar70 * 0x40) + lVar62 * 2);
                } while (uVar69 < uVar72);
                lVar64 = *(longlong *)(lVar50 + 0x68);
              }
              puVar54 = (undefined4 *)((longlong)puVar54 + (ulonglong)(uVar72 * 4) * 2);
            }
            iVar70 = iVar70 + 1;
          } while ((ulonglong)(longlong)iVar70 <
                   (ulonglong)(*(longlong *)(lVar50 + 0x70) - lVar64 >> 6));
          uVar63 = (ulonglong)local_res18 & 0xffffffff;
          puVar54 = local_res20;
        }
        local_188 = 1;
        ppppuVar61 = &local_178;
        if (0xf < local_160) {
          ppppuVar61 = (undefined8 ****)local_178;
        }
        plVar55 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
        local_198 = (undefined1 *)CONCAT44(local_198._4_4_,(int)uVar63);
        local_190 = puVar54;
        uVar53 = (**(code **)(*plVar55 + 0x58))(plVar55,ppppuVar61,0x13,uVar63);
        *(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x418) = uVar53;
        thunk_FUN_14028af80(puVar54);
        FUN_14014c8f0(*(longlong *)(param_1 + 200) + 0x1520,*(longlong *)(param_1 + 0x4b8) + 0x418);
        FUN_140017240(&local_178);
      }
      plVar49 = (longlong *)(param_1 + 0x4b8);
      plVar55 = (longlong *)FUN_140086de0(param_2,"animationlayers","");
      if ((*(uint *)(plVar55 + 1) & 0xff) == 6) {
        local_170 = (undefined8 *)*plVar55 == (undefined8 *)0x0;
        if ((bool)local_170) {
          local_178 = (undefined8 ****)0x0;
        }
        else {
          local_178 = (undefined8 ***)**(undefined8 **)*plVar55;
        }
        if ((longlong *)*plVar55 == (longlong *)0x0) {
          bVar46 = true;
          ppppuVar61 = (undefined8 ****)0x0;
        }
        else {
          ppppuVar61 = *(undefined8 *****)*plVar55;
          bVar46 = false;
        }
        while( true ) {
          bVar45 = bVar46;
          if (local_170 == '\0') {
            bVar45 = (undefined8 ****)local_178 == ppppuVar61;
          }
          if (bVar45) break;
          if (*(char *)(local_178 + 7) == '\a') {
            FUN_1401fcc20(param_1,local_178 + 6);
          }
          FUN_1400175a0(&local_178);
        }
      }
      lVar50 = *plVar49;
      uVar73 = (*(longlong *)(lVar50 + 0x40) - *(longlong *)(lVar50 + 0x38) >> 4) *
               -0x1111111111111111;
      uVar72 = (uint)uVar73;
      uVar63 = uVar73 & 0xffffffff;
      FUN_1401d9660(lVar50 + 0x2b0,uVar73 & 0xffffffff);
      uVar69 = 0;
      if (uVar72 != 0) {
        do {
          lVar50 = *plVar49;
          lVar62 = (longlong)(int)uVar69;
          lVar67 = lVar62 * 0xf0;
          lVar64 = *(longlong *)(lVar50 + 0x38);
          uVar17 = *(uint *)(lVar64 + 0x60 + lVar67);
          if (uVar17 == 0xffffffff) {
            lVar50 = *(longlong *)(lVar50 + 0x2b0);
            puVar71 = (undefined4 *)(lVar64 + 0x20 + lVar67);
            uVar37 = puVar71[1];
            uVar38 = puVar71[2];
            uVar39 = puVar71[3];
            lVar62 = lVar62 * 0x40;
            puVar52 = (undefined8 *)(lVar64 + 0x30 + lVar67);
            uVar53 = *puVar52;
            uVar40 = puVar52[1];
            puVar52 = (undefined8 *)(lVar64 + 0x40 + lVar67);
            uVar41 = *puVar52;
            uVar42 = puVar52[1];
            puVar52 = (undefined8 *)(lVar64 + 0x50 + lVar67);
            uVar43 = *puVar52;
            uVar44 = puVar52[1];
            puVar54 = (undefined4 *)(lVar50 + lVar62);
            *puVar54 = *puVar71;
            puVar54[1] = uVar37;
            puVar54[2] = uVar38;
            puVar54[3] = uVar39;
            puVar52 = (undefined8 *)(lVar50 + 0x10 + lVar62);
            *puVar52 = uVar53;
            puVar52[1] = uVar40;
            puVar52 = (undefined8 *)(lVar50 + 0x20 + lVar62);
            *puVar52 = uVar41;
            puVar52[1] = uVar42;
            puVar52 = (undefined8 *)(lVar50 + 0x30 + lVar62);
            *puVar52 = uVar43;
            puVar52[1] = uVar44;
          }
          else {
            lVar50 = *(longlong *)(lVar50 + 0x2b0);
            fVar74 = *(float *)(lVar64 + 0x30 + lVar67);
            fVar2 = *(float *)(lVar64 + 0x34 + lVar67);
            fVar3 = *(float *)(lVar64 + 0x38 + lVar67);
            fVar4 = *(float *)(lVar64 + 0x3c + lVar67);
            lVar56 = (ulonglong)uVar17 * 0x40;
            lVar62 = lVar62 * 0x40;
            pfVar1 = (float *)(lVar50 + lVar56);
            fVar21 = *pfVar1;
            fVar22 = pfVar1[1];
            fVar23 = pfVar1[2];
            fVar24 = pfVar1[3];
            pfVar1 = (float *)(lVar50 + 0x10 + lVar56);
            fVar25 = *pfVar1;
            fVar26 = pfVar1[1];
            fVar27 = pfVar1[2];
            fVar28 = pfVar1[3];
            pfVar1 = (float *)(lVar50 + 0x20 + lVar56);
            fVar29 = *pfVar1;
            fVar30 = pfVar1[1];
            fVar31 = pfVar1[2];
            fVar32 = pfVar1[3];
            pfVar1 = (float *)(lVar50 + 0x30 + lVar56);
            fVar33 = *pfVar1;
            fVar34 = pfVar1[1];
            fVar35 = pfVar1[2];
            fVar36 = pfVar1[3];
            fVar5 = *(float *)(lVar64 + 0x4c + lVar67);
            fVar6 = *(float *)(lVar64 + 0x44 + lVar67);
            fVar7 = *(float *)(lVar64 + 0x48 + lVar67);
            fVar8 = *(float *)(lVar64 + 0x40 + lVar67);
            fVar9 = *(float *)(lVar64 + 0x5c + lVar67);
            fVar10 = *(float *)(lVar64 + 0x58 + lVar67);
            fVar11 = *(float *)(lVar64 + 0x50 + lVar67);
            fVar12 = *(float *)(lVar64 + 0x28 + lVar67);
            fVar13 = *(float *)(lVar64 + 0x54 + lVar67);
            fVar14 = *(float *)(lVar64 + 0x2c + lVar67);
            fVar15 = *(float *)(lVar64 + 0x24 + lVar67);
            fVar16 = *(float *)(lVar64 + 0x20 + lVar67);
            pfVar1 = (float *)(lVar62 + lVar50);
            *pfVar1 = fVar21 * fVar16 + fVar25 * fVar15 + fVar29 * fVar12 + fVar33 * fVar14;
            pfVar1[1] = fVar22 * fVar16 + fVar26 * fVar15 + fVar30 * fVar12 + fVar34 * fVar14;
            pfVar1[2] = fVar23 * fVar16 + fVar27 * fVar15 + fVar31 * fVar12 + fVar35 * fVar14;
            pfVar1[3] = fVar24 * fVar16 + fVar28 * fVar15 + fVar32 * fVar12 + fVar36 * fVar14;
            pfVar1 = (float *)(lVar62 + 0x10 + lVar50);
            *pfVar1 = fVar21 * fVar74 + fVar25 * fVar2 + fVar29 * fVar3 + fVar33 * fVar4;
            pfVar1[1] = fVar22 * fVar74 + fVar26 * fVar2 + fVar30 * fVar3 + fVar34 * fVar4;
            pfVar1[2] = fVar23 * fVar74 + fVar27 * fVar2 + fVar31 * fVar3 + fVar35 * fVar4;
            pfVar1[3] = fVar24 * fVar74 + fVar28 * fVar2 + fVar32 * fVar3 + fVar36 * fVar4;
            pfVar1 = (float *)(lVar62 + 0x20 + lVar50);
            *pfVar1 = fVar21 * fVar8 + fVar25 * fVar6 + fVar29 * fVar7 + fVar33 * fVar5;
            pfVar1[1] = fVar22 * fVar8 + fVar26 * fVar6 + fVar30 * fVar7 + fVar34 * fVar5;
            pfVar1[2] = fVar23 * fVar8 + fVar27 * fVar6 + fVar31 * fVar7 + fVar35 * fVar5;
            pfVar1[3] = fVar24 * fVar8 + fVar28 * fVar6 + fVar32 * fVar7 + fVar36 * fVar5;
            pfVar1 = (float *)(lVar62 + 0x30 + lVar50);
            *pfVar1 = fVar21 * fVar11 + fVar25 * fVar13 + fVar29 * fVar10 + fVar33 * fVar9;
            pfVar1[1] = fVar22 * fVar11 + fVar26 * fVar13 + fVar30 * fVar10 + fVar34 * fVar9;
            pfVar1[2] = fVar23 * fVar11 + fVar27 * fVar13 + fVar31 * fVar10 + fVar35 * fVar9;
            pfVar1[3] = fVar24 * fVar11 + fVar28 * fVar13 + fVar32 * fVar10 + fVar36 * fVar9;
          }
          uVar69 = uVar69 + 1;
        } while (uVar69 < uVar72);
      }
      lVar50 = *plVar49;
      if (*(longlong *)(lVar50 + 0x110) != *(longlong *)(lVar50 + 0x118)) {
        local_res18 = *(undefined1 **)(lVar50 + 0x2b0);
        local_178 = *(undefined8 ****)(lVar50 + 0x328);
        uVar73 = *(longlong *)(lVar50 + 0x2b8) - (longlong)local_res18;
        puVar54 = (undefined4 *)(*(longlong *)(lVar50 + 0x338) - (longlong)local_178 >> 6);
        puVar71 = (undefined4 *)((longlong)uVar73 >> 6);
        if (puVar54 < puVar71) {
          if ((undefined4 *)0x3ffffffffffffff < puVar71) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          if ((undefined4 *)(0x3ffffffffffffff - ((ulonglong)puVar54 >> 1)) < puVar54) {
            puVar54 = (undefined4 *)0x3ffffffffffffff;
          }
          else {
            puVar54 = (undefined4 *)(((ulonglong)puVar54 >> 1) + (longlong)puVar54);
            if (puVar54 < puVar71) {
              puVar54 = puVar71;
            }
          }
          if ((undefined8 ****)local_178 != (undefined8 ****)0x0) {
            FUN_1402d3dd0(local_178);
            *(undefined8 *)(lVar50 + 0x328) = 0;
            *(undefined8 *)(lVar50 + 0x330) = 0;
            *(undefined8 *)(lVar50 + 0x338) = 0;
          }
          pvVar57 = (void *)0x0;
          if ((puVar54 != (undefined4 *)0x0) &&
             (pvVar57 = _aligned_malloc((longlong)puVar54 * 0x40,0x10), pvVar57 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_140015110();
          }
          *(void **)(lVar50 + 0x328) = pvVar57;
          *(void **)(lVar50 + 0x330) = pvVar57;
          *(void **)(lVar50 + 0x338) = (void *)((longlong)pvVar57 + (longlong)puVar54 * 0x40);
          lVar64 = *(longlong *)(lVar50 + 0x328);
          FUN_1404210f0(lVar64,local_res18,(longlong)puVar71 * 0x40);
          lVar64 = (longlong)puVar71 * 0x40 + lVar64;
        }
        else {
          local_res20 = (undefined4 *)(*(longlong *)(lVar50 + 0x330) - (longlong)local_178 >> 6);
          if (local_res20 < puVar71) {
            lVar67 = (longlong)local_res20 * 0x40;
            FUN_1404210f0(local_178,local_res18,lVar67);
            lVar62 = *(longlong *)(lVar50 + 0x330);
            lVar64 = ((longlong)puVar71 - (longlong)local_res20) * 0x40;
            FUN_1404210f0(lVar62,local_res18 + lVar67,lVar64);
            lVar64 = lVar64 + lVar62;
          }
          else {
            uVar73 = uVar73 & 0xffffffffffffffc0;
            FUN_1404210f0(local_178,local_res18,uVar73);
            lVar64 = (longlong)local_178 + uVar73;
          }
        }
        *(longlong *)(lVar50 + 0x330) = lVar64;
      }
      pvVar58 = (void *)0x0;
      pvVar57 = pvVar58;
      if (uVar72 != 0) {
        do {
          lVar64 = (longlong)(int)pvVar57 * 0x40;
          FUN_14005f730(&local_e8,*(longlong *)(*plVar49 + 0x2b0) + lVar64);
          uVar69 = (int)pvVar57 + 1;
          lVar50 = *(longlong *)(*plVar49 + 0x2b0);
          puVar54 = (undefined4 *)(lVar50 + lVar64);
          *puVar54 = local_e8;
          puVar54[1] = uStack_e4;
          puVar54[2] = uStack_e0;
          puVar54[3] = uStack_dc;
          puVar52 = (undefined8 *)(lVar50 + 0x10 + lVar64);
          *puVar52 = local_d8;
          puVar52[1] = uStack_d0;
          puVar52 = (undefined8 *)(lVar50 + 0x20 + lVar64);
          *puVar52 = local_c8;
          puVar52[1] = uStack_c0;
          puVar52 = (undefined8 *)(lVar50 + 0x30 + lVar64);
          *puVar52 = local_b8;
          puVar52[1] = uStack_b0;
          pvVar57 = (void *)(ulonglong)uVar69;
        } while (uVar69 < uVar72);
      }
      lVar50 = *plVar49;
      puVar52 = *(undefined8 **)(lVar50 + 0x300);
      lVar64 = *(longlong *)(lVar50 + 0x2f8);
      uVar73 = (longlong)puVar52 - lVar64 >> 6;
      if (uVar63 < uVar73) {
        *(ulonglong *)(lVar50 + 0x300) = uVar63 * 0x40 + lVar64;
      }
      else if (uVar73 < uVar63) {
        uVar59 = *(longlong *)(lVar50 + 0x308) - lVar64 >> 6;
        if (uVar59 < uVar63) {
          if (0x3ffffffffffffff - (uVar59 >> 1) < uVar59) {
            _Size = 0xffffffffffffffc0;
LAB_1401fc725:
            pvVar58 = _aligned_malloc(_Size,0x10);
            if (pvVar58 == (void *)0x0) goto LAB_1401fcc01;
          }
          else {
            uVar59 = (uVar59 >> 1) + uVar59;
            uVar60 = uVar63;
            if (uVar63 <= uVar59) {
              uVar60 = uVar59;
            }
            _Size = uVar60 << 6;
            if (uVar60 != 0) goto LAB_1401fc725;
          }
          puVar52 = (undefined8 *)
                    (((longlong)puVar52 - lVar64 & 0xffffffffffffffc0U) + (longlong)pvVar58);
          for (lVar64 = uVar63 - uVar73; lVar64 != 0; lVar64 = lVar64 + -1) {
            *puVar52 = 0x3f800000;
            puVar52[1] = 0;
            *(undefined4 *)(puVar52 + 2) = 0;
            *(undefined8 *)((longlong)puVar52 + 0x14) = 0x3f800000;
            *(undefined8 *)((longlong)puVar52 + 0x1c) = 0;
            *(undefined4 *)((longlong)puVar52 + 0x24) = 0;
            puVar52[5] = 0x3f800000;
            puVar52[6] = 0;
            *(undefined4 *)(puVar52 + 7) = 0;
            *(undefined4 *)((longlong)puVar52 + 0x3c) = 0x3f800000;
            puVar52 = puVar52 + 8;
          }
          lVar64 = *(longlong *)(lVar50 + 0x2f8);
          FUN_1404210f0(pvVar58,lVar64,*(longlong *)(lVar50 + 0x300) - lVar64);
          if (lVar64 != 0) {
            FUN_1402d3dd0(lVar64);
          }
          *(void **)(lVar50 + 0x2f8) = pvVar58;
          *(void **)(lVar50 + 0x300) = (void *)(uVar63 * 0x40 + (longlong)pvVar58);
          *(size_t *)(lVar50 + 0x308) = (longlong)pvVar58 + _Size;
        }
        else {
          for (lVar64 = uVar63 - uVar73; lVar64 != 0; lVar64 = lVar64 + -1) {
            *puVar52 = 0x3f800000;
            puVar52[1] = 0;
            *(undefined4 *)(puVar52 + 2) = 0;
            *(undefined8 *)((longlong)puVar52 + 0x14) = 0x3f800000;
            *(undefined8 *)((longlong)puVar52 + 0x1c) = 0;
            *(undefined4 *)((longlong)puVar52 + 0x24) = 0;
            puVar52[5] = 0x3f800000;
            puVar52[6] = 0;
            *(undefined4 *)(puVar52 + 7) = 0;
            *(undefined4 *)((longlong)puVar52 + 0x3c) = 0x3f800000;
            puVar52 = puVar52 + 8;
          }
          *(undefined8 **)(lVar50 + 0x300) = puVar52;
        }
      }
    }
    puVar52 = *(undefined8 **)(param_1 + 0x4b8);
    if (((puVar52[1] == 0) || (puVar52[3] == puVar52[4])) && (puVar52 != (undefined8 *)0x0)) {
      lVar50 = *(longlong *)(param_1 + 200);
      thunk_FUN_14028af80(puVar52[0x68]);
      thunk_FUN_14028af80(puVar52[0x69]);
      puVar52[0x45] = 0;
      FUN_1402d3dd0(puVar52[0x46]);
      puVar52[0x46] = 0;
      FUN_1402d3dd0(puVar52[0x47]);
      puVar52[0x47] = 0;
      FUN_1402d3dd0(puVar52[0x48]);
      puVar52[0x48] = 0;
      FUN_1402d3dd0(puVar52[0x49]);
      puVar52[0x49] = 0;
      plVar55 = (longlong *)puVar52[0x7b];
      for (plVar49 = (longlong *)puVar52[0x7a]; plVar49 != plVar55; plVar49 = plVar49 + 1) {
        puVar18 = (undefined8 *)*plVar49;
        if (puVar18 != (undefined8 *)0x0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
      puVar18 = (undefined8 *)puVar52[0x54];
      for (puVar65 = (undefined8 *)puVar52[0x53]; puVar65 != puVar18; puVar65 = puVar65 + 1) {
        thunk_FUN_14028af80(*puVar65,0x1c);
      }
      FUN_1402671a0(puVar52 + 1);
      thunk_FUN_14028af80(*puVar52);
      puVar18 = (undefined8 *)puVar52[0x7f];
      if (puVar18 != (undefined8 *)0x0) {
        (**(code **)*puVar18)(puVar18,1);
      }
      puVar18 = (undefined8 *)puVar52[0x7e];
      if (puVar18 != (undefined8 *)0x0) {
        (**(code **)*puVar18)(puVar18,1);
      }
      puVar18 = (undefined8 *)puVar52[0x80];
      if (puVar18 != (undefined8 *)0x0) {
        (**(code **)*puVar18)(puVar18,1);
      }
      lVar64 = puVar52[0x7d];
      if ((lVar64 != 0) &&
         (*(int *)(lVar64 + 0x2c) = *(int *)(lVar64 + 0x2c) + -1, *(int *)(lVar64 + 0x2c) < 1)) {
        FUN_1401ab5f0(lVar50 + 0x16c0);
      }
      if (puVar52[0x82] != 0) {
        FUN_140150ac0(lVar50 + 0x1630);
      }
      if (puVar52[0x81] != 0) {
        FUN_140150ac0(lVar50 + 0x1630);
      }
      if (puVar52[0x84] != 0) {
        FUN_140150ac0(lVar50 + 0x1630);
      }
      if (puVar52[0x85] != 0) {
        FUN_140150ac0(lVar50 + 0x1630);
      }
      FUN_14014cc70(lVar50 + 0x1520,puVar52 + 0x83,1);
      puVar18 = (undefined8 *)puVar52[0x83];
      if (puVar18 != (undefined8 *)0x0) {
        (**(code **)*puVar18)(puVar18,1);
      }
      FUN_140031b80(puVar52 + 0x86);
      FUN_14000d9e0(puVar52 + 0x7a);
      FUN_140215de0(puVar52 + 0x77);
      FUN_140031b80(puVar52 + 0x74);
      if (puVar52[0x65] != 0) {
        FUN_1402d3dd0();
        puVar52[0x65] = 0;
        puVar52[0x66] = 0;
        puVar52[0x67] = 0;
      }
      if (puVar52[0x62] != 0) {
        FUN_1402d3dd0();
        puVar52[0x62] = 0;
        puVar52[99] = 0;
        puVar52[100] = 0;
      }
      if (puVar52[0x5f] != 0) {
        FUN_1402d3dd0();
        puVar52[0x5f] = 0;
        puVar52[0x60] = 0;
        puVar52[0x61] = 0;
      }
      if (puVar52[0x5c] != 0) {
        FUN_1402d3dd0();
        puVar52[0x5c] = 0;
        puVar52[0x5d] = 0;
        puVar52[0x5e] = 0;
      }
      if (puVar52[0x59] != 0) {
        FUN_1402d3dd0();
        puVar52[0x59] = 0;
        puVar52[0x5a] = 0;
        puVar52[0x5b] = 0;
      }
      if (puVar52[0x56] != 0) {
        FUN_1402d3dd0();
        puVar52[0x56] = 0;
        puVar52[0x57] = 0;
        puVar52[0x58] = 0;
      }
      FUN_14000d9e0(puVar52 + 0x53);
      FUN_140031b80(puVar52 + 0x50);
      FUN_140031b80(puVar52 + 0x4d);
      FUN_140031b80(puVar52 + 0x4a);
      FUN_1401d5e20(puVar52 + 1);
      thunk_FUN_14028af80(puVar52,0x448);
      *(longlong *)(param_1 + 0x4b8) = 0;
    }
  }
  else {
    local_198 = local_138;
    ppppuVar61 = local_158;
    if (0xf < local_140) {
      ppppuVar61 = (undefined8 ****)local_158[0];
    }
    cVar48 = FUN_14027a260(*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1898),".json",ppppuVar61
                           ,&local_res18);
    puVar47 = local_res18;
    if (cVar48 == '\0') goto LAB_1401fbcab;
    uVar53 = *(undefined8 *)(param_1 + 200);
    puVar51 = (ulonglong *)FUN_140086de0(param_2,"image","");
    uVar73 = *puVar51;
    if ((uVar73 != 0) && (uVar63 = uVar73, ((uint)puVar51[1] >> 8 & 1) != 0)) {
      uVar63 = uVar73 + 4;
    }
    local_198 = puVar47;
    ppppuVar61 = local_158;
    if (0xf < local_140) {
      ppppuVar61 = (undefined8 ****)local_158[0];
    }
    FUN_14017d9b0(uVar53,1,ppppuVar61,uVar63);
  }
  FUN_140017240(&local_130);
  if (0xf < local_140) {
    uVar63 = local_140 + 1;
    ppppuVar61 = (undefined8 ****)local_158[0];
    if (0xfff < uVar63) {
      ppppuVar61 = (undefined8 ****)local_158[0][-1];
      if (0x1f < (ulonglong)((longlong)local_158[0] + (-8 - (longlong)ppppuVar61))) {
        pcVar19 = (code *)swi(0x29);
        (*pcVar19)(5);
        puVar66 = auStack_1b0;
LAB_1401fcc01:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar66 + -8) = &UNK_1401fcc06;
        FUN_140015110();
      }
      uVar63 = local_140 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar61,uVar63);
  }
LAB_1401fcbd2:
  FUN_1401e6f50(param_1,param_2);
  FUN_140085440(&local_110);
  return;
}

