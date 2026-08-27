// Function: FUN_140199780
// Addr: 140199780
// Size: 7511 bytes


undefined * FUN_140199780(ulonglong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined2 uVar8;
  undefined7 uVar9;
  char *pcVar10;
  undefined *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong local_res8 [4];
  longlong local_78 [2];
  undefined2 local_68;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  undefined1 uStack_59;
  undefined8 local_58;
  ulonglong local_50;
  
  local_res8[0] = param_1;
  FUN_140153760(&DAT_1404e81c0);
  local_58 = 5;
  cStack_62 = '\0';
  cStack_61 = '\0';
  cStack_60 = '\0';
  cStack_5f = '\0';
  cStack_5e = '\0';
  cStack_5d = '\0';
  cStack_5c = '\0';
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_59 = 0;
  local_68 = (undefined2)s_bloom_140489120._0_4_;
  cStack_66 = SUB41(s_bloom_140489120._0_4_,2);
  cStack_65 = SUB41(s_bloom_140489120._0_4_,3);
  cStack_64 = s_bloom_140489120[4];
  local_50 = 0xf;
  cStack_63 = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloom",5);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x38) = FUN_14019b4e0;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(code **)(lVar12 + 0x40) = FUN_14019b5b0;
  local_58 = 3;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019b6b0;
  local_50 = 0xf;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019b6e0;
  cStack_64 = '\0';
  cStack_63 = '\0';
  cStack_62 = '\0';
  cStack_61 = '\0';
  cStack_60 = '\0';
  cStack_5f = '\0';
  cStack_5e = '\0';
  cStack_5d = '\0';
  cStack_5c = '\0';
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_59 = 0;
  local_68 = (undefined2)DAT_1404890e8;
  cStack_66 = (char)((uint)DAT_1404890e8 >> 0x10);
  *(undefined8 *)(lVar12 + 0x58) = 0;
  cStack_65 = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,&DAT_1404890e8,3);
  uVar3 = s_bloomstrength_14048e380._0_8_;
  *(code **)(lVar12 + 0x38) = FUN_14019b6f0;
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x40) = FUN_14019b7c0;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019b8c0;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019b900;
  cStack_60 = (char)s_bloomstrength_14048e380._8_4_;
  cStack_5f = SUB41(s_bloomstrength_14048e380._8_4_,1);
  cStack_5e = SUB41(s_bloomstrength_14048e380._8_4_,2);
  cStack_5d = SUB41(s_bloomstrength_14048e380._8_4_,3);
  cStack_5c = s_bloomstrength_14048e380[0xc];
  cStack_5a = '\0';
  uStack_59 = 0;
  local_58 = 0xd;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  cStack_5b = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloomstrength",0xd);
  uVar3 = s_bloomthreshold_14048e3a8._0_8_;
  cStack_60 = (char)s_bloomthreshold_14048e3a8._8_4_;
  cStack_5f = SUB41(s_bloomthreshold_14048e3a8._8_4_,1);
  cStack_5e = SUB41(s_bloomthreshold_14048e3a8._8_4_,2);
  cStack_5d = SUB41(s_bloomthreshold_14048e3a8._8_4_,3);
  cStack_5c = (char)s_bloomthreshold_14048e3a8._12_2_;
  cStack_5b = SUB21(s_bloomthreshold_14048e3a8._12_2_,1);
  *(undefined4 *)(lVar12 + 0x34) = 0x3bc;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863e0;
  cStack_5a = '\0';
  uStack_59 = 0;
  local_58 = 0xe;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloomthreshold",0xe);
  *(undefined4 *)(lVar12 + 0x34) = 0x3c0;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = '\0';
  cStack_5f = '\0';
  cStack_5e = '\0';
  cStack_5d = '\0';
  cStack_5c = '\0';
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_59 = 0;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863e0;
  local_58 = 0;
  local_50 = 0;
  pcVar10 = (char *)FUN_14028af20(0x20);
  uVar6 = s_bloomhdrstrength_14048e728._12_4_;
  uVar5 = s_bloomhdrstrength_14048e728._8_4_;
  uVar4 = s_bloomhdrstrength_14048e728._4_4_;
  local_68 = SUB82(pcVar10,0);
  cStack_66 = (char)((ulonglong)pcVar10 >> 0x10);
  cStack_65 = (char)((ulonglong)pcVar10 >> 0x18);
  cStack_64 = (char)((ulonglong)pcVar10 >> 0x20);
  cStack_63 = (char)((ulonglong)pcVar10 >> 0x28);
  cStack_62 = (char)((ulonglong)pcVar10 >> 0x30);
  cStack_61 = (char)((ulonglong)pcVar10 >> 0x38);
  local_58 = 0x10;
  local_50 = 0x1f;
  *(undefined4 *)pcVar10 = s_bloomhdrstrength_14048e728._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  pcVar10[0x10] = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloomhdrstrength",0x10);
  *(undefined4 *)(lVar12 + 0x34) = 0x3c4;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = '\0';
  cStack_5f = '\0';
  cStack_5e = '\0';
  cStack_5d = '\0';
  cStack_5c = '\0';
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_59 = 0;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863e0;
  local_58 = 0;
  local_50 = 0;
  pcVar10 = (char *)FUN_14028af20(0x20);
  cVar7 = s_bloomhdrthreshold_14048e710[0x10];
  uVar6 = s_bloomhdrthreshold_14048e710._12_4_;
  uVar5 = s_bloomhdrthreshold_14048e710._8_4_;
  uVar4 = s_bloomhdrthreshold_14048e710._4_4_;
  local_68 = SUB82(pcVar10,0);
  cStack_66 = (char)((ulonglong)pcVar10 >> 0x10);
  cStack_65 = (char)((ulonglong)pcVar10 >> 0x18);
  cStack_64 = (char)((ulonglong)pcVar10 >> 0x20);
  cStack_63 = (char)((ulonglong)pcVar10 >> 0x28);
  cStack_62 = (char)((ulonglong)pcVar10 >> 0x30);
  cStack_61 = (char)((ulonglong)pcVar10 >> 0x38);
  local_58 = 0x11;
  local_50 = 0x1f;
  *(undefined4 *)pcVar10 = s_bloomhdrthreshold_14048e710._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  pcVar10[0x10] = cVar7;
  pcVar10[0x11] = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloomhdrthreshold",0x11);
  uVar3 = s_bloomhdrfeather_14048e790._0_8_;
  cStack_60 = (char)s_bloomhdrfeather_14048e790._8_4_;
  cStack_5f = SUB41(s_bloomhdrfeather_14048e790._8_4_,1);
  cStack_5e = SUB41(s_bloomhdrfeather_14048e790._8_4_,2);
  cStack_5d = SUB41(s_bloomhdrfeather_14048e790._8_4_,3);
  cStack_5c = (char)s_bloomhdrfeather_14048e790._12_2_;
  cStack_5b = SUB21(s_bloomhdrfeather_14048e790._12_2_,1);
  cStack_5a = s_bloomhdrfeather_14048e790[0xe];
  *(undefined4 *)(lVar12 + 0x34) = 0x3c8;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863e0;
  local_58 = 0xf;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  uStack_59 = 0;
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloomhdrfeather",0xf);
  uVar3 = s_bloomhdrscatter_14048e780._0_8_;
  cStack_60 = (char)s_bloomhdrscatter_14048e780._8_4_;
  cStack_5f = SUB41(s_bloomhdrscatter_14048e780._8_4_,1);
  cStack_5e = SUB41(s_bloomhdrscatter_14048e780._8_4_,2);
  cStack_5d = SUB41(s_bloomhdrscatter_14048e780._8_4_,3);
  cStack_5c = (char)s_bloomhdrscatter_14048e780._12_2_;
  cStack_5b = SUB21(s_bloomhdrscatter_14048e780._12_2_,1);
  cStack_5a = s_bloomhdrscatter_14048e780[0xe];
  *(undefined4 *)(lVar12 + 0x34) = 0x3cc;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863e0;
  local_58 = 0xf;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  uStack_59 = 0;
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloomhdrscatter",0xf);
  *(undefined4 *)(lVar12 + 0x34) = 0x3d0;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = '\0';
  cStack_5f = '\0';
  cStack_5e = '\0';
  cStack_5d = '\0';
  cStack_5c = '\0';
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863e0;
  local_58 = 0;
  local_50 = 0;
  local_res8[0] = 0x1f;
  pcVar10 = (char *)FUN_1400173f0(&local_68,local_res8);
  uVar8 = s_bloomhdriterations_14048e768._16_2_;
  uVar6 = s_bloomhdriterations_14048e768._12_4_;
  uVar5 = s_bloomhdriterations_14048e768._8_4_;
  uVar4 = s_bloomhdriterations_14048e768._4_4_;
  local_50 = local_res8[0];
  local_68 = SUB82(pcVar10,0);
  cStack_66 = (char)((ulonglong)pcVar10 >> 0x10);
  cStack_65 = (char)((ulonglong)pcVar10 >> 0x18);
  cStack_64 = (char)((ulonglong)pcVar10 >> 0x20);
  cStack_63 = (char)((ulonglong)pcVar10 >> 0x28);
  cStack_62 = (char)((ulonglong)pcVar10 >> 0x30);
  cStack_61 = (char)((ulonglong)pcVar10 >> 0x38);
  local_58 = 0x12;
  *(undefined4 *)pcVar10 = s_bloomhdriterations_14048e768._0_4_;
  *(undefined4 *)(pcVar10 + 4) = uVar4;
  *(undefined4 *)(pcVar10 + 8) = uVar5;
  *(undefined4 *)(pcVar10 + 0xc) = uVar6;
  *(undefined2 *)(pcVar10 + 0x10) = uVar8;
  pcVar10[0x12] = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloomhdriterations",0x12);
  *(undefined4 *)(lVar12 + 0x34) = 0x3d4;
  cStack_5e = '\0';
  cStack_5d = '\0';
  cStack_5c = '\0';
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_59 = 0;
  *(undefined4 *)(lVar12 + 0x30) = 0;
  uVar3 = s_bloomtint_14048e368._0_8_;
  *(code **)(lVar12 + 0x38) = FUN_1401a4930;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863e0;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_58 = 9;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  cStack_60 = s_bloomtint_14048e368[8];
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  cStack_5f = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"bloomtint",9);
  *(undefined4 *)(lVar12 + 0x34) = 0x3d8;
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_59 = 0;
  *(undefined4 *)(lVar12 + 0x30) = 2;
  uVar3 = s_clearenabled_14048e758._0_8_;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a4530;
  *(code **)(lVar12 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4560;
  cStack_60 = (char)s_clearenabled_14048e758._8_4_;
  cStack_5f = SUB41(s_clearenabled_14048e758._8_4_,1);
  cStack_5e = SUB41(s_clearenabled_14048e758._8_4_,2);
  cStack_5d = SUB41(s_clearenabled_14048e758._8_4_,3);
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863e0;
  local_58 = 0xc;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  cStack_5c = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) goto LAB_14019b4cf;
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"clearenabled",0xc);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  cStack_5d = '\0';
  cStack_5c = '\0';
  cStack_5b = '\0';
  cStack_5a = '\0';
  uStack_59 = 0;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  uVar3 = s_clearcolor_14048e7d0._0_8_;
  *(code **)(lVar12 + 0x38) = FUN_14019b920;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(code **)(lVar12 + 0x40) = FUN_14019b9f0;
  local_58 = 10;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019baf0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019bb20;
  cStack_60 = (char)s_clearcolor_14048e7d0._8_2_;
  cStack_5f = SUB21(s_clearcolor_14048e7d0._8_2_,1);
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  cStack_5e = '\0';
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    lVar2 = CONCAT17(cStack_61,
                     CONCAT16(cStack_62,
                              CONCAT15(cStack_63,
                                       CONCAT14(cStack_64,
                                                CONCAT13(cStack_65,CONCAT12(cStack_66,local_68))))))
    ;
    uVar13 = local_50 + 1;
    lVar12 = lVar2;
    if (0xfff < uVar13) {
      lVar12 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar12) - 8U) {
LAB_14019b4cf:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        puVar11 = (undefined *)(*pcVar1)();
        return puVar11;
      }
      uVar13 = local_50 + 0x28;
    }
    thunk_FUN_14028af80(lVar12,uVar13);
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"clearcolor",10);
  *(undefined4 *)(lVar12 + 0x34) = 0x35c;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined4 *)(lVar12 + 0x30) = 2;
  uVar3 = s_ambientcolor_14048e7c0._0_8_;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4560;
  uVar4 = s_ambientcolor_14048e7c0._8_4_;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  *(code **)(lVar12 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a4530;
  local_58 = 0xc;
  local_50 = 0xf;
  cStack_60 = (char)uVar4;
  cStack_5f = SUB41(uVar4,1);
  cStack_5e = SUB41(uVar4,2);
  cStack_5d = SUB41(uVar4,3);
  cStack_5c = 0;
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"ambientcolor",0xc);
  uVar3 = s_skylightcolor_14048e7b0._0_8_;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4560;
  cStack_60 = (char)s_skylightcolor_14048e7b0._8_4_;
  cStack_5f = SUB41(s_skylightcolor_14048e7b0._8_4_,1);
  cStack_5e = SUB41(s_skylightcolor_14048e7b0._8_4_,2);
  cStack_5d = SUB41(s_skylightcolor_14048e7b0._8_4_,3);
  cStack_5c = s_skylightcolor_14048e7b0[0xc];
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a4530;
  *(undefined4 *)(lVar12 + 0x34) = 0x368;
  *(undefined4 *)(lVar12 + 0x30) = 2;
  *(code **)(lVar12 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863f0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_58 = 0xd;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  cStack_5b = 0;
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"skylightcolor",0xd);
  uVar9 = s_fogdistance_14048e7a0._0_7_;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a4530;
  local_68 = (undefined2)uVar9;
  cStack_66 = SUB71(uVar9,2);
  cStack_65 = SUB71(uVar9,3);
  cStack_64 = SUB71(uVar9,4);
  cStack_63 = SUB71(uVar9,5);
  cStack_62 = SUB71(uVar9,6);
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4560;
  cStack_61 = (char)s_fogdistance_14048e7a0._7_4_;
  cStack_60 = SUB41(s_fogdistance_14048e7a0._7_4_,1);
  cStack_5f = SUB41(s_fogdistance_14048e7a0._7_4_,2);
  cStack_5e = SUB41(s_fogdistance_14048e7a0._7_4_,3);
  *(undefined4 *)(lVar12 + 0x34) = 0x374;
  *(undefined4 *)(lVar12 + 0x30) = 2;
  *(code **)(lVar12 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar12 + 0x58) = &LAB_1401863f0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_58 = 0xb;
  local_50 = 0xf;
  cStack_5d = 0;
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogdistance",0xb);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  uVar3 = s_fogheight_14048e820._0_8_;
  *(code **)(lVar12 + 0x38) = FUN_14019bb40;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  *(code **)(lVar12 + 0x40) = FUN_14019bc10;
  local_58 = 9;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019bd10;
  local_50 = 0xf;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019bd50;
  cStack_60 = s_fogheight_14048e820[8];
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  cStack_5f = 0;
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogheight",9);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x38) = FUN_14019bd70;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(code **)(lVar12 + 0x40) = FUN_14019be40;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019bf40;
  local_58 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019bf80;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"fogdistancecolor",0x10);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogdistancecolor",0x10);
  uVar3 = s_fogheightcolor_14048e7f8._0_8_;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a4530;
  *(undefined4 *)(lVar12 + 0x34) = 0x380;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4560;
  cStack_60 = (char)s_fogheightcolor_14048e7f8._8_4_;
  cStack_5f = SUB41(s_fogheightcolor_14048e7f8._8_4_,1);
  cStack_5e = SUB41(s_fogheightcolor_14048e7f8._8_4_,2);
  cStack_5d = SUB41(s_fogheightcolor_14048e7f8._8_4_,3);
  cStack_5c = (char)s_fogheightcolor_14048e7f8._12_2_;
  cStack_5b = SUB21(s_fogheightcolor_14048e7f8._12_2_,1);
  *(undefined4 *)(lVar12 + 0x30) = 2;
  *(code **)(lVar12 + 0x38) = FUN_1401a4230;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  cStack_5a = 0;
  uStack_59 = 0;
  local_58 = 0xe;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogheightcolor",0xe);
  *(undefined4 *)(lVar12 + 0x34) = 0x38c;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a4530;
  *(undefined4 *)(lVar12 + 0x30) = 2;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4560;
  *(code **)(lVar12 + 0x38) = FUN_1401a4230;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"fogdistancestart",0x10);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogdistancestart",0x10);
  uVar3 = s_fogdistanceend_14048e870._0_8_;
  cStack_60 = (char)s_fogdistanceend_14048e870._8_4_;
  cStack_5f = SUB41(s_fogdistanceend_14048e870._8_4_,1);
  cStack_5e = SUB41(s_fogdistanceend_14048e870._8_4_,2);
  cStack_5d = SUB41(s_fogdistanceend_14048e870._8_4_,3);
  cStack_5c = (char)s_fogdistanceend_14048e870._12_2_;
  cStack_5b = SUB21(s_fogdistanceend_14048e870._12_2_,1);
  *(undefined4 *)(lVar12 + 0x34) = 0x398;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  cStack_5a = 0;
  uStack_59 = 0;
  local_58 = 0xe;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogdistanceend",0xe);
  *(undefined4 *)(lVar12 + 0x34) = 0x39c;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"fogdistancestartdensity",0x17);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogdistancestartdensity",0x17);
  *(undefined4 *)(lVar12 + 0x34) = 0x3a0;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"fogdistanceenddensity",0x15);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogdistanceenddensity",0x15);
  uVar3 = s_fogheightstart_14048e830._0_8_;
  cStack_60 = (char)s_fogheightstart_14048e830._8_4_;
  cStack_5f = SUB41(s_fogheightstart_14048e830._8_4_,1);
  cStack_5e = SUB41(s_fogheightstart_14048e830._8_4_,2);
  cStack_5d = SUB41(s_fogheightstart_14048e830._8_4_,3);
  cStack_5c = (char)s_fogheightstart_14048e830._12_2_;
  cStack_5b = SUB21(s_fogheightstart_14048e830._12_2_,1);
  *(undefined4 *)(lVar12 + 0x34) = 0x3a4;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  cStack_5a = 0;
  uStack_59 = 0;
  local_58 = 0xe;
  local_50 = 0xf;
  local_68 = (undefined2)uVar3;
  cStack_66 = SUB81(uVar3,2);
  cStack_65 = SUB81(uVar3,3);
  cStack_64 = SUB81(uVar3,4);
  cStack_63 = SUB81(uVar3,5);
  cStack_62 = SUB81(uVar3,6);
  cStack_61 = SUB81(uVar3,7);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogheightstart",0xe);
  uVar4 = s_fogheightend_14048e8b8._8_4_;
  *(undefined4 *)(lVar12 + 0x34) = 0x3a8;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  local_68 = (undefined2)s_fogheightend_14048e8b8._0_8_;
  cStack_66 = SUB81(s_fogheightend_14048e8b8._0_8_,2);
  cStack_65 = SUB81(s_fogheightend_14048e8b8._0_8_,3);
  cStack_64 = SUB81(s_fogheightend_14048e8b8._0_8_,4);
  cStack_63 = SUB81(s_fogheightend_14048e8b8._0_8_,5);
  cStack_62 = SUB81(s_fogheightend_14048e8b8._0_8_,6);
  cStack_61 = SUB81(s_fogheightend_14048e8b8._0_8_,7);
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  local_58 = 0xc;
  local_50 = 0xf;
  cStack_60 = (char)uVar4;
  cStack_5f = SUB41(uVar4,1);
  cStack_5e = SUB41(uVar4,2);
  cStack_5d = SUB41(uVar4,3);
  cStack_5c = 0;
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogheightend",0xc);
  *(undefined4 *)(lVar12 + 0x34) = 0x3ac;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"fogheightstartdensity",0x15);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogheightstartdensity",0x15);
  *(undefined4 *)(lVar12 + 0x34) = 0x3b0;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"fogheightenddensity",0x13);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"fogheightenddensity",0x13);
  *(undefined4 *)(lVar12 + 0x34) = 0x3b4;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  *(code **)(lVar12 + 0x58) = FUN_140186440;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,&DAT_14048e880,3);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,&DAT_14048e880,3);
  *(undefined4 *)(lVar12 + 0x34) = 0x140;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"perspectiveoverridefov",0x16);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"perspectiveoverridefov",0x16);
  *(undefined4 *)(lVar12 + 0x34) = 0x144;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"nearz",5);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"nearz",5);
  *(undefined4 *)(lVar12 + 0x34) = 0x14c;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,&DAT_14048e8d4,4);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,&DAT_14048e8d4,4);
  *(undefined4 *)(lVar12 + 0x34) = 0x150;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,&DAT_14048e73c,4);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,&DAT_14048e73c,4);
  *(undefined4 *)(lVar12 + 0x34) = 0x154;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"camerafade",10);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"camerafade",10);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x38) = FUN_14019bfa0;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(code **)(lVar12 + 0x40) = FUN_14019c070;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019c170;
  local_58 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019c1a0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"transparentsorting",0x12);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"transparentsorting",0x12);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x38) = FUN_14019c1c0;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(code **)(lVar12 + 0x40) = FUN_14019c290;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019c390;
  local_58 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019c3d0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"customsortorder",0xf);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"customsortorder",0xf);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x38) = FUN_14019c3f0;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(code **)(lVar12 + 0x40) = FUN_14019c4c0;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019c5c0;
  local_58 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019c600;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"camerashake",0xb);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"camerashake",0xb);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x38) = FUN_14019c620;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(code **)(lVar12 + 0x40) = FUN_14019c6f0;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019c7f0;
  local_58 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019c830;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"camerashakespeed",0x10);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"camerashakespeed",0x10);
  *(undefined4 *)(lVar12 + 0x34) = 0x328;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"camerashakeamplitude",0x14);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"camerashakeamplitude",0x14);
  *(undefined4 *)(lVar12 + 0x34) = 0x32c;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"camerashakeroughness",0x14);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"camerashakeroughness",0x14);
  *(undefined4 *)(lVar12 + 0x34) = 0x330;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"cameraparallax",0xe);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"cameraparallax",0xe);
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x38) = FUN_14019c850;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(code **)(lVar12 + 0x40) = FUN_14019c920;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019ca20;
  local_58 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019ca60;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"cameraparallaxamount",0x14);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"cameraparallaxamount",0x14);
  *(undefined4 *)(lVar12 + 0x34) = 0x334;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"cameraparallaxdelay",0x13);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"cameraparallaxdelay",0x13);
  *(undefined4 *)(lVar12 + 0x34) = 0x338;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  local_68 = 0;
  cStack_66 = 0;
  cStack_65 = 0;
  cStack_64 = 0;
  cStack_63 = 0;
  cStack_62 = 0;
  cStack_61 = 0;
  cStack_60 = 0;
  cStack_5f = 0;
  cStack_5e = 0;
  cStack_5d = 0;
  cStack_5c = 0;
  cStack_5b = 0;
  cStack_5a = 0;
  uStack_59 = 0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  local_58 = 0;
  local_50 = 0;
  FUN_140017480(&local_68,"cameraparallaxmouseinfluence",0x1c);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  if (0xf < local_50) {
    FUN_140017200(&local_68,
                  CONCAT17(cStack_61,
                           CONCAT16(cStack_62,
                                    CONCAT15(cStack_63,
                                             CONCAT14(cStack_64,
                                                      CONCAT13(cStack_65,
                                                               CONCAT12(cStack_66,local_68)))))));
  }
  lVar12 = local_78[0];
  FUN_14000f880(local_78[0] + 0x68,"cameraparallaxmouseinfluence",0x1c);
  *(undefined4 *)(lVar12 + 0x34) = 0x33c;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  FUN_1400172c0(&local_68);
  FUN_140017480(&local_68,"gravitydirection",0x10);
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  FUN_140017240(&local_68);
  lVar12 = local_78[0];
  FUN_14000ddd0(local_78[0] + 0x68,"gravitydirection");
  *(undefined4 *)(lVar12 + 0x34) = 0x3e4;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4560;
  *(undefined4 *)(lVar12 + 0x30) = 2;
  *(code **)(lVar12 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a4530;
  FUN_140017170(&local_68,"gravitystrength");
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  FUN_140017240(&local_68);
  lVar12 = local_78[0];
  FUN_14000ddd0(local_78[0] + 0x68,"gravitystrength");
  *(undefined4 *)(lVar12 + 0x34) = 0x3f0;
  *(undefined4 *)(lVar12 + 0x30) = 4;
  *(code **)(lVar12 + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4a10;
  FUN_140017170(&local_68,"windenabled");
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  FUN_140017240(&local_68);
  lVar12 = local_78[0];
  FUN_14000ddd0(local_78[0] + 0x68,"windenabled");
  *(undefined4 *)(lVar12 + 0x34) = 0xe0;
  *(code **)(lVar12 + 0x38) = FUN_14019ca80;
  *(undefined4 *)(lVar12 + 0x30) = 6;
  *(code **)(lVar12 + 0x40) = FUN_14019cb50;
  *(undefined8 *)(lVar12 + 0x58) = 0;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_14019cc50;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_14019cc90;
  FUN_140017170(&local_68,"winddirection");
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  FUN_140017240(&local_68);
  lVar12 = local_78[0];
  FUN_14000ddd0(local_78[0] + 0x68,"winddirection");
  *(undefined4 *)(lVar12 + 0x34) = 0x3f4;
  *(undefined1 **)(lVar12 + 0x50) = &LAB_1401a4560;
  *(undefined4 *)(lVar12 + 0x30) = 2;
  *(code **)(lVar12 + 0x38) = FUN_1401a4230;
  *(undefined1 **)(lVar12 + 0x48) = &LAB_1401a4530;
  FUN_140017170(&local_68,"windstrength");
  FUN_14015a000(&DAT_1404e81c0,local_78,&local_68);
  FUN_140017240(&local_68);
  FUN_14000ddd0(local_78[0] + 0x68,"windstrength");
  *(undefined4 *)(local_78[0] + 0x34) = 0x400;
  *(undefined4 *)(local_78[0] + 0x30) = 4;
  *(code **)(local_78[0] + 0x38) = FUN_1401a4b00;
  *(undefined1 **)(local_78[0] + 0x48) = &LAB_1401a49f0;
  *(undefined1 **)(local_78[0] + 0x50) = &LAB_1401a4a10;
  return &DAT_1404e81c0;
}

