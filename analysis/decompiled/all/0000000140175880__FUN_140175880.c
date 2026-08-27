// Function: FUN_140175880
// Addr: 140175880
// Size: 5867 bytes


/* WARNING: Type propagation algorithm not settling */

void FUN_140175880(longlong param_1,undefined ******param_2)

{
  byte *pbVar1;
  undefined ****ppppuVar2;
  undefined ****ppppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ********ppppppppuVar7;
  undefined ***pppuVar8;
  undefined *****pppppuVar9;
  undefined *******pppppppuVar10;
  undefined ******ppppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******ppppppuVar13;
  code *pcVar14;
  undefined ****ppppuVar15;
  float fVar16;
  char cVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined ********ppppppppuVar22;
  undefined8 *puVar23;
  undefined *******pppppppuVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined ******ppppppuVar28;
  byte bVar29;
  undefined *****pppppuVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined *******pppppppuVar33;
  undefined *******pppppppuVar34;
  undefined *******pppppppuVar35;
  longlong lVar36;
  ulonglong uVar37;
  undefined ****ppppuVar38;
  undefined1 *puVar39;
  undefined *******pppppppuVar40;
  ulonglong uVar41;
  float fVar42;
  float fVar43;
  undefined4 uVar44;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  ulonglong local_res8;
  undefined ******local_res10;
  undefined ********local_res18;
  ulonglong local_res20;
  undefined1 auStack_278 [8];
  undefined1 auStack_270 [24];
  undefined ********local_258;
  undefined ********local_248;
  undefined ********ppppppppuStack_240;
  ulonglong local_230;
  undefined ********local_210;
  undefined **local_208;
  code *local_200;
  undefined1 local_1f8;
  undefined1 local_1f7;
  longlong local_1f0;
  undefined ***local_1d0;
  undefined **local_1c8;
  undefined1 *local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  undefined ***local_190;
  undefined **local_188;
  undefined4 local_180;
  longlong local_178 [7];
  longlong *local_140;
  longlong local_138 [7];
  longlong *local_100;
  longlong local_f8 [7];
  longlong *local_c0;
  longlong local_b8 [7];
  longlong *local_80;
  undefined8 local_78 [7];
  
  fVar16 = DAT_140492974;
  puVar39 = auStack_278;
  pppppppuVar24 = (undefined *******)param_2[1];
  pppppppuVar34 = *(undefined ********)(param_1 + 0xf0);
  local_res8 = 0xcbf29ce484222325;
  uVar41 = (((((((((ulonglong)pppppppuVar24 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (longlong)pppppppuVar24 >> 8 & 0xffU) * 0x100000001b3 ^
                (longlong)pppppppuVar24 >> 0x10 & 0xffU) * 0x100000001b3 ^
               (longlong)pppppppuVar24 >> 0x18 & 0xffU) * 0x100000001b3 ^
              (longlong)pppppppuVar24 >> 0x20 & 0xffU) * 0x100000001b3 ^
             (longlong)pppppppuVar24 >> 0x28 & 0xffU) * 0x100000001b3 ^
            (longlong)pppppppuVar24 >> 0x30 & 0xffU) * 0x100000001b3 ^
           (longlong)pppppppuVar24 >> 0x38 & 0xffU) * 0x100000001b3;
  uVar37 = uVar41 & *(ulonglong *)(param_1 + 0x118);
  pppppppuVar35 = *(undefined ********)(*(longlong *)(param_1 + 0x100) + 8 + uVar37 * 0x10);
  local_res10 = param_2;
  local_res20 = uVar41;
  if (pppppppuVar35 != pppppppuVar34) {
    pppppppuVar33 = (undefined *******)pppppppuVar35[2];
    pppppppuVar34 = pppppppuVar35;
    while (pppppppuVar24 != pppppppuVar33) {
      if (pppppppuVar34 == *(undefined ********)(*(longlong *)(param_1 + 0x100) + uVar37 * 0x10))
      goto LAB_1401759bd;
      pppppppuVar34 = (undefined *******)pppppppuVar34[1];
      pppppppuVar33 = (undefined *******)pppppppuVar34[2];
    }
    goto LAB_140175d4f;
  }
LAB_1401759bd:
  if (*(longlong *)(param_1 + 0xf8) == 0xaaaaaaaaaaaaaaa) goto LAB_140176f63;
  ppppppppuVar22 = (undefined ********)FUN_14028af20(0x18);
  ppppppppuVar22[2] = pppppppuVar24;
  fVar43 = (float)(*(longlong *)(param_1 + 0xf8) + 1);
  pppppppuVar24 = *(undefined ********)(param_1 + 0x120);
  local_res18 = ppppppppuVar22;
  if (*(float *)(param_1 + 0xe8) < fVar43 / (float)pppppppuVar24) {
    fVar43 = (float)FUN_140419fa0(fVar43 / *(float *)(param_1 + 0xe8));
    lVar20 = 0;
    if ((fVar16 <= fVar43) && (fVar43 = fVar43 - fVar16, fVar43 < fVar16)) {
      lVar20 = -0x8000000000000000;
    }
    pppppppuVar35 = (undefined *******)&DAT_00000008;
    if (&DAT_00000008 < (undefined *******)((longlong)fVar43 + lVar20)) {
      pppppppuVar35 = (undefined *******)((longlong)fVar43 + lVar20);
    }
    pppppppuVar34 = pppppppuVar24;
    if ((pppppppuVar24 < pppppppuVar35) &&
       (((undefined *******)0x1ff < pppppppuVar24 ||
        (pppppppuVar34 = (undefined *******)((longlong)pppppppuVar24 * 8),
        (undefined *******)((longlong)pppppppuVar24 * 8) < pppppppuVar35)))) {
      pppppppuVar34 = pppppppuVar35;
    }
    for (lVar20 = 0x3f; 0xfffffffffffffffU >> lVar20 == 0; lVar20 = lVar20 + -1) {
    }
    if ((undefined *******)(1L << ((byte)lVar20 & 0x3f)) < pppppppuVar34) goto LAB_140176f56;
    pppppppuVar24 = *(undefined ********)(param_1 + 0xf0);
    uVar37 = (ulonglong)((longlong)pppppppuVar34 + -1) | 1;
    lVar20 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    bVar29 = (char)lVar20 + 1;
    lVar20 = 1L << (bVar29 & 0x3f);
    FUN_14004f190(param_1 + 0x100,2L << (bVar29 & 0x3f),pppppppuVar24);
    *(longlong *)(param_1 + 0x120) = lVar20;
    *(longlong *)(param_1 + 0x118) = lVar20 + -1;
    pppppppuVar35 = (undefined *******)**(undefined8 **)(param_1 + 0xf0);
joined_r0x000140175b1e:
    if (pppppppuVar35 != pppppppuVar24) {
      lVar20 = *(longlong *)(param_1 + 0x100);
      pppppppuVar34 = (undefined *******)*pppppppuVar35;
      uVar37 = (((((((((ulonglong)*(byte *)(pppppppuVar35 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3
                     ^ (ulonglong)*(byte *)((longlong)pppppppuVar35 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)pppppppuVar35 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)pppppppuVar35 + 0x13)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)pppppppuVar35 + 0x14)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)pppppppuVar35 + 0x15)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)pppppppuVar35 + 0x16)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)pppppppuVar35 + 0x17)) * 0x100000001b3 &
               *(ulonglong *)(param_1 + 0x118);
      pppppppuVar33 = *(undefined ********)(lVar20 + uVar37 * 0x10);
      param_2 = local_res10;
      uVar41 = local_res20;
      ppppppppuVar22 = local_res18;
      if (pppppppuVar33 == pppppppuVar24) {
        *(undefined ********)(lVar20 + uVar37 * 0x10) = pppppppuVar35;
        *(undefined ********)(lVar20 + 8 + uVar37 * 0x10) = pppppppuVar35;
        pppppppuVar35 = pppppppuVar34;
      }
      else {
        pppppppuVar40 = *(undefined ********)(lVar20 + 8 + uVar37 * 0x10);
        if (pppppppuVar35[2] == pppppppuVar40[2]) {
          pppppppuVar40 = (undefined *******)*pppppppuVar40;
          if (pppppppuVar40 != pppppppuVar35) {
            ppppppuVar28 = pppppppuVar35[1];
            *ppppppuVar28 = (undefined *****)pppppppuVar34;
            ppppppuVar11 = pppppppuVar34[1];
            *ppppppuVar11 = (undefined *****)pppppppuVar40;
            ppppppuVar12 = pppppppuVar40[1];
            *ppppppuVar12 = (undefined *****)pppppppuVar35;
            pppppppuVar40[1] = ppppppuVar11;
            pppppppuVar34[1] = ppppppuVar28;
            pppppppuVar35[1] = ppppppuVar12;
          }
          *(undefined ********)(lVar20 + 8 + uVar37 * 0x10) = pppppppuVar35;
          pppppppuVar35 = pppppppuVar34;
        }
        else {
          do {
            if (pppppppuVar33 == pppppppuVar40) {
              ppppppuVar28 = pppppppuVar35[1];
              *ppppppuVar28 = (undefined *****)pppppppuVar34;
              ppppppuVar11 = pppppppuVar34[1];
              *ppppppuVar11 = (undefined *****)pppppppuVar40;
              ppppppuVar12 = pppppppuVar40[1];
              *ppppppuVar12 = (undefined *****)pppppppuVar35;
              pppppppuVar40[1] = ppppppuVar11;
              pppppppuVar34[1] = ppppppuVar28;
              pppppppuVar35[1] = ppppppuVar12;
              *(undefined ********)(lVar20 + uVar37 * 0x10) = pppppppuVar35;
              pppppppuVar35 = pppppppuVar34;
              goto joined_r0x000140175b1e;
            }
            pppppppuVar40 = (undefined *******)pppppppuVar40[1];
          } while (pppppppuVar35[2] != pppppppuVar40[2]);
          ppppppuVar28 = *pppppppuVar40;
          ppppppuVar11 = pppppppuVar35[1];
          *ppppppuVar11 = (undefined *****)pppppppuVar34;
          ppppppuVar12 = pppppppuVar34[1];
          *ppppppuVar12 = (undefined *****)ppppppuVar28;
          ppppppuVar13 = (undefined ******)ppppppuVar28[1];
          *ppppppuVar13 = (undefined *****)pppppppuVar35;
          ppppppuVar28[1] = (undefined *****)ppppppuVar12;
          pppppppuVar34[1] = ppppppuVar11;
          pppppppuVar35[1] = ppppppuVar13;
          pppppppuVar35 = pppppppuVar34;
        }
      }
      goto joined_r0x000140175b1e;
    }
    local_res10 = (undefined ******)0x0;
    FUN_14005b0e0(&local_res10);
    uVar37 = uVar41 & *(ulonglong *)(param_1 + 0x118);
    pppppppuVar34 = *(undefined ********)(param_1 + 0xf0);
    pppppppuVar35 = *(undefined ********)(*(longlong *)(param_1 + 0x100) + 8 + uVar37 * 0x10);
    if (pppppppuVar35 != pppppppuVar34) {
      pppppppuVar33 = (undefined *******)pppppppuVar35[2];
      pppppppuVar34 = pppppppuVar35;
      while (ppppppppuVar22[2] != pppppppuVar33) {
        if (pppppppuVar34 == *(undefined ********)(*(longlong *)(param_1 + 0x100) + uVar37 * 0x10))
        goto LAB_140175cc5;
        pppppppuVar34 = (undefined *******)pppppppuVar34[1];
        pppppppuVar33 = (undefined *******)pppppppuVar34[2];
      }
      pppppppuVar34 = (undefined *******)*pppppppuVar34;
    }
  }
