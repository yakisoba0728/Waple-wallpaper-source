// Function: FUN_14028e4d0
// Addr: 14028e4d0
// Size: 629 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [32]
FUN_14028e4d0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
             ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 *puVar6;
  int iVar7;
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  ulonglong uVar10;
  undefined1 (*pauVar11) [32];
  uint uVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [64];
  undefined2 uVar16;
  undefined1 auVar17 [64];
  undefined1 auStack_138 [56];
  undefined1 (*local_100) [32];
  undefined2 local_f8;
  undefined1 auStack_f6 [30];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  ulonglong local_60;
  
  local_60 = DAT_1404dc040 ^ (ulonglong)auStack_138;
  uVar10 = (longlong)param_2 - (longlong)param_1;
  if (param_4 < 0x21) {
    lVar3 = -param_4;
    local_c0 = *(undefined8 *)*(undefined1 (*) [32])(&DAT_140429a50 + lVar3);
    uStack_b8 = *(undefined8 *)(&UNK_140429a58 + lVar3);
    uStack_b0 = *(undefined8 *)(&UNK_140429a60 + lVar3);
    uStack_a8 = *(undefined8 *)(&UNK_140429a68 + lVar3);
    local_100 = param_2;
    FUN_1404210f0(&local_f8,param_3,param_4);
    puVar6 = *param_1;
    do {
      auVar13._2_2_ = local_f8;
      auVar13._0_2_ = local_f8;
      auVar13._4_2_ = local_f8;
      auVar13._6_2_ = local_f8;
      auVar13._8_2_ = local_f8;
      auVar13._10_2_ = local_f8;
      auVar13._12_2_ = local_f8;
      auVar13._14_2_ = local_f8;
      auVar13._16_2_ = local_f8;
      auVar13._18_2_ = local_f8;
      auVar13._20_2_ = local_f8;
      auVar13._22_2_ = local_f8;
      auVar13._24_2_ = local_f8;
      auVar13._26_2_ = local_f8;
      auVar13._28_2_ = local_f8;
      auVar13._30_2_ = local_f8;
      auVar13 = vpcmpeqw_avx2(auVar13,*param_1);
      uVar12 = (uint)(SUB321(auVar13 >> 7,0) & 1) | (uint)(SUB321(auVar13 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar13 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar13 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar13 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar13 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar13 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar13 >> 0x77,0) & 1) << 0xe |
               (uint)(SUB321(auVar13 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar13 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar13 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar13 >> 0xb7,0) & 1) << 0x16 |
               (uint)(SUB321(auVar13 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar13 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar13 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar13 >> 0xf7,0) & 1) << 0x1e;
      if (uVar12 != 0) {
        auVar15 = ZEXT3264(CONCAT302(auStack_f6,local_f8));
        auVar17 = ZEXT3264(CONCAT824(uStack_a8,CONCAT816(uStack_b0,CONCAT88(uStack_b8,local_c0))));
        pauVar11 = local_100;
        do {
          uVar1 = 0;
          for (uVar2 = uVar12; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            uVar1 = uVar1 + 1;
          }
          pauVar8 = (undefined1 (*) [32])(*param_1 + uVar1);
          if ((ulonglong)((longlong)pauVar11 - (longlong)pauVar8) < 0x20) {
            if ((ulonglong)((longlong)pauVar11 - (longlong)pauVar8) < param_4) break;
            FUN_1404210f0(local_a0,pauVar8);
            auVar15 = ZEXT3264(CONCAT302(auStack_f6,local_f8));
            auVar17 = ZEXT3264(CONCAT824(uStack_a8,CONCAT816(uStack_b0,CONCAT88(uStack_b8,local_c0))
                                        ));
            pauVar11 = local_100;
            auVar13 = local_a0;
          }
          else {
            auVar13 = *pauVar8;
          }
          if ((auVar17._0_32_ & (auVar15._0_32_ ^ auVar13)) == (undefined1  [32])0x0) {
            return pauVar8;
          }
          uVar12 = uVar12 ^ 1 << ((byte)uVar1 & 0x1f);
        } while (uVar12 != 0);
      }
      pauVar8 = local_100;
      param_1 = param_1 + 1;
    } while (param_1 != (undefined1 (*) [32])(puVar6 + (uVar10 & 0xffffffffffffffe0)));
    uVar10 = (longlong)local_100 - (longlong)param_1;
    if (param_4 <= uVar10) {
      FUN_1404210f0(&local_c0,param_1,uVar10);
      auVar14._2_2_ = local_f8;
      auVar14._0_2_ = local_f8;
      auVar14._4_2_ = local_f8;
      auVar14._6_2_ = local_f8;
      auVar14._8_2_ = local_f8;
      auVar14._10_2_ = local_f8;
      auVar14._12_2_ = local_f8;
      auVar14._14_2_ = local_f8;
      auVar14._16_2_ = local_f8;
      auVar14._18_2_ = local_f8;
      auVar14._20_2_ = local_f8;
      auVar14._22_2_ = local_f8;
      auVar14._24_2_ = local_f8;
      auVar14._26_2_ = local_f8;
      auVar14._28_2_ = local_f8;
      auVar14._30_2_ = local_f8;
      auVar5._8_8_ = uStack_b8;
      auVar5._0_8_ = local_c0;
      auVar5._16_8_ = uStack_b0;
      auVar5._24_8_ = uStack_a8;
      auVar13 = vpcmpeqw_avx2(auVar14,auVar5);
      uVar12 = (uint)(SUB321(auVar13 >> 7,0) & 1) | (uint)(SUB321(auVar13 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar13 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar13 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar13 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar13 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar13 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar13 >> 0x77,0) & 1) << 0xe |
               (uint)(SUB321(auVar13 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar13 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar13 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar13 >> 0xb7,0) & 1) << 0x16 |
               (uint)(SUB321(auVar13 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar13 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar13 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar13 >> 0xf7,0) & 1) << 0x1e;
      if (uVar12 != 0) {
        while( true ) {
          uVar1 = 0;
          for (uVar2 = uVar12; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            uVar1 = uVar1 + 1;
          }
          pauVar8 = local_100;
          if (uVar10 - param_4 < (ulonglong)uVar1) break;
          pauVar11 = (undefined1 (*) [32])(*param_1 + uVar1);
          FUN_1404210f0(local_80,pauVar11,(longlong)local_100 - (longlong)pauVar11);
          auVar4._2_30_ = auStack_f6;
          auVar4._0_2_ = local_f8;
          if ((*(undefined1 (*) [32])(&DAT_140429a50 + lVar3) & (local_80 ^ auVar4)) ==
              (undefined1  [32])0x0) {
            return pauVar11;
          }
          uVar12 = uVar12 ^ 1 << ((byte)uVar1 & 0x1f);
          if (uVar12 == 0) {
            return local_100;
          }
        }
      }
    }
  }
  else {
    local_80 = *param_3;
    auVar15 = ZEXT3264(local_80);
    uVar16 = local_80._0_2_;
    local_a0._2_2_ = uVar16;
    local_a0._0_2_ = uVar16;
    local_a0._4_2_ = uVar16;
    local_a0._6_2_ = uVar16;
    local_a0._8_2_ = uVar16;
    local_a0._10_2_ = uVar16;
    local_a0._12_2_ = uVar16;
    local_a0._14_2_ = uVar16;
    local_a0._16_2_ = uVar16;
    local_a0._18_2_ = uVar16;
    local_a0._20_2_ = uVar16;
    local_a0._22_2_ = uVar16;
    local_a0._24_2_ = uVar16;
    local_a0._26_2_ = uVar16;
    local_a0._28_2_ = uVar16;
    local_a0._30_2_ = uVar16;
    pauVar11 = (undefined1 (*) [32])((uVar10 - param_4) + (longlong)param_1);
    local_100 = param_2;
    do {
      auVar13 = vpcmpeqw_avx2(local_a0,*param_1);
      pauVar8 = local_100;
      for (uVar12 = (uint)(SUB321(auVar13 >> 7,0) & 1) | (uint)(SUB321(auVar13 >> 0x17,0) & 1) << 2
                    | (uint)(SUB321(auVar13 >> 0x27,0) & 1) << 4 |
                    (uint)(SUB321(auVar13 >> 0x37,0) & 1) << 6 |
                    (uint)(SUB321(auVar13 >> 0x47,0) & 1) << 8 |
                    (uint)(SUB321(auVar13 >> 0x57,0) & 1) << 10 |
                    (uint)(SUB321(auVar13 >> 0x67,0) & 1) << 0xc |
                    (uint)(SUB321(auVar13 >> 0x77,0) & 1) << 0xe |
                    (uint)(SUB321(auVar13 >> 0x87,0) & 1) << 0x10 |
                    (uint)(SUB321(auVar13 >> 0x97,0) & 1) << 0x12 |
                    (uint)(SUB321(auVar13 >> 0xa7,0) & 1) << 0x14 |
                    (uint)(SUB321(auVar13 >> 0xb7,0) & 1) << 0x16 |
                    (uint)(SUB321(auVar13 >> 199,0) & 1) << 0x18 |
                    (uint)(SUB321(auVar13 >> 0xd7,0) & 1) << 0x1a |
                    (uint)(SUB321(auVar13 >> 0xe7,0) & 1) << 0x1c |
                    (uint)(SUB321(auVar13 >> 0xf7,0) & 1) << 0x1e; local_100 = pauVar8, uVar12 != 0;
          uVar12 = uVar12 ^ 1 << ((byte)uVar1 & 0x1f)) {
        uVar1 = 0;
        for (uVar2 = uVar12; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          uVar1 = uVar1 + 1;
        }
        pauVar9 = (undefined1 (*) [32])(*param_1 + uVar1);
        if (pauVar11 < pauVar9) break;
        if (auVar15._0_32_ == *pauVar9) {
          iVar7 = memcmp(pauVar9 + 1,param_3 + 1,param_4 - 0x20);
          if (iVar7 == 0) {
            return pauVar9;
          }
          auVar15 = ZEXT3264(local_80);
        }
        pauVar8 = local_100;
      }
      param_1 = param_1 + 1;
    } while (param_1 <= pauVar11);
  }
  return pauVar8;
}

