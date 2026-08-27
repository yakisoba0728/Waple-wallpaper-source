// Function: FUN_14028c810
// Addr: 14028c810
// Size: 921 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [32]
FUN_14028c810(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4)

{
  undefined1 (*pauVar1) [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  uint uVar10;
  int iVar11;
  undefined1 (*pauVar12) [32];
  longlong lVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined1 auStack_128 [40];
  ulonglong local_100;
  undefined1 (*local_f8) [32];
  undefined1 (*local_f0) [32];
  undefined1 (*local_e8) [32];
  undefined1 local_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 uStack_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 uStack_c4;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined1 local_c0 [32];
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_1404dc040 ^ (ulonglong)auStack_128;
  lVar13 = (longlong)param_2 - (longlong)param_1;
  local_100 = lVar13;
  local_f8 = param_1;
  local_f0 = param_2;
  if (param_4 < 0x21) {
    lVar13 = -param_4;
    uVar4 = *(undefined8 *)*(undefined1 (*) [32])(&DAT_140429a50 + lVar13);
    uVar5 = *(undefined8 *)(&UNK_140429a58 + lVar13);
    uVar6 = *(undefined8 *)(&UNK_140429a60 + lVar13);
    uVar7 = *(undefined8 *)(&UNK_140429a68 + lVar13);
    local_e0 = (undefined1)uVar4;
    uStack_df = (undefined1)((ulonglong)uVar4 >> 8);
    uStack_de = (undefined1)((ulonglong)uVar4 >> 0x10);
    uStack_dd = (undefined1)((ulonglong)uVar4 >> 0x18);
    uStack_dc = (undefined1)((ulonglong)uVar4 >> 0x20);
    uStack_db = (undefined1)((ulonglong)uVar4 >> 0x28);
    uStack_da = (undefined1)((ulonglong)uVar4 >> 0x30);
    uStack_d9 = (undefined1)((ulonglong)uVar4 >> 0x38);
    uStack_d8 = (undefined1)uVar5;
    uStack_d7 = (undefined1)((ulonglong)uVar5 >> 8);
    uStack_d6 = (undefined1)((ulonglong)uVar5 >> 0x10);
    uStack_d5 = (undefined1)((ulonglong)uVar5 >> 0x18);
    uStack_d4 = (undefined1)((ulonglong)uVar5 >> 0x20);
    uStack_d3 = (undefined1)((ulonglong)uVar5 >> 0x28);
    uStack_d2 = (undefined1)((ulonglong)uVar5 >> 0x30);
    uStack_d1 = (undefined1)((ulonglong)uVar5 >> 0x38);
    uStack_d0 = (undefined1)uVar6;
    uStack_cf = (undefined1)((ulonglong)uVar6 >> 8);
    uStack_ce = (undefined1)((ulonglong)uVar6 >> 0x10);
    uStack_cd = (undefined1)((ulonglong)uVar6 >> 0x18);
    uStack_cc = (undefined1)((ulonglong)uVar6 >> 0x20);
    uStack_cb = (undefined1)((ulonglong)uVar6 >> 0x28);
    uStack_ca = (undefined1)((ulonglong)uVar6 >> 0x30);
    uStack_c9 = (undefined1)((ulonglong)uVar6 >> 0x38);
    uStack_c8 = (undefined1)uVar7;
    uStack_c7 = (undefined1)((ulonglong)uVar7 >> 8);
    uStack_c6 = (undefined1)((ulonglong)uVar7 >> 0x10);
    uStack_c5 = (undefined1)((ulonglong)uVar7 >> 0x18);
    uStack_c4 = (undefined1)((ulonglong)uVar7 >> 0x20);
    uStack_c3 = (undefined1)((ulonglong)uVar7 >> 0x28);
    uStack_c2 = (undefined1)((ulonglong)uVar7 >> 0x30);
    uStack_c1 = (undefined1)((ulonglong)uVar7 >> 0x38);
    FUN_1404210f0(local_a0,param_3,param_4);
    uVar15 = local_a0[0];
    local_c0[1] = uVar15;
    local_c0[0] = uVar15;
    local_c0[2] = uVar15;
    local_c0[3] = uVar15;
    local_c0[4] = uVar15;
    local_c0[5] = uVar15;
    local_c0[6] = uVar15;
    local_c0[7] = uVar15;
    local_c0[8] = uVar15;
    local_c0[9] = uVar15;
    local_c0[10] = uVar15;
    local_c0[0xb] = uVar15;
    local_c0[0xc] = uVar15;
    local_c0[0xd] = uVar15;
    local_c0[0xe] = uVar15;
    local_c0[0xf] = uVar15;
    local_c0[0x10] = uVar15;
    local_c0[0x11] = uVar15;
    local_c0[0x12] = uVar15;
    local_c0[0x13] = uVar15;
    local_c0[0x14] = uVar15;
    local_c0[0x15] = uVar15;
    local_c0[0x16] = uVar15;
    local_c0[0x17] = uVar15;
    local_c0[0x18] = uVar15;
    local_c0[0x19] = uVar15;
    local_c0[0x1a] = uVar15;
    local_c0[0x1b] = uVar15;
    local_c0[0x1c] = uVar15;
    local_c0[0x1d] = uVar15;
    local_c0[0x1e] = uVar15;
    local_c0[0x1f] = uVar15;
    auVar3 = vpcmpeqb_avx2(local_c0,local_f0[-1]);
    pauVar12 = local_f0 + -1;
    uVar14 = ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f
             ) & (1 << (0x21U - (char)param_4 & 0x1f)) - 1U;
    if (uVar14 == 0) {
      auVar2[1] = uStack_df;
      auVar2[0] = local_e0;
      auVar2[2] = uStack_de;
      auVar2[3] = uStack_dd;
      auVar2[4] = uStack_dc;
      auVar2[5] = uStack_db;
      auVar2[6] = uStack_da;
      auVar2[7] = uStack_d9;
      auVar2[8] = uStack_d8;
      auVar2[9] = uStack_d7;
      auVar2[10] = uStack_d6;
      auVar2[0xb] = uStack_d5;
      auVar2[0xc] = uStack_d4;
      auVar2[0xd] = uStack_d3;
      auVar2[0xe] = uStack_d2;
      auVar2[0xf] = uStack_d1;
      auVar2[0x10] = uStack_d0;
      auVar2[0x11] = uStack_cf;
      auVar2[0x12] = uStack_ce;
      auVar2[0x13] = uStack_cd;
      auVar2[0x14] = uStack_cc;
      auVar2[0x15] = uStack_cb;
      auVar2[0x16] = uStack_ca;
      auVar2[0x17] = uStack_c9;
      auVar2[0x18] = uStack_c8;
      auVar2[0x19] = uStack_c7;
      auVar2[0x1a] = uStack_c6;
      auVar2[0x1b] = uStack_c5;
      auVar2[0x1c] = uStack_c4;
      auVar2[0x1d] = uStack_c3;
      auVar2[0x1e] = uStack_c2;
      auVar2[0x1f] = uStack_c1;
    }
    else {
      do {
        pauVar1 = (undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar14)));
        FUN_1404210f0(local_80,pauVar1,(longlong)local_f0 - (longlong)pauVar1);
        auVar2 = *(undefined1 (*) [32])(&DAT_140429a50 + lVar13);
        if ((auVar2 & (local_a0 ^ local_80)) == (undefined1  [32])0x0) {
          return pauVar1;
        }
        uVar14 = uVar14 ^ 1 << ((byte)(0x1fU - LZCOUNT(uVar14)) & 0x1f);
      } while (uVar14 != 0);
    }
    uVar14 = (uint)local_100 & 0x1f;
    while (pauVar12 != (undefined1 (*) [32])(*local_f8 + uVar14)) {
      auVar3 = vpcmpeqb_avx2(local_c0,pauVar12[-1]);
      pauVar12 = pauVar12 + -1;
      for (uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                    (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                    (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                    (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                    (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                    (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                    (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                    (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                    (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe |
                    (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
                    (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                    (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                    (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                    (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                    (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                    (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                    (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                    (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                    (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                    (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f; uVar10 != 0;
          uVar10 = uVar10 ^ 1 << ((byte)(0x1fU - LZCOUNT(uVar10)) & 0x1f)) {
        if ((auVar2 & (local_a0 ^ *(undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar10))))) ==
            (undefined1  [32])0x0) {
          return (undefined1 (*) [32])(*pauVar12 + (0x1fU - LZCOUNT(uVar10)));
        }
      }
    }
    param_2 = local_f0;
    if ((ulonglong)uVar14 != 0) {
      auVar3 = vpcmpeqb_avx2(*local_f8,local_c0);
      uVar10 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
               (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
      if ((uVar10 != 0) && (uVar10 = (1 << (sbyte)uVar14) - 1U & uVar10, uVar10 != 0)) {
        auVar8[1] = uStack_df;
        auVar8[0] = local_e0;
        auVar8[2] = uStack_de;
        auVar8[3] = uStack_dd;
        auVar8[4] = uStack_dc;
        auVar8[5] = uStack_db;
        auVar8[6] = uStack_da;
        auVar8[7] = uStack_d9;
        auVar8[8] = uStack_d8;
        auVar8[9] = uStack_d7;
        auVar8[10] = uStack_d6;
        auVar8[0xb] = uStack_d5;
        auVar8[0xc] = uStack_d4;
        auVar8[0xd] = uStack_d3;
        auVar8[0xe] = uStack_d2;
        auVar8[0xf] = uStack_d1;
        auVar8[0x10] = uStack_d0;
        auVar8[0x11] = uStack_cf;
        auVar8[0x12] = uStack_ce;
        auVar8[0x13] = uStack_cd;
        auVar8[0x14] = uStack_cc;
        auVar8[0x15] = uStack_cb;
        auVar8[0x16] = uStack_ca;
        auVar8[0x17] = uStack_c9;
        auVar8[0x18] = uStack_c8;
        auVar8[0x19] = uStack_c7;
        auVar8[0x1a] = uStack_c6;
        auVar8[0x1b] = uStack_c5;
        auVar8[0x1c] = uStack_c4;
        auVar8[0x1d] = uStack_c3;
        auVar8[0x1e] = uStack_c2;
        auVar8[0x1f] = uStack_c1;
        do {
          uVar14 = 0x1f - LZCOUNT(uVar10);
          if ((auVar8 & (local_a0 ^ *(undefined1 (*) [32])(*local_f8 + uVar14))) ==
              (undefined1  [32])0x0) {
            return (undefined1 (*) [32])(*local_f8 + uVar14);
          }
          uVar10 = uVar10 ^ 1 << ((byte)uVar14 & 0x1f);
        } while (uVar10 != 0);
      }
    }
  }
  else {
    local_e0 = SUB321(*param_3,0);
    param_2 = (undefined1 (*) [32])((longlong)param_2 - param_4);
    uStack_df = local_e0;
    uStack_de = local_e0;
    uStack_dd = local_e0;
    uStack_dc = local_e0;
    uStack_db = local_e0;
    uStack_da = local_e0;
    uStack_d9 = local_e0;
    uStack_d8 = local_e0;
    uStack_d7 = local_e0;
    uStack_d6 = local_e0;
    uStack_d5 = local_e0;
    uStack_d4 = local_e0;
    uStack_d3 = local_e0;
    uStack_d2 = local_e0;
    uStack_d1 = local_e0;
    uStack_d0 = local_e0;
    uStack_cf = local_e0;
    uStack_ce = local_e0;
    uStack_cd = local_e0;
    uStack_cc = local_e0;
    uStack_cb = local_e0;
    uStack_ca = local_e0;
    uStack_c9 = local_e0;
    uStack_c8 = local_e0;
    uStack_c7 = local_e0;
    uStack_c6 = local_e0;
    uStack_c5 = local_e0;
    uStack_c4 = local_e0;
    uStack_c3 = local_e0;
    uStack_c2 = local_e0;
    uStack_c1 = local_e0;
    if ((*param_3 != *param_2) ||
       (iVar11 = memcmp(param_2 + 1,param_3 + 1,param_4 - 0x20), iVar11 != 0)) {
      local_100 = (ulonglong)((int)lVar13 - (int)param_4 & 0x1f);
      pauVar12 = (undefined1 (*) [32])(*param_1 + local_100);
      local_e8 = pauVar12;
      if (param_2 != pauVar12) {
        do {
          auVar3[1] = uStack_df;
          auVar3[0] = local_e0;
          auVar3[2] = uStack_de;
          auVar3[3] = uStack_dd;
          auVar3[4] = uStack_dc;
          auVar3[5] = uStack_db;
          auVar3[6] = uStack_da;
          auVar3[7] = uStack_d9;
          auVar3[8] = uStack_d8;
          auVar3[9] = uStack_d7;
          auVar3[10] = uStack_d6;
          auVar3[0xb] = uStack_d5;
          auVar3[0xc] = uStack_d4;
          auVar3[0xd] = uStack_d3;
          auVar3[0xe] = uStack_d2;
          auVar3[0xf] = uStack_d1;
          auVar3[0x10] = uStack_d0;
          auVar3[0x11] = uStack_cf;
          auVar3[0x12] = uStack_ce;
          auVar3[0x13] = uStack_cd;
          auVar3[0x14] = uStack_cc;
          auVar3[0x15] = uStack_cb;
          auVar3[0x16] = uStack_ca;
          auVar3[0x17] = uStack_c9;
          auVar3[0x18] = uStack_c8;
          auVar3[0x19] = uStack_c7;
          auVar3[0x1a] = uStack_c6;
          auVar3[0x1b] = uStack_c5;
          auVar3[0x1c] = uStack_c4;
          auVar3[0x1d] = uStack_c3;
          auVar3[0x1e] = uStack_c2;
          auVar3[0x1f] = uStack_c1;
          auVar3 = vpcmpeqb_avx2(param_2[-1],auVar3);
          param_2 = param_2 + -1;
          param_1 = local_f8;
          for (uVar14 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1
                        | (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                        (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                        (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                        (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                        (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                        (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                        (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                        (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                        (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                        (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                        (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                        (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                        (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe |
                        (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
                        (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                        (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                        (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                        (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                        (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                        (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                        (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                        (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                        (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                        (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                        (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                        (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                        (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                        (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                        (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                        (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f; local_f8 = param_1, uVar14 != 0;
              uVar14 = uVar14 ^ 1 << ((byte)uVar10 & 0x1f)) {
            uVar10 = 0x1f - LZCOUNT(uVar14);
            if ((*(undefined1 (*) [32])(*param_2 + uVar10) == *param_3) &&
               (iVar11 = memcmp((undefined1 (*) [32])(*param_2 + uVar10) + 1,param_3 + 1,
                                param_4 - 0x20), iVar11 == 0)) {
              return (undefined1 (*) [32])(*param_2 + uVar10);
            }
            pauVar12 = local_e8;
            param_1 = local_f8;
          }
        } while (param_2 != pauVar12);
      }
      param_2 = local_f0;
      if (local_100 != 0) {
        auVar9[1] = uStack_df;
        auVar9[0] = local_e0;
        auVar9[2] = uStack_de;
        auVar9[3] = uStack_dd;
        auVar9[4] = uStack_dc;
        auVar9[5] = uStack_db;
        auVar9[6] = uStack_da;
        auVar9[7] = uStack_d9;
        auVar9[8] = uStack_d8;
        auVar9[9] = uStack_d7;
        auVar9[10] = uStack_d6;
        auVar9[0xb] = uStack_d5;
        auVar9[0xc] = uStack_d4;
        auVar9[0xd] = uStack_d3;
        auVar9[0xe] = uStack_d2;
        auVar9[0xf] = uStack_d1;
        auVar9[0x10] = uStack_d0;
        auVar9[0x11] = uStack_cf;
        auVar9[0x12] = uStack_ce;
        auVar9[0x13] = uStack_cd;
        auVar9[0x14] = uStack_cc;
        auVar9[0x15] = uStack_cb;
        auVar9[0x16] = uStack_ca;
        auVar9[0x17] = uStack_c9;
        auVar9[0x18] = uStack_c8;
        auVar9[0x19] = uStack_c7;
        auVar9[0x1a] = uStack_c6;
        auVar9[0x1b] = uStack_c5;
        auVar9[0x1c] = uStack_c4;
        auVar9[0x1d] = uStack_c3;
        auVar9[0x1e] = uStack_c2;
        auVar9[0x1f] = uStack_c1;
        auVar3 = vpcmpeqb_avx2(*param_1,auVar9);
        uVar14 = (uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
                 (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 |
                 (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3 |
                 (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
                 (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 |
                 (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6 |
                 (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
                 (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 |
                 (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9 |
                 (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
                 (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
                 (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf
                 | (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
                 (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
                 (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
                 (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
                 (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
                 (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
                 (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 |
                 (uint)SUB321(auVar3 >> 0xbf,0) << 0x17 |
                 (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
                 (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
                 (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
                 (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
                 (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
                 (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
                 (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
                 (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f;
        if (uVar14 != 0) {
          for (uVar14 = (1 << ((byte)local_100 & 0x1f)) - 1U & uVar14; param_2 = local_f0,
              uVar14 != 0; uVar14 = uVar14 ^ 1 << ((byte)(0x1fU - LZCOUNT(uVar14)) & 0x1f)) {
            pauVar12 = (undefined1 (*) [32])(*param_1 + (0x1fU - LZCOUNT(uVar14)));
            if ((*pauVar12 == *param_3) &&
               (iVar11 = memcmp(pauVar12 + 1,param_3 + 1,param_4 - 0x20), iVar11 == 0)) {
              return pauVar12;
            }
            param_1 = local_f8;
          }
        }
      }
    }
  }
  return param_2;
}

