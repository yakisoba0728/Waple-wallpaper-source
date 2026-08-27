// Function: FUN_14028d9f0
// Addr: 14028d9f0
// Size: 555 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_14028d9f0(longlong param_1,ulonglong param_2,byte *param_3,ulonglong param_4)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  undefined1 auStack_1c8 [40];
  undefined1 local_1a0 [32];
  ulonglong local_180 [4];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_1404dc040 ^ (ulonglong)auStack_1c8;
  pbVar1 = param_3 + param_4;
  if (param_4 < 0x15) {
    auVar11 = ZEXT1664((undefined1  [16])0x0);
    local_1a0 = auVar11._0_32_;
    while (param_3 != pbVar1) {
      bVar4 = *param_3;
      param_3 = param_3 + 1;
      auVar9._1_3_ = 0;
      auVar9[0] = bVar4;
      auVar9[4] = bVar4;
      auVar9._5_3_ = 0;
      auVar9[8] = bVar4;
      auVar9._9_3_ = 0;
      auVar9[0xc] = bVar4;
      auVar9._13_3_ = 0;
      auVar9[0x10] = bVar4;
      auVar9._17_3_ = 0;
      auVar9[0x14] = bVar4;
      auVar9._21_3_ = 0;
      auVar9[0x18] = bVar4;
      auVar9._25_3_ = 0;
      auVar9[0x1c] = bVar4;
      auVar9._29_3_ = 0;
      auVar9 = vpsllvd_avx2(_DAT_140429aa0,auVar9 ^ _DAT_140429ae0);
      local_1a0 = vpor_avx2(auVar9,auVar11._0_32_);
      auVar11 = ZEXT3264(local_1a0);
    }
  }
  else {
    FUN_1404217a0(local_160,0,0x100);
    for (; param_3 != pbVar1; param_3 = param_3 + 1) {
      local_160[*param_3] = 0xff;
    }
    auVar2 = vpinsrd_avx(ZEXT416((uint)(SUB321(local_160 >> 7,0) & 1) |
                                 (uint)(SUB321(local_160 >> 0xf,0) & 1) << 1 |
                                 (uint)(SUB321(local_160 >> 0x17,0) & 1) << 2 |
                                 (uint)(SUB321(local_160 >> 0x1f,0) & 1) << 3 |
                                 (uint)(SUB321(local_160 >> 0x27,0) & 1) << 4 |
                                 (uint)(SUB321(local_160 >> 0x2f,0) & 1) << 5 |
                                 (uint)(SUB321(local_160 >> 0x37,0) & 1) << 6 |
                                 (uint)(SUB321(local_160 >> 0x3f,0) & 1) << 7 |
                                 (uint)(SUB321(local_160 >> 0x47,0) & 1) << 8 |
                                 (uint)(SUB321(local_160 >> 0x4f,0) & 1) << 9 |
                                 (uint)(SUB321(local_160 >> 0x57,0) & 1) << 10 |
                                 (uint)(SUB321(local_160 >> 0x5f,0) & 1) << 0xb |
                                 (uint)(SUB321(local_160 >> 0x67,0) & 1) << 0xc |
                                 (uint)(SUB321(local_160 >> 0x6f,0) & 1) << 0xd |
                                 (uint)(SUB321(local_160 >> 0x77,0) & 1) << 0xe |
                                 (uint)SUB321(local_160 >> 0x7f,0) << 0xf |
                                 (uint)(SUB321(local_160 >> 0x87,0) & 1) << 0x10 |
                                 (uint)(SUB321(local_160 >> 0x8f,0) & 1) << 0x11 |
                                 (uint)(SUB321(local_160 >> 0x97,0) & 1) << 0x12 |
                                 (uint)(SUB321(local_160 >> 0x9f,0) & 1) << 0x13 |
                                 (uint)(SUB321(local_160 >> 0xa7,0) & 1) << 0x14 |
                                 (uint)(SUB321(local_160 >> 0xaf,0) & 1) << 0x15 |
                                 (uint)(SUB321(local_160 >> 0xb7,0) & 1) << 0x16 |
                                 (uint)SUB321(local_160 >> 0xbf,0) << 0x17 |
                                 (uint)(SUB321(local_160 >> 199,0) & 1) << 0x18 |
                                 (uint)(SUB321(local_160 >> 0xcf,0) & 1) << 0x19 |
                                 (uint)(SUB321(local_160 >> 0xd7,0) & 1) << 0x1a |
                                 (uint)(SUB321(local_160 >> 0xdf,0) & 1) << 0x1b |
                                 (uint)(SUB321(local_160 >> 0xe7,0) & 1) << 0x1c |
                                 (uint)(SUB321(local_160 >> 0xef,0) & 1) << 0x1d |
                                 (uint)(SUB321(local_160 >> 0xf7,0) & 1) << 0x1e |
                                 (uint)(byte)(local_160[0x1f] >> 7) << 0x1f),
                         (uint)(SUB321(local_140 >> 7,0) & 1) |
                         (uint)(SUB321(local_140 >> 0xf,0) & 1) << 1 |
                         (uint)(SUB321(local_140 >> 0x17,0) & 1) << 2 |
                         (uint)(SUB321(local_140 >> 0x1f,0) & 1) << 3 |
                         (uint)(SUB321(local_140 >> 0x27,0) & 1) << 4 |
                         (uint)(SUB321(local_140 >> 0x2f,0) & 1) << 5 |
                         (uint)(SUB321(local_140 >> 0x37,0) & 1) << 6 |
                         (uint)(SUB321(local_140 >> 0x3f,0) & 1) << 7 |
                         (uint)(SUB321(local_140 >> 0x47,0) & 1) << 8 |
                         (uint)(SUB321(local_140 >> 0x4f,0) & 1) << 9 |
                         (uint)(SUB321(local_140 >> 0x57,0) & 1) << 10 |
                         (uint)(SUB321(local_140 >> 0x5f,0) & 1) << 0xb |
                         (uint)(SUB321(local_140 >> 0x67,0) & 1) << 0xc |
                         (uint)(SUB321(local_140 >> 0x6f,0) & 1) << 0xd |
                         (uint)(SUB321(local_140 >> 0x77,0) & 1) << 0xe |
                         (uint)SUB321(local_140 >> 0x7f,0) << 0xf |
                         (uint)(SUB321(local_140 >> 0x87,0) & 1) << 0x10 |
                         (uint)(SUB321(local_140 >> 0x8f,0) & 1) << 0x11 |
                         (uint)(SUB321(local_140 >> 0x97,0) & 1) << 0x12 |
                         (uint)(SUB321(local_140 >> 0x9f,0) & 1) << 0x13 |
                         (uint)(SUB321(local_140 >> 0xa7,0) & 1) << 0x14 |
                         (uint)(SUB321(local_140 >> 0xaf,0) & 1) << 0x15 |
                         (uint)(SUB321(local_140 >> 0xb7,0) & 1) << 0x16 |
                         (uint)SUB321(local_140 >> 0xbf,0) << 0x17 |
                         (uint)(SUB321(local_140 >> 199,0) & 1) << 0x18 |
                         (uint)(SUB321(local_140 >> 0xcf,0) & 1) << 0x19 |
                         (uint)(SUB321(local_140 >> 0xd7,0) & 1) << 0x1a |
                         (uint)(SUB321(local_140 >> 0xdf,0) & 1) << 0x1b |
                         (uint)(SUB321(local_140 >> 0xe7,0) & 1) << 0x1c |
                         (uint)(SUB321(local_140 >> 0xef,0) & 1) << 0x1d |
                         (uint)(SUB321(local_140 >> 0xf7,0) & 1) << 0x1e |
                         (uint)(byte)(local_140[0x1f] >> 7) << 0x1f,1);
    auVar2 = vpinsrd_avx(auVar2,(uint)(SUB321(local_120 >> 7,0) & 1) |
                                (uint)(SUB321(local_120 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(local_120 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(local_120 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(local_120 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(local_120 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(local_120 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(local_120 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(local_120 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(local_120 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(local_120 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(local_120 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(local_120 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(local_120 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(local_120 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(local_120 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(local_120 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(local_120 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(local_120 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(local_120 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(local_120 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(local_120 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(local_120 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(local_120 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(local_120 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(local_120 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(local_120 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(local_120 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(local_120 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(local_120 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(local_120 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(local_120[0x1f] >> 7) << 0x1f,2);
    auVar3 = vpinsrd_avx(ZEXT416((uint)(SUB321(local_e0 >> 7,0) & 1) |
                                 (uint)(SUB321(local_e0 >> 0xf,0) & 1) << 1 |
                                 (uint)(SUB321(local_e0 >> 0x17,0) & 1) << 2 |
                                 (uint)(SUB321(local_e0 >> 0x1f,0) & 1) << 3 |
                                 (uint)(SUB321(local_e0 >> 0x27,0) & 1) << 4 |
                                 (uint)(SUB321(local_e0 >> 0x2f,0) & 1) << 5 |
                                 (uint)(SUB321(local_e0 >> 0x37,0) & 1) << 6 |
                                 (uint)(SUB321(local_e0 >> 0x3f,0) & 1) << 7 |
                                 (uint)(SUB321(local_e0 >> 0x47,0) & 1) << 8 |
                                 (uint)(SUB321(local_e0 >> 0x4f,0) & 1) << 9 |
                                 (uint)(SUB321(local_e0 >> 0x57,0) & 1) << 10 |
                                 (uint)(SUB321(local_e0 >> 0x5f,0) & 1) << 0xb |
                                 (uint)(SUB321(local_e0 >> 0x67,0) & 1) << 0xc |
                                 (uint)(SUB321(local_e0 >> 0x6f,0) & 1) << 0xd |
                                 (uint)(SUB321(local_e0 >> 0x77,0) & 1) << 0xe |
                                 (uint)SUB321(local_e0 >> 0x7f,0) << 0xf |
                                 (uint)(SUB321(local_e0 >> 0x87,0) & 1) << 0x10 |
                                 (uint)(SUB321(local_e0 >> 0x8f,0) & 1) << 0x11 |
                                 (uint)(SUB321(local_e0 >> 0x97,0) & 1) << 0x12 |
                                 (uint)(SUB321(local_e0 >> 0x9f,0) & 1) << 0x13 |
                                 (uint)(SUB321(local_e0 >> 0xa7,0) & 1) << 0x14 |
                                 (uint)(SUB321(local_e0 >> 0xaf,0) & 1) << 0x15 |
                                 (uint)(SUB321(local_e0 >> 0xb7,0) & 1) << 0x16 |
                                 (uint)SUB321(local_e0 >> 0xbf,0) << 0x17 |
                                 (uint)(SUB321(local_e0 >> 199,0) & 1) << 0x18 |
                                 (uint)(SUB321(local_e0 >> 0xcf,0) & 1) << 0x19 |
                                 (uint)(SUB321(local_e0 >> 0xd7,0) & 1) << 0x1a |
                                 (uint)(SUB321(local_e0 >> 0xdf,0) & 1) << 0x1b |
                                 (uint)(SUB321(local_e0 >> 0xe7,0) & 1) << 0x1c |
                                 (uint)(SUB321(local_e0 >> 0xef,0) & 1) << 0x1d |
                                 (uint)(SUB321(local_e0 >> 0xf7,0) & 1) << 0x1e |
                                 (uint)(byte)(local_e0[0x1f] >> 7) << 0x1f),
                         (uint)(SUB321(local_c0 >> 7,0) & 1) |
                         (uint)(SUB321(local_c0 >> 0xf,0) & 1) << 1 |
                         (uint)(SUB321(local_c0 >> 0x17,0) & 1) << 2 |
                         (uint)(SUB321(local_c0 >> 0x1f,0) & 1) << 3 |
                         (uint)(SUB321(local_c0 >> 0x27,0) & 1) << 4 |
                         (uint)(SUB321(local_c0 >> 0x2f,0) & 1) << 5 |
                         (uint)(SUB321(local_c0 >> 0x37,0) & 1) << 6 |
                         (uint)(SUB321(local_c0 >> 0x3f,0) & 1) << 7 |
                         (uint)(SUB321(local_c0 >> 0x47,0) & 1) << 8 |
                         (uint)(SUB321(local_c0 >> 0x4f,0) & 1) << 9 |
                         (uint)(SUB321(local_c0 >> 0x57,0) & 1) << 10 |
                         (uint)(SUB321(local_c0 >> 0x5f,0) & 1) << 0xb |
                         (uint)(SUB321(local_c0 >> 0x67,0) & 1) << 0xc |
                         (uint)(SUB321(local_c0 >> 0x6f,0) & 1) << 0xd |
                         (uint)(SUB321(local_c0 >> 0x77,0) & 1) << 0xe |
                         (uint)SUB321(local_c0 >> 0x7f,0) << 0xf |
                         (uint)(SUB321(local_c0 >> 0x87,0) & 1) << 0x10 |
                         (uint)(SUB321(local_c0 >> 0x8f,0) & 1) << 0x11 |
                         (uint)(SUB321(local_c0 >> 0x97,0) & 1) << 0x12 |
                         (uint)(SUB321(local_c0 >> 0x9f,0) & 1) << 0x13 |
                         (uint)(SUB321(local_c0 >> 0xa7,0) & 1) << 0x14 |
                         (uint)(SUB321(local_c0 >> 0xaf,0) & 1) << 0x15 |
                         (uint)(SUB321(local_c0 >> 0xb7,0) & 1) << 0x16 |
                         (uint)SUB321(local_c0 >> 0xbf,0) << 0x17 |
                         (uint)(SUB321(local_c0 >> 199,0) & 1) << 0x18 |
                         (uint)(SUB321(local_c0 >> 0xcf,0) & 1) << 0x19 |
                         (uint)(SUB321(local_c0 >> 0xd7,0) & 1) << 0x1a |
                         (uint)(SUB321(local_c0 >> 0xdf,0) & 1) << 0x1b |
                         (uint)(SUB321(local_c0 >> 0xe7,0) & 1) << 0x1c |
                         (uint)(SUB321(local_c0 >> 0xef,0) & 1) << 0x1d |
                         (uint)(SUB321(local_c0 >> 0xf7,0) & 1) << 0x1e |
                         (uint)(byte)(local_c0[0x1f] >> 7) << 0x1f,1);
    auVar3 = vpinsrd_avx(auVar3,(uint)(SUB321(local_a0 >> 7,0) & 1) |
                                (uint)(SUB321(local_a0 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(local_a0 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(local_a0 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(local_a0 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(local_a0 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(local_a0 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(local_a0 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(local_a0 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(local_a0 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(local_a0 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(local_a0 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(local_a0 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(local_a0 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(local_a0 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(local_a0 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(local_a0 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(local_a0 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(local_a0 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(local_a0 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(local_a0 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(local_a0 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(local_a0 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(local_a0 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(local_a0 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(local_a0 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(local_a0 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(local_a0 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(local_a0 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(local_a0 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(local_a0 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(local_a0[0x1f] >> 7) << 0x1f,2);
    auVar2 = vpinsrd_avx(auVar2,(uint)(SUB321(local_100 >> 7,0) & 1) |
                                (uint)(SUB321(local_100 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(local_100 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(local_100 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(local_100 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(local_100 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(local_100 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(local_100 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(local_100 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(local_100 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(local_100 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(local_100 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(local_100 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(local_100 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(local_100 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(local_100 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(local_100 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(local_100 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(local_100 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(local_100 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(local_100 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(local_100 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(local_100 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(local_100 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(local_100 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(local_100 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(local_100 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(local_100 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(local_100 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(local_100 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(local_100 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(local_100[0x1f] >> 7) << 0x1f,3);
    auVar3 = vpinsrd_avx(auVar3,(uint)(SUB321(local_80 >> 7,0) & 1) |
                                (uint)(SUB321(local_80 >> 0xf,0) & 1) << 1 |
                                (uint)(SUB321(local_80 >> 0x17,0) & 1) << 2 |
                                (uint)(SUB321(local_80 >> 0x1f,0) & 1) << 3 |
                                (uint)(SUB321(local_80 >> 0x27,0) & 1) << 4 |
                                (uint)(SUB321(local_80 >> 0x2f,0) & 1) << 5 |
                                (uint)(SUB321(local_80 >> 0x37,0) & 1) << 6 |
                                (uint)(SUB321(local_80 >> 0x3f,0) & 1) << 7 |
                                (uint)(SUB321(local_80 >> 0x47,0) & 1) << 8 |
                                (uint)(SUB321(local_80 >> 0x4f,0) & 1) << 9 |
                                (uint)(SUB321(local_80 >> 0x57,0) & 1) << 10 |
                                (uint)(SUB321(local_80 >> 0x5f,0) & 1) << 0xb |
                                (uint)(SUB321(local_80 >> 0x67,0) & 1) << 0xc |
                                (uint)(SUB321(local_80 >> 0x6f,0) & 1) << 0xd |
                                (uint)(SUB321(local_80 >> 0x77,0) & 1) << 0xe |
                                (uint)SUB321(local_80 >> 0x7f,0) << 0xf |
                                (uint)(SUB321(local_80 >> 0x87,0) & 1) << 0x10 |
                                (uint)(SUB321(local_80 >> 0x8f,0) & 1) << 0x11 |
                                (uint)(SUB321(local_80 >> 0x97,0) & 1) << 0x12 |
                                (uint)(SUB321(local_80 >> 0x9f,0) & 1) << 0x13 |
                                (uint)(SUB321(local_80 >> 0xa7,0) & 1) << 0x14 |
                                (uint)(SUB321(local_80 >> 0xaf,0) & 1) << 0x15 |
                                (uint)(SUB321(local_80 >> 0xb7,0) & 1) << 0x16 |
                                (uint)SUB321(local_80 >> 0xbf,0) << 0x17 |
                                (uint)(SUB321(local_80 >> 199,0) & 1) << 0x18 |
                                (uint)(SUB321(local_80 >> 0xcf,0) & 1) << 0x19 |
                                (uint)(SUB321(local_80 >> 0xd7,0) & 1) << 0x1a |
                                (uint)(SUB321(local_80 >> 0xdf,0) & 1) << 0x1b |
                                (uint)(SUB321(local_80 >> 0xe7,0) & 1) << 0x1c |
                                (uint)(SUB321(local_80 >> 0xef,0) & 1) << 0x1d |
                                (uint)(SUB321(local_80 >> 0xf7,0) & 1) << 0x1e |
                                (uint)(byte)(local_80[0x1f] >> 7) << 0x1f,3);
    local_1a0._16_16_ = auVar3;
    local_1a0._0_16_ = auVar2;
  }
  uVar6 = 0;
  uVar8 = param_2 & 0xfffffffffffffff8;
  if (uVar8 != 0) {
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(param_1 + uVar6);
      auVar9 = vpmovzxbd_avx2(auVar2);
      auVar10 = vpsrld_avx2(auVar9,5);
      auVar10 = vpermd_avx2(auVar10,local_1a0);
      auVar9 = vpandn_avx2(auVar9,_DAT_140429ac0);
      auVar9 = vpsllvd_avx2(auVar10,auVar9);
      uVar5 = vmovmskps_avx(auVar9);
      if (uVar5 != 0) {
        uVar7 = 0;
        for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        return uVar7 + uVar6;
      }
      uVar6 = uVar6 + 8;
    } while (uVar6 != uVar8);
  }
  uVar5 = (uint)param_2 & 7;
  if ((param_2 & 7) != 0) {
    FUN_1404210f0(local_180,param_1 + uVar8,uVar5);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_180[0];
    auVar10 = vpmovzxbd_avx2(auVar3);
    auVar9 = vpandn_avx2(auVar10,_DAT_140429ac0);
    auVar10 = vpsrld_avx2(auVar10,5);
    auVar10 = vpermd_avx2(auVar10,local_1a0);
    auVar9 = vpsllvd_avx2(auVar10,auVar9);
    uVar7 = vmovmskps_avx(auVar9);
    uVar7 = uVar7 & (1 << (sbyte)uVar5) - 1U;
    if (uVar7 != 0) {
      uVar5 = 0;
      for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      return uVar5 + uVar8;
    }
  }
  return -1;
}

