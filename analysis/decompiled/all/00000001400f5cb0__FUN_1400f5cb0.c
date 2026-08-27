// Function: FUN_1400f5cb0
// Addr: 1400f5cb0
// Size: 10188 bytes


void FUN_1400f5cb0(undefined8 param_1,longlong *param_2,int param_3,longlong param_4,
                  undefined8 *param_5,longlong *param_6)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 ******ppppppuVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  size_t sVar20;
  int *piVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *puVar23;
  byte bVar24;
  uint uVar25;
  undefined8 *******pppppppuVar26;
  longlong *plVar27;
  ulonglong uVar28;
  char *pcVar29;
  char *pcVar30;
  undefined7 *puVar31;
  uint uVar32;
  longlong lVar33;
  undefined1 *puVar34;
  longlong lVar35;
  undefined *puVar36;
  longlong lVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  bool bVar40;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar41;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  uint local_res18;
  ulonglong local_res20;
  undefined1 auStack_598 [8];
  undefined1 auStack_590 [24];
  ulonglong local_578;
  undefined7 local_568;
  undefined4 uStack_561;
  char cStack_55d;
  undefined4 uStack_55c;
  undefined8 local_558;
  ulonglong local_550;
  undefined8 ******local_548;
  undefined8 uStack_540;
  longlong local_538;
  ulonglong local_530;
  undefined8 ******local_528;
  ulonglong uStack_520;
  undefined8 local_518;
  ulonglong local_510;
  undefined8 ******local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  ulonglong local_4f0;
  undefined8 ******local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  ulonglong local_4d0;
  longlong *local_4c8;
  uint uStack_4c0;
  undefined4 uStack_4bc;
  longlong *local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  longlong lStack_4a0;
  longlong local_498;
  ulonglong local_490;
  undefined8 ******local_488;
  undefined8 local_480;
  ulonglong uStack_478;
  ulonglong local_470;
  longlong local_468;
  longlong lStack_460;
  undefined8 local_458;
  undefined8 ******local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  ulonglong local_438;
  undefined1 local_430;
  undefined7 uStack_42f;
  undefined8 local_420;
  ulonglong local_418;
  longlong local_410;
  longlong lStack_408;
  undefined8 local_400;
  undefined8 ******local_3f8;
  undefined8 uStack_3f0;
  ulonglong local_3e8;
  ulonglong local_3e0;
  undefined1 local_3d8;
  undefined7 uStack_3d7;
  undefined8 local_3c8;
  ulonglong local_3c0;
  int *local_3b8;
  int *piStack_3b0;
  longlong local_3a8;
  undefined1 local_3a0;
  undefined7 uStack_39f;
  undefined8 local_390;
  ulonglong local_388;
  longlong local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  byte local_368 [13];
  undefined1 local_35b;
  undefined2 local_35a;
  undefined8 local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined7 uStack_347;
  longlong local_338;
  ulonglong local_330;
  undefined1 local_328 [16];
  undefined1 local_318 [240];
  undefined1 local_228 [16];
  undefined1 local_218 [240];
  undefined1 local_128 [240];
  
  puVar34 = auStack_598;
  local_3a8 = 0;
  local_458 = 0;
  local_400 = 0;
  local_3b8 = (int *)0x0;
  piStack_3b0 = (int *)0x0;
  local_370 = 0;
  local_468 = 0;
  lStack_460 = 0;
  local_410 = 0;
  lStack_408 = 0;
  local_380 = 0;
  uStack_378 = 0;
  FUN_140052fb0(param_5,*(undefined8 *)(param_4 + 0x10));
  FUN_1400de740(local_128,param_4);
  FUN_140016fa0(&local_430);
  plVar10 = (longlong *)FUN_1400dca50(local_128,&local_430);
  cVar7 = FUN_1400ea570((longlong)*(int *)(*plVar10 + 4) + (longlong)plVar10);
  while (cVar7 != '\0') {
    plVar10 = (longlong *)FUN_1400170d0(&local_450,"attribute");
    local_4c8 = (longlong *)*plVar10;
    uStack_4c0 = *(uint *)(plVar10 + 1);
    uStack_4bc = *(undefined4 *)((longlong)plVar10 + 0xc);
    cVar7 = FUN_1400f8f90(&local_430,&local_4c8);
    if (cVar7 == '\0') {
      plVar10 = (longlong *)FUN_1400170d0(&local_4e8,"varying");
      local_4c8 = (longlong *)*plVar10;
      uStack_4c0 = *(uint *)(plVar10 + 1);
      uStack_4bc = *(undefined4 *)((longlong)plVar10 + 0xc);
      cVar7 = FUN_1400f8f90(&local_430,&local_4c8);
      if (cVar7 == '\0') {
        plVar10 = (longlong *)FUN_1400170d0(&local_508,&DAT_1404875c8);
        local_4c8 = (longlong *)*plVar10;
        uStack_4c0 = *(uint *)(plVar10 + 1);
        uStack_4bc = *(undefined4 *)((longlong)plVar10 + 0xc);
        cVar7 = FUN_1400f8f90(&local_430,&local_4c8);
        if (cVar7 != '\0') goto LAB_1400f5ebf;
        plVar10 = (longlong *)FUN_1400170d0(&local_528,&DAT_1404875cc);
        local_4c8 = (longlong *)*plVar10;
        uStack_4c0 = *(uint *)(plVar10 + 1);
        uStack_4bc = *(undefined4 *)((longlong)plVar10 + 0xc);
        cVar7 = FUN_1400f8f90(&local_430,&local_4c8);
        if (cVar7 != '\0') goto LAB_1400f5ebf;
        plVar10 = (longlong *)FUN_1400170d0(&local_568,"uniform");
        local_4c8 = (longlong *)*plVar10;
        uStack_4c0 = *(uint *)(plVar10 + 1);
        uStack_4bc = *(undefined4 *)((longlong)plVar10 + 0xc);
        cVar7 = FUN_1400f8f90(&local_430,&local_4c8);
        if (cVar7 == '\0') {
          FUN_140053330(param_5,&local_430);
          FUN_14007ac70(param_5,&DAT_1404736e4);
          goto LAB_1400f5f15;
        }
        FUN_1400f8520(&local_4a8);
        cVar7 = FUN_1400f4810(param_2,&local_430,&local_4a8);
        if (cVar7 != '\0') {
          plVar10 = &local_410;
          goto LAB_1400f5f03;
        }
      }
      else {
LAB_1400f5ebf:
        FUN_1400f8520(&local_4a8);
        cVar7 = FUN_1400f4810(param_2,&local_430,&local_4a8);
        lVar35 = DAT_1404e7e98;
        if (cVar7 != '\0') {
          plVar11 = (longlong *)FUN_1400f8df0(extraout_XMM0_Da,&local_res20,&lStack_4a0);
          plVar10 = &local_380;
          if (*plVar11 == lVar35) {
            plVar10 = &local_468;
          }
LAB_1400f5f03:
          FUN_1400f8620(plVar10,&local_4a8);
        }
      }
      FUN_140017240(&lStack_4a0);
    }
    else {
      cVar7 = FUN_1400f4460(&local_430,&local_4b8);
      if (cVar7 != '\0') {
        FUN_1400f85f0(&local_3b8,&local_4b8);
      }
    }
LAB_1400f5f15:
    plVar10 = (longlong *)FUN_1400dca50(local_128,&local_430);
    cVar7 = FUN_1400ea570((longlong)*(int *)(*plVar10 + 4) + (longlong)plVar10);
  }
  if (param_3 == 0) {
    uVar16 = (ulonglong)local_4a8 >> 0x20;
    local_4a8 = (undefined8 *)CONCAT44((int)uVar16,3);
    FUN_140017170(&lStack_4a0,"gl_Position");
    local_480 = 0;
    uStack_478 = 0;
    FUN_1400f8860(&local_468,&local_4a8);
    FUN_140017240(&lStack_4a0);
  }
  if (param_6 != (longlong *)0x0) {
    if (param_3 == 0) {
      plVar10 = param_6;
      param_6 = &local_468;
    }
    else {
      if (param_3 == 1) {
        lVar35 = param_6[1];
        lVar33 = *param_6;
        local_558 = 0;
        local_568 = 0;
        uStack_561 = 0;
        cStack_55d = '\0';
        uStack_55c = 0;
        for (; lVar33 != lVar35; lVar33 = lVar33 + 0x38) {
          FUN_1400f8540(&local_4a8,lVar33);
          uStack_478 = CONCAT44(uStack_478._4_4_,1);
          FUN_1400f8620(&local_568,&local_4a8);
          FUN_140017240(&lStack_4a0);
        }
        FUN_1400f8950(param_6);
        lVar33 = lStack_460;
        for (lVar35 = local_468; lVar35 != lVar33; lVar35 = lVar35 + 0x38) {
          FUN_1400f8540(&local_4a8,lVar35);
          if ((int)uStack_478 == 2) {
            FUN_1400f8620(&local_568,&local_4a8);
            uStack_478 = uStack_478 & 0xffffffff00000000;
            FUN_1400f8620(param_6,&local_4a8);
          }
          FUN_140017240(&lStack_4a0);
        }
        FUN_1400f89a0(&local_468,&local_568);
        FUN_1400f8cc0(&local_568);
        goto LAB_1400f6078;
      }
      plVar10 = &local_468;
    }
    FUN_1400f89a0(plVar10,param_6);
  }