LAB_140175cc5:
  pppppppuVar35 = (undefined *******)pppppppuVar34[1];
  *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + 1;
  *ppppppppuVar22 = pppppppuVar34;
  ppppppppuVar22[1] = pppppppuVar35;
  *pppppppuVar35 = (undefined ******)ppppppppuVar22;
  pppppppuVar34[1] = (undefined ******)ppppppppuVar22;
  lVar20 = *(longlong *)(param_1 + 0x100);
  uVar41 = *(ulonglong *)(param_1 + 0x118) & uVar41;
  pppppppuVar33 = *(undefined ********)(lVar20 + uVar41 * 0x10);
  if (pppppppuVar33 == *(undefined ********)(param_1 + 0xf0)) {
    *(undefined *********)(lVar20 + uVar41 * 0x10) = ppppppppuVar22;
LAB_140175d45:
    *(undefined *********)(lVar20 + 8 + uVar41 * 0x10) = ppppppppuVar22;
  }
  else if (pppppppuVar33 == pppppppuVar34) {
    *(undefined *********)(lVar20 + uVar41 * 0x10) = ppppppppuVar22;
  }
  else if (*(undefined ********)(lVar20 + 8 + uVar41 * 0x10) == pppppppuVar35) goto LAB_140175d45;
LAB_140175d4f:
  uVar41 = 0xcbf29ce484222325;
  iVar18 = (*(code *)(*param_2)[1])();
  if (iVar18 != 0) {
    if (iVar18 == 1) {
      uVar44 = 0;
      local_res10 = param_2;
      if (*(longlong *)(param_1 + 0x128) == 0) {
        local_188 = &PTR_PTR_1404df598;
        local_140 = (longlong *)0x0;
        local_100 = (longlong *)0x0;
        local_c0 = (longlong *)0x0;
        if ((*(uint *)(*(longlong *)(param_1 + 8) + 0x118) & 0x200000) != 0) {
          uVar44 = 2;
        }
        local_208 = &PTR_LAB_14048deb8;
        local_200 = FUN_140177c10;
        local_res10._0_1_ = SUB81(param_2,0);
        local_1f8 = local_res10._0_1_;
        local_1f7 = local_res10._0_1_;
        local_1d0 = &local_208;
        local_1f0 = param_1;
        local_180 = uVar44;
        FUN_140037830(local_f8,&local_208);
        FUN_140037830(&local_208,local_178);
        if (local_c0 != (longlong *)0x0) {
          if (local_c0 == local_f8) {
            local_140 = (longlong *)(**(code **)(*local_c0 + 8))(local_c0,local_178);
            if (local_c0 != (longlong *)0x0) {
              (**(code **)(*local_c0 + 0x20))(local_c0,local_c0 != local_f8);
            }
          }
          else {
            local_140 = local_c0;
          }
        }
        if (local_1d0 != (undefined ***)0x0) {
          (*(code *)(*local_1d0)[4])(local_1d0,local_1d0 != &local_208);
        }
        local_1c8 = &PTR_LAB_14048dee8;
        local_80 = (longlong *)0x0;
        local_1c0 = &LAB_140177cd0;
        local_1b8 = local_res10._0_1_;
        local_190 = &local_1c8;
        local_1b0 = param_1;
        FUN_140037830(local_b8,&local_1c8);
        FUN_140037830(&local_1c8,local_138);
        if (local_80 != (longlong *)0x0) {
          if (local_80 == local_b8) {
            local_100 = (longlong *)(**(code **)(*local_80 + 8))(local_80,local_138);
            if (local_80 != (longlong *)0x0) {
              (**(code **)(*local_80 + 0x20))(local_80,local_80 != local_b8);
            }
          }
          else {
            local_100 = local_80;
          }
        }
        if (local_190 != (undefined ***)0x0) {
          (*(code *)(*local_190)[4])(local_190,local_190 != &local_1c8);
        }
        plVar21 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
        plVar21 = (longlong *)(**(code **)(*plVar21 + 0x100))(plVar21,&local_188);
        *(longlong **)(param_1 + 0x128) = plVar21;
        if ((plVar21 != (longlong *)0x0) && (lVar20 = *(longlong *)(param_1 + 0x60), lVar20 != 0)) {
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar20,lVar20 + 0x48);
        }
        if (local_100 != (longlong *)0x0) {
          (**(code **)(*local_100 + 0x20))(local_100,local_100 != local_138);
          local_100 = (longlong *)0x0;
        }
        if (local_140 != (longlong *)0x0) {
          (**(code **)(*local_140 + 0x20))(local_140,local_140 != local_178);
        }
        if (*(longlong *)(param_1 + 0x128) == 0) {
          (*(code *)**param_2)(param_2,1);
          return;
        }
      }
      uVar27 = (*(code *)(*param_2[1])[1])();
      FUN_140153110(&local_248,uVar27);
      FUN_1400532a0(&local_248,&DAT_14048de40,1);
      pppppuVar9 = param_2[2];
      pppppuVar30 = pppppuVar9 + 7;
      if ((undefined ****)0xf < pppppuVar9[10]) {
        pppppuVar30 = (undefined *****)*pppppuVar30;
      }
      FUN_1400532a0(&local_248,pppppuVar30,pppppuVar9[9]);
      ppppppuVar28 = param_2 + 3;
      local_258 = (undefined ********)&local_248;
      if (0xf < local_230) {
        local_258 = local_248;
      }
      if ((undefined *****)0xf < param_2[6]) {
        ppppppuVar28 = (undefined ******)*ppppppuVar28;
      }
      pppppuVar30 = (undefined *****)
                    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x30))
                              (*(longlong **)(param_1 + 0x128),param_2[1],param_2[2],ppppppuVar28);
      param_2[7] = pppppuVar30;
      if (pppppuVar30 == (undefined *****)0x0) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else {
        uVar19 = (**(code **)(**(longlong **)(param_1 + 0x128) + 0x70))
                           (*(longlong **)(param_1 + 0x128),pppppuVar30);
        *(uint *)(param_2 + 8) = uVar19;
        if ((uVar19 & 0x7c000) != 0) {
          FUN_140177cf0(param_1);
        }
        FUN_140174dc0(*(undefined8 *)(param_1 + 0x128),param_2);
        if (((ulonglong)param_2[8] & 0x3f80) != 0) {
          *(undefined1 *)(param_1 + 0x130) = 1;
        }
      }
      *(undefined1 *)(param_1 + 0x138) = 1;
      FUN_140178e20(param_1 + 0xd8,&local_res10);
      FUN_140017240(&local_248);
      return;
    }
    if (iVar18 != 2) {
      return;
    }
    ppppppuVar28 = param_2 + 4;
    if ((undefined *****)0xf < param_2[7]) {
      ppppppuVar28 = (undefined ******)param_2[4];
    }
    pppppuVar30 = (undefined *****)0x0;
    uVar37 = 0xcbf29ce484222325;
    if (param_2[6] != (undefined *****)0x0) {
      do {
        pbVar1 = (byte *)((longlong)ppppppuVar28 + (longlong)pppppuVar30);
        pppppuVar30 = (undefined *****)((longlong)pppppuVar30 + 1);
        uVar37 = (uVar37 ^ *pbVar1) * 0x100000001b3;
      } while (pppppuVar30 < param_2[6]);
    }
    lVar20 = FUN_1400110a0(param_1 + 0x98,&local_248,param_2 + 4,uVar37);
    if ((*(longlong *)(lVar20 + 8) == 0) ||
       (*(longlong *)(lVar20 + 8) == *(longlong *)(param_1 + 0xa0))) {
      plVar21 = (longlong *)FUN_140179840(param_1 + 0x98,&local_248,param_2 + 4);
      lVar20 = *plVar21;
      if ((undefined8 *)(lVar20 + 0x30) != local_78) {
        FUN_14000d9e0();
        *(undefined8 *)(lVar20 + 0x30) = 0;
        *(undefined8 *)(lVar20 + 0x38) = 0;
        *(undefined8 *)(lVar20 + 0x40) = 0;
      }
    }
    if (param_2[7] < (undefined *****)0x10) {
      ppppppuVar28 = param_2 + 4;
    }
    else {
      ppppppuVar28 = (undefined ******)param_2[4];
    }
    pppppuVar30 = (undefined *****)0x0;
    if (param_2[6] != (undefined *****)0x0) {
      do {
        pbVar1 = (byte *)((longlong)ppppppuVar28 + (longlong)pppppuVar30);
        pppppuVar30 = (undefined *****)((longlong)pppppuVar30 + 1);
        uVar41 = (uVar41 ^ *pbVar1) * 0x100000001b3;
        local_res8 = uVar41;
      } while (pppppuVar30 < param_2[6]);
    }
    FUN_1400110a0((float *)(param_1 + 0x98),&local_248,param_2 + 4,local_res8);
    ppppppppuVar22 = ppppppppuStack_240;
    if (ppppppppuStack_240 == (undefined ********)0x0) {
      if (*(longlong *)(param_1 + 0xa8) == 0x38e38e38e38e38e) {
LAB_140176f63:
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      ppppppppuVar22 = (undefined ********)FUN_14028af20(0x48);
      local_res18 = ppppppppuVar22;
      FUN_140016fc0(ppppppppuVar22 + 2,param_2 + 4);
      ppppppppuVar22[6] = (undefined *******)0x0;
      ppppppppuVar22[7] = (undefined *******)0x0;
      ppppppppuVar22[8] = (undefined *******)0x0;
      fVar43 = *(float *)(param_1 + 0x98);
      fVar42 = (float)(*(longlong *)(param_1 + 0xa8) + 1);
      uVar41 = *(ulonglong *)(param_1 + 0xd0);
      if (fVar43 < fVar42 / (float)uVar41) {
        fVar43 = (float)FUN_140419fa0(fVar42 / fVar43);
        lVar20 = 0;
        if ((fVar16 <= fVar43) && (fVar43 = fVar43 - fVar16, fVar43 < fVar16)) {
          lVar20 = -0x8000000000000000;
        }
        uVar37 = 8;
        if (8 < (ulonglong)((longlong)fVar43 + lVar20)) {
          uVar37 = (longlong)fVar43 + lVar20;
        }
        uVar31 = uVar41;
        if ((uVar41 < uVar37) && ((0x1ff < uVar41 || (uVar31 = uVar41 * 8, uVar41 * 8 < uVar37)))) {
          uVar31 = uVar37;
        }
        for (lVar20 = 0x3f; 0xfffffffffffffffU >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
        if ((ulonglong)(1L << ((byte)lVar20 & 0x3f)) < uVar31) {
LAB_140176f56:
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("invalid hash bucket count");
        }
        ppppuVar2 = *(undefined *****)(param_1 + 0xa0);
        uVar41 = uVar31 - 1 | 1;
        lVar20 = 0x3f;
        if (uVar41 != 0) {
          for (; uVar41 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        bVar29 = (char)lVar20 + 1;
        lVar20 = 1L << (bVar29 & 0x3f);
        uVar44 = FUN_14004f190(param_1 + 0xb0,2L << (bVar29 & 0x3f),ppppuVar2);
        *(longlong *)(param_1 + 0xd0) = lVar20;
        *(longlong *)(param_1 + 200) = lVar20 + -1;
        ppppuVar15 = (undefined ****)**(undefined8 **)(param_1 + 0xa0);
joined_r0x000140175ffa:
        if (ppppuVar15 != ppppuVar2) {
          pppppuVar30 = *(undefined ******)(param_1 + 0xb0);
          ppppuVar3 = (undefined ****)*ppppuVar15;
          local_res10 = (undefined ******)pppppuVar30;
          uVar41 = FUN_140032520(uVar44,ppppuVar15 + 2);
          uVar41 = uVar41 & *(ulonglong *)(param_1 + 200);
          if (pppppuVar30[uVar41 * 2] == ppppuVar2) {
            pppppuVar30[uVar41 * 2] = ppppuVar15;
            pppppuVar30[uVar41 * 2 + 1] = ppppuVar15;
            ppppuVar15 = ppppuVar3;
            ppppppppuVar22 = local_res18;
            uVar44 = extraout_XMM0_Da;
          }
          else {
            ppppuVar38 = pppppuVar30[uVar41 * 2 + 1];
            cVar17 = FUN_14000d0f0(ppppuVar15 + 2,ppppuVar38 + 2);
            uVar44 = extraout_XMM0_Da_00;
            if (cVar17 == '\0') {
              if (local_res10[uVar41 * 2] != (undefined *****)ppppuVar38) {
                do {
                  ppppuVar38 = (undefined ****)ppppuVar38[1];
                  cVar17 = FUN_14000d0f0(ppppuVar15 + 2,ppppuVar38 + 2);
                  uVar44 = extraout_XMM0_Da_01;
                  if (cVar17 != '\0') {
                    pppuVar4 = *ppppuVar38;
                    pppuVar5 = ppppuVar15[1];
                    *pppuVar5 = (undefined **)ppppuVar3;
                    pppuVar6 = ppppuVar3[1];
                    *pppuVar6 = (undefined **)pppuVar4;
                    pppuVar8 = (undefined ***)pppuVar4[1];
                    *pppuVar8 = (undefined **)ppppuVar15;
                    pppuVar4[1] = (undefined **)pppuVar6;
                    ppppuVar3[1] = pppuVar5;
                    ppppuVar15[1] = pppuVar8;
                    ppppuVar15 = ppppuVar3;
                    ppppppppuVar22 = local_res18;
                    goto joined_r0x000140175ffa;
                  }
                } while (local_res10[uVar41 * 2] != (undefined *****)ppppuVar38);
              }
              pppuVar4 = ppppuVar15[1];
              *pppuVar4 = (undefined **)ppppuVar3;
              pppuVar5 = ppppuVar3[1];
              *pppuVar5 = (undefined **)ppppuVar38;
              pppuVar6 = ppppuVar38[1];
              *pppuVar6 = (undefined **)ppppuVar15;
              ppppuVar38[1] = pppuVar5;
              ppppuVar3[1] = pppuVar4;
              ppppuVar15[1] = pppuVar6;
              local_res10[uVar41 * 2] = (undefined *****)ppppuVar15;
              ppppuVar15 = ppppuVar3;
              ppppppppuVar22 = local_res18;
            }
            else {
              ppppuVar38 = (undefined ****)*ppppuVar38;
              if (ppppuVar38 != ppppuVar15) {
                pppuVar4 = ppppuVar15[1];
                *pppuVar4 = (undefined **)ppppuVar3;
                pppuVar5 = ppppuVar3[1];
                *pppuVar5 = (undefined **)ppppuVar38;
                pppuVar6 = ppppuVar38[1];
                *pppuVar6 = (undefined **)ppppuVar15;
                ppppuVar38[1] = pppuVar5;
                ppppuVar3[1] = pppuVar4;
                ppppuVar15[1] = pppuVar6;
              }
              local_res10[uVar41 * 2 + 1] = (undefined *****)ppppuVar15;
              ppppuVar15 = ppppuVar3;
              ppppppppuVar22 = local_res18;
            }
          }
          goto joined_r0x000140175ffa;
        }
        local_res10 = (undefined ******)0x0;
        FUN_14017bc40(&local_res10);
        puVar23 = (undefined8 *)
                  FUN_1400110a0(param_1 + 0x98,&local_248,ppppppppuVar22 + 2,local_res8);
        local_248 = (undefined ********)*puVar23;
        ppppppppuStack_240 = (undefined ********)puVar23[1];
      }
      pppppppuVar35 = local_248[1];
      *(longlong *)(param_1 + 0xa8) = *(longlong *)(param_1 + 0xa8) + 1;
      *ppppppppuVar22 = (undefined *******)local_248;
      ppppppppuVar22[1] = pppppppuVar35;
      *pppppppuVar35 = (undefined ******)ppppppppuVar22;
      local_248[1] = (undefined *******)ppppppppuVar22;
      lVar20 = *(longlong *)(param_1 + 0xb0);
      local_res8 = *(ulonglong *)(param_1 + 200) & local_res8;
      ppppppppuVar7 = *(undefined *********)(lVar20 + local_res8 * 0x10);
      if (ppppppppuVar7 == *(undefined *********)(param_1 + 0xa0)) {
        *(undefined *********)(lVar20 + local_res8 * 0x10) = ppppppppuVar22;
LAB_1401761c3:
        *(undefined *********)(lVar20 + 8 + local_res8 * 0x10) = ppppppppuVar22;
      }
      else if (ppppppppuVar7 == local_248) {
        *(undefined *********)(lVar20 + local_res8 * 0x10) = ppppppppuVar22;
      }
      else if (*(undefined ********)(lVar20 + 8 + local_res8 * 0x10) == pppppppuVar35)
      goto LAB_1401761c3;
    }
    pppppppuVar35 = ppppppppuVar22[7];
    if (pppppppuVar35 == ppppppppuVar22[8]) {
      uVar41 = (longlong)pppppppuVar35 - (longlong)ppppppppuVar22[6];
      lVar20 = (longlong)uVar41 >> 3;
      if (lVar20 == 0x1fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar37 = lVar20 + 1;
      uVar31 = (longlong)ppppppppuVar22[8] - (longlong)ppppppppuVar22[6] >> 3;
      if (0x1fffffffffffffff - (uVar31 >> 1) < uVar31) {
        uVar32 = 0x1fffffffffffffff;
      }
      else {
        uVar31 = (uVar31 >> 1) + uVar31;
        uVar32 = uVar37;
        if (uVar37 <= uVar31) {
          uVar32 = uVar31;
        }
        if (0x1fffffffffffffff < uVar32) goto LAB_140176f4a;
      }
      local_res10 = (undefined ******)(uVar32 * 8);
      pppppppuVar24 = (undefined *******)FUN_140017390(local_res10);
      uVar41 = uVar41 & 0xfffffffffffffff8;
      *(undefined *******)(uVar41 + (longlong)pppppppuVar24) = param_2;
      pppppppuVar34 = ppppppppuVar22[6];
      if (pppppppuVar35 == ppppppppuVar22[7]) {
        lVar20 = (longlong)ppppppppuVar22[7] - (longlong)pppppppuVar34;
        pppppppuVar33 = pppppppuVar24;
        pppppppuVar35 = pppppppuVar34;
      }
      else {
        FUN_1404210f0(pppppppuVar24,pppppppuVar34,(longlong)pppppppuVar35 - (longlong)pppppppuVar34)
        ;
        pppppppuVar33 = (undefined *******)((longlong)pppppppuVar24 + uVar41 + 8);
        lVar20 = (longlong)ppppppppuVar22[7] - (longlong)pppppppuVar35;
      }
      uVar44 = FUN_1404210f0(pppppppuVar33,pppppppuVar35,lVar20);
      pppppppuVar35 = ppppppppuVar22[6];
      if (pppppppuVar35 != (undefined *******)0x0) {
        FUN_140037480(uVar44,pppppppuVar35,
                      (longlong)ppppppppuVar22[8] - (longlong)pppppppuVar35 >> 3);
      }
      ppppppppuVar22[6] = pppppppuVar24;
      ppppppppuVar22[7] = pppppppuVar24 + uVar37;
      ppppppppuVar22[8] = (undefined *******)((longlong)local_res10 + (longlong)pppppppuVar24);
    }
    else {
      *pppppppuVar35 = param_2;
      ppppppppuVar22[7] = ppppppppuVar22[7] + 1;
    }
    if (*(int *)(param_2 + 3) == 1) {
      FUN_140177cf0(param_1);
      return;
    }
    if (*(int *)(param_2 + 3) != 2) {
      return;
    }
    if (*(longlong *)(param_1 + 0x148) != 0) {
      return;
    }
    puVar25 = (undefined4 *)FUN_14028af20(0x108);
    *puVar25 = 0;
    puVar23 = (undefined8 *)(puVar25 + 0x16);
    *(undefined8 *)(puVar25 + 8) = 0;
    *(undefined8 *)(puVar25 + 10) = 0;
    *(undefined8 *)(puVar25 + 0xc) = 0;
    *(undefined8 *)(puVar25 + 0xe) = 0;
    *(undefined8 *)(puVar25 + 0x10) = 0;
    *(undefined8 *)(puVar25 + 0x12) = 0;
    *(undefined8 *)(puVar25 + 4) = 0;
    *(undefined8 *)(puVar25 + 6) = 0;
    puVar25[0x14] = 0xffffffff;
    puVar25[2] = 2;
    puVar25[0x15] = 0;
    *puVar23 = 0;
    *(undefined8 *)(puVar25 + 0x18) = 0;
    *(undefined8 *)(puVar25 + 0x1a) = 0;
    *(undefined8 *)(puVar25 + 0x1c) = 0;
    *(undefined8 *)(puVar25 + 0x1e) = 0;
    puVar26 = (undefined8 *)FUN_14028af20(0x10);
    puVar26[1] = 0;
    *puVar23 = puVar26;
    *puVar26 = puVar23;
    *(undefined8 *)(puVar25 + 0x20) = 0;
    *(undefined8 *)(puVar25 + 0x22) = 0;
    *(undefined8 *)(puVar25 + 0x24) = 0;
    *(undefined8 *)(puVar25 + 0x26) = 0;
    *(undefined8 *)(puVar25 + 0x28) = 0;
    *(undefined8 *)(puVar25 + 0x2a) = 0;
    *(undefined8 *)(puVar25 + 0x2c) = 0;
    *(undefined8 *)(puVar25 + 0x2e) = 0;
    *(undefined8 *)(puVar25 + 0x30) = 0;
    FUN_14000d970(puVar25 + 0x32);
    *(undefined4 **)(param_1 + 0x148) = puVar25;
    plVar21 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x158);
    local_248 = (undefined ********)&PTR_LAB_14048df48;
    local_210 = (undefined ********)&local_248;
    ppppppppuStack_240 = (undefined ********)param_1;
    uVar44 = (**(code **)(*plVar21 + 0x120))(plVar21,&local_248);
    **(undefined4 **)(param_1 + 0x148) = uVar44;
    return;
  }
  lVar20 = 1;
  iVar18 = *(int *)param_2[2];
  if (iVar18 == 1) {
    lVar20 = 2;
  }
  else if (iVar18 == 2) {
    lVar20 = 3;
  }
  else if (iVar18 == 3) {
    lVar20 = 4;
  }
  *(bool *)(param_2 + 3) =
       lVar20 == ((longlong)param_2[5] - (longlong)param_2[4] >> 4) * -0x5555555555555555;
  if (param_2[0x14] == (undefined *****)0x0) {
    puVar23 = *(undefined8 **)(param_1 + 0x80);
    local_res10 = param_2;
    if (puVar23 != *(undefined8 **)(param_1 + 0x88)) {
      do {
        pppppppuVar24 = (undefined *******)*puVar23;
        if (pppppppuVar24[1] == (undefined ******)param_2[1]) {
          pppppuVar9 = param_2[2];
          pppppppuVar35 = pppppppuVar24 + 0x12;
          pppppuVar30 = pppppuVar9 + 7;
          if ((undefined ****)0xf < pppppuVar9[10]) {
            pppppuVar30 = (undefined *****)*pppppuVar30;
          }
          ppppppuVar28 = pppppppuVar24[0x14];
          if ((undefined ******)0xf < pppppppuVar24[0x15]) {
            pppppppuVar35 = (undefined *******)*pppppppuVar35;
          }
          if ((ppppppuVar28 != (undefined ******)pppppuVar9[9]) ||
             ((ppppppuVar28 != (undefined ******)0x0 &&
              (iVar18 = memcmp(pppppppuVar35,pppppuVar30,(size_t)ppppppuVar28), iVar18 != 0))))
          goto LAB_140176de0;
          pppppppuVar24[0x16] = param_2;
          uVar41 = FUN_14007c330();
          FUN_1401618d0(param_2 + 0x17,&local_248,puVar23,uVar41);
          if (ppppppppuStack_240 == (undefined ********)0x0) {
            if (param_2[0x19] == (undefined *****)0xaaaaaaaaaaaaaaa) goto LAB_140176f63;
            pppppppuVar35 = (undefined *******)FUN_14028af20(0x18);
            pppppppuVar35[2] = (undefined ******)*puVar23;
            fVar43 = *(float *)(param_2 + 0x17);
            pppppppuVar24 = (undefined *******)param_2[0x1e];
            if (fVar43 < (float)((longlong)param_2[0x19] + 1) / (float)pppppppuVar24) {
              fVar43 = (float)FUN_140419fa0((float)((longlong)param_2[0x19] + 1) / fVar43);
              lVar20 = 0;
              if ((fVar16 <= fVar43) && (fVar43 = fVar43 - fVar16, fVar43 < fVar16)) {
                lVar20 = -0x8000000000000000;
              }
              pppppppuVar34 = (undefined *******)&DAT_00000008;
              if (&DAT_00000008 < (undefined *******)((longlong)fVar43 + lVar20)) {
                pppppppuVar34 = (undefined *******)((longlong)fVar43 + lVar20);
              }
              pppppppuVar33 = pppppppuVar24;
              if ((pppppppuVar24 < pppppppuVar34) &&
                 (((undefined *******)0x1ff < pppppppuVar24 ||
                  (pppppppuVar33 = (undefined *******)((longlong)pppppppuVar24 * 8),
                  (undefined *******)((longlong)pppppppuVar24 * 8) < pppppppuVar34)))) {
                pppppppuVar33 = pppppppuVar34;
              }
              for (lVar20 = 0x3f; 0xfffffffffffffffU >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
              if ((undefined *******)(1L << ((byte)lVar20 & 0x3f)) < pppppppuVar33)
              goto LAB_140176f56;
              pppppppuVar24 = (undefined *******)param_2[0x18];
              uVar37 = (ulonglong)((longlong)pppppppuVar33 + -1) | 1;
              lVar20 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              bVar29 = (char)lVar20 + 1;
              pppppuVar30 = (undefined *****)(1L << (bVar29 & 0x3f));
              FUN_14004f190(param_2 + 0x1a,2L << (bVar29 & 0x3f),pppppppuVar24);
              param_2[0x1e] = pppppuVar30;
              param_2[0x1d] = (undefined *****)((longlong)pppppuVar30 + -1);
              pppppppuVar34 = (undefined *******)*param_2[0x18];
joined_r0x000140176be3:
              if (pppppppuVar34 != pppppppuVar24) {
                pppppppuVar40 = (undefined *******)*pppppppuVar34;
                pppppppuVar33 = pppppppuVar34 + 2;
                pppppuVar30 = param_2[0x1a];
                uVar37 = FUN_14007c330();
                uVar37 = uVar37 & (ulonglong)param_2[0x1d];
                if ((undefined *******)pppppuVar30[uVar37 * 2] == pppppppuVar24) {
                  pppppuVar30[uVar37 * 2] = (undefined ****)pppppppuVar34;
                  pppppuVar30[uVar37 * 2 + 1] = (undefined ****)pppppppuVar34;
                  pppppppuVar34 = pppppppuVar40;
                }
                else {
                  pppppppuVar10 = (undefined *******)pppppuVar30[uVar37 * 2 + 1];
                  if (*pppppppuVar33 == pppppppuVar10[2]) {
                    pppppppuVar10 = (undefined *******)*pppppppuVar10;
                    if (pppppppuVar10 != pppppppuVar34) {
                      ppppppuVar28 = pppppppuVar34[1];
                      *ppppppuVar28 = (undefined *****)pppppppuVar40;
                      ppppppuVar11 = pppppppuVar40[1];
                      *ppppppuVar11 = (undefined *****)pppppppuVar10;
                      ppppppuVar12 = pppppppuVar10[1];
                      *ppppppuVar12 = (undefined *****)pppppppuVar34;
                      pppppppuVar10[1] = ppppppuVar11;
                      pppppppuVar40[1] = ppppppuVar28;
                      pppppppuVar34[1] = ppppppuVar12;
                    }
                    pppppuVar30[uVar37 * 2 + 1] = (undefined ****)pppppppuVar34;
                    pppppppuVar34 = pppppppuVar40;
                  }
                  else {
                    do {
                      if ((undefined *******)pppppuVar30[uVar37 * 2] == pppppppuVar10) {
                        ppppppuVar28 = pppppppuVar34[1];
                        *ppppppuVar28 = (undefined *****)pppppppuVar40;
                        ppppppuVar11 = pppppppuVar40[1];
                        *ppppppuVar11 = (undefined *****)pppppppuVar10;
                        ppppppuVar12 = pppppppuVar10[1];
                        *ppppppuVar12 = (undefined *****)pppppppuVar34;
                        pppppppuVar10[1] = ppppppuVar11;
                        pppppppuVar40[1] = ppppppuVar28;
                        pppppppuVar34[1] = ppppppuVar12;
                        pppppuVar30[uVar37 * 2] = (undefined ****)pppppppuVar34;
                        pppppppuVar34 = pppppppuVar40;
                        goto joined_r0x000140176be3;
                      }
                      pppppppuVar10 = (undefined *******)pppppppuVar10[1];
                    } while (*pppppppuVar33 != pppppppuVar10[2]);
                    ppppppuVar28 = *pppppppuVar10;
                    ppppppuVar11 = pppppppuVar34[1];
                    *ppppppuVar11 = (undefined *****)pppppppuVar40;
                    ppppppuVar12 = pppppppuVar40[1];
                    *ppppppuVar12 = (undefined *****)ppppppuVar28;
                    ppppppuVar13 = (undefined ******)ppppppuVar28[1];
                    *ppppppuVar13 = (undefined *****)pppppppuVar34;
                    ppppppuVar28[1] = (undefined *****)ppppppuVar12;
                    pppppppuVar40[1] = ppppppuVar11;
                    pppppppuVar34[1] = ppppppuVar13;
                    pppppppuVar34 = pppppppuVar40;
                  }
                }
                goto joined_r0x000140176be3;
              }
              local_res10 = (undefined ******)0x0;
              FUN_14005b0e0(&local_res10);
              ppppppppuVar22 =
                   (undefined ********)param_2[0x1a][(uVar41 & (ulonglong)param_2[0x1d]) * 2 + 1];
              if (ppppppppuVar22 == (undefined ********)param_2[0x18]) {
                local_248 = (undefined ********)param_2[0x18];
                ppppppppuStack_240 = (undefined ********)0x0;
              }
              else {
                pppppppuVar34 = ppppppppuVar22[2];
                while ((undefined *******)pppppppuVar35[2] != pppppppuVar34) {
                  if (ppppppppuVar22 ==
                      (undefined ********)param_2[0x1a][(uVar41 & (ulonglong)param_2[0x1d]) * 2]) {
                    ppppppppuStack_240 = (undefined ********)0x0;
                    local_248 = ppppppppuVar22;
                    goto LAB_140176d61;
                  }
                  ppppppppuVar22 = (undefined ********)ppppppppuVar22[1];
                  pppppppuVar34 = ppppppppuVar22[2];
                }
                local_248 = (undefined ********)*ppppppppuVar22;
                ppppppppuStack_240 = ppppppppuVar22;
              }
            }
LAB_140176d61:
            pppppppuVar34 = local_248[1];
            param_2[0x19] = (undefined *****)((longlong)param_2[0x19] + 1);
            *pppppppuVar35 = (undefined ******)local_248;
            pppppppuVar35[1] = (undefined ******)pppppppuVar34;
            *pppppppuVar34 = (undefined ******)pppppppuVar35;
            local_248[1] = pppppppuVar35;
            uVar41 = uVar41 & (ulonglong)param_2[0x1d];
            pppppuVar30 = param_2[0x1a];
            if ((undefined *****)pppppuVar30[uVar41 * 2] == param_2[0x18]) {
              pppppuVar30[uVar41 * 2] = (undefined ****)pppppppuVar35;
LAB_140176dbb:
              pppppuVar30[uVar41 * 2 + 1] = (undefined ****)pppppppuVar35;
            }
            else if ((undefined ********)pppppuVar30[uVar41 * 2] == local_248) {
              pppppuVar30[uVar41 * 2] = (undefined ****)pppppppuVar35;
            }
            else if ((undefined *******)pppppuVar30[uVar41 * 2 + 1] == pppppppuVar34)
            goto LAB_140176dbb;
          }
          FUN_1404210f0(puVar23,puVar23 + 1,*(longlong *)(param_1 + 0x88) - (longlong)(puVar23 + 1))
          ;
          *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + -8;
        }
        else {
LAB_140176de0:
          puVar23 = puVar23 + 1;
        }
      } while (puVar23 != *(undefined8 **)(param_1 + 0x88));
    }
LAB_1401769bf:
    puVar23 = *(undefined8 **)(param_1 + 0x70);
    if (puVar23 != *(undefined8 **)(param_1 + 0x78)) {
      *puVar23 = param_2;
      *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 8;
      return;
    }
    uVar41 = (longlong)puVar23 - *(longlong *)(param_1 + 0x68);
    lVar20 = (longlong)uVar41 >> 3;
    if (lVar20 == 0x1fffffffffffffff) {
LAB_140176f44:
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar32 = (longlong)*(undefined8 **)(param_1 + 0x78) - *(longlong *)(param_1 + 0x68) >> 3;
    if (0x1fffffffffffffff - (uVar32 >> 1) < uVar32) {
LAB_140176f4a:
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    uVar32 = (uVar32 >> 1) + uVar32;
    uVar31 = lVar20 + 1;
    uVar37 = uVar31;
    if (uVar31 <= uVar32) {
      uVar37 = uVar32;
    }
    if (0x1fffffffffffffff < uVar37) goto LAB_140176f4a;
    uVar37 = uVar37 * 8;
    if (uVar37 == 0) {
      pppppppuVar24 = (undefined *******)0x0;
    }
    else if (uVar37 < 0x1000) {
      pppppppuVar24 = (undefined *******)FUN_14028af20(uVar37);
    }
    else {
      if (uVar37 + 0x27 <= uVar37) goto LAB_140176f4a;
      ppppppuVar28 = (undefined ******)FUN_14028af20();
      if (ppppppuVar28 == (undefined ******)0x0) goto LAB_140176f19;
      pppppppuVar24 = (undefined *******)((longlong)ppppppuVar28 + 0x27U & 0xffffffffffffffe0);
      pppppppuVar24[-1] = ppppppuVar28;
    }
    uVar41 = uVar41 & 0xfffffffffffffff8;
    *(undefined *******)(uVar41 + (longlong)pppppppuVar24) = param_2;
    puVar26 = *(undefined8 **)(param_1 + 0x68);
    if (puVar23 == *(undefined8 **)(param_1 + 0x70)) {
      lVar20 = (longlong)*(undefined8 **)(param_1 + 0x70) - (longlong)puVar26;
      pppppppuVar35 = pppppppuVar24;
      puVar23 = puVar26;
    }
    else {
      FUN_1404210f0(pppppppuVar24,puVar26,(longlong)puVar23 - (longlong)puVar26);
      pppppppuVar35 = (undefined *******)(uVar41 + 8 + (longlong)pppppppuVar24);
      lVar20 = *(longlong *)(param_1 + 0x70) - (longlong)puVar23;
    }
    FUN_1404210f0(pppppppuVar35,puVar23,lVar20);
    lVar20 = *(longlong *)(param_1 + 0x68);
    if (lVar20 == 0) goto LAB_140176f2b;
    if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0x78) - lVar20 >> 3) * 8)) &&
       (lVar36 = lVar20 - *(longlong *)(lVar20 + -8), lVar20 = *(longlong *)(lVar20 + -8),
       puVar39 = auStack_278, 0x1f < lVar36 - 8U)) goto LAB_140176f19;
  }
  else {
    pppppppuVar35 = *(undefined ********)(param_1 + 0x70);
    local_res10 = param_2;
    for (pppppppuVar24 = *(undefined ********)(param_1 + 0x68); pppppppuVar24 != pppppppuVar35;
        pppppppuVar24 = pppppppuVar24 + 1) {
      ppppppuVar28 = *pppppppuVar24;
      if (((ppppppuVar28[0x14] == (undefined *****)0x0) && (ppppppuVar28[1] == param_2[1])) &&
         (cVar17 = FUN_14000d0f0(ppppppuVar28[2] + 7,param_2 + 0x12), cVar17 != '\0')) {
        param_2[0x16] = (undefined *****)ppppppuVar28;
        FUN_140152770(*pppppppuVar24 + 0x17,&local_248,&local_res10);
        param_2 = local_res10;
        break;
      }
    }
    if (param_2[0x16] != (undefined *****)0x0) goto LAB_1401769bf;
    puVar23 = *(undefined8 **)(param_1 + 0x88);
    if (puVar23 != *(undefined8 **)(param_1 + 0x90)) {
      *puVar23 = param_2;
      *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 8;
      goto LAB_1401769bf;
    }
    uVar41 = (longlong)puVar23 - *(longlong *)(param_1 + 0x80);
    lVar20 = (longlong)uVar41 >> 3;
    if (lVar20 == 0x1fffffffffffffff) goto LAB_140176f44;
    uVar37 = (longlong)*(undefined8 **)(param_1 + 0x90) - *(longlong *)(param_1 + 0x80) >> 3;
    if (0x1fffffffffffffff - (uVar37 >> 1) < uVar37) goto LAB_140176f4a;
    uVar37 = (uVar37 >> 1) + uVar37;
    uVar31 = lVar20 + 1;
    uVar32 = uVar31;
    if (uVar31 <= uVar37) {
      uVar32 = uVar37;
    }
    if (0x1fffffffffffffff < uVar32) goto LAB_140176f4a;
    uVar37 = uVar32 * 8;
    if (uVar37 == 0) {
      pppppppuVar24 = (undefined *******)0x0;
LAB_140176900:
      uVar41 = uVar41 & 0xfffffffffffffff8;
      *(undefined *******)(uVar41 + (longlong)pppppppuVar24) = param_2;
      puVar26 = *(undefined8 **)(param_1 + 0x80);
      if (puVar23 == *(undefined8 **)(param_1 + 0x88)) {
        lVar20 = (longlong)*(undefined8 **)(param_1 + 0x88) - (longlong)puVar26;
        pppppppuVar35 = pppppppuVar24;
        puVar23 = puVar26;
      }
      else {
        FUN_1404210f0(pppppppuVar24,puVar26,(longlong)puVar23 - (longlong)puVar26);
        pppppppuVar35 = (undefined *******)(uVar41 + 8 + (longlong)pppppppuVar24);
        lVar20 = *(longlong *)(param_1 + 0x88) - (longlong)puVar23;
      }
      FUN_1404210f0(pppppppuVar35,puVar23,lVar20);
      lVar20 = *(longlong *)(param_1 + 0x80);
      if (lVar20 != 0) {
        uVar41 = (*(longlong *)(param_1 + 0x90) - lVar20 >> 3) * 8;
        if (0xfff < uVar41) {
          if (0x1f < (lVar20 - *(longlong *)(lVar20 + -8)) - 8U) goto LAB_140176f19;
          uVar41 = uVar41 + 0x27;
          lVar20 = *(longlong *)(lVar20 + -8);
        }
        thunk_FUN_14028af80(lVar20,uVar41);
      }
      *(undefined ********)(param_1 + 0x80) = pppppppuVar24;
      *(undefined ********)(param_1 + 0x88) = pppppppuVar24 + uVar31;
      *(undefined ********)(param_1 + 0x90) = pppppppuVar24 + uVar32;
      goto LAB_1401769bf;
    }
    if (uVar37 < 0x1000) {
      pppppppuVar24 = (undefined *******)FUN_14028af20(uVar37);
      goto LAB_140176900;
    }
    if (uVar37 + 0x27 <= uVar37) goto LAB_140176f4a;
    ppppppuVar28 = (undefined ******)FUN_14028af20();
    if (ppppppuVar28 != (undefined ******)0x0) {
      pppppppuVar24 = (undefined *******)((longlong)ppppppuVar28 + 0x27U & 0xffffffffffffffe0);
      pppppppuVar24[-1] = ppppppuVar28;
      goto LAB_140176900;
    }
LAB_140176f19:
    lVar20 = 5;
    pcVar14 = (code *)swi(0x29);
    (*pcVar14)(5);
    puVar39 = auStack_270;
  }
  *(undefined8 *)(puVar39 + -8) = 0x140176f2b;
  thunk_FUN_14028af80(lVar20);
LAB_140176f2b:
  *(undefined ********)(param_1 + 0x68) = pppppppuVar24;
  *(undefined ********)(param_1 + 0x70) = pppppppuVar24 + uVar31;
  *(undefined1 **)(param_1 + 0x78) = (undefined1 *)(uVar37 + (longlong)pppppppuVar24);
  return;
}

