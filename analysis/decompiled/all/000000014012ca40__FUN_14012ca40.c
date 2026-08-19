// Function: FUN_14012ca40
// Addr: 14012ca40
// Size: 3682 bytes


ulonglong FUN_14012ca40(void)

{
  ulonglong uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  short ****ppppsVar11;
  short *****pppppsVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 *****pppppuVar17;
  short ****ppppsVar18;
  ulonglong uVar19;
  short ****ppppsVar20;
  short *psVar21;
  uint uVar22;
  ulonglong uVar23;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined4 *local_res20;
  undefined1 *puVar24;
  undefined4 uVar25;
  undefined8 ****local_578;
  undefined8 uStack_570;
  ulonglong local_568;
  ulonglong local_560;
  short ****local_558;
  short ****local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  ulonglong uStack_538;
  short ***local_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  short ***local_510;
  ulonglong local_508;
  short ****local_4e0;
  short ***pppsStack_4d8;
  short ***local_4d0;
  short ***local_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  short ****local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  ulonglong local_488;
  float local_478;
  uint local_468 [2];
  short ****local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  ulonglong uStack_448;
  undefined4 local_440;
  undefined4 local_43c;
  undefined8 local_438;
  undefined4 local_430;
  uint local_42c;
  short ***local_428;
  short ***pppsStack_420;
  longlong local_418;
  short *local_410;
  short ****local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  ulonglong uStack_3f0;
  undefined1 local_3e8 [16];
  undefined4 local_3d8;
  undefined4 local_3d4;
  short **local_3d0;
  undefined4 local_3c8;
  short local_3c4 [38];
  undefined1 local_378 [8];
  longlong local_370;
  longlong local_360;
  ulonglong local_348;
  undefined4 local_338;
  undefined4 local_334;
  short **local_330;
  undefined4 local_328;
  undefined2 local_324 [134];
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_208;
  undefined2 local_1f4 [64];
  short local_174 [154];
  
  puVar15 = (undefined4 *)0x0;
  local_408 = &local_428;
  local_res20 = (undefined4 *)0x0;
  local_418 = 0;
  uStack_400 = 0;
  local_428 = (short ***)0x0;
  pppsStack_420 = (short ***)0x0;
  FUN_14012bfa0(&local_408);
  local_510 = pppsStack_420;
  puVar4 = puVar15;
  for (ppppsVar11 = (short ****)local_428; ppppsVar11 != (short ****)pppsStack_420;
      ppppsVar11 = ppppsVar11 + 0x11) {
    uVar25 = *(undefined4 *)ppppsVar11;
    uVar10 = CONCAT44((int)((ulonglong)ppppsVar11[1] >> 0x20) +
                      (int)((ulonglong)*ppppsVar11 >> 0x20),(int)ppppsVar11[1] + (int)*ppppsVar11);
    uVar2 = *(undefined4 *)((longlong)ppppsVar11 + 4);
    if (puVar15 == (undefined4 *)0x0) {
      uVar19 = -(longlong)local_res20;
      if ((longlong)uVar19 >> 4 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_140133e40();
      }
      local_508 = -(longlong)local_res20 >> 4;
      if (local_508 <= 0xfffffffffffffff - (local_508 >> 1)) {
        uVar23 = ((longlong)uVar19 >> 4) + 1;
        uVar1 = (local_508 >> 1) + local_508;
        if (uVar23 <= uVar1) {
          uVar23 = uVar1;
        }
        if (uVar23 < 0x1000000000000000) {
          uVar23 = uVar23 * 0x10;
          if (uVar23 == 0) {
            puVar15 = (undefined4 *)(uVar19 & 0xfffffffffffffff0);
            *puVar15 = uVar25;
            puVar15[1] = uVar2;
            *(undefined8 *)(puVar15 + 2) = uVar10;
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(0,local_res20,uVar19);
          }
          if (uVar23 < 0x1000) {
            uVar19 = func_0x00014028aff0(uVar23);
            return uVar19;
          }
          if (uVar23 < uVar23 + 0x27) {
            uVar19 = func_0x00014028aff0();
            return uVar19;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_140017440();
    }
    puVar15[1] = uVar2;
    *puVar15 = uVar25;
    *(undefined8 *)(puVar15 + 2) = uVar10;
    puVar15 = puVar15 + 4;
    puVar4 = local_res20;
  }
  uVar22 = 0;
  if ((short ****)local_428 != (short ****)0x0) {
    if (local_428 != pppsStack_420) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(local_428 + 0xb);
    }
    uVar19 = (local_418 - (longlong)local_428 >> 3) * 8;
    ppppsVar11 = (short ****)local_428;
    if (0xfff < uVar19) {
      ppppsVar11 = (short ****)pppsStack_420;
      if (0x1f < (ulonglong)((longlong)local_428 + (-8 - (longlong)local_428[-1]))) {
UNWIND_INFO_14012df47_UnwindCodes_38__UnwindOpCode:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        func_0x00014028b040(puVar4,0);
        return (ulonglong)ppppsVar11 & 0xff;
      }
      uVar19 = uVar19 + 0x27;
      ppppsVar11 = (short ****)local_428[-1];
    }
    uVar19 = func_0x00014028b040(ppppsVar11,uVar19);
    return uVar19;
  }
  local_res18[0] = 0;
  local_res10[0] = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e9400) &&
     (FUN_14028b210(&DAT_1404e9400), DAT_1404e9400 == -1)) {
    FUN_140015250(10,0,0);
    FUN_14028b1a0(&DAT_1404e9400);
  }
  uVar19 = 2;
  iVar7 = (*DAT_140426878)(2,local_res18,local_res10);
  if (iVar7 == 0x57) {
    uVar19 = 4;
    iVar7 = (*DAT_140426878)(4,local_res18,local_res10);
  }
  if (iVar7 != 0) {
    if (DAT_1404e5388 == 2) {
      FUN_140098bd0("QDC GetDisplayConfigBufferSizes failed: %i\n",iVar7);
    }
    local_res18[0] = 0x10;
    local_res10[0] = 0x10;
  }
  uVar8 = local_res18[0] + 0x10;
  local_res18[0] = 1;
  if (1 < uVar8) {
    local_res18[0] = uVar8;
  }
  uVar8 = local_res10[0] + 0x10;
  local_res10[0] = 1;
  if (1 < uVar8) {
    local_res10[0] = uVar8;
  }
  uVar10 = SUB168(ZEXT816(0x48) * ZEXT416(local_res18[0]),0);
  if (SUB168(ZEXT816(0x48) * ZEXT416(local_res18[0]),8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  ppppsVar11 = (short ****)FUN_14028b190(uVar10);
  uVar10 = SUB168(ZEXT816(0x40) * ZEXT416(local_res10[0]),0);
  if (SUB168(ZEXT816(0x40) * ZEXT416(local_res10[0]),8) != 0) {
    uVar10 = 0xffffffffffffffff;
  }
  local_530 = (short ***)ppppsVar11;
  pppppsVar12 = (short *****)FUN_14028b190(uVar10);
  if ((uVar19 & 4) == 0) {
    puVar24 = (undefined1 *)0x0;
  }
  else {
    puVar24 = local_3e8;
  }
  local_558 = (short ****)pppppsVar12;
  iVar7 = (*DAT_140426870)(uVar19,local_res18,ppppsVar11,local_res10,pppppsVar12,puVar24);
  if (iVar7 != 0) {
    if (DAT_1404e5388 == 2) {
      FUN_140098bd0("QDC failed: %i\n",iVar7);
    }
    uVar19 = func_0x00014028b040(ppppsVar11);
    return uVar19;
  }
  if (DAT_1404e5388 == 2) {
    pppppsVar12 = (short *****)(ulonglong)DAT_1404df664;
    FUN_140098bd0("QDC paths %i, modes %i, query %u, method %i\n",local_res18[0],local_res10[0],
                  uVar19,pppppsVar12);
  }
  FUN_140049470(local_378);
  dVar6 = DAT_140492920;
  dVar5 = DAT_140492908;
  local_518 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_508 = 0xf;
  if (local_res18[0] != 0) {
    local_res20 = (undefined4 *)((ulonglong)local_res20 & 0xffffffff00000000);
    do {
      lVar13 = (longlong)(int)uVar22;
      if ((*(byte *)((longlong)ppppsVar11 + (lVar13 * 0x24 + 0x22) * 2) & 1) == 0) {
        if (DAT_1404e5388 == 2) {
          FUN_140098bd0("QDC path %i inactive\n",uVar22);
        }
LAB_14012cefa:
      }
      else {
        local_3d0 = (short **)ppppsVar11[lVar13 * 9];
        local_3c8 = *(undefined4 *)(ppppsVar11 + lVar13 * 9 + 1);
        local_3c4[0] = 0;
        local_3d4 = 0x54;
        local_3d8 = 1;
        iVar7 = (*DAT_140426868)(&local_3d8);
        if (iVar7 == 0) {
          DAT_1404e8ec8 = DAT_1404e8ec8 | 4;
        }
        else {
          local_3c4[0] = 0;
          if (DAT_1404e5388 == 2) {
            FUN_140098bd0("QDC path %i sourceDeviceName failed with %i\n",uVar22,iVar7);
          }
          if ((DAT_1404e8ec8 & 4) != 0) {
            DAT_1404e8ec8 = DAT_1404e8ec8 | 8;
          }
        }
        local_210 = *(undefined8 *)((longlong)ppppsVar11 + (lVar13 * 0x24 + 10) * 2);
        local_208 = *(undefined4 *)((longlong)ppppsVar11 + (lVar13 * 0x24 + 0xe) * 2);
        local_174[0] = 0;
        local_1f4[0] = 0;
        local_214 = 0x1a4;
        local_218 = 2;
        iVar7 = (*DAT_140426868)(&local_218);
        if (iVar7 == 0) {
          DAT_1404e8ec8 = DAT_1404e8ec8 | 1;
        }
        else {
          local_174[0] = 0;
          local_1f4[0] = 0;
          if (DAT_1404e5388 == 2) {
            FUN_140098bd0("QDC path %i deviceName failed with %i\n",uVar22,iVar7);
          }
          if ((DAT_1404e8ec8 & 1) != 0) {
            DAT_1404e8ec8 = DAT_1404e8ec8 | 2;
          }
        }
        local_330 = (short **)ppppsVar11[lVar13 * 9];
        local_334 = 0x114;
        local_338 = 4;
        local_328 = 0;
        iVar7 = (*DAT_140426868)();
        if (iVar7 == 0) {
LAB_14012d173:
          if (DAT_1404e5388 == 2) {
            puVar24 = (undefined1 *)
                      CONCAT44((int)((ulonglong)puVar24 >> 0x20),
                               *(undefined4 *)((longlong)ppppsVar11 + (lVar13 * 0x24 + 6) * 2));
            pppppsVar12 = (short *****)local_324;
            FUN_140098bd0("QDC Monitor path %i. Source name %S, target name %S, adapter name %S. Source mode %u / %u, target mode %u\n"
                          ,uVar22,local_3c4,local_174,pppppsVar12,puVar24,
                          *(undefined2 *)((longlong)ppppsVar11 + (lVar13 * 0x24 + 7) * 2),
                          *(undefined4 *)(ppppsVar11 + lVar13 * 9 + 4));
          }
        }
        else {
          local_324[0] = 0;
          if (DAT_1404e5388 == 2) {
            FUN_140098bd0("QDC path %i adapterName failed with %i\n",uVar22,iVar7);
            goto LAB_14012d173;
          }
        }
        if ((*(int *)(ppppsVar11 + lVar13 * 9 + 4) == 0xffff) && (DAT_1404e5388 == 2)) {
          FUN_140098bd0("QDC path %i targetInfo.modeInfoIdx invalid\n",uVar22);
        }
        uVar8 = *(uint *)((longlong)ppppsVar11 + (lVar13 * 0x24 + 6) * 2);
        uVar19 = (ulonglong)uVar8;
        if (uVar8 != 0xffffffff) {
          if (local_res10[0] <= uVar8) {
            if (DAT_1404e5388 == 2) {
              FUN_140098bd0("QDC path %i sourceModeIndex %u invalid (virtual mode %i)\n",uVar22,
                            uVar8,0,pppppsVar12,puVar24);
            }
            goto LAB_14012cefa;
          }
          ppppsVar11 = (short ****)(uVar19 * 0x40);
          local_410 = (short *)((longlong)local_558 + uVar19 * 0x40 + 0x1c);
          local_408 = local_558 + uVar19 * 8 + 4;
          uVar9 = (uint)*(short *)local_408;
          local_468[0] = (int)*local_410 << 0x10 | uVar9;
          uVar19 = local_348 &
                   (((((ulonglong)(uVar9 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)((uVar9 & 0xff00) >> 8)) * 0x100000001b3 ^
                    (ulonglong)(local_468[0] >> 0x10 & 0xff)) * 0x100000001b3 ^
                   (ulonglong)(local_468[0] >> 0x18)) * 0x100000001b3;
          lVar16 = *(longlong *)(local_360 + 8 + uVar19 * 0x10);
          if (lVar16 == local_370) {
LAB_14012d4c7:
            lVar16 = 0;
          }
          else {
            uVar9 = *(uint *)(lVar16 + 0x10);
            while (local_468[0] != uVar9) {
              if (lVar16 == *(longlong *)(local_360 + uVar19 * 0x10)) goto LAB_14012d4c7;
              lVar16 = *(longlong *)(lVar16 + 8);
              uVar9 = *(uint *)(lVar16 + 0x10);
            }
          }
          if ((lVar16 != 0) && (lVar16 != local_370)) {
            if (DAT_1404e5388 == 2) {
              puVar24 = (undefined1 *)0x0;
              pppppsVar12 = (short *****)(ulonglong)*(uint *)local_408;
              FUN_140098bd0("QDC path %i is a cloned source (source index %i, x %i, y %i (virtual mode %i)\n"
                            ,uVar22,uVar8,*(undefined4 *)local_410,pppppsVar12,0);
            }
            ppppsVar11 = (short ****)local_530;
            goto LAB_14012cefd;
          }
          FUN_140130bf0(local_378,&local_428,local_468);
          uVar10 = 0;
          local_440 = 0xb;
          local_42c = 0;
          pppsStack_4d8 = (short ***)0x0;
          local_4d0 = (short ***)0x0;
          local_4c8 = (short ***)0xf;
          local_4e0 = (short ****)0x0;
          uStack_4b8 = 0;
          local_4b0 = 0;
          local_4a8 = 0xf;
          local_4c0 = 0;
          uStack_498 = 0;
          local_438 = *(undefined8 *)((longlong)local_530 + (lVar13 * 0x24 + 10) * 2);
          local_430 = *(undefined4 *)((longlong)local_530 + (lVar13 * 0x24 + 0xe) * 2);
          local_490 = 0;
          local_488 = 0xf;
          local_4a0 = (short ****)0x0;
          local_478 = 0.0;
          local_43c = 0x18;
          iVar7 = (*DAT_140426868)(&local_440);
          if (iVar7 == 0) {
            local_478 = (float)(((double)local_42c * dVar5) / dVar6);
          }
          local_568 = 0;
          local_560 = 0;
          local_578 = (undefined8 *****)0x0;
          uStack_570 = 0;
          uVar14 = FUN_1402d6b70(local_1f4);
          FUN_140016240(&local_578,local_1f4,uVar14);
          if (local_568 == 0) {
LAB_14012d6bf:
            uVar19 = 0xf;
            uStack_458 = 0;
            local_460 = (short ****)0x0;
          }
          else {
            pppppuVar17 = &local_578;
            if (7 < local_560) {
              pppppuVar17 = (undefined8 *****)local_578;
            }
            puVar24 = (undefined1 *)((ulonglong)puVar24 & 0xffffffff00000000);
            iVar7 = (*DAT_140426608)(0xfde9,0,pppppuVar17,local_568,0,puVar24,0,0);
            uVar25 = (undefined4)((ulonglong)puVar24 >> 0x20);
            if (iVar7 < 1) goto LAB_14012d6bf;
            FUN_140016a10(&local_550,(longlong)iVar7,0);
            pppppsVar12 = &local_550;
            if (0xf < uStack_538) {
              pppppsVar12 = (short *****)local_550;
            }
            pppppuVar17 = &local_578;
            if (7 < local_560) {
              pppppuVar17 = (undefined8 *****)local_578;
            }
            puVar24 = (undefined1 *)CONCAT44(uVar25,iVar7);
            (*DAT_140426608)(0xfde9,0,pppppuVar17,local_568 & 0xffffffff,pppppsVar12,puVar24,0,0);
            local_460 = local_550;
            uStack_458 = uStack_548;
            uVar19 = uStack_538;
            uVar10 = local_540;
          }
          if (0xf < local_488) {
            uVar19 = local_488 + 1;
            pppppsVar12 = (short *****)local_4a0;
            if (0xfff < uVar19) {
              pppppsVar12 = (short *****)local_4a0[-1];
              if (0x1f < (ulonglong)((longlong)local_4a0 + (-8 - (longlong)pppppsVar12)))
              goto UNWIND_INFO_14012df47_UnwindCodes_38__UnwindOpCode;
              uVar19 = local_488 + 0x28;
            }
            uVar19 = func_0x00014028b040(pppppsVar12,uVar19);
            return uVar19;
          }
          local_4a0 = local_460;
          uStack_498 = uStack_458;
          local_490 = uVar10;
          local_488 = uVar19;
          if (7 < local_560) {
            uVar19 = local_560 * 2 + 2;
            pppppuVar17 = (undefined8 *****)local_578;
            if (0xfff < uVar19) {
              pppppuVar17 = (undefined8 *****)local_578[-1];
              if (0x1f < (ulonglong)((longlong)local_578 + (-8 - (longlong)pppppuVar17)))
              goto UNWIND_INFO_14012df47_UnwindCodes_38__UnwindOpCode;
              uVar19 = local_560 * 2 + 0x29;
            }
            uVar19 = func_0x00014028b040(pppppuVar17,uVar19);
            return uVar19;
          }
          local_578 = (undefined8 *****)0x0;
          uStack_570 = 0;
          if (DAT_1404df664 == 5) {
            psVar21 = local_3c4;
            if (local_3c4[0] == 0) {
              psVar21 = local_174;
            }
            local_568 = 0;
            local_560 = 0;
            uVar10 = FUN_1402d6b70(psVar21);
            FUN_140016240(&local_578,psVar21,uVar10);
            pppppsVar12 = (short *****)FUN_140005860(&local_550,&local_578);
            if (&local_4e0 != pppppsVar12) {
              if ((short ****)0xf < local_4c8) {
                ppppsVar20 = (short ****)((longlong)local_4c8 + 1);
                ppppsVar18 = local_4e0;
                if ((short ****)0xfff < ppppsVar20) {
                  ppppsVar18 = (short ****)local_4e0[-1];
                  if (0x1f < (ulonglong)((longlong)local_4e0 + (-8 - (longlong)ppppsVar18)))
                  goto UNWIND_INFO_14012df47_UnwindCodes_38__UnwindOpCode;
                  ppppsVar20 = (short ****)(local_4c8 + 5);
                }
                uVar19 = func_0x00014028b040(ppppsVar18,ppppsVar20);
                return uVar19;
              }
              local_4e0 = *pppppsVar12;
              pppsStack_4d8 = (short ***)pppppsVar12[1];
              local_4d0 = (short ***)pppppsVar12[2];
              local_4c8 = (short ***)pppppsVar12[3];
              pppppsVar12[2] = (short ****)0x0;
              pppppsVar12[3] = (short ****)0xf;
              *(undefined1 *)pppppsVar12 = 0;
            }
            if (uStack_538 < 0x10) {
              local_540 = 0;
              uStack_538 = 0xf;
              local_550 = (short ****)((ulonglong)local_550 & 0xffffffffffffff00);
                    /* WARNING: Subroutine does not return */
              FUN_140016840(&local_578);
            }
            uVar19 = uStack_538 + 1;
            pppppsVar12 = (short *****)local_550;
            if (0xfff < uVar19) {
              pppppsVar12 = (short *****)local_550[-1];
              if (0x1f < (ulonglong)((longlong)local_550 + (-8 - (longlong)pppppsVar12)))
              goto UNWIND_INFO_14012df47_UnwindCodes_38__UnwindOpCode;
              uVar19 = uStack_538 + 0x28;
            }
            uVar19 = func_0x00014028b040(pppppsVar12,uVar19);
            return uVar19;
          }
          psVar21 = local_174;
          if (local_174[0] == 0) {
            psVar21 = local_3c4;
          }
          uVar10 = 0;
          local_568 = 0;
          local_560 = 0;
          uVar14 = FUN_1402d6b70(psVar21);
          FUN_140016240(&local_578,psVar21,uVar14);
          if (local_568 == 0) {
LAB_14012d9ae:
            uStack_448 = 0xf;
            uStack_548 = 0;
            local_550 = (short ****)0x0;
          }
          else {
            pppppuVar17 = &local_578;
            if (7 < local_560) {
              pppppuVar17 = (undefined8 *****)local_578;
            }
            uVar19 = (ulonglong)puVar24 & 0xffffffff00000000;
            iVar7 = (*DAT_140426608)(0xfde9,0,pppppuVar17,local_568,0,uVar19,0,0);
            uVar25 = (undefined4)(uVar19 >> 0x20);
            if (iVar7 < 1) goto LAB_14012d9ae;
            FUN_140016a10(&local_460,(longlong)iVar7,0);
            pppppsVar12 = &local_460;
            if (0xf < uStack_448) {
              pppppsVar12 = (short *****)local_460;
            }
            pppppuVar17 = &local_578;
            if (7 < local_560) {
              pppppuVar17 = (undefined8 *****)local_578;
            }
            (*DAT_140426608)(0xfde9,0,pppppuVar17,local_568 & 0xffffffff,pppppsVar12,
                             CONCAT44(uVar25,iVar7),0,0);
            local_540 = local_450;
            uStack_538 = uStack_448;
            local_550 = local_460;
            uStack_548 = uStack_458;
            uVar10 = local_450;
          }
          if (local_4c8 < (short ****)0x10) {
            local_4e0 = local_550;
            pppsStack_4d8 = (short ***)uStack_548;
            local_540 = 0;
            uStack_538 = 0xf;
            local_550 = (short ****)((ulonglong)local_550 & 0xffffffffffffff00);
            local_4d0 = (short ***)uVar10;
            local_4c8 = (short ***)uStack_448;
                    /* WARNING: Subroutine does not return */
            FUN_140017310(&local_550);
          }
          ppppsVar20 = (short ****)((longlong)local_4c8 + 1);
          ppppsVar18 = local_4e0;
          if ((short ****)0xfff < ppppsVar20) {
            ppppsVar18 = (short ****)local_4e0[-1];
            if (0x1f < (ulonglong)((longlong)local_4e0 + (-8 - (longlong)ppppsVar18)))
            goto UNWIND_INFO_14012df47_UnwindCodes_38__UnwindOpCode;
            ppppsVar20 = (short ****)(local_4c8 + 5);
          }
          uVar19 = func_0x00014028b040(ppppsVar18,ppppsVar20);
          return uVar19;
        }
        if (DAT_1404e5388 == 2) {
          FUN_140098bd0("QDC path %i modeInfoIdx && sourceModeInfoIdx invalid (virtual mode %i)\n",
                        uVar22,0);
        }
        if (local_3c4[0] != 0) {
          local_568 = 0;
          local_560 = 0;
          local_578 = (undefined8 *****)0x0;
          uStack_570 = 0;
          uVar10 = FUN_1402d6b70(local_3c4);
          FUN_140016240(&local_578,local_3c4,uVar10);
          if (local_568 == 0) {
LAB_14012d31b:
            local_540 = 0;
            uStack_548 = 0;
            local_550 = (short ****)0x0;
            uStack_538 = 0xf;
          }
          else {
            pppppuVar17 = &local_578;
            if (7 < local_560) {
              pppppuVar17 = (undefined8 *****)local_578;
            }
            puVar24 = (undefined1 *)((ulonglong)puVar24 & 0xffffffff00000000);
            pppppsVar12 = (short *****)0x0;
            iVar7 = (*DAT_140426608)(0xfde9,0,pppppuVar17);
            if (iVar7 < 1) goto LAB_14012d31b;
            FUN_140016a10(&local_408,(longlong)iVar7,0);
            pppppsVar12 = &local_408;
            if (0xf < uStack_3f0) {
              pppppsVar12 = (short *****)local_408;
            }
            pppppuVar17 = &local_578;
            if (7 < local_560) {
              pppppuVar17 = (undefined8 *****)local_578;
            }
            puVar24 = (undefined1 *)CONCAT44((int)((ulonglong)puVar24 >> 0x20),iVar7);
            (*DAT_140426608)(0xfde9,0,pppppuVar17);
            local_550 = local_408;
            uStack_548 = uStack_400;
            local_540 = local_3f8;
            uStack_538 = uStack_3f0;
          }
          FUN_140030540(&local_528,&local_550);
          if (0xf < uStack_538) {
            uVar19 = uStack_538 + 1;
            pppppsVar12 = (short *****)local_550;
            if (0xfff < uVar19) {
              pppppsVar12 = (short *****)local_550[-1];
              if (0x1f < (ulonglong)((longlong)local_550 + (-8 - (longlong)pppppsVar12)))
              goto UNWIND_INFO_14012df47_UnwindCodes_38__UnwindOpCode;
              uVar19 = uStack_538 + 0x28;
            }
            uVar19 = func_0x00014028b040(pppppsVar12,uVar19);
            return uVar19;
          }
          if (7 < local_560) {
            uVar19 = local_560 * 2 + 2;
            pppppuVar17 = (undefined8 *****)local_578;
            if (0xfff < uVar19) {
              pppppuVar17 = (undefined8 *****)local_578[-1];
              if (0x1f < (ulonglong)((longlong)local_578 + (-8 - (longlong)pppppuVar17)))
              goto UNWIND_INFO_14012df47_UnwindCodes_38__UnwindOpCode;
              uVar19 = local_560 * 2 + 0x29;
            }
            uVar19 = func_0x00014028b040(pppppuVar17,uVar19);
            return uVar19;
          }
        }
      }
LAB_14012cefd:
      uVar22 = uVar22 + 1;
      local_res20 = (undefined4 *)CONCAT44(local_res20._4_4_,uVar22);
    } while (uVar22 < local_res18[0]);
  }
  uVar19 = func_0x00014028b040(ppppsVar11);
  return uVar19;
}

