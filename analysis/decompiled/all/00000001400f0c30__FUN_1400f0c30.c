// Function: FUN_1400f0c30
// Addr: 1400f0c30
// Size: 900 bytes


undefined8 * FUN_1400f0c30(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  ulonglong uVar13;
  longlong local_108;
  ulonglong local_100;
  undefined1 local_f8 [32];
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 local_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined4 local_58;
  
  local_108 = 0;
  local_100 = 0;
  local_b8 = 0x6a09e667;
  local_b4 = 0xbb67ae85;
  local_b0 = 0x3c6ef372;
  local_ac = 0xa54ff53a;
  local_a8 = 0x510e527f;
  local_a4 = 0x9b05688c;
  local_a0 = 0x1f83d9ab;
  local_9c = 0x5be0cd19;
  puVar10 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar10 = (undefined8 *)*param_2;
  }
  uVar13 = param_2[2];
  if (uVar13 != 0) {
    for (; 0x3f < uVar13; uVar13 = uVar13 - 0x40) {
      FUN_140141a80(&local_108,puVar10);
      local_108 = local_108 + 0x40;
      puVar10 = puVar10 + 8;
    }
    for (; uVar13 != 0; uVar13 = uVar13 - 1) {
      uVar1 = *(undefined1 *)puVar10;
      puVar10 = (undefined8 *)((longlong)puVar10 + 1);
      local_f8[local_100] = uVar1;
      local_100 = local_100 + 1;
    }
  }
  uVar8 = local_a0;
  uVar7 = local_a4;
  uVar6 = local_a8;
  uVar5 = local_ac;
  uVar4 = local_b0;
  uVar3 = local_b4;
  uVar2 = local_b8;
  local_58 = local_9c;
  uVar9 = local_100 * 8 & 0xfffffffffffffe00;
  uVar13 = uVar9 | 0x1c0;
  if (0x1c0 < ((uint)(local_100 * 8) & 0x1ff | 1)) {
    uVar13 = uVar9 + 0x3c0;
  }
  uVar13 = uVar13 >> 3;
  if (local_100 < 0x40) {
    local_f8[local_100] = 0x80;
  }
  else {
    local_98 = 0x80;
  }
  uVar9 = local_100 + 1;
  if (uVar9 < 0x40) {
    FUN_1404217a0(local_f8 + local_100 + 1,0,0x40 - uVar9);
    uVar9 = 0x40;
  }
  uVar11 = local_100;
  if (uVar9 < uVar13) {
    FUN_1404217a0(auStack_d8 + uVar9,0,uVar13 - uVar9);
  }
  uVar11 = local_108 + uVar11;
  if (uVar13 < 0x40) {
    puVar12 = local_f8;
  }
  else {
    puVar12 = auStack_d8;
  }
  puVar12 = puVar12 + uVar13;
  *puVar12 = (char)(uVar11 >> 0x35);
  puVar12[1] = (char)(uVar11 >> 0x2d);
  puVar12[2] = (char)(uVar11 >> 0x25);
  puVar12[3] = (char)(uVar11 >> 0x1d);
  puVar12[4] = (char)(uVar11 >> 0x15);
  puVar12[6] = (char)(uVar11 >> 5);
  puVar12[5] = (char)(uVar11 >> 0xd);
  puVar12[7] = (char)uVar11 * '\b';
  FUN_140141a80(&local_108,local_f8);
  if (0x40 < uVar13) {
    FUN_140141a80(&local_108,&local_98);
  }
  local_98 = local_b8._3_1_;
  uStack_97 = local_b8._2_1_;
  uStack_96 = local_b8._1_1_;
  uStack_95 = (undefined1)local_b8;
  uStack_94 = local_b4._3_1_;
  uStack_93 = local_b4._2_1_;
  uStack_92 = local_b4._1_1_;
  uStack_91 = (undefined1)local_b4;
  uStack_90 = local_b0._3_1_;
  uStack_8f = local_b0._2_1_;
  uStack_8e = local_b0._1_1_;
  uStack_8d = (undefined1)local_b0;
  uStack_8c = local_ac._3_1_;
  uStack_8b = local_ac._2_1_;
  uStack_8a = local_ac._1_1_;
  uStack_89 = (undefined1)local_ac;
  local_88 = local_a8._3_1_;
  uStack_87 = local_a8._2_1_;
  uStack_86 = local_a8._1_1_;
  uStack_85 = (undefined1)local_a8;
  uStack_84 = local_a4._3_1_;
  uStack_83 = local_a4._2_1_;
  uStack_82 = local_a4._1_1_;
  uStack_81 = (undefined1)local_a4;
  uStack_80 = local_a0._3_1_;
  uStack_7f = local_a0._2_1_;
  uStack_7e = local_a0._1_1_;
  uStack_7d = (undefined1)local_a0;
  uStack_7c = local_9c._3_1_;
  uStack_7b = local_9c._2_1_;
  uStack_7a = local_9c._1_1_;
  *param_1 = 0;
  param_1[1] = 0;
  uStack_79 = (undefined1)local_9c;
  local_9c = local_58;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_b8 = uVar2;
  local_b4 = uVar3;
  local_b0 = uVar4;
  local_ac = uVar5;
  local_a8 = uVar6;
  local_a4 = uVar7;
  local_a0 = uVar8;
  puVar10 = (undefined8 *)FUN_14028af20(0x30);
  param_1[2] = 0x20;
  param_1[3] = 0x2f;
  *puVar10 = CONCAT17(uStack_91,
                      CONCAT16(uStack_92,
                               CONCAT15(uStack_93,
                                        CONCAT14(uStack_94,
                                                 CONCAT13(uStack_95,
                                                          CONCAT12(uStack_96,
                                                                   CONCAT11(uStack_97,local_98))))))
                     );
  puVar10[1] = CONCAT17(uStack_89,
                        CONCAT16(uStack_8a,
                                 CONCAT15(uStack_8b,
                                          CONCAT14(uStack_8c,
                                                   CONCAT13(uStack_8d,
                                                            CONCAT12(uStack_8e,
                                                                     CONCAT11(uStack_8f,uStack_90)))
                                                  ))));
  puVar10[2] = CONCAT17(uStack_81,
                        CONCAT16(uStack_82,
                                 CONCAT15(uStack_83,
                                          CONCAT14(uStack_84,
                                                   CONCAT13(uStack_85,
                                                            CONCAT12(uStack_86,
                                                                     CONCAT11(uStack_87,local_88))))
                                         )));
  puVar10[3] = CONCAT17(uStack_79,
                        CONCAT16(uStack_7a,
                                 CONCAT15(uStack_7b,
                                          CONCAT14(uStack_7c,
                                                   CONCAT13(uStack_7d,
                                                            CONCAT12(uStack_7e,
                                                                     CONCAT11(uStack_7f,uStack_80)))
                                                  ))));
  *(undefined1 *)(puVar10 + 4) = 0;
  *param_1 = puVar10;
  return param_1;
}

