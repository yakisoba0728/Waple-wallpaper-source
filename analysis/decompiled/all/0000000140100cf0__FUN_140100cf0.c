// Function: FUN_140100cf0
// Addr: 140100cf0
// Size: 3634 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140100cf0(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  size_t _Size;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  size_t sVar15;
  void *_Buf1;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  char *pcVar19;
  undefined1 *puVar20;
  undefined8 *_Buf1_00;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  ULONG_PTR local_res8;
  undefined8 local_res10;
  int local_res18;
  int local_res20;
  undefined1 auStackY_7c8 [8];
  undefined1 auStackY_7c0 [24];
  longlong local_788 [4];
  int local_768;
  int iStack_764;
  longlong local_760;
  char local_758 [4];
  char local_754 [2];
  undefined2 local_752;
  undefined8 local_750;
  ulonglong local_748;
  longlong local_740;
  undefined4 local_738;
  undefined2 local_734;
  undefined2 local_732;
  undefined8 local_730;
  ulonglong local_728;
  ulonglong local_720 [5];
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  ulonglong local_6e8;
  undefined8 *local_6e0;
  undefined8 local_6d8;
  longlong local_6d0;
  undefined1 local_6c8;
  undefined7 uStack_6c7;
  undefined8 local_6b8;
  ulonglong local_6b0;
  undefined1 local_6a8 [32];
  char *local_688;
  undefined2 local_680;
  undefined1 local_678 [8];
  undefined1 local_670 [16];
  undefined1 local_660 [40];
  undefined **local_638 [7];
  undefined ***local_600;
  char *local_5f8;
  undefined2 local_5f0;
  undefined1 local_5e8 [8];
  undefined1 local_5e0 [16];
  undefined1 local_5d0 [40];
  undefined **local_5a8 [7];
  undefined ***local_570;
  char *local_568;
  undefined2 local_560;
  undefined1 local_558 [8];
  undefined1 local_550 [16];
  undefined1 local_540 [40];
  undefined **local_518 [7];
  undefined ***local_4e0;
  char *local_4d8;
  undefined2 local_4d0;
  undefined1 local_4c8 [8];
  undefined1 local_4c0 [16];
  undefined1 local_4b0 [40];
  undefined **local_488 [7];
  undefined ***local_450;
  char *local_448;
  undefined2 local_440;
  undefined1 local_438 [8];
  undefined1 local_430 [16];
  undefined1 local_420 [40];
  undefined **local_3f8 [7];
  undefined ***local_3c0;
  undefined1 local_3b8 [32];
  undefined1 local_398 [144];
  undefined1 local_308 [32];
  undefined1 local_2e8 [144];
  undefined1 local_258 [32];
  undefined1 local_238 [144];
  undefined1 local_1a8 [32];
  undefined1 local_188 [144];
  undefined1 local_f8 [32];
  undefined1 local_d8 [144];
  undefined1 local_48 [8];
  
  puVar20 = auStackY_7c8;
  uVar17 = *(ulonglong *)(param_1 + 0x118);
  puVar8 = (undefined8 *)(param_1 + 0x100);
  sVar15 = *(size_t *)(param_1 + 0x110);
  if (0xf < uVar17) {
    puVar8 = (undefined8 *)*puVar8;
  }
  _Size = *(size_t *)(param_1 + 0x290);
  if (*(ulonglong *)(param_1 + 0x298) < 0x10) {
    _Buf1 = (void *)(param_1 + 0x280);
  }
  else {
    _Buf1 = *(void **)(param_1 + 0x280);
  }
  local_res10 = param_2;
  if ((_Size != sVar15) || ((_Size != 0 && (iVar6 = memcmp(_Buf1,puVar8,_Size), iVar6 != 0)))) {
    puVar8 = (undefined8 *)(param_1 + 0x100);
    if (param_1 != param_1 + -0x180) {
      if (0xf < uVar17) {
        puVar8 = (undefined8 *)*puVar8;
      }
      FUN_14000f880(param_1 + 0x280,puVar8,sVar15);
    }
    *(undefined4 *)(param_1 + 0x278) = 0;
    FUN_140039d70(param_1 + 0x2a0);
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    puVar8 = (undefined8 *)(param_1 + 0x2e0);
    if (0xf < *(ulonglong *)(param_1 + 0x2f8)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    *(undefined1 *)puVar8 = 0;
  }
  iVar7 = 1;
  LOCK();
  iVar6 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  plVar2 = ThreadLocalStoragePointer;
  while (ThreadLocalStoragePointer = plVar2, iVar6 != 0) {
    iVar6 = *(int *)(param_1 + 0x140);
    while (iVar6 != 0) {
      iVar6 = iVar7;
      if (iVar7 == 0) {
LAB_140100e09:
        iVar7 = iVar7 * 2;
      }
      else {
        do {
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (iVar7 < 0x40) goto LAB_140100e09;
        iVar7 = 0x40;
      }
      iVar6 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar6 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
    plVar2 = ThreadLocalStoragePointer;
  }
  local_res8._0_4_ = *(int *)(param_1 + 0x14c);
  local_res18 = *(int *)(param_1 + 0x150);
  iVar6 = *(int *)(param_1 + 0x144);
  iVar7 = *(int *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if ((*(int *)(*plVar2 + 0x130) < DAT_1404e9240) &&
     (FUN_14028b140(&DAT_1404e9240), DAT_1404e9240 == -1)) {
    local_788[2] = 8;
    local_788[0]._0_1_ = s_mfEngine_140476f30[0];
    local_788[0]._1_1_ = s_mfEngine_140476f30[1];
    local_788[0]._2_1_ = s_mfEngine_140476f30[2];
    local_788[0]._3_1_ = s_mfEngine_140476f30[3];
    local_788[0]._4_1_ = s_mfEngine_140476f30[4];
    local_788[0]._5_1_ = s_mfEngine_140476f30[5];
    local_788[0]._6_1_ = s_mfEngine_140476f30[6];
    local_788[0]._7_1_ = s_mfEngine_140476f30[7];
    local_448 = "Media Engine Dx11";
    local_788[3] = 0xf;
    local_788[1] = 0;
    local_440 = 0x101;
    FUN_1400316b0(local_438);
    local_3f8[0] = &PTR_LAB_140488940;
    local_3c0 = local_3f8;
    FUN_140016fc0(local_3b8,local_788);
    FUN_1401036b0(local_398,&local_448);
    local_758[0] = s_mfEngine_muted_1404884b0[8];
    local_758[1] = s_mfEngine_muted_1404884b0[9];
    local_758[2] = s_mfEngine_muted_1404884b0[10];
    local_758[3] = s_mfEngine_muted_1404884b0[0xb];
    local_754[0] = s_mfEngine_muted_1404884b0[0xc];
    local_754[1] = s_mfEngine_muted_1404884b0[0xd];
    local_4d8 = "Media Engine Dx11 (muted)";
    local_752 = 0;
    local_750 = 0xe;
    local_748 = 0xf;
    local_760._0_1_ = s_mfEngine_muted_1404884b0[0];
    local_760._1_1_ = s_mfEngine_muted_1404884b0[1];
    local_760._2_1_ = s_mfEngine_muted_1404884b0[2];
    local_760._3_1_ = s_mfEngine_muted_1404884b0[3];
    local_760._4_1_ = s_mfEngine_muted_1404884b0[4];
    local_760._5_1_ = s_mfEngine_muted_1404884b0[5];
    local_760._6_1_ = s_mfEngine_muted_1404884b0[6];
    local_760._7_1_ = s_mfEngine_muted_1404884b0[7];
    local_4d0 = 0x101;
    FUN_1400316b0(local_4c8);
    local_488[0] = &PTR_LAB_1404888b0;
    local_450 = local_488;
    FUN_140016fc0(local_308,&local_760);
    FUN_1401036b0(local_2e8,&local_4d8);
    local_720[2] = 2;
    local_720[1] = 0;
    local_568 = "Media Foundation";
    local_720[3] = 0xf;
    local_720[0] = (ulonglong)DAT_140476d00;
    local_560 = 1;
    FUN_1400316b0(local_558);
    local_518[0] = &PTR_LAB_140488880;
    local_4e0 = local_518;
    FUN_140016fc0(local_258,local_720);
    FUN_1401036b0(local_238,&local_568);
    local_6f0 = 8;
    local_720[4]._0_1_ = s_mf_muted_1404884c0[0];
    local_720[4]._1_1_ = s_mf_muted_1404884c0[1];
    local_720[4]._2_1_ = s_mf_muted_1404884c0[2];
    local_720[4]._3_1_ = s_mf_muted_1404884c0[3];
    local_720[4]._4_1_ = s_mf_muted_1404884c0[4];
    local_720[4]._5_1_ = s_mf_muted_1404884c0[5];
    local_720[4]._6_1_ = s_mf_muted_1404884c0[6];
    local_720[4]._7_1_ = s_mf_muted_1404884c0[7];
    local_5f8 = "Media Foundation (muted)";
    local_6e8 = 0xf;
    uStack_6f8 = 0;
    local_5f0 = 1;
    FUN_1400316b0(local_5e8);
    local_5a8[0] = &PTR_LAB_140488910;
    local_570 = local_5a8;
    FUN_140016fc0(local_1a8,local_720 + 4);
    FUN_1401036b0(local_188,&local_5f8);
    local_738 = DAT_1404884d8;
    local_734 = DAT_1404884dc;
    local_688 = "DirectShow, LAV, VMR9";
    local_732 = 0;
    local_730 = 0xe;
    local_728 = 0xf;
    local_740 = DAT_1404884d0;
    local_680 = 0;
    FUN_1400316b0(local_678);
    local_638[0] = &PTR_LAB_1404888e0;
    local_600 = local_638;
    FUN_140016fc0(local_f8,&local_740);
    FUN_1401036b0(local_d8,&local_688);
    DAT_1404e9250 = 0;
    DAT_1404e9258 = 0;
    DAT_1404e9260 = 0;
    DAT_1404e9258 = FUN_14028af20(0xc0);
    *(longlong *)DAT_1404e9258 = DAT_1404e9258;
    *(longlong *)(DAT_1404e9258 + 8) = DAT_1404e9258;
    DAT_1404e9268 = 0;
    _DAT_1404e9270 = 0;
    uRam00000001404e9278 = 0;
    DAT_1404e9280 = 7;
    DAT_1404e9288 = 8;
    DAT_1404e9250 = 0x3f800000;
    uVar23 = FUN_1400374c0(&DAT_1404e9268,0x10,DAT_1404e9258);
    FUN_1401039b0(uVar23,local_3b8,local_48);
    FUN_140101b30(local_d8);
    FUN_140017240(local_f8);
    FUN_140101b30(local_188);
    FUN_140017240(local_1a8);
    FUN_140101b30(local_238);
    FUN_140017240(local_258);
    FUN_140101b30(local_2e8);
    FUN_140017240(local_308);
    FUN_140101b30(local_398);
    FUN_140017240(local_3b8);
    if (local_600 != (undefined ***)0x0) {
      (*(code *)(*local_600)[4])
                (local_600,CONCAT71((int7)((ulonglong)local_638 >> 8),local_600 != local_638));
      local_600 = (undefined ***)0x0;
    }
    FUN_14000d9e0(local_660);
    FUN_140031340(local_670);
    if (0xf < local_728) {
      uVar17 = local_728 + 1;
      lVar9 = local_740;
      if (0xfff < uVar17) {
        lVar9 = *(longlong *)(local_740 + -8);
        if (0x1f < (local_740 - lVar9) - 8U) goto LAB_1401014c1;
        uVar17 = local_728 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar17);
    }
    if (local_570 != (undefined ***)0x0) {
      (*(code *)(*local_570)[4])
                (local_570,CONCAT71((int7)((ulonglong)local_5a8 >> 8),local_570 != local_5a8));
      local_570 = (undefined ***)0x0;
    }
    FUN_14000d9e0(local_5d0);
    FUN_140031340(local_5e0);
    if (0xf < local_6e8) {
      uVar22 = local_6e8 + 1;
      uVar17 = local_720[4];
      if (0xfff < uVar22) {
        uVar17 = *(longlong *)(local_720[4] + -8);
        if (0x1f < (local_720[4] - uVar17) - 8) goto LAB_1401014c1;
        uVar22 = local_6e8 + 0x28;
      }
      thunk_FUN_14028af80(uVar17,uVar22);
    }
    if (local_4e0 != (undefined ***)0x0) {
      (*(code *)(*local_4e0)[4])
                (local_4e0,CONCAT71((int7)((ulonglong)local_518 >> 8),local_4e0 != local_518));
      local_4e0 = (undefined ***)0x0;
    }
    FUN_14000d9e0(local_540);
    FUN_140031340(local_550);
    if (0xf < local_720[3]) {
      uVar22 = local_720[3] + 1;
      uVar17 = local_720[0];
      if (0xfff < uVar22) {
        uVar17 = *(ulonglong *)(local_720[0] - 8);
        if (0x1f < (local_720[0] - uVar17) - 8) goto LAB_1401014c1;
        uVar22 = local_720[3] + 0x28;
      }
      thunk_FUN_14028af80(uVar17,uVar22);
    }
    if (local_450 != (undefined ***)0x0) {
      (*(code *)(*local_450)[4])
                (local_450,CONCAT71((int7)((ulonglong)local_488 >> 8),local_450 != local_488));
      local_450 = (undefined ***)0x0;
    }
    FUN_14000d9e0(local_4b0);
    FUN_140031340(local_4c0);
    if (0xf < local_748) {
      uVar17 = local_748 + 1;
      lVar9 = local_760;
      if (0xfff < uVar17) {
        lVar9 = *(longlong *)(local_760 + -8);
        if (0x1f < (local_760 - lVar9) - 8U) goto LAB_1401014c1;
        uVar17 = local_748 + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar17);
    }
    if (local_3c0 != (undefined ***)0x0) {
      (*(code *)(*local_3c0)[4])
                (local_3c0,CONCAT71((int7)((ulonglong)local_3f8 >> 8),local_3c0 != local_3f8));
      local_3c0 = (undefined ***)0x0;
    }
    FUN_14000d9e0(local_420);
    FUN_140031340(local_430);
    if (0xf < (ulonglong)local_788[3]) {
      uVar17 = local_788[3] + 1;
      lVar9 = local_788[0];
      if (0xfff < uVar17) {
        lVar9 = *(longlong *)(local_788[0] + -8);
        if (0x1f < (local_788[0] - lVar9) - 8U) {
LAB_1401014c1:
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)(5);
          puVar20 = auStackY_7c0;
LAB_1401014c8:
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar20 + -8) = &UNK_1401014cd;
          FUN_14028c2c0();
        }
        uVar17 = local_788[3] + 0x28;
      }
      thunk_FUN_14028af80(lVar9,uVar17);
    }
    FUN_14028b410(FUN_140424980);
    _Init_thread_footer(&DAT_1404e9240);
  }
  if (*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 5 != 0) {
    local_res8._0_4_ = (int)local_res8 - iVar6;
    local_res20 = 0;
    local_res18 = local_res18 - iVar7;
    do {
      iVar6 = local_res20;
      plVar2 = *(longlong **)(param_1 + 0x160);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
        *(longlong *)(param_1 + 0x160) = 0;
      }
      uVar21 = 0xcbf29ce484222325;
      _Buf1_00 = (undefined8 *)((longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 0x260));
      uVar17 = _Buf1_00[3];
      uVar22 = _Buf1_00[2];
      puVar8 = _Buf1_00;
      if (0xf < uVar17) {
        puVar8 = (undefined8 *)*_Buf1_00;
      }
      uVar16 = 0;
      if (uVar22 != 0) {
        do {
          pbVar1 = (byte *)((longlong)puVar8 + uVar16);
          uVar16 = uVar16 + 1;
          uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
        } while (uVar16 < uVar22);
      }
      lVar9 = FUN_1400110a0(param_1 + 0x2a0,local_720,_Buf1_00,uVar21);
      if ((*(longlong *)(lVar9 + 8) == 0) ||
         (*(longlong *)(lVar9 + 8) == *(longlong *)(param_1 + 0x2a8))) {
        puVar8 = _Buf1_00;
        if (0xf < uVar17) {
          puVar8 = (undefined8 *)*_Buf1_00;
        }
        uVar17 = 0;
        uVar21 = 0xcbf29ce484222325;
        if (uVar22 != 0) {
          do {
            pbVar1 = (byte *)(uVar17 + (longlong)puVar8);
            uVar17 = uVar17 + 1;
            uVar21 = (uVar21 ^ *pbVar1) * 0x100000001b3;
          } while (uVar17 < uVar22);
        }
        lVar10 = FUN_1401038d0(uVar17,local_720 + 4,_Buf1_00,uVar21);
        uVar12 = local_res10;
        lVar9 = DAT_1404e9258;
        if (*(longlong *)(lVar10 + 8) != 0) {
          lVar9 = *(longlong *)(lVar10 + 8);
        }
        if ((lVar9 != DAT_1404e9258) &&
           (((*(uint *)(param_1 + 0x17c) >> 6 & 1) == 0 || (*(char *)(lVar9 + 0x38) == '\0')))) {
          uVar11 = FUN_1402d6aa0();
          local_788[2] = 0;
          local_788[3] = 0;
          local_788[0] = 0;
          local_788[1] = 0;
          FUN_140016170(local_788,uVar12,uVar11);
          uVar12 = FUN_140053f80(local_788,local_6a8);
          puVar13 = (undefined8 *)FUN_140018ce0(uVar12);
          puVar8 = puVar13;
          if (0xf < (ulonglong)puVar13[3]) {
            puVar8 = (undefined8 *)*puVar13;
          }
          uVar17 = 0;
          uVar22 = 0xcbf29ce484222325;
          if (puVar13[2] != 0) {
            do {
              pbVar1 = (byte *)((longlong)puVar8 + uVar17);
              uVar17 = uVar17 + 1;
              uVar22 = (uVar22 ^ *pbVar1) * 0x100000001b3;
            } while (uVar17 < (ulonglong)puVar13[2]);
          }
          puVar8 = (undefined8 *)(param_1 + 0x160);
          lVar10 = FUN_1400110a0(lVar9 + 0x40,&local_760,puVar13,uVar22);
          lVar10 = *(longlong *)(lVar10 + 8);
          if (lVar10 == 0) {
            lVar10 = *(longlong *)(lVar9 + 0x48);
          }
          lVar3 = *(longlong *)(lVar9 + 0x48);
          if (0xf < local_6b0) {
            lVar5 = CONCAT71(uStack_6c7,local_6c8);
            uVar17 = local_6b0 + 1;
            lVar18 = lVar5;
            if (0xfff < uVar17) {
              lVar18 = *(longlong *)(lVar5 + -8);
              if (0x1f < (lVar5 - lVar18) - 8U) goto LAB_1401014c1;
              uVar17 = local_6b0 + 0x28;
            }
            thunk_FUN_14028af80(lVar18,uVar17);
          }
          local_6b8 = 0;
          local_6b0 = 0xf;
          local_6c8 = 0;
          FUN_140016770(local_6a8);
          if (7 < (ulonglong)local_788[3]) {
            uVar17 = local_788[3] * 2 + 2;
            lVar18 = local_788[0];
            if (0xfff < uVar17) {
              lVar18 = *(longlong *)(local_788[0] + -8);
              if (0x1f < (local_788[0] - lVar18) - 8U) goto LAB_1401014c1;
              uVar17 = local_788[3] * 2 + 0x29;
            }
            thunk_FUN_14028af80(lVar18,uVar17);
          }
          if (lVar10 == lVar3) {
            if ((undefined8 *)(param_1 + 0x2e0) != _Buf1_00) {
              puVar13 = _Buf1_00;
              if (0xf < (ulonglong)_Buf1_00[3]) {
                puVar13 = (undefined8 *)*_Buf1_00;
              }
              FUN_14000f880((undefined8 *)(param_1 + 0x2e0),puVar13,_Buf1_00[2]);
            }
            FUN_1400ff350(param_1,*(undefined1 *)(lVar9 + 0x39));
            plVar2 = *(longlong **)(lVar9 + 0xb8);
            local_6d8 = *(undefined8 *)(param_1 + 0x168);
            local_6e0 = puVar8;
            local_6d0 = param_1;
            if (plVar2 == (longlong *)0x0) goto LAB_1401014c8;
            iVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,&local_6d0,&local_6d8,&local_6e0);
            if (iVar6 < 0) {
              pcVar19 = "Failed creating video player (%s): %x\n";
LAB_14010132f:
              FUN_140098760(pcVar19,*(undefined8 *)(lVar9 + 0x30),iVar6);
            }
            else {
              if (*(char *)(param_1 + 9) == '\0') {
                uVar23 = *(undefined4 *)(param_1 + 0x174);
              }
              else {
                uVar23 = 0;
              }
              *(undefined4 *)(param_1 + 0x170) = uVar23;
              (**(code **)(*(longlong *)*puVar8 + 0x30))();
              (**(code **)(*(longlong *)*puVar8 + 0x38))();
              (**(code **)(*(longlong *)*puVar8 + 0x40))
                        ((longlong *)*puVar8,*(undefined4 *)(param_1 + 0x180),param_1 + 0x184,
                         *(undefined4 *)(param_1 + 0x194));
              (**(code **)(*(longlong *)*puVar8 + 0x58))
                        ((longlong *)*puVar8,*(undefined4 *)(param_1 + 0x198));
              (**(code **)(*(longlong *)*puVar8 + 0x60))
                        ((longlong *)*puVar8,*(undefined4 *)(param_1 + 0x19c));
              (**(code **)(*(longlong *)*puVar8 + 0x68))
                        ((longlong *)*puVar8,*(uint *)(param_1 + 0x17c) >> 3 & 0xffffff01);
              (**(code **)(*(longlong *)*puVar8 + 0x70))
                        ((longlong *)*puVar8,*(uint *)(param_1 + 0x17c) >> 4 & 0xffffff01);
              puVar13 = (undefined8 *)*puVar8;
              pcVar4 = *(code **)*puVar13;
              puVar14 = (undefined8 *)FUN_140005880(local_6a8,param_1 + 0x100);
              if (7 < (ulonglong)puVar14[3]) {
                puVar14 = (undefined8 *)*puVar14;
              }
              iVar6 = (*pcVar4)(puVar13,puVar14);
              FUN_140016770(local_6a8);
              if (-1 < iVar6) {
                local_768 = (int)local_res8;
                iStack_764 = local_res18;
                iVar6 = (**(code **)(*(longlong *)*puVar8 + 0xa8))
                                  ((longlong *)*puVar8,CONCAT44(local_res18,(int)local_res8));
                if (iVar6 < 0) {
                  pcVar19 = "Failed resizing video (%s): %x\n";
                  goto LAB_14010132f;
                }
                break;
              }
              if (*(ulonglong *)(param_1 + 0x118) < 0x10) {
                lVar10 = param_1 + 0x100;
              }
              else {
                lVar10 = *(longlong *)(param_1 + 0x100);
              }
              FUN_140098760("Failed opening video (%s): %s, %x\n",*(undefined8 *)(lVar9 + 0x30),
                            lVar10,iVar6);
            }
            pcVar19 = *(char **)(lVar9 + 0x30);
            local_788[2] = 0;
            local_788[3] = 0;
            local_788[0] = 0;
            local_788[1] = 0;
            sVar15 = strlen(pcVar19);
            FUN_140017480(local_788,pcVar19,sVar15);
            FUN_140031430(param_1 + 0x2a0,&local_740,local_788);
            if (0xf < (ulonglong)local_788[3]) {
              uVar17 = local_788[3] + 1;
              lVar9 = local_788[0];
              if (0xfff < uVar17) {
                lVar9 = *(longlong *)(local_788[0] + -8);
                if (0x1f < (local_788[0] - lVar9) - 8U) goto LAB_1401014c1;
                uVar17 = local_788[3] + 0x28;
              }
              thunk_FUN_14028af80(lVar9,uVar17);
            }
            uVar17 = _Buf1_00[3];
            lVar9 = _Buf1_00[2];
            puVar8 = _Buf1_00;
            if (0xf < uVar17) {
              puVar8 = (undefined8 *)*_Buf1_00;
            }
            if ((lVar9 != 2) || (iVar7 = memcmp(puVar8,&DAT_140476d00,2), iVar7 != 0)) {
              if (0xf < uVar17) {
                _Buf1_00 = (undefined8 *)*_Buf1_00;
              }
              if ((lVar9 != 8) || (iVar7 = memcmp(_Buf1_00,"mfEngine",8), iVar7 != 0))
              goto LAB_14010141d;
            }
            *(int *)(param_1 + 0x278) = iVar6;
          }
          else {
            *(undefined4 *)(param_1 + 0x278) = 0x80004005;
          }
        }
      }
LAB_14010141d:
      local_res20 = local_res20 + 1;
    } while ((ulonglong)(longlong)local_res20 <
             (ulonglong)(*(longlong *)(param_1 + 0x268) - *(longlong *)(param_1 + 0x260) >> 5));
  }
  if (((*(longlong *)(param_1 + 0x160) == 0) && (*(int *)(param_1 + 0x278) < 0)) &&
     (*(HWND *)(param_1 + 0x68) != (HWND)0x0)) {
    local_res8 = 0;
    SendMessageTimeoutW(*(HWND *)(param_1 + 0x68),0x407,2,(longlong)*(int *)(param_1 + 0x278),1,0,
                        &local_res8);
  }
  return;
}

