// Function: FUN_1400cbaa0
// Addr: 1400cbaa0
// Size: 5506 bytes


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cbaa0(ulonglong param_1,int *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint *_Size;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  size_t sVar8;
  undefined8 *******pppppppuVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  byte bVar13;
  longlong lVar14;
  uint *puVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint *_Buf1;
  undefined8 *_Buf1_00;
  int *piVar18;
  undefined8 *******pppppppuVar19;
  int *piVar20;
  undefined8 ******ppppppuVar21;
  uint *puVar22;
  uint *puVar23;
  uint uVar24;
  char *pcVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  char *pcVar29;
  char *pcVar30;
  char *pcVar31;
  undefined1 *puVar32;
  longlong lVar33;
  void *_Buf1_01;
  undefined8 *puVar34;
  uint *puVar35;
  int *piVar36;
  ulonglong uVar37;
  int *piVar38;
  uint uVar39;
  bool bVar40;
  float fVar41;
  int iVar42;
  uint *local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [24];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  ulonglong local_2b8;
  ulonglong local_2b0;
  longlong local_2a8;
  undefined8 *local_2a0;
  char *local_298;
  undefined8 *******local_288;
  undefined8 ******ppppppuStack_280;
  undefined8 ******local_278;
  undefined8 ******ppppppuStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  uint local_238;
  undefined8 *******local_228 [2];
  uint *local_218;
  ulonglong uStack_210;
  undefined8 *******local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined8 *local_1e8;
  longlong local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8;
  longlong local_1b0 [7];
  longlong *local_178;
  longlong local_170 [7];
  longlong *local_138;
  undefined1 local_130;
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [40];
  
  puVar32 = auStack_2e8;
  iVar7 = *param_2;
  pcVar25 = (char *)param_1;
  if (iVar7 == 1) goto LAB_1400ccc29;
  if (iVar7 == 2) {
    uVar24 = param_2[1];
    uVar37 = 0;
    local_2c8 = *(int **)(param_2 + 2);
    local_2b8 = CONCAT44(local_2b8._4_4_,uVar24);
    local_2b0 = 0;
    if (uVar24 < 4) {
      return;
    }
    uStack_2c0 = (uint *)(local_2c8 + 1);
    if (*local_2c8 != 2) {
      return;
    }
    local_278 = (undefined8 ******)0x0;
    local_288 = (undefined8 *******)0x0;
    ppppppuStack_280 = (undefined8 ******)0x0;
    puVar35 = (uint *)(local_2c8 + 2);
    uStack_260 = 0;
    uVar17 = (ulonglong)uVar24;
    local_258 = 0xf;
    local_250 = 0;
    uVar39 = 0;
    local_268 = 0;
    ppppppuStack_270 = (undefined8 ******)0x0;
    if (7 < uVar24) {
      uVar39 = *uStack_2c0;
      uStack_2c0 = puVar35;
      puVar35 = (uint *)(local_2c8 + 3);
    }
    local_238 = 0;
    uVar24 = local_238;
    if ((longlong)((longlong)uStack_2c0 + (4 - (longlong)local_2c8)) <= (longlong)uVar17) {
      uVar24 = *uStack_2c0;
      uStack_2c0 = puVar35;
    }
    local_248 = CONCAT44(uVar24,uVar39);
    uVar24 = local_238;
    if ((longlong)((longlong)uStack_2c0 + (4 - (longlong)local_2c8)) <= (longlong)uVar17) {
      uVar24 = *uStack_2c0;
      uStack_2c0 = uStack_2c0 + 1;
    }
    uVar39 = local_238;
    if ((longlong)((longlong)uStack_2c0 + (4 - (longlong)local_2c8)) <= (longlong)uVar17) {
      uVar39 = *uStack_2c0;
      uStack_2c0 = uStack_2c0 + 1;
    }
    local_240 = CONCAT44(uVar39,uVar24);
    if ((longlong)((longlong)uStack_2c0 + (4 - (longlong)local_2c8)) <= (longlong)uVar17) {
      local_238 = *uStack_2c0;
      uStack_2c0 = uStack_2c0 + 1;
    }
    pcVar30 = (char *)FUN_14009c500(&local_2c8);
    sVar8 = strlen(pcVar30);
    FUN_14000f880(&ppppppuStack_270,pcVar30,sVar8);
    piVar18 = local_2c8;
    uVar17 = local_2b8 & 0xffffffff;
    puVar35 = uStack_2c0;
    if ((longlong)((longlong)uStack_2c0 + (4 - (longlong)local_2c8)) <= (longlong)uVar17) {
      uVar37 = (ulonglong)*uStack_2c0;
      puVar35 = uStack_2c0 + 1;
    }
    puVar15 = puVar35;
    if (((longlong)uVar37 <= (longlong)((uVar17 - (longlong)puVar35) + (longlong)local_2c8)) &&
       (puVar15 = (uint *)((longlong)(int)uVar37 + (longlong)puVar35), local_res10 = puVar35,
       0 < (int)uVar37)) {
      pcVar30 = (char *)((longlong)puVar15 + (-1 - (longlong)puVar35));
      if ((char *)((longlong)local_278 - (longlong)local_288) < pcVar30) {
        FUN_1400cd210(&local_288,pcVar30);
        pppppppuVar19 = local_288;
        FUN_1404210f0(local_288,local_res10,pcVar30);
        ppppppuStack_280 = (undefined8 ******)(pcVar30 + (longlong)pppppppuVar19);
      }
      else {
        pcVar29 = (char *)((longlong)ppppppuStack_280 - (longlong)local_288);
        if (pcVar29 < pcVar30) {
          FUN_1404210f0(local_288,puVar35,pcVar29);
          ppppppuVar21 = ppppppuStack_280;
          FUN_1404210f0(ppppppuStack_280,(char *)((longlong)local_res10 + (longlong)pcVar29),
                        (longlong)pcVar30 - (longlong)pcVar29);
          ppppppuStack_280 =
               (undefined8 ******)((longlong)ppppppuVar21 + ((longlong)pcVar30 - (longlong)pcVar29))
          ;
        }
        else {
          ppppppuVar21 = (undefined8 ******)(pcVar30 + (longlong)local_288);
          FUN_1404210f0(local_288,puVar35,pcVar30);
          ppppppuStack_280 = ppppppuVar21;
        }
      }
    }
    lVar14 = (longlong)puVar15 - (longlong)piVar18;
    puVar35 = puVar15;
    while ((lVar14 < (longlong)uVar17 && ((char)*puVar35 != '\0'))) {
      puVar35 = (uint *)((longlong)puVar35 + 1);
      lVar14 = (longlong)puVar35 - (longlong)piVar18;
    }
    lVar14 = *(longlong *)(param_1 + 8);
    puVar16 = (uint *)&DAT_140474480;
    if ((longlong)((longlong)puVar35 + (1 - (longlong)piVar18)) <= (longlong)uVar17) {
      puVar16 = puVar15;
    }
    sVar8 = strlen((char *)puVar16);
    FUN_14000f880(lVar14 + 0x4f8,puVar16,sVar8);
    FUN_1400c2130(*(longlong *)(param_1 + 8) + 0x600,&local_288);
    puVar35 = (uint *)(*(longlong *)(param_1 + 8) + 0x4f0);
    *puVar35 = *puVar35 | 2;
    if (0xf < local_258) {
      param_2 = (int *)(local_258 + 1);
      ppppppuVar21 = ppppppuStack_270;
      if ((int *)0xfff < param_2) {
        ppppppuVar21 = (undefined8 ******)ppppppuStack_270[-1];
        if (0x1f < (ulonglong)((longlong)ppppppuStack_270 + (-8 - (longlong)ppppppuVar21)))
        goto LAB_1400ccc22;
        param_2 = (int *)(local_258 + 0x28);
      }
      thunk_FUN_14028af80(ppppppuVar21,param_2);
    }
    uStack_260 = 0;
    local_258 = 0xf;
    ppppppuStack_270 = (undefined8 ******)((ulonglong)ppppppuStack_270 & 0xffffffffffffff00);
    if (local_288 == (undefined8 *******)0x0) {
      return;
    }
    param_2 = (int *)((longlong)local_278 - (longlong)local_288);
    pppppppuVar19 = local_288;
LAB_1400cc752:
    pppppppuVar9 = pppppppuVar19;
    if (param_2 < (int *)0x1000) {
LAB_1400cc777:
      thunk_FUN_14028af80(pppppppuVar9,param_2);
      return;
    }
    pppppppuVar9 = (undefined8 *******)pppppppuVar19[-1];
    pcVar25 = (char *)param_1;
    if ((ulonglong)((longlong)pppppppuVar19 + (-8 - (longlong)pppppppuVar9)) < 0x20) {
      param_2 = (int *)((longlong)param_2 + 0x27);
      goto LAB_1400cc777;
    }
  }
  else {
    if (iVar7 == 3) {
      uVar24 = param_2[1];
      if (uVar24 < 4) {
        return;
      }
      piVar18 = *(int **)(param_2 + 2);
      if (*piVar18 != 2) {
        return;
      }
      if (uVar24 < 8) {
        piVar20 = piVar18 + 1;
        iVar7 = 0;
      }
      else {
        iVar7 = piVar18[1];
        piVar20 = piVar18 + 2;
      }
      *(int *)(*(longlong *)(param_1 + 8) + 0x658) = iVar7;
      lVar14 = (longlong)piVar20 - (longlong)piVar18;
      piVar36 = piVar20;
      while ((lVar14 < (longlong)(ulonglong)uVar24 && ((char)*piVar36 != '\0'))) {
        piVar36 = (int *)((longlong)piVar36 + 1);
        lVar14 = (longlong)piVar36 - (longlong)piVar18;
      }
      piVar38 = (int *)&DAT_140474480;
      if ((longlong)((longlong)piVar36 + (1 - (longlong)piVar18)) <= (longlong)(ulonglong)uVar24) {
        piVar38 = piVar20;
      }
      sVar8 = strlen((char *)piVar38);
      FUN_14000f880(*(longlong *)(param_1 + 8) + 0x4f8,piVar38,sVar8);
      puVar35 = (uint *)(*(longlong *)(param_1 + 8) + 0x4f0);
      *puVar35 = *puVar35 | 4;
      return;
    }
    if (iVar7 == 4) {
      uVar24 = param_2[1];
      if (uVar24 < 4) {
        return;
      }
      piVar18 = *(int **)(param_2 + 2);
      if (*piVar18 != 2) {
        return;
      }
      piVar20 = piVar18 + 2;
      uVar37 = (ulonglong)uVar24;
      iVar7 = 0;
      if (uVar24 < 8) {
        iVar42 = 0;
        piVar36 = piVar20;
        piVar20 = piVar18 + 1;
      }
      else {
        iVar42 = piVar18[1];
        piVar36 = piVar18 + 3;
      }
      *(int *)(*(longlong *)(param_1 + 8) + 0x65c) = iVar42;
      pcVar25 = (char *)((longlong)piVar20 + (4 - (longlong)piVar18));
      if ((longlong)pcVar25 <= (longlong)uVar37) {
        iVar7 = *piVar20;
      }
      if ((longlong)pcVar25 <= (longlong)uVar37) {
        piVar20 = piVar36;
      }
      *(int *)(*(longlong *)(param_1 + 8) + 0x660) = iVar7;
      lVar14 = (longlong)piVar20 - (longlong)piVar18;
      piVar36 = piVar20;
      while ((lVar14 < (longlong)uVar37 && ((char)*piVar36 != '\0'))) {
        piVar36 = (int *)((longlong)piVar36 + 1);
        lVar14 = (longlong)piVar36 - (longlong)piVar18;
      }
      piVar38 = (int *)&DAT_140474480;
      if ((longlong)((longlong)piVar36 + (1 - (longlong)piVar18)) <= (longlong)uVar37) {
        piVar38 = piVar20;
      }
      sVar8 = strlen((char *)piVar38);
      FUN_14000f880(*(longlong *)(param_1 + 8) + 0x4f8,piVar38,sVar8);
      puVar35 = (uint *)(*(longlong *)(param_1 + 8) + 0x4f0);
      *puVar35 = *puVar35 | 8;
      return;
    }
    if (iVar7 != 10) {
      return;
    }
    uVar24 = param_2[1];
    if (uVar24 < 4) {
      return;
    }
    piVar18 = *(int **)(param_2 + 2);
    if (*piVar18 != 2) {
      return;
    }
    piVar20 = piVar18 + 1;
    uVar37 = (ulonglong)uVar24;
    piVar36 = piVar20;
    if (4 < uVar24) {
      do {
        if ((char)*piVar36 == '\0') break;
        piVar36 = (int *)((longlong)piVar36 + 1);
      } while ((longlong)piVar36 - (longlong)piVar18 < (longlong)uVar37);
    }
    pcVar25 = (char *)((longlong)piVar36 + (1 - (longlong)piVar18));
    local_208 = (undefined8 *******)0x0;
    uStack_200 = 0;
    piVar38 = (int *)&DAT_140474480;
    if ((longlong)pcVar25 <= (longlong)uVar37) {
      piVar38 = piVar20;
    }
    puVar35 = (uint *)0x0;
    local_1f8 = 0;
    local_1f0 = 0;
    sVar8 = strlen((char *)piVar38);
    FUN_140017480(&local_208,piVar38,sVar8);
    pcVar25 = pcVar25 + 4;
    uVar24 = 0;
    if ((longlong)uVar37 < (longlong)pcVar25) {
      local_res20 = (ulonglong)local_res20._4_4_ << 0x20;
    }
    else {
      local_res20 = CONCAT44(local_res20._4_4_,*(undefined4 *)((longlong)piVar36 + 1));
    }
    lVar14 = 1;
    if ((longlong)pcVar25 <= (longlong)uVar37) {
      lVar14 = 5;
    }
    puVar15 = (uint *)(lVar14 + (longlong)piVar36);
    if ((longlong)((longlong)puVar15 + (4 - (longlong)piVar18)) <= (longlong)uVar37) {
      uVar24 = *puVar15;
      lVar14 = 5;
      if ((longlong)pcVar25 <= (longlong)uVar37) {
        lVar14 = 9;
      }
      puVar15 = (uint *)((longlong)piVar36 + lVar14);
    }
    puVar16 = puVar35;
    if ((longlong)((longlong)puVar15 + (4 - (longlong)piVar18)) <= (longlong)uVar37) {
      puVar16 = (uint *)(ulonglong)*puVar15;
      puVar15 = puVar15 + 1;
    }
    if ((longlong)((uVar37 - (longlong)puVar15) + (longlong)piVar18) < (longlong)puVar16) {
      puVar15 = puVar35;
      puVar16 = puVar35;
    }
    lVar14 = *(longlong *)(param_1 + 8);
    local_res18 = CONCAT44(local_res18._4_4_,(int)puVar16);
    local_1e0 = lVar14 + 0x450;
    iVar7 = FUN_140290d80(local_1e0);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(5);
    }
    if (*(int *)(lVar14 + 0x49c) == 0x7fffffff) {
      *(undefined4 *)(lVar14 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x9d0) != 0) {
      lVar14 = *(longlong *)(param_1 + 8) + 0x938;
      FUN_14004a920(lVar14,0,2);
      FUN_14004a840(lVar14,&local_2c8);
      FUN_14004a920(lVar14,0,0);
      if (256000000 < (longlong)((longlong)local_2c8 + (longlong)uStack_2c0)) {
        lVar14 = *(longlong *)(param_1 + 8);
        lVar33 = *(longlong *)(lVar14 + 0xa70);
        while (lVar33 != 0) {
          lVar10 = *(longlong *)(lVar33 + 0x3408);
          thunk_FUN_14028af80(lVar33,0x3410);
          lVar33 = lVar10;
        }
        FUN_1400f10d0(lVar14 + 0x938);
        FUN_1400f1120(lVar14 + 0x938,lVar14 + 0xa50,0x33);
        FUN_140039d70(*(longlong *)(param_1 + 8) + 0xab8);
      }
    }
    lVar14 = *(longlong *)(param_1 + 8);
    local_2a8 = lVar14;
    FUN_14004a920(lVar14 + 0x938,0,2);
    FUN_14004a840(lVar14 + 0x938,&local_2c8);
    puVar34 = (undefined8 *)(lVar14 + 0x948);
    local_2a0 = puVar34;
    if ((longlong)((longlong)uStack_2c0 + (longlong)local_2c8) < 8) {
      FUN_1400f1240(puVar34,0,0);
      FUN_14007ada0(puVar34,"SHTC0001",8);
    }
    FUN_14004a920(lVar14 + 0x938,8,0);
    FUN_1400f1240(puVar34,8,0);
    FUN_1400f0c30(local_228,&local_208);
    pppppppuVar19 = local_228[0];
    lVar33 = 0x100;
    puVar34 = *(undefined8 **)(lVar14 + 0xa70);
    local_258 = CONCAT44(local_258._4_4_,(uint)local_res18);
    local_268 = CONCAT44(uVar24,(int)local_res20);
    pppppppuVar9 = local_228;
    if (0xf < uStack_210) {
      pppppppuVar9 = local_228[0];
    }
    uStack_260 = local_res18 << 0x20;
    local_298 = &DAT_00000008;
    local_288 = (undefined8 *******)*pppppppuVar9;
    ppppppuStack_280 = pppppppuVar9[1];
    local_278 = pppppppuVar9[2];
    ppppppuStack_270 = pppppppuVar9[3];
    uVar37 = uStack_210;
LAB_1400cbdf4:
    pcVar25 = local_298;
    puVar16 = puVar35;
    if (puVar34 == (undefined8 *)0x0) {
      puVar34 = (undefined8 *)FUN_14028af20(0x3410);
      lVar14 = local_2a8;
      puVar11 = puVar34;
      do {
        puVar11[4] = 0;
        puVar11[5] = 0;
        *(undefined4 *)(puVar11 + 6) = 0;
        puVar11 = (undefined8 *)((longlong)puVar11 + 0x34);
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      *(undefined8 **)(local_2a8 + 0xa70) = puVar34;
      FUN_1404217a0((longlong)puVar34 + 0x34,0,0x33dc);
      local_1c8 = 0;
      local_2c8 = (int *)CONCAT44(_UNK_140492a44,_DAT_140492a40);
      uStack_2c0 = (uint *)CONCAT44(_UNK_140492a4c,_UNK_140492a48);
      local_2b8 = 0;
      iVar7 = _DAT_140492a40 + _UNK_140492a48;
      puVar11 = local_2a0;
    }
    else {
      while (uVar24 = (uint)puVar16, uVar24 < 0x100) {
        _Buf1_01 = (void *)((longlong)(int)uVar24 * 0x34 + (longlong)puVar34);
        pppppppuVar9 = local_228;
        if (0xf < uVar37) {
          pppppppuVar9 = pppppppuVar19;
        }
        iVar7 = memcmp(_Buf1_01,pppppppuVar9,0x20);
        puVar11 = local_2a0;
        uVar39 = (uint)local_res18;
        if (iVar7 == 0) {
          if (*(uint *)((longlong)_Buf1_01 + 0x30) < (uint)local_res18) goto LAB_1400cbe60;
          iVar7 = *(int *)((longlong)_Buf1_01 + 0x28);
          local_258 = CONCAT44(local_258._4_4_,*(undefined4 *)((longlong)_Buf1_01 + 0x30));
LAB_1400cbe6b:
          local_res10 = (uint *)CONCAT44(local_res10._4_4_,uVar24);
          uStack_260 = CONCAT44(uStack_260._4_4_,iVar7);
          FUN_1400f1240(local_2a0,(longlong)puVar16 * 0x34 + ((ulonglong)local_298 & 0xffffffff),0);
          pppppppuVar19 = &local_288;
          uVar26 = 0x34;
          goto LAB_1400cc01b;
        }
        if (*(int *)((longlong)_Buf1_01 + 0x28) == 0) {
LAB_1400cbe60:
          iVar7 = (int)uStack_2c0 + (int)local_2c8;
          goto LAB_1400cbe6b;
        }
        uVar37 = uStack_210;
        puVar16 = (uint *)(ulonglong)(uVar24 + 1);
      }
      local_298 = (char *)(ulonglong)*(uint *)(puVar34 + 0x680);
      if (*(uint *)(puVar34 + 0x680) != 0) goto code_r0x0001400cbe4a;
      lVar10 = FUN_14028af20(0x3410);
      lVar14 = lVar10;
      do {
        *(undefined8 *)(lVar14 + 0x20) = 0;
        *(undefined8 *)(lVar14 + 0x28) = 0;
        *(undefined4 *)(lVar14 + 0x30) = 0;
        lVar14 = lVar14 + 0x34;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      puVar34[0x681] = lVar10;
      FUN_1404217a0(lVar10,0,0x3410);
      puVar11 = local_2a0;
      pcVar25 = (char *)((longlong)uStack_2c0 + (longlong)local_2c8);
      *(int *)(puVar34 + 0x680) = (int)pcVar25;
      FUN_1400f1240(local_2a0,((ulonglong)pcVar25 & 0xffffffff) + 0x3400,0);
      FUN_14007ada0(puVar11,&local_2c8,4);
      puVar34 = (undefined8 *)puVar34[0x681];
      local_2c8 = local_2c8 + 0xd04;
      iVar7 = (int)local_2c8 + (int)uStack_2c0;
      lVar14 = local_2a8;
    }
    uVar26 = 0x3410;
    uStack_260 = CONCAT44(uStack_260._4_4_,iVar7);
    *puVar34 = local_288;
    puVar34[1] = ppppppuStack_280;
    puVar34[2] = local_278;
    puVar34[3] = ppppppuStack_270;
    *(undefined4 *)(puVar34 + 4) = (undefined4)local_268;
    *(undefined4 *)((longlong)puVar34 + 0x24) = local_268._4_4_;
    *(int *)(puVar34 + 5) = iVar7;
    *(undefined4 *)((longlong)puVar34 + 0x2c) = uStack_260._4_4_;
    *(undefined4 *)(puVar34 + 6) = (undefined4)local_258;
    FUN_1400f1240(puVar11,(ulonglong)pcVar25 & 0xffffffff,0);
    pppppppuVar19 = *(undefined8 ********)(lVar14 + 0xa70);
    puVar16 = puVar35;
    uVar39 = (uint)local_res18;
LAB_1400cc01b:
    FUN_14007ada0(puVar11,pppppppuVar19,uVar26);
    FUN_1400f1240(puVar11,uStack_260 & 0xffffffff,0);
    FUN_14007ada0(puVar11,puVar15,uVar39);
    FUN_140012a00(puVar11);
    lVar14 = local_2a8;
    uVar37 = 0xcbf29ce484222325;
    local_298 = (char *)0xcbf29ce484222325;
    puVar34 = (undefined8 *)((longlong)puVar16 * 0x34 + (longlong)puVar34);
    local_1e8 = puVar34;
    *puVar34 = local_288;
    puVar34[1] = ppppppuStack_280;
    puVar34[2] = local_278;
    puVar34[3] = ppppppuStack_270;
    *(undefined4 *)(puVar34 + 4) = (undefined4)local_268;
    *(undefined4 *)((longlong)puVar34 + 0x24) = local_268._4_4_;
    *(undefined4 *)(puVar34 + 5) = (undefined4)uStack_260;
    *(undefined4 *)((longlong)puVar34 + 0x2c) = uStack_260._4_4_;
    *(undefined4 *)(puVar34 + 6) = (undefined4)local_258;
    pppppppuVar19 = local_228;
    if (0xf < uStack_210) {
      pppppppuVar19 = local_228[0];
    }
    puVar15 = puVar35;
    if (local_218 != (uint *)0x0) {
      do {
        pbVar1 = (byte *)((longlong)puVar15 + (longlong)pppppppuVar19);
        puVar15 = (uint *)((longlong)puVar15 + 1);
        uVar37 = (uVar37 ^ *pbVar1) * 0x100000001b3;
        local_298 = (char *)uVar37;
      } while (puVar15 < local_218);
    }
    pcVar25 = local_298;
    FUN_1400110a0(local_2a8 + 0xa78,&local_1d8,local_228,local_298);
    puVar11 = local_1d0;
    if (local_1d0 == (undefined8 *)0x0) {
      if (*(longlong *)(lVar14 + 0xa88) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar11 = (undefined8 *)FUN_14028af20(0x38);
      local_2a0 = puVar11;
      FUN_140016fc0(puVar11 + 2,local_228);
      puVar11[6] = 0;
      fVar41 = (float)(*(longlong *)(lVar14 + 0xa88) + 1);
      uVar37 = *(ulonglong *)(lVar14 + 0xab0);
      if (*(float *)(lVar14 + 0xa78) < fVar41 / (float)uVar37) {
        fVar41 = (float)FUN_140419fa0(fVar41 / *(float *)(lVar14 + 0xa78));
        lVar33 = 0;
        if ((DAT_140492974 <= fVar41) && (fVar41 = fVar41 - DAT_140492974, fVar41 < DAT_140492974))
        {
          lVar33 = -0x8000000000000000;
        }
        uVar17 = 8;
        if (8 < (ulonglong)((longlong)fVar41 + lVar33)) {
          uVar17 = (longlong)fVar41 + lVar33;
        }
        uVar27 = uVar37;
        if ((uVar37 < uVar17) && ((0x1ff < uVar37 || (uVar27 = uVar37 * 8, uVar37 * 8 < uVar17)))) {
          uVar27 = uVar17;
        }
        for (lVar33 = 0x3f; 0xfffffffffffffffU >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
        if ((ulonglong)(1L << ((byte)lVar33 & 0x3f)) < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("invalid hash bucket count");
        }
        puVar15 = *(uint **)(lVar14 + 0xa80);
        uVar37 = uVar27 - 1 | 1;
        lVar33 = 0x3f;
        if (uVar37 != 0) {
          for (; uVar37 >> lVar33 == 0; lVar33 = lVar33 + -1) {
          }
        }
        bVar13 = (char)lVar33 + 1;
        lVar33 = 1L << (bVar13 & 0x3f);
        FUN_14004f190(lVar14 + 0xa90,2L << (bVar13 & 0x3f),puVar15);
        *(longlong *)(lVar14 + 0xab0) = lVar33;
        *(longlong *)(lVar14 + 0xaa8) = lVar33 + -1;
        puVar16 = (uint *)**(undefined8 **)(lVar14 + 0xa80);
joined_r0x0001400cc26b:
        if (puVar16 != puVar15) {
          uVar37 = *(ulonglong *)(puVar16 + 10);
          puVar12 = puVar16 + 4;
          puVar2 = *(uint **)puVar16;
          if (0xf < uVar37) {
            puVar12 = *(uint **)(puVar16 + 4);
          }
          _Size = *(uint **)(puVar16 + 8);
          uVar17 = 0xcbf29ce484222325;
          puVar22 = puVar35;
          if (_Size != (uint *)0x0) {
            do {
              puVar23 = (uint *)((longlong)puVar22 + 1);
              uVar17 = (uVar17 ^ *(byte *)((longlong)puVar12 + (longlong)puVar22)) * 0x100000001b3;
              puVar22 = puVar23;
            } while (puVar23 < _Size);
            uVar37 = *(ulonglong *)(puVar16 + 10);
          }
          local_res20 = *(longlong *)(local_2a8 + 0xa90);
          local_res18 = (*(ulonglong *)(local_2a8 + 0xaa8) & uVar17) * 0x10;
          local_res10 = *(uint **)(local_res18 + local_res20);
          if (local_res10 == puVar15) {
            *(uint **)(local_res18 + local_res20) = puVar16;
            *(uint **)(local_res20 + 8 + local_res18) = puVar16;
            puVar16 = puVar2;
            puVar11 = local_2a0;
            pcVar25 = local_298;
          }
          else {
            puVar22 = *(uint **)(local_res20 + 8 + local_res18);
            puVar12 = puVar22 + 4;
            if (0xf < *(ulonglong *)(puVar22 + 10)) {
              puVar12 = *(uint **)puVar12;
            }
            puVar23 = puVar16 + 4;
            if (0xf < uVar37) {
              puVar23 = *(uint **)(puVar16 + 4);
            }
            if (_Size == *(uint **)(puVar22 + 8)) {
              if ((_Size != (uint *)0x0) &&
                 (iVar7 = memcmp(puVar23,puVar12,(size_t)_Size), iVar7 != 0)) {
                uVar37 = *(ulonglong *)(puVar16 + 10);
                goto LAB_1400cc392;
              }
              puVar22 = *(uint **)puVar22;
              if (puVar22 != puVar16) {
                plVar3 = *(longlong **)(puVar16 + 2);
                *plVar3 = (longlong)puVar2;
                puVar34 = *(undefined8 **)(puVar2 + 2);
                *puVar34 = puVar22;
                puVar11 = *(undefined8 **)(puVar22 + 2);
                *puVar11 = puVar16;
                *(undefined8 **)(puVar22 + 2) = puVar34;
                *(longlong **)(puVar2 + 2) = plVar3;
                *(undefined8 **)(puVar16 + 2) = puVar11;
              }
              *(uint **)(local_res20 + 8 + local_res18) = puVar16;
              puVar16 = puVar2;
              puVar11 = local_2a0;
              pcVar25 = local_298;
            }
            else {
LAB_1400cc392:
              puVar12 = local_res10;
              if (local_res10 != puVar22) {
                do {
                  puVar22 = *(uint **)(puVar22 + 2);
                  puVar23 = puVar22 + 4;
                  if (0xf < *(ulonglong *)(puVar22 + 10)) {
                    puVar23 = *(uint **)puVar23;
                  }
                  if (uVar37 < 0x10) {
                    _Buf1 = puVar16 + 4;
                  }
                  else {
                    _Buf1 = *(uint **)(puVar16 + 4);
                  }
                  if (_Size == *(uint **)(puVar22 + 8)) {
                    if ((_Size == (uint *)0x0) ||
                       (iVar7 = memcmp(_Buf1,puVar23,(size_t)_Size), iVar7 == 0)) {
                      lVar14 = *(longlong *)puVar22;
                      plVar3 = *(longlong **)(puVar16 + 2);
                      *plVar3 = (longlong)puVar2;
                      plVar5 = *(longlong **)(puVar2 + 2);
                      *plVar5 = lVar14;
                      puVar34 = *(undefined8 **)(lVar14 + 8);
                      *puVar34 = puVar16;
                      *(longlong **)(lVar14 + 8) = plVar5;
                      *(longlong **)(puVar2 + 2) = plVar3;
                      *(undefined8 **)(puVar16 + 2) = puVar34;
                      puVar16 = puVar2;
                      puVar11 = local_2a0;
                      pcVar25 = local_298;
                      goto joined_r0x0001400cc26b;
                    }
                    uVar37 = *(ulonglong *)(puVar16 + 10);
                    puVar12 = local_res10;
                  }
                } while (puVar12 != puVar22);
              }
              plVar3 = *(longlong **)(puVar16 + 2);
              *plVar3 = (longlong)puVar2;
              puVar34 = *(undefined8 **)(puVar2 + 2);
              *puVar34 = puVar22;
              puVar11 = *(undefined8 **)(puVar22 + 2);
              *puVar11 = puVar16;
              *(undefined8 **)(puVar22 + 2) = puVar34;
              *(longlong **)(puVar2 + 2) = plVar3;
              *(undefined8 **)(puVar16 + 2) = puVar11;
              *(uint **)(local_res18 + local_res20) = puVar16;
              puVar16 = puVar2;
              puVar11 = local_2a0;
              pcVar25 = local_298;
            }
          }
          goto joined_r0x0001400cc26b;
        }
        local_res10 = (uint *)0x0;
        FUN_14003a070(&local_res10);
        uVar37 = (ulonglong)pcVar25 & *(ulonglong *)(local_2a8 + 0xaa8);
        puVar28 = *(undefined8 **)(*(longlong *)(local_2a8 + 0xa90) + 8 + uVar37 * 0x10);
        local_1d8 = *(undefined8 **)(local_2a8 + 0xa80);
        lVar14 = local_2a8;
        puVar34 = local_1e8;
        if (puVar28 != *(undefined8 **)(local_2a8 + 0xa80)) {
          uVar17 = puVar11[5];
          sVar8 = puVar11[4];
          puVar4 = *(undefined8 **)(*(longlong *)(local_2a8 + 0xa90) + uVar37 * 0x10);
          while( true ) {
            puVar34 = puVar28 + 2;
            if (0xf < (ulonglong)puVar28[5]) {
              puVar34 = (undefined8 *)*puVar34;
            }
            if (uVar17 < 0x10) {
              _Buf1_00 = puVar11 + 2;
            }
            else {
              _Buf1_00 = (undefined8 *)puVar11[2];
            }
            if ((sVar8 == puVar28[4]) &&
               ((sVar8 == 0 || (iVar7 = memcmp(_Buf1_00,puVar34,sVar8), iVar7 == 0)))) break;
            local_1d8 = puVar28;
            lVar14 = local_2a8;
            puVar34 = local_1e8;
            if (puVar28 == puVar4) goto LAB_1400cc51b;
            puVar28 = (undefined8 *)puVar28[1];
          }
          local_1d8 = (undefined8 *)*puVar28;
          lVar14 = local_2a8;
          puVar34 = local_1e8;
        }
      }
LAB_1400cc51b:
      puVar28 = (undefined8 *)local_1d8[1];
      *(longlong *)(lVar14 + 0xa88) = *(longlong *)(lVar14 + 0xa88) + 1;
      *puVar11 = local_1d8;
      puVar11[1] = puVar28;
      *puVar28 = puVar11;
      local_1d8[1] = puVar11;
      lVar33 = *(longlong *)(lVar14 + 0xa90);
      uVar37 = *(ulonglong *)(lVar14 + 0xaa8) & (ulonglong)pcVar25;
      puVar4 = *(undefined8 **)(lVar33 + uVar37 * 0x10);
      if (puVar4 == *(undefined8 **)(lVar14 + 0xa80)) {
        *(undefined8 **)(lVar33 + uVar37 * 0x10) = puVar11;
LAB_1400cc578:
        *(undefined8 **)(lVar33 + 8 + uVar37 * 0x10) = puVar11;
      }
      else if (puVar4 == local_1d8) {
        *(undefined8 **)(lVar33 + uVar37 * 0x10) = puVar11;
      }
      else if (*(undefined8 **)(lVar33 + 8 + uVar37 * 0x10) == puVar28) goto LAB_1400cc578;
    }
    puVar11[6] = puVar34;
    if (uStack_210 < 0x10) {
LAB_1400cc5bd:
      puVar34 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x4b0);
      for (puVar11 = (undefined8 *)*puVar34; puVar11 != puVar34; puVar11 = (undefined8 *)*puVar11) {
        puVar28 = (undefined8 *)puVar11[10];
        local_1b8 = *(undefined4 *)(puVar11 + 2);
        local_178 = (longlong *)0x0;
        if (puVar28 != (undefined8 *)0x0) {
          local_178 = (longlong *)(**(code **)*puVar28)(puVar28,local_1b0);
        }
        puVar28 = (undefined8 *)puVar11[0x12];
        local_138 = (longlong *)0x0;
        if (puVar28 != (undefined8 *)0x0) {
          local_138 = (longlong *)(**(code **)*puVar28)(puVar28,local_170);
        }
        local_130 = *(undefined1 *)(puVar11 + 0x13);
        if (local_138 == (longlong *)0x0) {
          if (local_178 != (longlong *)0x0) {
            lVar14 = *local_178;
            bVar40 = local_178 == local_1b0;
LAB_1400cc722:
            (**(code **)(lVar14 + 0x20))(local_178,!bVar40);
          }
        }
        else {
          pppppppuVar19 = &local_208;
          if (0xf < local_1f0) {
            pppppppuVar19 = local_208;
          }
          uStack_2c0 = (uint *)0x0;
          local_2b8 = 0;
          local_2b0 = 0xf;
          local_2c8 = (int *)0x0;
          FUN_14000f880(&local_2c8,pppppppuVar19,local_1f8);
          if (local_138 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_14028c2c0();
          }
          (**(code **)(*local_138 + 0x10))(local_138,&local_2c8);
          if (0xf < local_2b0) {
            param_2 = (int *)(local_2b0 + 1);
            piVar18 = local_2c8;
            if ((int *)0xfff < param_2) {
              piVar18 = *(int **)(local_2c8 + -2);
              if (0x1f < (ulonglong)((longlong)local_2c8 + (-8 - (longlong)piVar18)))
              goto LAB_1400ccc22;
              param_2 = (int *)(local_2b0 + 0x28);
            }
            thunk_FUN_14028af80(piVar18,param_2);
          }
          if (local_138 != (longlong *)0x0) {
            (**(code **)(*local_138 + 0x20))
                      (local_138,CONCAT71((int7)((ulonglong)local_170 >> 8),local_138 != local_170))
            ;
            local_138 = (longlong *)0x0;
          }
          if (local_178 != (longlong *)0x0) {
            lVar14 = *local_178;
            bVar40 = local_178 == local_1b0;
            goto LAB_1400cc722;
          }
        }
      }
      FUN_140290ea0(local_1e0);
      if (local_1f0 < 0x10) {
        return;
      }
      param_2 = (int *)(local_1f0 + 1);
      pppppppuVar19 = local_208;
      param_1 = (ulonglong)pcVar25;
      goto LAB_1400cc752;
    }
    param_2 = (int *)(uStack_210 + 1);
    pppppppuVar19 = local_228[0];
    if (param_2 < (int *)0x1000) {
LAB_1400cc5b8:
      thunk_FUN_14028af80(pppppppuVar19,param_2);
      goto LAB_1400cc5bd;
    }
    pppppppuVar19 = (undefined8 *******)local_228[0][-1];
    if ((ulonglong)((longlong)local_228[0] + (-8 - (longlong)pppppppuVar19)) < 0x20) {
      param_2 = (int *)(uStack_210 + 0x28);
      goto LAB_1400cc5b8;
    }
  }
LAB_1400ccc22:
  pcVar6 = (code *)swi(0x29);
  (*pcVar6)(5);
  puVar32 = auStack_2e0;
LAB_1400ccc29:
  uVar24 = param_2[1];
  if ((3 < uVar24) && (piVar18 = *(int **)(param_2 + 2), *piVar18 == 2)) {
    uVar37 = (ulonglong)uVar24;
    piVar20 = piVar18 + 1;
    *(undefined8 *)(puVar32 + -8) = 0x1400ccc57;
    FUN_1400c1440(local_128);
    piVar36 = piVar20;
    if (4 < uVar24) {
      do {
        if ((char)*piVar36 == '\0') break;
        piVar36 = (int *)((longlong)piVar36 + 1);
      } while ((longlong)piVar36 - (longlong)piVar18 < (longlong)uVar37);
    }
    pcVar29 = (char *)((longlong)piVar36 + 1);
    lVar14 = (longlong)pcVar29 - (longlong)piVar18;
    pcVar30 = pcVar29;
    if ((longlong)uVar37 < lVar14) {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccc90;
      sVar8 = strlen("");
      *(undefined8 *)(puVar32 + -8) = 0x1400ccca2;
      FUN_14000f880(local_128,&DAT_140474480,sVar8);
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0x1400cccaf;
      sVar8 = strlen((char *)piVar20);
      *(undefined8 *)(puVar32 + -8) = 0x1400cccc1;
      FUN_14000f880(local_128,piVar20,sVar8);
      while ((lVar14 < (longlong)uVar37 && (*pcVar30 != '\0'))) {
        pcVar30 = pcVar30 + 1;
        lVar14 = (longlong)pcVar30 - (longlong)piVar18;
      }
    }
    pcVar30 = pcVar30 + 1;
    lVar14 = (longlong)pcVar30 - (longlong)piVar18;
    pcVar31 = pcVar30;
    if ((longlong)uVar37 < lVar14) {
      *(undefined8 *)(puVar32 + -8) = 0x1400cccf9;
      sVar8 = strlen("");
      *(undefined8 *)(puVar32 + -8) = 0x1400ccd0b;
      FUN_14000f880(local_108,&DAT_140474480,sVar8);
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccd18;
      sVar8 = strlen(pcVar29);
      *(undefined8 *)(puVar32 + -8) = 0x1400ccd2a;
      FUN_14000f880(local_108,pcVar29,sVar8);
      while ((lVar14 < (longlong)uVar37 && (*pcVar31 != '\0'))) {
        pcVar31 = pcVar31 + 1;
        lVar14 = (longlong)pcVar31 - (longlong)piVar18;
      }
    }
    pcVar31 = pcVar31 + 1;
    lVar14 = (longlong)pcVar31 - (longlong)piVar18;
    pcVar29 = pcVar31;
    if ((longlong)uVar37 < lVar14) {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccd5b;
      sVar8 = strlen("");
      *(undefined8 *)(puVar32 + -8) = 0x1400ccd6d;
      FUN_14000f880(local_e8,&DAT_140474480,sVar8);
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccd7a;
      sVar8 = strlen(pcVar30);
      *(undefined8 *)(puVar32 + -8) = 0x1400ccd8c;
      FUN_14000f880(local_e8,pcVar30,sVar8);
      while ((lVar14 < (longlong)uVar37 && (*pcVar29 != '\0'))) {
        pcVar29 = pcVar29 + 1;
        lVar14 = (longlong)pcVar29 - (longlong)piVar18;
      }
    }
    pcVar29 = pcVar29 + 1;
    lVar14 = (longlong)pcVar29 - (longlong)piVar18;
    pcVar30 = pcVar29;
    if ((longlong)uVar37 < lVar14) {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccdbd;
      sVar8 = strlen("");
      *(undefined8 *)(puVar32 + -8) = 0x1400ccdcf;
      FUN_14000f880(local_c8,&DAT_140474480,sVar8);
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccddc;
      sVar8 = strlen(pcVar31);
      *(undefined8 *)(puVar32 + -8) = 0x1400ccdee;
      FUN_14000f880(local_c8,pcVar31,sVar8);
      while ((lVar14 < (longlong)uVar37 && (*pcVar30 != '\0'))) {
        pcVar30 = pcVar30 + 1;
        lVar14 = (longlong)pcVar30 - (longlong)piVar18;
      }
    }
    pcVar30 = pcVar30 + 1;
    lVar14 = (longlong)pcVar30 - (longlong)piVar18;
    pcVar31 = pcVar30;
    if ((longlong)uVar37 < lVar14) {
      *(undefined8 *)(puVar32 + -8) = 0x1400cce1f;
      sVar8 = strlen("");
      *(undefined8 *)(puVar32 + -8) = 0x1400cce31;
      FUN_14000f880(local_a8,&DAT_140474480,sVar8);
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0x1400cce3e;
      sVar8 = strlen(pcVar29);
      *(undefined8 *)(puVar32 + -8) = 0x1400cce50;
      FUN_14000f880(local_a8,pcVar29,sVar8);
      while ((lVar14 < (longlong)uVar37 && (*pcVar31 != '\0'))) {
        pcVar31 = pcVar31 + 1;
        lVar14 = (longlong)pcVar31 - (longlong)piVar18;
      }
    }
    pcVar31 = pcVar31 + 1;
    lVar14 = (longlong)pcVar31 - (longlong)piVar18;
    pcVar29 = pcVar31;
    if ((longlong)uVar37 < lVar14) {
      *(undefined8 *)(puVar32 + -8) = 0x1400cce81;
      sVar8 = strlen("");
      *(undefined8 *)(puVar32 + -8) = 0x1400cce93;
      FUN_14000f880(local_88,&DAT_140474480,sVar8);
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccea0;
      sVar8 = strlen(pcVar30);
      *(undefined8 *)(puVar32 + -8) = 0x1400cceb2;
      FUN_14000f880(local_88,pcVar30,sVar8);
      while ((lVar14 < (longlong)uVar37 && (*pcVar29 != '\0'))) {
        pcVar29 = pcVar29 + 1;
        lVar14 = (longlong)pcVar29 - (longlong)piVar18;
      }
    }
    pcVar29 = pcVar29 + 1;
    lVar14 = (longlong)pcVar29 - (longlong)piVar18;
    pcVar30 = pcVar29;
    if ((longlong)uVar37 < lVar14) {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccee9;
      sVar8 = strlen("");
      *(undefined8 *)(puVar32 + -8) = 0x1400ccefb;
      FUN_14000f880(local_68,&DAT_140474480,sVar8);
    }
    else {
      *(undefined8 *)(puVar32 + -8) = 0x1400ccf08;
      sVar8 = strlen(pcVar31);
      *(undefined8 *)(puVar32 + -8) = 0x1400ccf1a;
      FUN_14000f880(local_68,pcVar31,sVar8);
      while ((lVar14 < (longlong)uVar37 && (*pcVar30 != '\0'))) {
        pcVar30 = pcVar30 + 1;
        lVar14 = (longlong)pcVar30 - (longlong)piVar18;
      }
    }
    pcVar31 = "";
    if ((longlong)(pcVar30 + (1 - (longlong)piVar18)) <= (longlong)uVar37) {
      pcVar31 = pcVar29;
    }
    *(undefined8 *)(puVar32 + -8) = 0x1400ccf4b;
    sVar8 = strlen(pcVar31);
    lVar14 = *(longlong *)((longlong)pcVar25 + 8);
    *(undefined8 *)(puVar32 + -8) = 0x1400ccf61;
    FUN_14000f880(lVar14 + 0x4f8,pcVar31,sVar8);
    lVar14 = *(longlong *)((longlong)pcVar25 + 8);
    *(undefined8 *)(puVar32 + -8) = 0x1400ccf78;
    FUN_1400c2030(lVar14 + 0x520,local_128);
    puVar35 = (uint *)(*(longlong *)((longlong)pcVar25 + 8) + 0x4f0);
    *puVar35 = *puVar35 | 1;
    *(undefined8 *)(puVar32 + -8) = 0x1400ccf8f;
    FUN_140017240(local_68);
    *(undefined8 *)(puVar32 + -8) = 0x1400ccf9b;
    FUN_140017240(local_88);
    *(undefined8 *)(puVar32 + -8) = 0x1400ccfa7;
    FUN_140017240(local_a8);
    *(undefined8 *)(puVar32 + -8) = 0x1400ccfb3;
    FUN_140017240(local_c8);
    *(undefined8 *)(puVar32 + -8) = 0x1400ccfbf;
    FUN_140017240(local_e8);
    *(undefined8 *)(puVar32 + -8) = 0x1400ccfcb;
    FUN_140017240(local_108);
    *(undefined8 *)(puVar32 + -8) = 0x1400ccfd7;
    FUN_140017240(local_128);
  }
  return;
code_r0x0001400cbe4a:
  puVar34 = (undefined8 *)puVar34[0x681];
  goto LAB_1400cbdf4;
}