LAB_1400f6078:
  FUN_14000ef10(local_328);
  uVar41 = FUN_14000ef10(local_228);
  lVar33 = uStack_378;
  for (lVar35 = local_380; lVar35 != lVar33; lVar35 = lVar35 + 0x38) {
    lVar12 = FUN_1400f8e70(uVar41,lVar35 + 8);
    uVar13 = FUN_14000c990(local_218,&DAT_140478a0c);
    uVar13 = FUN_14000c990(uVar13,(&PTR_s_float_140482eb8)[(longlong)*(int *)(lVar12 + 0x20) * 2]);
    uVar13 = FUN_14000c990(uVar13,&DAT_1404738a8);
    uVar13 = FUN_14000cbc0(uVar13,lVar35 + 8);
    uVar13 = FUN_14000c990(uVar13,&DAT_1404789bc);
    uVar41 = FUN_14000cbc0(uVar13,lVar12);
  }
  puVar36 = &DAT_140487c4c;
  if (param_3 == 0) {
    uVar13 = FUN_14000c990(local_318,"VS_OUTPUT main(VS_INPUT IN");
    uVar14 = FUN_14000ee70(local_228,&local_568);
    uVar13 = FUN_14000cbc0(uVar13,uVar14);
    FUN_14000c990(uVar13,")\n{\n\tVS_OUTPUT OUT;\n");
    FUN_140017240(&local_568);
    FUN_140016fa0(&local_3d8);
    FUN_140016fa0(&local_3a0);
    FUN_1400f5940(&local_468,&local_3d8);
    FUN_1400f5680(&local_410,&DAT_140474480,&local_3d8);
    FUN_1400f5b90(&local_468);
  }
  else if (param_3 == 1) {
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e91e8) &&
       (FUN_14028b140(&DAT_1404e91e8), DAT_1404e91e8 == -1)) {
      FUN_140017170(&DAT_1404e91f0,"[input:triangles]");
      FUN_14028b410(FUN_140424910);
      _Init_thread_footer(&DAT_1404e91e8);
    }
    uVar13 = FUN_140017110(&DAT_1404e91f0);
    lVar35 = FUN_140031d70(param_5,uVar13,0);
    if (lVar35 == -1) {
      pcVar30 = "void main(point VS_OUTPUT IN[1], inout TriangleStream<PS_INPUT> OUT";
    }
    else {
      FUN_1400f9050(param_5,lVar35,DAT_1404e9200);
      pcVar30 = "void main(triangle VS_OUTPUT IN[3], inout TriangleStream<PS_INPUT> OUT";
    }
    uVar13 = FUN_14000c990(local_318,pcVar30);
    uVar14 = FUN_14000ee70(local_228,&local_568);
    uVar13 = FUN_14000cbc0(uVar13,uVar14);
    FUN_14000c990(uVar13,")\n{\n\t");
    FUN_140017240(&local_568);
    FUN_140016fa0(&local_3d8);
    FUN_140016fa0(&local_3a0);
  }
  else {
    uVar13 = FUN_14000c990(local_318,"PS_OUTPUT main(VS_OUTPUT IN");
    uVar14 = FUN_14000ee70(local_228,&local_568);
    uVar13 = FUN_14000cbc0(uVar13,uVar14);
    FUN_14000c990(uVar13,")\n{\n\tPS_OUTPUT OUT;\n");
    FUN_140017240(&local_568);
    FUN_140016fa0(&local_3d8);
    FUN_140016fa0(&local_3a0);
    FUN_1400f5680(&local_468,&DAT_140487c4c,&local_3d8);
    FUN_1400f5680(&local_410,&DAT_140474480,&local_3d8);
  }
  FUN_14000cbc0(local_318,&local_3d8);
  FUN_14000ee70(local_328,&local_348);
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x130) < DAT_1404e9210) &&
     (FUN_14028b140(&DAT_1404e9210), DAT_1404e9210 == -1)) {
    FUN_1400de280(&DAT_1404e9218,"\\bvoid[\\s]+main[\\s]*\\([\\s]*\\)[\\s\\r\\n]*\\{");
    FUN_14028b410(&LAB_140424900);
    _Init_thread_footer(&DAT_1404e9210);
  }
  uVar13 = FUN_1400f88d0(&local_568,param_5);
  FUN_14000de40(param_5,uVar13);
  FUN_140017240(&local_568);
  lVar35 = FUN_140031d70(param_5,"main(",0);
  if (lVar35 != -1) {
    uVar13 = FUN_140017110(&local_348);
    lVar35 = FUN_140031d70(param_5,uVar13,0);
    if (lVar35 == -1) {
      lVar35 = 0;
    }
    else {
      lVar35 = lVar35 + local_338;
    }
    FUN_140056d70(param_5,&local_528,0,lVar35);
    uVar13 = FUN_140056d70(param_5,&local_568,lVar35,param_5[2] - lVar35);
    FUN_14000de40(param_5,uVar13);
    FUN_140017240(&local_568);
    FUN_14000d970(&local_4a8);
    piVar6 = piStack_3b0;
    piVar21 = local_3b8;
    if (param_3 == 0) {
      for (; piVar21 != piVar6; piVar21 = piVar21 + 4) {
        FUN_140017170(&local_568,(&PTR_s_a_Position_140484a90)[*piVar21]);
        uVar13 = FUN_1400924d0(&local_508,&DAT_140487c4c,&local_568);
        uVar14 = FUN_140030830(&local_4a8,&local_568);
        FUN_14000de40(uVar14,uVar13);
        FUN_140017240(&local_508);
        FUN_140017240(&local_568);
      }
LAB_1400f64d1:
      if (param_3 == 0) {
        puVar36 = &DAT_140487cc4;
      }
      FUN_140017170(&local_568,puVar36);
      lVar33 = lStack_460;
      for (lVar35 = local_468; lVar35 != lVar33; lVar35 = lVar35 + 0x38) {
        if ((*(int *)(lVar35 + 0x28) < 1) || (*(char *)(lVar35 + 0x2c) == '\0')) {
          uVar13 = FUN_140076fd0(&local_508,&local_568,lVar35 + 8);
        }
        else {
          uVar13 = FUN_1400924d0(&local_508,"accessArray",lVar35 + 8);
        }
        uVar14 = FUN_140030830(&local_4a8,lVar35 + 8);
        FUN_14000de40(uVar14,uVar13);
        FUN_140017240(&local_508);
      }
      FUN_140017240(&local_568);
      lVar35 = local_410;
      lVar33 = lStack_408;
      if (param_3 == 2) {
        FUN_140017170(&local_568,"gl_FragColor");
        uVar13 = FUN_1400f8930(&local_4a8,&local_568);
        FUN_14000ddd0(uVar13,"OUT.gl_FragColor");
        FUN_140017240(&local_568);
        lVar35 = local_410;
        lVar33 = lStack_408;
      }
    }
    else {
      lVar35 = local_410;
      lVar33 = lStack_408;
      if (param_3 == 2) goto LAB_1400f64d1;
    }
    for (; lVar12 = lStack_408, lVar35 != lStack_408; lVar35 = lVar35 + 0x38) {
      lStack_408 = lVar33;
      if ((0 < *(int *)(lVar35 + 0x28)) && (*(char *)(lVar35 + 0x2c) != '\0')) {
        uVar13 = FUN_1400924d0(&local_568,"accessArray",lVar35 + 8);
        uVar14 = FUN_140030830(&local_4a8,lVar35 + 8);
        FUN_14000de40(uVar14,uVar13);
        FUN_140017240(&local_568);
      }
      lVar33 = lStack_408;
      lStack_408 = lVar12;
    }
    lStack_408 = lVar33;
    if (local_498 != 0) {
      lVar35 = local_498 * 0x20;
      FUN_140016fa0(&local_568);
      FUN_140052fb0(&local_568,param_5[2] + lVar35);
      local_res20 = param_5[2];
      if (local_res20 != 0) {
        local_res18._0_1_ = (undefined1)param_3;
        uVar16 = 0;
        do {
          uVar17 = param_5[3];
          puVar39 = param_5;
          if (0xf < uVar17) {
            puVar39 = (undefined8 *)*param_5;
          }
          uVar38 = uVar16;
          if (((byte)(*(char *)((longlong)puVar39 + uVar16) + 0x9fU) < 0x1a) ||
             ((bVar24 = *(char *)((longlong)puVar39 + uVar16) - 0x30, bVar24 < 0x30 &&
              ((0x87fffffe03ffU >> ((longlong)(char)bVar24 & 0x3fU) & 1) != 0)))) {
            for (; uVar38 < local_res20; uVar38 = uVar38 + 1) {
              puVar39 = param_5;
              if (0xf < uVar17) {
                puVar39 = (undefined8 *)*param_5;
              }
              if ((0x19 < (byte)(*(char *)((longlong)puVar39 + uVar38) + 0x9fU)) &&
                 ((bVar24 = *(char *)((longlong)puVar39 + uVar38) - 0x30, 0x2f < bVar24 ||
                  ((0x87fffffe03ffU >> ((longlong)(char)bVar24 & 0x3fU) & 1) == 0)))) break;
            }
            local_3e8 = 0;
            local_3e0 = 0;
            local_3f8 = (undefined8 *******)0x0;
            uStack_3f0 = 0;
            if ((ulonglong)param_5[2] < uVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_140012940();
            }
            uVar15 = param_5[2] - uVar16;
            uVar28 = uVar38 - uVar16;
            if (uVar15 < uVar38 - uVar16) {
              uVar28 = uVar15;
            }
            puVar39 = param_5;
            if (0xf < uVar17) {
              puVar39 = (undefined8 *)*param_5;
            }
            FUN_140017480(&local_3f8,(longlong)puVar39 + uVar16,uVar28);
            uVar16 = local_3e8;
            ppppppuVar5 = local_3f8;
            uVar17 = 0xcbf29ce484222325;
            pppppppuVar22 = &local_3f8;
            if (0xf < local_3e0) {
              pppppppuVar22 = (undefined8 *******)local_3f8;
            }
            uVar28 = 0;
            if (local_3e8 != 0) {
              do {
                pbVar1 = (byte *)((longlong)pppppppuVar22 + uVar28);
                uVar28 = uVar28 + 1;
                uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
              } while (uVar28 < local_3e8);
            }
            lVar35 = *(longlong *)(local_490 + 8 + (uVar17 & uStack_478) * 0x10);
            uVar28 = local_3e0;
            if (lVar35 != lStack_4a0) {
              lVar33 = *(longlong *)(local_490 + (uVar17 & uStack_478) * 0x10);
              while( true ) {
                puVar39 = (undefined8 *)(lVar35 + 0x10);
                if (0xf < *(ulonglong *)(lVar35 + 0x28)) {
                  puVar39 = (undefined8 *)*puVar39;
                }
                pppppppuVar22 = &local_3f8;
                if (0xf < uVar28) {
                  pppppppuVar22 = (undefined8 *******)ppppppuVar5;
                }
                if ((uVar16 == *(ulonglong *)(lVar35 + 0x20)) &&
                   ((uVar16 == 0 ||
                    (iVar8 = memcmp(pppppppuVar22,puVar39,uVar16), uVar28 = local_3e0, iVar8 == 0)))
                   ) goto LAB_1400f683e;
                if (lVar35 == lVar33) break;
                lVar35 = *(longlong *)(lVar35 + 8);
              }
            }
            lVar35 = 0;
LAB_1400f683e:
            lVar33 = local_558;
            lVar12 = lStack_4a0;
            if (lVar35 != 0) {
              lVar12 = lVar35;
            }
            if (lVar12 == lStack_4a0) {
              pppppppuVar22 = &local_3f8;
              if (0xf < uVar28) {
                pppppppuVar22 = (undefined8 *******)ppppppuVar5;
              }
              if (local_550 - local_558 < uVar16) goto LAB_1400f6904;
              puVar31 = &local_568;
              if (0xf < local_550) {
                puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
              }
              lVar35 = (longlong)puVar31 + local_558;
              local_558 = uVar16 + local_558;
              FUN_1404210f0(lVar35,pppppppuVar22,uVar16);
              *(undefined1 *)((longlong)puVar31 + lVar33 + uVar16) = 0;
            }
            else {
              pppppppuVar22 = (undefined8 *******)(lVar12 + 0x30);
              uVar16 = *(ulonglong *)(lVar12 + 0x40);
              if (0xf < *(ulonglong *)(lVar12 + 0x48)) {
                pppppppuVar22 = (undefined8 *******)*pppppppuVar22;
              }
              if (local_550 - local_558 < uVar16) {
LAB_1400f6904:
                local_578 = uVar16;
                FUN_140053110(&local_568,uVar16,(undefined1)local_res18,pppppppuVar22);
              }
              else {
                puVar31 = &local_568;
                if (0xf < local_550) {
                  puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
                }
                lVar35 = (longlong)puVar31 + local_558;
                local_558 = local_558 + uVar16;
                FUN_1404210f0(lVar35,pppppppuVar22,uVar16);
                *(undefined1 *)(uVar16 + lVar35) = 0;
              }
            }
            if (0xf < local_3e0) {
              uVar16 = local_3e0 + 1;
              pppppppuVar22 = (undefined8 *******)local_3f8;
              if (0xfff < uVar16) {
                pppppppuVar22 = (undefined8 *******)local_3f8[-1];
                if (0x1f < (ulonglong)((longlong)local_3f8 + (-8 - (longlong)pppppppuVar22)))
                goto LAB_1400f83cd;
                uVar16 = local_3e0 + 0x28;
              }
              thunk_FUN_14028af80(pppppppuVar22,uVar16);
            }
          }
          else {
            puVar39 = param_5;
            if (0xf < uVar17) {
              puVar39 = (undefined8 *)*param_5;
            }
            FUN_1400534d0(&local_568,*(undefined1 *)((longlong)puVar39 + uVar16));
            uVar38 = uVar16 + 1;
          }
          uVar16 = uVar38;
        } while (uVar38 < local_res20);
      }
      FUN_14000de40(param_5,&local_568);
      FUN_140017240(&local_568);
    }
    FUN_1400f3ea0(&local_528);
    FUN_1400f9070(param_5,0,&local_528);
    if (param_3 != 1) {
      uVar16 = FUN_140031d70(param_5,"main(",0);
      puVar39 = param_5;
      if (0xf < (ulonglong)param_5[3]) {
        puVar39 = (undefined8 *)*param_5;
      }
      uVar17 = FUN_1400eff30(puVar39,param_5[2]);
      if ((uVar17 != 0xffffffffffffffff) && (uVar16 < uVar17)) {
        uVar13 = FUN_14003a8b0(&local_568,&local_3a0,"\treturn OUT;\n");
        FUN_1400f9070(param_5,uVar17,uVar13);
        FUN_140017240(&local_568);
      }
    }
    FUN_14000d9e0(&local_490);
    FUN_14000da50(&lStack_4a0);
    FUN_140017240(&local_528);
  }
  uVar16 = 0;
  local_538 = 0;
  local_548 = (undefined8 ******)0x0;
  uStack_540 = 0;
  local_530 = 0;
  local_548 = (undefined8 ******)FUN_14028af20(0x470);
  local_538 = 0x46c;
  lVar35 = 8;
  local_530 = 0x46f;
  pppppppuVar22 = (undefined8 *******)local_548;
  pcVar30 = 
  "#define vec2 float2\n#define vec3 float3\n#define vec4 float4\n#define uvec4 uint4\n#define mat4 float4x4\n#define mat4x3 float4x3\n#define mat3 float3x3\n#define mat2 float2x2\n#define mix lerp\n#define mod(x, y) ((x)-(y)*floor((x)/(y)))\n#define CASTI(x) ((int)(x))\n#define CASTU(x) ((uint)(x))\n#define CASTF(x) ((float)(x))\n#define CAST2(x) ((float2)(x))\n#define CAST3(x) ((float3)(x))\n#define CAST4U(x) ((uint4)(x))\n#define CAST4(x) ((float4)(x))\n#define CAST3X3(x) ((float3x3)(x))\n#define DECLARE_SAMPLER2D_PARAMETER(t) Texture2D t, SamplerState t ## SamplerState\n#define MAKE_SAMPLER2D_ARGUMENT(t) t, t ## SamplerState\n#define DECLARE_SAMPLER2D_COMPARE_PARAMETER(t) Texture2D t, SamplerComparisonState t ## SamplerComparisonState\n#define MAKE_SAMPLER2D_COMPARE_ARGUMENT(t) t, t ## SamplerComparisonState\n#define texSample2D(s, u) s.Sample(s ## SamplerState, u)\n#define texSample2DLod(s, u, m) s.SampleLevel(s  ## SamplerState, u, m)\n#define texSample2DCompare(s, u, d) s.SampleCmpLevelZero(s ## SamplerComparisonState, u, d)\n#define texLoad2D(s, u, r) s.Load(int3((u) * (r), 0))\n#define texSample3D(s, u) s.Sample(s ## SamplerState, u)\n"
  ;
  do {
    pcVar29 = pcVar30;
    pppppppuVar26 = pppppppuVar22;
    ppppppuVar5 = *(undefined8 *******)(pcVar29 + 8);
    *pppppppuVar26 = *(undefined8 *******)pcVar29;
    pppppppuVar26[1] = ppppppuVar5;
    ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x18);
    pppppppuVar26[2] = *(undefined8 *******)(pcVar29 + 0x10);
    pppppppuVar26[3] = ppppppuVar5;
    ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x28);
    pppppppuVar26[4] = *(undefined8 *******)(pcVar29 + 0x20);
    pppppppuVar26[5] = ppppppuVar5;
    ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x38);
    pppppppuVar26[6] = *(undefined8 *******)(pcVar29 + 0x30);
    pppppppuVar26[7] = ppppppuVar5;
    ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x48);
    pppppppuVar26[8] = *(undefined8 *******)(pcVar29 + 0x40);
    pppppppuVar26[9] = ppppppuVar5;
    ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x58);
    pppppppuVar26[10] = *(undefined8 *******)(pcVar29 + 0x50);
    pppppppuVar26[0xb] = ppppppuVar5;
    ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x68);
    pppppppuVar26[0xc] = *(undefined8 *******)(pcVar29 + 0x60);
    pppppppuVar26[0xd] = ppppppuVar5;
    ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x78);
    pppppppuVar26[0xe] = *(undefined8 *******)(pcVar29 + 0x70);
    pppppppuVar26[0xf] = ppppppuVar5;
    lVar35 = lVar35 + -1;
    pppppppuVar22 = pppppppuVar26 + 0x10;
    pcVar30 = pcVar29 + 0x80;
  } while (lVar35 != 0);
  ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x88);
  local_35a = 0;
  local_358 = 0xd;
  pppppppuVar26[0x10] = *(undefined8 *******)(pcVar29 + 0x80);
  pppppppuVar26[0x11] = ppppppuVar5;
  local_35b = 0;
  ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0x98);
  pppppppuVar26[0x12] = *(undefined8 *******)(pcVar29 + 0x90);
  pppppppuVar26[0x13] = ppppppuVar5;
  ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0xa8);
  pppppppuVar26[0x14] = *(undefined8 *******)(pcVar29 + 0xa0);
  pppppppuVar26[0x15] = ppppppuVar5;
  ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0xb8);
  pppppppuVar26[0x16] = *(undefined8 *******)(pcVar29 + 0xb0);
  pppppppuVar26[0x17] = ppppppuVar5;
  ppppppuVar5 = *(undefined8 *******)(pcVar29 + 200);
  pppppppuVar26[0x18] = *(undefined8 *******)(pcVar29 + 0xc0);
  pppppppuVar26[0x19] = ppppppuVar5;
  ppppppuVar5 = *(undefined8 *******)(pcVar29 + 0xd8);
  pppppppuVar26[0x1a] = *(undefined8 *******)(pcVar29 + 0xd0);
  pppppppuVar26[0x1b] = ppppppuVar5;
  uVar13 = *(undefined8 *)(pcVar29 + 0xe4);
  *(undefined8 *)((longlong)pppppppuVar26 + 0xdc) = *(undefined8 *)(pcVar29 + 0xdc);
  *(undefined8 *)((longlong)pppppppuVar26 + 0xe4) = uVar13;
  uVar17 = 0xcbf29ce484222325;
  *(undefined1 *)((longlong)local_548 + 0x46c) = 0;
  lVar35 = *param_2;
  local_368[8] = s_BACKBUFFER_MS_140487a30[8];
  local_368[9] = s_BACKBUFFER_MS_140487a30[9];
  local_368[10] = s_BACKBUFFER_MS_140487a30[10];
  local_368[0xb] = s_BACKBUFFER_MS_140487a30[0xb];
  local_368[0xc] = s_BACKBUFFER_MS_140487a30[0xc];
  local_350 = 0xf;
  local_368[0] = s_BACKBUFFER_MS_140487a30[0];
  local_368[1] = s_BACKBUFFER_MS_140487a30[1];
  local_368[2] = s_BACKBUFFER_MS_140487a30[2];
  local_368[3] = s_BACKBUFFER_MS_140487a30[3];
  local_368[4] = s_BACKBUFFER_MS_140487a30[4];
  local_368[5] = s_BACKBUFFER_MS_140487a30[5];
  local_368[6] = s_BACKBUFFER_MS_140487a30[6];
  local_368[7] = s_BACKBUFFER_MS_140487a30[7];
  do {
    pbVar1 = local_368 + uVar16;
    uVar16 = uVar16 + 1;
    uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
  } while (uVar16 < 0xd);
  uVar17 = uVar17 & *(ulonglong *)(lVar35 + 0x30);
  lVar33 = *(longlong *)(lVar35 + 8);
  lVar12 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + 8 + uVar17 * 0x10);
  if (lVar12 != lVar33) {
    lVar35 = *(longlong *)(*(longlong *)(lVar35 + 0x18) + uVar17 * 0x10);
    while( true ) {
      puVar39 = (undefined8 *)(lVar12 + 0x10);
      if (0xf < *(ulonglong *)(lVar12 + 0x28)) {
        puVar39 = (undefined8 *)*puVar39;
      }
      if ((*(longlong *)(lVar12 + 0x20) == 0xd) &&
         (iVar8 = memcmp(local_368,puVar39,0xd), iVar8 == 0)) goto LAB_1400f6bfe;
      if (lVar12 == lVar35) break;
      lVar12 = *(longlong *)(lVar12 + 8);
    }
  }
  lVar12 = 0;
