// Function: FUN_1401acaf0
// Addr: 1401acaf0
// Size: 2316 bytes


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1401acaf0(undefined8 param_1,longlong param_2,float *param_3,float *param_4,float param_5,
             longlong *param_6)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  float *pfVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  size_t sVar10;
  longlong *plVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  longlong *plVar14;
  byte bVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  ulonglong *_Buf1;
  undefined8 *******pppppppuVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong *_Buf2;
  undefined8 *puVar23;
  ulonglong *puVar24;
  longlong *plVar25;
  ulonglong *puVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float fVar31;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  ulonglong *local_a8;
  float *local_98;
  ulonglong local_90;
  ulonglong *local_88;
  undefined8 local_80;
  ulonglong local_78;
  ulonglong *local_70;
  ulonglong *local_68;
  undefined8 *******local_60;
  ulonglong uStack_58;
  ulonglong *local_50;
  ulonglong uStack_48;
  
  puVar27 = auStack_c8;
  if (param_6 == (longlong *)0x0) {
LAB_1401acc3c:
    uVar12 = 0;
  }
  else {
    sVar10 = strlen((char *)param_6);
    uVar21 = 0;
    uVar29 = 0xcbf29ce484222325;
    if (sVar10 != 0) {
      do {
        pbVar1 = (byte *)((longlong)param_6 + uVar21);
        uVar21 = uVar21 + 1;
        uVar29 = (uVar29 ^ *pbVar1) * 0x100000001b3;
      } while (uVar21 < sVar10);
    }
    local_98 = param_3 + 6;
    puVar13 = *(ulonglong **)(param_3 + 2);
    puVar26 = *(ulonglong **)
               (*(longlong *)(param_3 + 6) + 8 + (uVar29 & *(ulonglong *)(param_3 + 0xc)) * 0x10);
    if (puVar26 == puVar13) {
LAB_1401acbcb:
      puVar26 = (ulonglong *)0x0;
    }
    else {
      puVar16 = *(ulonglong **)
                 (*(longlong *)(param_3 + 6) + (uVar29 & *(ulonglong *)(param_3 + 0xc)) * 0x10);
      cVar8 = FUN_14000d010(puVar26 + 2,param_6);
      while (cVar8 == '\0') {
        if (puVar26 == puVar16) goto LAB_1401acbcb;
        puVar26 = (ulonglong *)puVar26[1];
        cVar8 = FUN_14000d010(puVar26 + 2,param_6);
      }
    }
    if ((puVar26 == (ulonglong *)0x0) || (puVar26 == puVar13)) {
      plVar11 = (longlong *)FUN_14028af20(0x10);
      *(undefined4 *)(plVar11 + 1) = 0;
      *plVar11 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 0;
      lVar19 = FUN_1400d4160(*(undefined8 *)(param_2 + 0x1898),param_6,plVar11 + 1,0);
      *plVar11 = lVar19;
      if (lVar19 == 0) {
        thunk_FUN_14028af80(plVar11,0x10);
        goto LAB_1401acc3c;
      }
      local_50 = (ulonglong *)0x0;
      uStack_48 = 0;
      *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
      local_60 = (undefined8 *******)0x0;
      uStack_58 = 0;
      sVar10 = strlen((char *)param_6);
      FUN_140017480(&local_60,param_6,sVar10);
      uVar21 = 0xcbf29ce484222325;
      pppppppuVar18 = &local_60;
      if (0xf < uStack_48) {
        pppppppuVar18 = local_60;
      }
      puVar26 = (ulonglong *)0x0;
      local_90 = 0xcbf29ce484222325;
      puVar13 = puVar26;
      if (local_50 != (ulonglong *)0x0) {
        do {
          puVar16 = (ulonglong *)((longlong)puVar13 + 1);
          uVar21 = (uVar21 ^ *(byte *)((longlong)puVar13 + (longlong)pppppppuVar18)) * 0x100000001b3
          ;
          puVar13 = puVar16;
          local_90 = uVar21;
        } while (puVar16 < local_50);
      }
      uVar21 = local_90;
      FUN_1400110a0(param_3,&local_70,&local_60,local_90);
      puVar13 = local_68;
      if (local_68 == (ulonglong *)0x0) {
        if (*(longlong *)(param_3 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c2e0("unordered_map/set too long");
        }
        puVar13 = (ulonglong *)FUN_14028af20(0x38);
        puVar13[2] = (ulonglong)local_60;
        puVar13[3] = uStack_58;
        puVar16 = puVar13 + 2;
        puVar13[4] = (ulonglong)local_50;
        puVar13[5] = uStack_48;
        local_50 = (ulonglong *)0x0;
        uStack_48 = 0xf;
        local_60 = (undefined8 *******)((ulonglong)local_60 & 0xffffffffffffff00);
        puVar13[6] = 0;
        puVar26 = *(ulonglong **)(param_3 + 0xe);
        local_88 = puVar13;
        if (*param_3 < (float)(*(longlong *)(param_3 + 4) + 1) / (float)puVar26) {
          fVar31 = (float)FUN_140419fa0((float)(*(longlong *)(param_3 + 4) + 1) / *param_3);
          lVar19 = 0;
          if ((DAT_140492974 <= fVar31) && (fVar31 = fVar31 - DAT_140492974, fVar31 < DAT_140492974)
             ) {
            lVar19 = -0x8000000000000000;
          }
          uVar29 = 8;
          if (8 < (ulonglong)((longlong)fVar31 + lVar19)) {
            uVar29 = (longlong)fVar31 + lVar19;
          }
          puVar24 = puVar26;
          if ((puVar26 < uVar29) &&
             ((0x1ff < puVar26 ||
              (puVar24 = (ulonglong *)((longlong)puVar26 * 8),
              (ulonglong)((longlong)puVar26 * 8) < uVar29)))) {
            puVar24 = (ulonglong *)uVar29;
          }
          for (lVar19 = 0x3f; 0xfffffffffffffffU >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
          if ((ulonglong)(1L << ((byte)lVar19 & 0x3f)) < puVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_14028c2e0("invalid hash bucket count");
          }
          plVar2 = *(longlong **)(param_3 + 2);
          uVar29 = (longlong)puVar24 - 1U | 1;
          lVar19 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          bVar15 = (char)lVar19 + 1;
          lVar19 = 1L << (bVar15 & 0x3f);
          FUN_14004f190(param_3 + 6,2L << (bVar15 & 0x3f),plVar2);
          *(longlong *)(param_3 + 0xe) = lVar19;
          *(longlong *)(param_3 + 0xc) = lVar19 + -1;
          pfVar6 = param_3 + 6;
          plVar7 = (longlong *)**(undefined8 **)(param_3 + 2);
joined_r0x0001401ace8a:
          if (plVar7 != plVar2) {
            uVar21 = plVar7[5];
            plVar14 = plVar7 + 2;
            plVar3 = (longlong *)*plVar7;
            if (0xf < uVar21) {
              plVar14 = (longlong *)plVar7[2];
            }
            uVar29 = plVar7[4];
            uVar28 = 0;
            uVar30 = 0xcbf29ce484222325;
            if (uVar29 != 0) {
              do {
                pbVar1 = (byte *)((longlong)plVar14 + uVar28);
                uVar28 = uVar28 + 1;
                uVar30 = (uVar30 ^ *pbVar1) * 0x100000001b3;
              } while (uVar28 < uVar29);
              uVar21 = plVar7[5];
            }
            lVar19 = *(longlong *)pfVar6;
            uVar30 = uVar30 & *(ulonglong *)(param_3 + 0xc);
            plVar14 = *(longlong **)(lVar19 + uVar30 * 0x10);
            if (plVar14 == plVar2) {
              *(longlong **)(lVar19 + uVar30 * 0x10) = plVar7;
              *(longlong **)(lVar19 + 8 + uVar30 * 0x10) = plVar7;
              plVar7 = plVar3;
              puVar13 = local_88;
              uVar21 = local_90;
            }
            else {
              plVar25 = *(longlong **)(lVar19 + 8 + uVar30 * 0x10);
              plVar22 = plVar25 + 2;
              if (0xf < (ulonglong)plVar25[5]) {
                plVar22 = (longlong *)*plVar22;
              }
              plVar17 = plVar7 + 2;
              if (0xf < uVar21) {
                plVar17 = (longlong *)plVar7[2];
              }
              if (uVar29 == plVar25[4]) {
                if ((uVar29 != 0) && (iVar9 = memcmp(plVar17,plVar22,uVar29), iVar9 != 0)) {
                  plVar14 = *(longlong **)(lVar19 + uVar30 * 0x10);
                  uVar21 = plVar7[5];
                  goto LAB_1401acf86;
                }
                plVar25 = (longlong *)*plVar25;
                if (plVar25 != plVar7) {
                  plVar14 = (longlong *)plVar7[1];
                  *plVar14 = (longlong)plVar3;
                  puVar23 = (undefined8 *)plVar3[1];
                  *puVar23 = plVar25;
                  puVar4 = (undefined8 *)plVar25[1];
                  *puVar4 = plVar7;
                  plVar25[1] = (longlong)puVar23;
                  plVar3[1] = (longlong)plVar14;
                  plVar7[1] = (longlong)puVar4;
                }
                *(longlong **)(lVar19 + 8 + uVar30 * 0x10) = plVar7;
                pfVar6 = local_98;
                plVar7 = plVar3;
                puVar13 = local_88;
                uVar21 = local_90;
              }
              else {
LAB_1401acf86:
                if (plVar14 != plVar25) {
                  do {
                    plVar25 = (longlong *)plVar25[1];
                    plVar22 = plVar25 + 2;
                    if (0xf < (ulonglong)plVar25[5]) {
                      plVar22 = (longlong *)*plVar22;
                    }
                    if (uVar21 < 0x10) {
                      plVar17 = plVar7 + 2;
                    }
                    else {
                      plVar17 = (longlong *)plVar7[2];
                    }
                    if (uVar29 == plVar25[4]) {
                      if ((uVar29 == 0) || (iVar9 = memcmp(plVar17,plVar22,uVar29), iVar9 == 0)) {
                        lVar19 = *plVar25;
                        plVar14 = (longlong *)plVar7[1];
                        *plVar14 = (longlong)plVar3;
                        plVar22 = (longlong *)plVar3[1];
                        *plVar22 = lVar19;
                        puVar23 = *(undefined8 **)(lVar19 + 8);
                        *puVar23 = plVar7;
                        *(longlong **)(lVar19 + 8) = plVar22;
                        plVar3[1] = (longlong)plVar14;
                        plVar7[1] = (longlong)puVar23;
                        pfVar6 = local_98;
                        plVar7 = plVar3;
                        puVar13 = local_88;
                        uVar21 = local_90;
                        goto joined_r0x0001401ace8a;
                      }
                      plVar14 = *(longlong **)(lVar19 + uVar30 * 0x10);
                      uVar21 = plVar7[5];
                    }
                  } while (plVar14 != plVar25);
                }
                plVar14 = (longlong *)plVar7[1];
                *plVar14 = (longlong)plVar3;
                puVar23 = (undefined8 *)plVar3[1];
                *puVar23 = plVar25;
                puVar4 = (undefined8 *)plVar25[1];
                *puVar4 = plVar7;
                plVar25[1] = (longlong)puVar23;
                plVar3[1] = (longlong)plVar14;
                plVar7[1] = (longlong)puVar4;
                *(longlong **)(lVar19 + uVar30 * 0x10) = plVar7;
                pfVar6 = local_98;
                plVar7 = plVar3;
                puVar13 = local_88;
                uVar21 = local_90;
              }
            }
            goto joined_r0x0001401ace8a;
          }
          local_80 = 0;
          FUN_14003a070(&local_80);
          puVar26 = *(ulonglong **)
                     (*(longlong *)pfVar6 + 8 + (uVar21 & *(ulonglong *)(param_3 + 0xc)) * 0x10);
          local_70 = *(ulonglong **)(param_3 + 2);
          if (puVar26 != *(ulonglong **)(param_3 + 2)) {
            uVar29 = puVar13[5];
            sVar10 = puVar13[4];
            puVar24 = *(ulonglong **)
                       (*(longlong *)pfVar6 + (uVar21 & *(ulonglong *)(param_3 + 0xc)) * 0x10);
            while( true ) {
              _Buf2 = puVar26 + 2;
              if (0xf < puVar26[5]) {
                _Buf2 = (ulonglong *)*_Buf2;
              }
              _Buf1 = puVar16;
              if (0xf < uVar29) {
                _Buf1 = (ulonglong *)*puVar16;
              }
              if ((sVar10 == puVar26[4]) &&
                 ((sVar10 == 0 || (iVar9 = memcmp(_Buf1,_Buf2,sVar10), iVar9 == 0)))) break;
              local_70 = puVar26;
              if (puVar26 == puVar24) goto LAB_1401ad0f7;
              puVar26 = (ulonglong *)puVar26[1];
            }
            local_70 = (ulonglong *)*puVar26;
          }
        }
LAB_1401ad0f7:
        puVar16 = (ulonglong *)local_70[1];
        *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 4) + 1;
        *puVar13 = (ulonglong)local_70;
        puVar13[1] = (ulonglong)puVar16;
        *puVar16 = (ulonglong)puVar13;
        local_70[1] = (ulonglong)puVar13;
        lVar19 = *(longlong *)(param_3 + 6);
        uVar29 = *(ulonglong *)(param_3 + 0xc) & uVar21;
        puVar24 = *(ulonglong **)(lVar19 + uVar29 * 0x10);
        if (puVar24 == *(ulonglong **)(param_3 + 2)) {
          *(ulonglong **)(lVar19 + uVar29 * 0x10) = puVar13;
LAB_1401ad13d:
          *(ulonglong **)(lVar19 + 8 + uVar29 * 0x10) = puVar13;
        }
        else if (puVar24 == local_70) {
          *(ulonglong **)(lVar19 + uVar29 * 0x10) = puVar13;
        }
        else if (*(ulonglong **)(lVar19 + 8 + uVar29 * 0x10) == puVar16) goto LAB_1401ad13d;
      }
      puVar13[6] = (ulonglong)plVar11;
      param_6 = plVar11;
      if (uStack_48 < 0x10) goto LAB_1401ad18e;
      uVar29 = uStack_48 + 1;
      pppppppuVar18 = local_60;
      if (uVar29 < 0x1000) {
LAB_1401ad189:
        thunk_FUN_14028af80(pppppppuVar18,uVar29);
        goto LAB_1401ad18e;
      }
      pppppppuVar18 = (undefined8 *******)local_60[-1];
      if ((ulonglong)((longlong)local_60 + (-8 - (longlong)pppppppuVar18)) < 0x20) {
        uVar29 = uStack_48 + 0x28;
        goto LAB_1401ad189;
      }
LAB_1401ad3a9:
      lVar19 = 5;
      pcVar5 = (code *)swi(0x29);
      (*pcVar5)(5);
      puVar27 = auStack_c0;
LAB_1401ad3b3:
      *(undefined8 *)(puVar27 + -8) = 0x1401ad3bb;
      thunk_FUN_14028af80(lVar19);
    }
    else {
      *(int *)(puVar26[6] + 0xc) = *(int *)(puVar26[6] + 0xc) + 1;
      param_6 = (longlong *)puVar26[6];
LAB_1401ad18e:
      local_a8 = &local_78;
      iVar9 = FUN_1402f24e0(param_1,*param_6,(int)param_6[1],0);
      if (iVar9 != 0) {
        *(int *)((longlong)param_6 + 0xc) = *(int *)((longlong)param_6 + 0xc) + -1;
        goto LAB_1401acc3c;
      }
      FUN_1402f4b80(local_78,0x756e6963);
      local_a8 = (ulonglong *)CONCAT44(local_a8._4_4_,300);
      FUN_1402f4dd0(local_78,0,(int)(param_5 * DAT_1404928e4),300);
      uVar29 = FUN_140416c70(local_78,0);
      puVar23 = *(undefined8 **)(param_4 + 2);
      if (puVar23 != *(undefined8 **)(param_4 + 4)) {
        *puVar23 = param_6;
        puVar23[1] = local_78;
        puVar23[2] = uVar29;
        *(longlong *)(param_4 + 2) = *(longlong *)(param_4 + 2) + 0x18;
        return 1;
      }
      lVar19 = (longlong)puVar23 - *(longlong *)param_4;
      lVar19 = lVar19 / 6 + (lVar19 >> 0x3f);
      lVar19 = (lVar19 >> 2) - (lVar19 >> 0x3f);
      if (lVar19 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar28 = ((longlong)*(undefined8 **)(param_4 + 4) - *(longlong *)param_4 >> 3) *
               -0x5555555555555555;
      uVar21 = 0xaaaaaaaaaaaaaaa - (uVar28 >> 1);
      if (uVar21 <= uVar28 && uVar28 - uVar21 != 0) {
LAB_1401ad3e0:
                    /* WARNING: Subroutine does not return */
        FUN_140017370();
      }
      uVar28 = (uVar28 >> 1) + uVar28;
      uVar21 = lVar19 + 1;
      uVar30 = uVar21;
      if (uVar21 <= uVar28) {
        uVar30 = uVar28;
      }
      if (0xaaaaaaaaaaaaaaa < uVar30) goto LAB_1401ad3e0;
      puVar13 = (ulonglong *)(uVar30 * 0x18);
      param_3 = param_4;
      if (puVar13 == (ulonglong *)0x0) {
        puVar26 = (ulonglong *)0x0;
      }
      else if (puVar13 < (ulonglong *)0x1000) {
        puVar26 = (ulonglong *)FUN_14028af20(puVar13);
      }
      else {
        if ((ulonglong *)((longlong)puVar13 + 0x27U) <= puVar13) goto LAB_1401ad3e0;
        uVar28 = FUN_14028af20();
        if (uVar28 == 0) goto LAB_1401ad3a9;
        puVar26 = (ulonglong *)(uVar28 + 0x27 & 0xffffffffffffffe0);
        puVar26[-1] = uVar28;
      }
      puVar26[lVar19 * 3] = (ulonglong)param_6;
      puVar26[lVar19 * 3 + 1] = local_78;
      puVar26[lVar19 * 3 + 2] = uVar29;
      puVar4 = *(undefined8 **)param_4;
      if (puVar23 == *(undefined8 **)(param_4 + 2)) {
        lVar19 = (longlong)*(undefined8 **)(param_4 + 2) - (longlong)puVar4;
        puVar16 = puVar26;
        puVar23 = puVar4;
      }
      else {
        FUN_1404210f0(puVar26,puVar4,(longlong)puVar23 - (longlong)puVar4);
        puVar16 = puVar26 + lVar19 * 3 + 3;
        lVar19 = *(longlong *)(param_4 + 2) - (longlong)puVar23;
      }
      FUN_1404210f0(puVar16,puVar23,lVar19);
      lVar19 = *(longlong *)param_4;
      if (lVar19 != 0) {
        if ((0xfff < (ulonglong)((*(longlong *)(param_4 + 4) - lVar19 >> 3) * 8)) &&
           (lVar20 = lVar19 - *(longlong *)(lVar19 + -8), lVar19 = *(longlong *)(lVar19 + -8),
           puVar27 = auStack_c8, 0x1f < lVar20 - 8U)) goto LAB_1401ad3a9;
        goto LAB_1401ad3b3;
      }
    }
    *(ulonglong **)param_3 = puVar26;
    *(ulonglong **)(param_3 + 2) = puVar26 + uVar21 * 3;
    *(longlong *)(param_3 + 4) = (longlong)puVar13 + (longlong)puVar26;
    uVar12 = 1;
  }
  return uVar12;
}