LAB_1400f6bfe:
  pcVar30 = "#define texSample2DBackBuffer(s, u, r) s.Load(int2((u) * (r)), 0)\n";
  if (lVar12 == 0) {
    lVar12 = lVar33;
  }
  uVar13 = 0x42;
  if (lVar12 == lVar33) {
    uVar13 = 0x3b;
    pcVar30 = "#define texSample2DBackBuffer(s, u, r) texSample2D(s, (u))\n";
  }
  uVar41 = FUN_1400532a0(&local_548,pcVar30,uVar13);
  if (param_3 == 0) {
    uVar41 = FUN_1400f5110(&local_3b8,&local_548);
LAB_1400f6c83:
    uVar13 = 0;
  }
  else {
    if (param_3 != 1) {
      lVar35 = FUN_1400f8fd0(param_5);
      uVar41 = FUN_1400f5640(extraout_XMM0_Da_00,lVar35 != -1,&local_548);
      goto LAB_1400f6c83;
    }
    uVar41 = FUN_1400f52e0(uVar41,&local_468,1,&local_548);
    uVar13 = 2;
  }
  FUN_1400f52e0(uVar41,&local_468,uVar13,&local_548);
  local_4f8 = 0;
  uStack_500 = 0;
  local_508 = (undefined8 *******)0x0;
  lStack_4a0 = 0;
  local_4a8 = (undefined8 *)0x0;
  local_480 = 0;
  local_488 = (undefined8 *******)0x0;
  local_4f0 = 0xf;
  local_498 = 0;
  local_490 = 0xf;
  uStack_478 = 0;
  local_470 = 0xf;
  local_4b8 = (longlong *)0x0;
  local_4b0 = 0;
  plVar10 = (longlong *)FUN_14028af20(0x20);
  *plVar10 = (longlong)plVar10;
  plVar10[1] = (longlong)plVar10;
  plVar10[2] = (longlong)plVar10;
  *(undefined2 *)(plVar10 + 3) = 0x101;
  uVar25 = (int)(lStack_408 - local_410 >> 3) * -0x49249249;
  uVar16 = 0;
  local_res18 = 0;
  uVar41 = extraout_XMM0_Da_01;
  local_4b8 = plVar10;
  if (uVar25 != 0) {
    do {
      lVar35 = local_410;
      lVar37 = uVar16 * 0x38;
      puVar39 = (undefined8 *)(local_410 + 8 + lVar37);
      uVar13 = FUN_140032520(uVar41,puVar39);
      lVar12 = FUN_1400df9b0(extraout_XMM0_Da_02,&local_568,puVar39,uVar13);
      lVar33 = DAT_1404e8108;
      if (*(longlong *)(lVar12 + 8) != 0) {
        lVar33 = *(longlong *)(lVar12 + 8);
      }
      if (lVar33 == DAT_1404e8108) {
LAB_1400f714e:
        uVar32 = 0;
LAB_1400f7150:
        puVar23 = &local_4a8 + (longlong)(int)uVar32 * 4;
        if ((*(int *)(lVar37 + 0x28 + lVar35) < 1) || (*(char *)(lVar37 + lVar35 + 0x2c) == '\0')) {
          iVar8 = *(int *)(lVar37 + lVar35);
        }
        else {
          iVar8 = *(int *)(&DAT_140482e30 + (longlong)*(int *)(lVar37 + lVar35) * 4);
        }
        FUN_1400532a0(puVar23,"const ",6);
        pcVar30 = (&PTR_s_float_140482eb8)[(longlong)iVar8 * 2];
        sVar20 = strlen(pcVar30);
        FUN_1400532a0(puVar23,pcVar30,sVar20);
        FUN_1400532a0(puVar23,&DAT_1404738a8,1);
        if (0xf < *(ulonglong *)(lVar37 + 0x20 + lVar35)) {
          puVar39 = (undefined8 *)*puVar39;
        }
        FUN_1400532a0(puVar23,puVar39,*(undefined8 *)(lVar37 + 0x18 + lVar35));
        uVar32 = *(uint *)(lVar37 + 0x28 + lVar35);
        if (0 < (int)uVar32) {
          if (*(char *)(lVar37 + lVar35 + 0x2c) != '\0') {
            uVar9 = uVar32 & 3;
            if ((int)uVar32 < 0) {
              uVar32 = uVar32 + 3;
              uVar9 = uVar9 - 4;
            }
            uVar32 = (((int)uVar32 >> 2) + 1) - (uint)(uVar9 == 0);
          }
          FUN_1400534d0(puVar23,0x5b);
          puVar19 = (undefined8 *)FUN_140053e40(&local_4e8,uVar32);
          puVar39 = puVar19 + 2;
          if (0xf < (ulonglong)puVar19[3]) {
            puVar19 = (undefined8 *)*puVar19;
          }
          FUN_1400532a0(puVar23,puVar19,*puVar39);
          FUN_140017240(&local_4e8);
          FUN_1400534d0(puVar23,0x5d);
        }
        uVar41 = FUN_1400532a0(puVar23,&DAT_140487a64,2);
        plVar10 = local_4b8;
      }
      else {
        iVar8 = *(int *)(lVar33 + 0x30);
        if (iVar8 < 0x20) {
          if (iVar8 < 0) goto LAB_1400f714e;
LAB_1400f7047:
          if (iVar8 == 0x8c) {
            uVar32 = 0xffffffff;
          }
          else if (iVar8 - 0x20U < 10) {
            uVar32 = 0xffffffff;
          }
          else {
            switch(iVar8) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x2a:
            case 0x2b:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x2f:
            case 0x30:
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
            case 0x3a:
            case 0x3b:
            case 0x3c:
            case 0x3d:
            case 0x3e:
            case 0x3f:
            case 0x40:
            case 0x41:
            case 0x42:
            case 0x43:
            case 0x44:
            case 0x45:
            case 0x46:
            case 0x47:
            case 0x48:
            case 0x49:
            case 0x4a:
            case 0x4b:
            case 0x4c:
            case 0x4d:
            case 0x4e:
            case 0x4f:
            case 0x50:
            case 0x51:
            case 0x52:
            case 0x53:
            case 0x54:
            case 0x55:
            case 0x56:
            case 0x57:
            case 0x58:
            case 0x59:
            case 0x5a:
            case 0x5b:
            case 0x5d:
            case 0x5e:
            case 0x5f:
            case 0x60:
            case 0x61:
            case 0x62:
            case 99:
            case 100:
            case 0x65:
            case 0x66:
            case 0x67:
            case 0x68:
            case 0x69:
            case 0x6a:
            case 0x6b:
            case 0x6c:
            case 0x6d:
            case 0x6e:
            case 0x6f:
            case 0x70:
            case 0x72:
            case 0x73:
            case 0x74:
            case 0x75:
            case 0x76:
            case 0x77:
            case 0x87:
            case 0x88:
            case 0x89:
            case 0x8a:
              uVar32 = 1;
              break;
            default:
              uVar32 = 0;
              break;
            case 0x71:
              uVar32 = 2;
              break;
            case 0x78:
            case 0x79:
            case 0x7a:
            case 0x7b:
            case 0x7c:
            case 0x7d:
            case 0x7e:
            case 0x7f:
            case 0x80:
            case 0x81:
            case 0x82:
            case 0x83:
            case 0x84:
            case 0x85:
            case 0x86:
              uVar32 = 3;
            }
          }
          if ((uVar32 != 2) && (uVar32 != 3)) goto LAB_1400f7150;
          plVar11 = (longlong *)plVar10[1];
          plVar18 = plVar11;
          plVar27 = plVar10;
          if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
            do {
              plVar11 = plVar18;
              bVar40 = uVar32 <= *(uint *)((longlong)plVar11 + 0x1c);
              if (bVar40) {
                plVar18 = (longlong *)*plVar11;
                plVar27 = plVar11;
              }
              else {
                plVar18 = (longlong *)plVar11[2];
              }
              uVar9 = (uint)bVar40;
            } while (*(char *)((longlong)plVar18 + 0x19) == '\0');
          }
          else {
            uVar9 = 0;
          }
          if ((*(char *)((longlong)plVar27 + 0x19) != '\0') ||
             (uVar41 = extraout_XMM0_Da_03, uVar32 < *(uint *)((longlong)plVar27 + 0x1c))) {
            if (local_4b0 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_14003a750();
            }
            puVar39 = (undefined8 *)FUN_14028af20(0x20);
            *(uint *)((longlong)puVar39 + 0x1c) = uVar32;
            *puVar39 = plVar10;
            puVar39[1] = plVar10;
            puVar39[2] = plVar10;
            *(undefined2 *)(puVar39 + 3) = 0;
            uStack_4bc = uStack_378._4_4_;
            local_4c8 = plVar11;
            uStack_4c0 = uVar9;
            uVar41 = FUN_1400371e0(&local_4b8,&local_4c8,puVar39);
            plVar10 = local_4b8;
          }
        }
        else {
          if (0x29 < iVar8) goto LAB_1400f7047;
          FUN_140053e40(&local_4e8,iVar8 + -0x20);
          if (*(int *)(lVar37 + lVar35) == 8) {
            local_440 = 0;
            local_438 = 0;
            lVar33 = *param_2;
            local_450 = (undefined8 *******)0x0;
            uStack_448 = 0;
            FUN_140017480(&local_450,"BACKBUFFER_MS",0xd);
            pppppppuVar22 = &local_450;
            if (0xf < local_438) {
              pppppppuVar22 = (undefined8 *******)local_450;
            }
            uVar13 = FUN_1400138d0(pppppppuVar22,local_440);
            lVar12 = FUN_1400110a0(lVar33,&local_528,&local_450,uVar13);
            if (*(longlong *)(lVar12 + 8) != 0) {
              lVar33 = lVar12;
            }
            lVar12 = *(longlong *)(*param_2 + 8);
            lVar33 = *(longlong *)(lVar33 + 8);
            FUN_140017240(&local_450);
            if (lVar33 == lVar12) {
              FUN_1400532a0(&local_508,"Texture2D ",10);
              puVar23 = puVar39;
              if (0xf < *(ulonglong *)(lVar37 + 0x20 + lVar35)) {
                puVar23 = (undefined8 *)*puVar39;
              }
              FUN_1400532a0(&local_508,puVar23,*(undefined8 *)(lVar37 + 0x18 + lVar35));
              FUN_1400532a0(&local_508,":register(t",0xb);
              pppppppuVar22 = &local_4e8;
              if (0xf < local_4d0) {
                pppppppuVar22 = (undefined8 *******)local_4e8;
              }
              FUN_1400532a0(&local_508,pppppppuVar22,local_4d8);
              uVar13 = 0x10;
              pcVar30 = ");\nSamplerState ";
              goto LAB_1400f6fc9;
            }
            FUN_1400532a0(&local_508,"Texture2DMS<float4> ",0x14);
            if (0xf < *(ulonglong *)(lVar37 + 0x20 + lVar35)) {
              puVar39 = (undefined8 *)*puVar39;
            }
            FUN_1400532a0(&local_508,puVar39,*(undefined8 *)(lVar37 + 0x18 + lVar35));
            uVar13 = 0xb;
            pcVar30 = ":register(t";
          }
          else {
            pcVar30 = "Texture2D ";
            if (*(int *)(lVar37 + lVar35) == 10) {
              pcVar30 = "Texture3D ";
            }
            FUN_1400532a0(&local_508,pcVar30,10);
            puVar23 = puVar39;
            if (0xf < *(ulonglong *)(lVar37 + 0x20 + lVar35)) {
              puVar23 = (undefined8 *)*puVar39;
            }
            FUN_1400532a0(&local_508,puVar23,*(undefined8 *)(lVar37 + 0x18 + lVar35));
            FUN_1400532a0(&local_508,":register(t",0xb);
            pppppppuVar22 = &local_4e8;
            if (0xf < local_4d0) {
              pppppppuVar22 = (undefined8 *******)local_4e8;
            }
            FUN_1400532a0(&local_508,pppppppuVar22,local_4d8);
            FUN_1400532a0(&local_508,&DAT_1404879c8,3);
            if (*(int *)(lVar37 + lVar35) == 9) {
              FUN_1400532a0(&local_508,"SamplerComparisonState ",0x17);
              if (0xf < *(ulonglong *)(lVar37 + 0x20 + lVar35)) {
                puVar39 = (undefined8 *)*puVar39;
              }
              FUN_1400532a0(&local_508,puVar39,*(undefined8 *)(lVar37 + 0x18 + lVar35));
              uVar13 = 0x21;
              pcVar30 = "SamplerComparisonState:register(s";
            }
            else {
              uVar13 = 0xd;
              pcVar30 = "SamplerState ";
LAB_1400f6fc9:
              FUN_1400532a0(&local_508,pcVar30,uVar13);
              if (0xf < *(ulonglong *)(lVar37 + 0x20 + lVar35)) {
                puVar39 = (undefined8 *)*puVar39;
              }
              FUN_1400532a0(&local_508,puVar39,*(undefined8 *)(lVar37 + 0x18 + lVar35));
              pcVar30 = "SamplerState:register(s";
              uVar13 = 0x17;
            }
          }
          FUN_1400532a0(&local_508,pcVar30,uVar13);
          pppppppuVar22 = &local_4e8;
          if (0xf < local_4d0) {
            pppppppuVar22 = (undefined8 *******)local_4e8;
          }
          FUN_1400532a0(&local_508,pppppppuVar22,local_4d8);
          FUN_1400532a0(&local_508,&DAT_1404879c8,3);
          uVar41 = FUN_140017240(&local_4e8);
          plVar10 = local_4b8;
        }
      }
      local_res18 = local_res18 + 1;
      uVar16 = (ulonglong)local_res18;
    } while (local_res18 < uVar25);
  }
  pppppppuVar22 = &local_508;
  if (0xf < local_4f0) {
    pppppppuVar22 = (undefined8 *******)local_508;
  }
  FUN_1400532a0(&local_548,pppppppuVar22,local_4f8);
  if (local_498 != 0) {
    FUN_1400532a0(&local_548,"cbuffer ",8);
    puVar36 = PTR_s_g_bufStatic_140484b60;
    sVar20 = strlen(PTR_s_g_bufStatic_140484b60);
    FUN_1400532a0(&local_548,puVar36,sVar20);
    FUN_1400532a0(&local_548,":register(b",0xb);
    uVar13 = FUN_140053cb0((longlong)&local_558 + 5,0);
    FUN_140053d10(&local_528,uVar13,(longlong)&local_558 + 5);
    pppppppuVar22 = &local_528;
    if (0xf < local_510) {
      pppppppuVar22 = (undefined8 *******)local_528;
    }
    FUN_1400532a0(&local_548,pppppppuVar22,local_518);
    FUN_140017240(&local_528);
    FUN_1400532a0(&local_548,&DAT_140487624,4);
    puVar39 = &local_4a8;
    if (0xf < local_490) {
      puVar39 = local_4a8;
    }
    FUN_1400532a0(&local_548,puVar39,local_498);
    FUN_1400532a0(&local_548,&DAT_14048797c,2);
  }
  if (uStack_478 != 0) {
    FUN_1400532a0(&local_548,"cbuffer ",8);
    puVar36 = PTR_s_g_bufDynamic_140484b68;
    sVar20 = strlen(PTR_s_g_bufDynamic_140484b68);
    FUN_1400532a0(&local_548,puVar36,sVar20);
    FUN_1400532a0(&local_548,":register(b",0xb);
    uVar13 = FUN_140053cb0((longlong)&local_558 + 5,1);
    FUN_140053d10(&local_528,uVar13,(longlong)&local_558 + 5);
    pppppppuVar22 = &local_528;
    if (0xf < local_510) {
      pppppppuVar22 = (undefined8 *******)local_528;
    }
    FUN_1400532a0(&local_548,pppppppuVar22,local_518);
    FUN_140017240(&local_528);
    FUN_1400532a0(&local_548,&DAT_140487624,4);
    pppppppuVar22 = &local_488;
    if (0xf < local_470) {
      pppppppuVar22 = (undefined8 *******)local_488;
    }
    FUN_1400532a0(&local_548,pppppppuVar22,uStack_478);
    FUN_1400532a0(&local_548,&DAT_14048797c,2);
  }
  plVar10 = (longlong *)*local_4b8;
  if (*(char *)((longlong)plVar10 + 0x19) == '\0') {
    do {
      lVar35 = local_538;
      if (*(int *)((longlong)plVar10 + 0x1c) == 2) {
        if (local_530 - local_538 < 8) {
          local_578 = 8;
          FUN_140053110(&local_548,8,(undefined1)local_res18,"cbuffer ");
        }
        else {
          pppppppuVar22 = &local_548;
          if (0xf < local_530) {
            pppppppuVar22 = (undefined8 *******)local_548;
          }
          puVar39 = (undefined8 *)((longlong)pppppppuVar22 + local_538);
          local_538 = local_538 + 8;
          *puVar39 = 0x2072656666756263;
          *(undefined1 *)((longlong)pppppppuVar22 + lVar35 + 8) = 0;
        }
        if (local_530 - local_538 < 0xe) {
          local_578 = 0xe;
          FUN_140053110(&local_548,0xe,(undefined1)local_res18,"g_bufAnimation");
        }
        else {
          pppppppuVar22 = &local_548;
          if (0xf < local_530) {
            pppppppuVar22 = (undefined8 *******)local_548;
          }
          lVar35 = (longlong)pppppppuVar22 + local_538;
          local_538 = local_538 + 0xe;
          FUN_1404210f0(lVar35,"g_bufAnimation",0xe);
          *(undefined1 *)(lVar35 + 0xe) = 0;
        }
        FUN_1400532a0(&local_548,":register(b",0xb);
        local_558._0_5_ = CONCAT14(0x32,(undefined4)local_558);
        FUN_140053d10(&local_528,(longlong)&local_558 + 4,(longlong)&local_558 + 5);
        pppppppuVar22 = &local_528;
        if (0xf < local_510) {
          pppppppuVar22 = (undefined8 *******)local_528;
        }
        FUN_1400532a0(&local_548,pppppppuVar22,local_518);
        if (0xf < local_510) {
          uVar16 = local_510 + 1;
          pppppppuVar22 = (undefined8 *******)local_528;
          if (0xfff < uVar16) {
            pppppppuVar22 = (undefined8 *******)local_528[-1];
            if (0x1f < (ulonglong)((longlong)local_528 + (-8 - (longlong)pppppppuVar22)))
            goto LAB_1400f83cd;
            uVar16 = local_510 + 0x28;
          }
          thunk_FUN_14028af80(pppppppuVar22,uVar16);
        }
        FUN_1400532a0(&local_548,")\n{\nconst float4x3 g_Bones[",0x1b);
        local_518 = 9;
        uVar16 = 0;
        uVar17 = 0xcbf29ce484222325;
        local_528 = (undefined8 ******)s_BONECOUNT_140487640._0_8_;
        local_510 = 0xf;
        uStack_520 = (ulonglong)(byte)s_BONECOUNT_140487640[8];
        do {
          pbVar1 = (byte *)((longlong)&local_528 + uVar16);
          uVar16 = uVar16 + 1;
          uVar17 = (uVar17 ^ *pbVar1) * 0x100000001b3;
        } while (uVar16 < 9);
        FUN_1400110a0(*param_2,&local_4c8,&local_528,uVar17);
        if (CONCAT44(uStack_4bc,uStack_4c0) == 0) goto LAB_1400f83d4;
        puVar23 = (undefined8 *)
                  FUN_1400ea100(&local_4e8,*(undefined4 *)(CONCAT44(uStack_4bc,uStack_4c0) + 0x30));
        puVar39 = puVar23 + 2;
        if (0xf < (ulonglong)puVar23[3]) {
          puVar23 = (undefined8 *)*puVar23;
        }
        FUN_1400532a0(&local_548,puVar23,*puVar39);
        FUN_140017240(&local_4e8);
        FUN_1400532a0(&local_548,"];\n}\n",5);
      }
      else if (*(int *)((longlong)plVar10 + 0x1c) == 3) {
        FUN_1400532a0(&local_548,"cbuffer ",8);
        FUN_1400532a0(&local_548,"g_bufLights",0xb);
        FUN_1400532a0(&local_548,":register(b",0xb);
        local_558._0_5_ = CONCAT14(0x33,(undefined4)local_558);
        FUN_140053d10(&local_528,(longlong)&local_558 + 4,(longlong)&local_558 + 5);
        pppppppuVar22 = &local_528;
        if (0xf < local_510) {
          pppppppuVar22 = (undefined8 *******)local_528;
        }
        FUN_1400532a0(&local_548,pppppppuVar22,local_518);
        FUN_140017240(&local_528);
        FUN_1400532a0(&local_548,&DAT_140487624,4);
        local_558 = 0xc;
        local_568 = (undefined7)s_LIGHTS_POINT_140487630._0_8_;
        uStack_561._0_1_ = SUB81(s_LIGHTS_POINT_140487630._0_8_,7);
        local_550 = 0xf;
        uStack_561._1_3_ = (undefined3)s_LIGHTS_POINT_140487630._8_4_;
        cStack_55d = SUB41(s_LIGHTS_POINT_140487630._8_4_,3);
        uStack_55c = 0;
        piVar21 = (int *)FUN_1400f8f00(*param_2,&local_568);
        iVar8 = *piVar21;
        if (0xf < local_550) {
          lVar33 = CONCAT17((char)uStack_561,local_568);
          uVar16 = local_550 + 1;
          lVar35 = lVar33;
          if (0xfff < uVar16) {
            lVar35 = *(longlong *)(lVar33 + -8);
            if (0x1f < (lVar33 - lVar35) - 8U) goto LAB_1400f83cd;
            uVar16 = local_550 + 0x28;
          }
          thunk_FUN_14028af80(lVar35,uVar16);
        }
        if (iVar8 != 0) {
          FUN_1400ea100(&local_568,iVar8);
          FUN_1400532a0(&local_548,"const float4 g_LPoint_Color[",0x1c);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float4 g_LPoint_Origin[",0x1d);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_140017240(&local_568);
        }
        local_568._0_1_ = s_LIGHTS_SPOT_140487678[0];
        local_568._1_1_ = s_LIGHTS_SPOT_140487678[1];
        local_568._2_1_ = s_LIGHTS_SPOT_140487678[2];
        local_568._3_1_ = s_LIGHTS_SPOT_140487678[3];
        local_568._4_1_ = s_LIGHTS_SPOT_140487678[4];
        local_568._5_1_ = s_LIGHTS_SPOT_140487678[5];
        local_568._6_1_ = s_LIGHTS_SPOT_140487678[6];
        uStack_561._0_1_ = s_LIGHTS_SPOT_140487678[7];
        uStack_561._1_1_ = s_LIGHTS_SPOT_140487678[8];
        uStack_561._2_1_ = s_LIGHTS_SPOT_140487678[9];
        uStack_561._3_1_ = s_LIGHTS_SPOT_140487678[10];
        uStack_55c = 0;
        local_558 = 0xb;
        local_550 = 0xf;
        cStack_55d = 0;
        piVar21 = (int *)FUN_1400f8f00(*param_2,&local_568);
        iVar8 = *piVar21;
        if (0xf < local_550) {
          FUN_140017200(&local_568,CONCAT17((char)uStack_561,local_568));
        }
        if (iVar8 != 0) {
          FUN_1400ea100(&local_568,iVar8);
          FUN_1400532a0(&local_548,"const float4 g_LSpot_Color[",0x1b);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float4 g_LSpot_Origin[",0x1c);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float4 g_LSpot_Direction[",0x1f);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float4 g_LSpot_Exponent[",0x1e);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_140017240(&local_568);
        }
        local_568._0_1_ = s_LIGHTS_TUBE_140487770[0];
        local_568._1_1_ = s_LIGHTS_TUBE_140487770[1];
        local_568._2_1_ = s_LIGHTS_TUBE_140487770[2];
        local_568._3_1_ = s_LIGHTS_TUBE_140487770[3];
        local_568._4_1_ = s_LIGHTS_TUBE_140487770[4];
        local_568._5_1_ = s_LIGHTS_TUBE_140487770[5];
        local_568._6_1_ = s_LIGHTS_TUBE_140487770[6];
        uStack_561._0_1_ = s_LIGHTS_TUBE_140487770[7];
        uStack_561._1_1_ = s_LIGHTS_TUBE_140487770[8];
        uStack_561._2_1_ = s_LIGHTS_TUBE_140487770[9];
        uStack_561._3_1_ = s_LIGHTS_TUBE_140487770[10];
        uStack_55c = 0;
        local_558 = 0xb;
        local_550 = 0xf;
        cStack_55d = 0;
        piVar21 = (int *)FUN_1400f8f00(*param_2,&local_568);
        iVar8 = *piVar21;
        if (0xf < local_550) {
          FUN_140017200(&local_568,CONCAT17((char)uStack_561,local_568));
        }
        if (iVar8 != 0) {
          FUN_1400ea100(&local_568,iVar8);
          FUN_1400532a0(&local_548,"const float4 g_LTube_Color[",0x1b);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float4 g_LTube_OriginA[",0x1d);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float3 g_LTube_OriginB[",0x1d);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_140017240(&local_568);
        }
        lVar35 = *param_2;
        local_558 = 0;
        local_550 = 0;
        local_568 = 0;
        uStack_561 = 0;
        cStack_55d = 0;
        uStack_55c = 0;
        FUN_140017480(&local_568,"LIGHTS_DIRECTIONAL",0x12);
        piVar21 = (int *)FUN_1400f8f00(lVar35,&local_568);
        iVar8 = *piVar21;
        if (0xf < local_550) {
          FUN_140017200(&local_568,CONCAT17((char)uStack_561,local_568));
        }
        if (iVar8 != 0) {
          FUN_1400ea100(&local_568,iVar8);
          FUN_1400532a0(&local_548,"const float4 g_LDirectional_Color[",0x22);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float3 g_LDirectional_Direction[",0x26);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_140017240(&local_568);
        }
        lVar35 = *param_2;
        local_450 = (undefined8 *******)0x0;
        uStack_448 = 0;
        local_440 = 0;
        local_438 = 0;
        FUN_140017480(&local_450,"LIGHTS_SPOT_SHADOW_COOKIE",0x19);
        lVar33 = *param_2;
        local_4d8 = 0;
        local_4d0 = 0;
        local_4e8 = (undefined8 *******)0x0;
        uStack_4e0 = 0;
        FUN_140017480(&local_4e8,"LIGHTS_SPOT_SHADOW",0x12);
        lVar12 = *param_2;
        local_518 = 0;
        local_510 = 0;
        local_528 = (undefined8 *******)0x0;
        uStack_520 = 0;
        FUN_140017480(&local_528,"LIGHTS_SPOT_COOKIE",0x12);
        local_558 = 0;
        local_550 = 0;
        lVar37 = *param_2;
        local_568 = 0;
        uStack_561 = 0;
        cStack_55d = 0;
        uStack_55c = 0;
        FUN_140017480(&local_568,"LIGHTS_DIRECTIONAL_SHADOW",0x19);
        piVar21 = (int *)FUN_1400f8f00(lVar37,&local_568);
        iVar8 = *piVar21;
        piVar21 = (int *)FUN_1400f8f00(lVar12,&local_528);
        iVar2 = *piVar21;
        piVar21 = (int *)FUN_1400f8f00(lVar33,&local_4e8);
        iVar3 = *piVar21;
        piVar21 = (int *)FUN_1400f8f00(lVar35,&local_450);
        iVar8 = iVar8 * 3 + iVar2 + iVar3 + *piVar21;
        if (0xf < local_550) {
          FUN_140017200(&local_568,CONCAT17((char)uStack_561,local_568));
        }
        if (0xf < local_510) {
          FUN_140017200(&local_528,local_528);
        }
        if (0xf < local_4d0) {
          FUN_140017200(&local_4e8,local_4e8);
        }
        if (0xf < local_438) {
          FUN_140017200(&local_450,local_450);
        }
        if (iVar8 != 0) {
          FUN_1400ea100(&local_568,iVar8);
          FUN_1400532a0(&local_548,"const float4x4 g_LFeature_ShadowProjection[",0x2b);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float4 g_LFeature_ShadowProjectionTransform[",0x32);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_140017240(&local_568);
        }
        local_568 = 0;
        uStack_561 = 0;
        cStack_55d = '\0';
        uStack_55c = 0;
        lVar35 = *param_2;
        local_558 = 0;
        local_550 = 0;
        FUN_140017480(&local_568,"LIGHTS_POINT_SHADOW",0x13);
        piVar21 = (int *)FUN_1400f8f00(lVar35,&local_568);
        iVar8 = *piVar21;
        if (0xf < local_550) {
          FUN_140017200(&local_568,CONCAT17((char)uStack_561,local_568));
        }
        if (iVar8 != 0) {
          FUN_1400ea100(&local_568,iVar8);
          FUN_1400532a0(&local_548,"const float4 g_LFeature_ShadowPointProjection[",0x2e);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_1400532a0(&local_548,"const float4 g_LFeature_ShadowPointProjectionTransform[",0x37);
          puVar31 = &local_568;
          if (0xf < local_550) {
            puVar31 = (undefined7 *)CONCAT17((char)uStack_561,local_568);
          }
          FUN_1400532a0(&local_548,puVar31,local_558);
          FUN_1400532a0(&local_548,&DAT_1404876a8,3);
          FUN_140017240(&local_568);
        }
        FUN_1400532a0(&local_548,&DAT_14048797c,2);
      }
      plVar11 = (longlong *)plVar10[2];
      if (*(char *)((longlong)plVar11 + 0x19) == '\0') {
        cVar7 = *(char *)(*plVar11 + 0x19);
        plVar10 = plVar11;
        while (cVar7 == '\0') {
          plVar10 = (longlong *)*plVar10;
          cVar7 = *(char *)(*plVar10 + 0x19);
        }
      }
      else {
        cVar7 = *(char *)(plVar10[1] + 0x19);
        plVar18 = (longlong *)plVar10[1];
        plVar11 = plVar10;
        while ((plVar10 = plVar18, cVar7 == '\0' && (plVar11 == (longlong *)plVar10[2]))) {
          cVar7 = *(char *)(plVar10[1] + 0x19);
          plVar18 = (longlong *)plVar10[1];
          plVar11 = plVar10;
        }
      }
    } while (*(char *)((longlong)plVar10 + 0x19) == '\0');
  }
  cVar7 = *(char *)(local_4b8[1] + 0x19);
  plVar10 = (longlong *)local_4b8[1];
  while (cVar7 == '\0') {
    FUN_1400f9fb0(&local_4b8,&local_4b8,plVar10[2]);
    plVar11 = (longlong *)*plVar10;
    thunk_FUN_14028af80(plVar10,0x20);
    plVar10 = plVar11;
    cVar7 = *(char *)((longlong)plVar11 + 0x19);
  }
  thunk_FUN_14028af80(local_4b8,0x20);
  FUN_140017240(&local_488);
  FUN_140017240(&local_4a8);
  if (0xf < local_4f0) {
    uVar16 = local_4f0 + 1;
    pppppppuVar22 = (undefined8 *******)local_508;
    if (0xfff < uVar16) {
      pppppppuVar22 = (undefined8 *******)local_508[-1];
      if (0x1f < (ulonglong)((longlong)local_508 + (-8 - (longlong)pppppppuVar22)))
      goto LAB_1400f83cd;
      uVar16 = local_4f0 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar22,uVar16);
  }
  FUN_1400f9070(param_5,0,&local_548);
  if (0xf < local_530) {
    uVar16 = local_530 + 1;
    pppppppuVar22 = (undefined8 *******)local_548;
    if (0xfff < uVar16) {
      pppppppuVar22 = (undefined8 *******)local_548[-1];
      if (0x1f < (ulonglong)((longlong)local_548 + (-8 - (longlong)pppppppuVar22)))
      goto LAB_1400f83cd;
      uVar16 = local_530 + 0x28;
    }
    thunk_FUN_14028af80(pppppppuVar22,uVar16);
  }
  local_538 = 0;
  local_530 = 0xf;
  local_548 = (undefined8 ******)((ulonglong)local_548 & 0xffffffffffffff00);
  if (0xf < local_330) {
    lVar33 = CONCAT71(uStack_347,local_348);
    uVar16 = local_330 + 1;
    lVar35 = lVar33;
    if (0xfff < uVar16) {
      lVar35 = *(longlong *)(lVar33 + -8);
      if (0x1f < (lVar33 - lVar35) - 8U) goto LAB_1400f83cd;
      uVar16 = local_330 + 0x28;
    }
    thunk_FUN_14028af80(lVar35,uVar16);
  }
  local_338 = 0;
  local_330 = 0xf;
  local_348 = 0;
  if (0xf < local_388) {
    lVar33 = CONCAT71(uStack_39f,local_3a0);
    uVar16 = local_388 + 1;
    lVar35 = lVar33;
    if (0xfff < uVar16) {
      lVar35 = *(longlong *)(lVar33 + -8);
      if (0x1f < (lVar33 - lVar35) - 8U) goto LAB_1400f83cd;
      uVar16 = local_388 + 0x28;
    }
    thunk_FUN_14028af80(lVar35,uVar16);
  }
  local_390 = 0;
  local_388 = 0xf;
  local_3a0 = 0;
  if (0xf < local_3c0) {
    lVar33 = CONCAT71(uStack_3d7,local_3d8);
    uVar16 = local_3c0 + 1;
    lVar35 = lVar33;
    if (0xfff < uVar16) {
      lVar35 = *(longlong *)(lVar33 + -8);
      if (0x1f < (lVar33 - lVar35) - 8U) goto LAB_1400f83cd;
      uVar16 = local_3c0 + 0x28;
    }
    thunk_FUN_14028af80(lVar35,uVar16);
  }
  local_3c8 = 0;
  local_3c0 = 0xf;
  local_3d8 = 0;
  FUN_1400056d0(local_228);
  FUN_1400056d0(local_328);
  if (0xf < local_418) {
    lVar33 = CONCAT71(uStack_42f,local_430);
    uVar16 = local_418 + 1;
    lVar35 = lVar33;
    if (0xfff < uVar16) {
      lVar35 = *(longlong *)(lVar33 + -8);
      if (0x1f < (lVar33 - lVar35) - 8U) goto LAB_1400f83cd;
      uVar16 = local_418 + 0x28;
    }
    thunk_FUN_14028af80(lVar35,uVar16);
  }
  local_420 = 0;
  local_418 = 0xf;
  local_430 = 0;
  FUN_14008d4b0(local_128);
  FUN_1400f8cc0(&local_380);
  FUN_1400f8cc0(&local_410);
  FUN_1400f8cc0(&local_468);
  if (local_3b8 != (int *)0x0) {
    uVar16 = local_3a8 - (longlong)local_3b8 & 0xfffffffffffffff0;
    piVar21 = local_3b8;
    if (0xfff < uVar16) {
      piVar21 = *(int **)(local_3b8 + -2);
      if (0x1f < (ulonglong)((longlong)local_3b8 + (-8 - (longlong)piVar21))) {
LAB_1400f83cd:
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        puVar34 = auStack_590;
LAB_1400f83d4:
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar34 + -8) = &UNK_1400f83e0;
        FUN_14028c310("invalid unordered_map<K, T> key");
      }
      uVar16 = uVar16 + 0x27;
    }
    thunk_FUN_14028af80(piVar21,uVar16);
  }
  return;
}

