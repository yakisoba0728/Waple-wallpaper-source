// Function: FUN_1400aac80
// Addr: 1400aac80
// Size: 665 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400aac80(longlong param_1,ulonglong *param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 (*pauVar35) [16];
  undefined1 *puVar36;
  uint uVar37;
  ulonglong uVar38;
  undefined1 (*pauVar39) [16];
  byte *pbVar40;
  undefined1 (*pauVar41) [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  uint uVar46;
  undefined1 in_XMM1 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar50;
  undefined1 in_XMM2 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar51 [16];
  undefined1 in_XMM5 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar52 [16];
  
  pauVar41 = (undefined1 (*) [16])param_2[1];
  uVar38 = (ulonglong)~*(uint *)(param_1 + 0x28);
  if (pauVar41 == (undefined1 (*) [16])0x0) {
    pauVar39 = (undefined1 (*) [16])*param_2;
  }
  else {
    do {
      pauVar39 = (undefined1 (*) [16])*param_2;
      if (((ulonglong)pauVar39 & 0xf) == 0) {
        if ((undefined1 (*) [16])0x3f < pauVar41) {
          auVar47 = lddqu(in_XMM2,*pauVar39);
          auVar51 = lddqu(in_XMM3,pauVar39[1]);
          auVar48._0_4_ = auVar47._0_4_ ^ (uint)uVar38;
          auVar48._4_4_ = auVar47._4_4_;
          auVar48._8_4_ = auVar47._8_4_;
          auVar48._12_4_ = auVar47._12_4_;
          auVar47 = lddqu(in_XMM5,pauVar39[2]);
          auVar52 = lddqu(unaff_XMM6,pauVar39[3]);
          if ((undefined1 (*) [16])0x3f < pauVar41) {
            pauVar35 = pauVar39 + 4;
            while (pauVar39 = pauVar39 + 4,
                  pauVar39 <
                  (undefined1 (*) [16])
                  (*pauVar35 + ((ulonglong)(pauVar41 + -4) & 0xffffffffffffffc0))) {
              auVar44 = lddqu(in_XMM1,pauVar39[1]);
              auVar45._8_8_ = 0;
              auVar45._0_8_ = auVar48._0_8_;
              auVar42._8_8_ = 0;
              auVar42._0_8_ = _DAT_14047eb10;
              auVar2 = (undefined1  [16])0x0;
              for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
                if ((auVar45 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
                  auVar2 = auVar2 ^ auVar42 << uVar37;
                }
              }
              auVar23._8_8_ = 0;
              auVar23._0_8_ = auVar48._8_8_;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = _UNK_14047eb18;
              auVar45 = (undefined1  [16])0x0;
              for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
                if ((auVar23 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
                  auVar45 = auVar45 ^ auVar28 << uVar37;
                }
              }
              auVar42 = lddqu(auVar2,*pauVar39);
              auVar48._0_4_ = auVar45._0_4_ ^ auVar2._0_4_ ^ auVar42._0_4_;
              auVar48._4_4_ = auVar45._4_4_ ^ auVar2._4_4_ ^ auVar42._4_4_;
              auVar48._8_4_ = auVar45._8_4_ ^ auVar2._8_4_ ^ auVar42._8_4_;
              auVar48._12_4_ = auVar45._12_4_ ^ auVar2._12_4_ ^ auVar42._12_4_;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = auVar51._0_8_;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = _DAT_14047eb10;
              auVar2 = (undefined1  [16])0x0;
              for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
                if ((auVar3 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
                  auVar2 = auVar2 ^ auVar11 << uVar37;
                }
              }
              auVar24._8_8_ = 0;
              auVar24._0_8_ = auVar51._8_8_;
              auVar29._8_8_ = 0;
              auVar29._0_8_ = _UNK_14047eb18;
              auVar45 = (undefined1  [16])0x0;
              for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
                if ((auVar24 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
                  auVar45 = auVar45 ^ auVar29 << uVar37;
                }
              }
              auVar4._8_8_ = 0;
              auVar4._0_8_ = auVar47._0_8_;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = _DAT_14047eb10;
              auVar42 = (undefined1  [16])0x0;
              for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
                if ((auVar4 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
                  auVar42 = auVar42 ^ auVar12 << uVar37;
                }
              }
              auVar51._0_4_ = auVar45._0_4_ ^ auVar2._0_4_ ^ auVar44._0_4_;
              auVar51._4_4_ = auVar45._4_4_ ^ auVar2._4_4_ ^ auVar44._4_4_;
              auVar51._8_4_ = auVar45._8_4_ ^ auVar2._8_4_ ^ auVar44._8_4_;
              auVar51._12_4_ = auVar45._12_4_ ^ auVar2._12_4_ ^ auVar44._12_4_;
              auVar45 = lddqu(auVar44,pauVar39[2]);
              auVar44._8_8_ = 0;
              auVar44._0_8_ = auVar47._8_8_;
              auVar30._8_8_ = 0;
              auVar30._0_8_ = _UNK_14047eb18;
              auVar2 = (undefined1  [16])0x0;
              for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
                if ((auVar44 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
                  auVar2 = auVar2 ^ auVar30 << uVar37;
                }
              }
              auVar25._8_8_ = 0;
              auVar25._0_8_ = auVar52._8_8_;
              auVar31._8_8_ = 0;
              auVar31._0_8_ = _UNK_14047eb18;
              auVar44 = (undefined1  [16])0x0;
              for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
                if ((auVar25 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
                  auVar44 = auVar44 ^ auVar31 << uVar37;
                }
              }
              auVar47._0_4_ = auVar2._0_4_ ^ auVar42._0_4_ ^ auVar45._0_4_;
              auVar47._4_4_ = auVar2._4_4_ ^ auVar42._4_4_ ^ auVar45._4_4_;
              auVar47._8_4_ = auVar2._8_4_ ^ auVar42._8_4_ ^ auVar45._8_4_;
              auVar47._12_4_ = auVar2._12_4_ ^ auVar42._12_4_ ^ auVar45._12_4_;
              in_XMM1 = lddqu(auVar45,pauVar39[3]);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = auVar52._0_8_;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = _DAT_14047eb10;
              auVar2 = (undefined1  [16])0x0;
              for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
                if ((auVar5 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
                  auVar2 = auVar2 ^ auVar13 << uVar37;
                }
              }
              auVar52._0_4_ = auVar44._0_4_ ^ auVar2._0_4_ ^ in_XMM1._0_4_;
              auVar52._4_4_ = auVar44._4_4_ ^ auVar2._4_4_ ^ in_XMM1._4_4_;
              auVar52._8_4_ = auVar44._8_4_ ^ auVar2._8_4_ ^ in_XMM1._8_4_;
              auVar52._12_4_ = auVar44._12_4_ ^ auVar2._12_4_ ^ in_XMM1._12_4_;
            }
          }
          pauVar39 = (undefined1 (*) [16])((ulonglong)pauVar41 & 0xffffffffffffffc0);
          auVar6._8_8_ = 0;
          auVar6._0_8_ = auVar48._0_8_;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = _DAT_14047eb20;
          auVar2 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar6 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar2 = auVar2 ^ auVar14 << uVar37;
            }
          }
          auVar26._8_8_ = 0;
          auVar26._0_8_ = auVar48._8_8_;
          auVar32._8_8_ = 0;
          auVar32._0_8_ = _UNK_14047eb28;
          auVar48 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar26 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar48 = auVar48 ^ auVar32 << uVar37;
            }
          }
          auVar43._0_8_ =
               CONCAT44(auVar48._4_4_ ^ auVar51._4_4_ ^ auVar2._4_4_,
                        auVar48._0_4_ ^ auVar51._0_4_ ^ auVar2._0_4_);
          auVar43._8_4_ = auVar48._8_4_ ^ auVar51._8_4_ ^ auVar2._8_4_;
          auVar43._12_4_ = auVar48._12_4_ ^ auVar51._12_4_ ^ auVar2._12_4_;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = auVar43._8_8_;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = _UNK_14047eb28;
          auVar51 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar2 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar51 = auVar51 ^ auVar33 << uVar37;
            }
          }
          auVar7._8_8_ = 0;
          auVar7._0_8_ = auVar43._0_8_;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = _DAT_14047eb20;
          auVar48 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar7 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar48 = auVar48 ^ auVar15 << uVar37;
            }
          }
          auVar49._0_8_ =
               CONCAT44(auVar51._4_4_ ^ auVar47._4_4_ ^ auVar48._4_4_,
                        auVar51._0_4_ ^ auVar47._0_4_ ^ auVar48._0_4_);
          auVar49._8_4_ = auVar51._8_4_ ^ auVar47._8_4_ ^ auVar48._8_4_;
          auVar49._12_4_ = auVar51._12_4_ ^ auVar47._12_4_ ^ auVar48._12_4_;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = auVar49._8_8_;
          auVar34._8_8_ = 0;
          auVar34._0_8_ = _UNK_14047eb28;
          auVar51 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar27 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar51 = auVar51 ^ auVar34 << uVar37;
            }
          }
          auVar8._8_8_ = 0;
          auVar8._0_8_ = auVar49._0_8_;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = _DAT_14047eb20;
          auVar47 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar8 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar47 = auVar47 ^ auVar16 << uVar37;
            }
          }
          auVar19._4_4_ = auVar51._4_4_ ^ auVar52._4_4_ ^ auVar47._4_4_;
          auVar19._0_4_ = auVar51._0_4_ ^ auVar52._0_4_ ^ auVar47._0_4_;
          auVar19._8_8_ = 0;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = _UNK_14047eb28;
          auVar48 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar19 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar48 = auVar48 ^ auVar21 << uVar37;
            }
          }
          uVar46 = auVar48._4_4_ ^ auVar51._12_4_ ^ auVar52._12_4_ ^ auVar47._12_4_;
          auVar9._4_4_ = uVar46 & _UNK_140492be4;
          auVar9._0_4_ = (auVar48._0_4_ ^ auVar51._8_4_ ^ auVar52._8_4_ ^ auVar47._8_4_) &
                         _DAT_140492be0;
          auVar9._8_8_ = 0;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = _DAT_14047aa90;
          auVar51 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar9 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar51 = auVar51 ^ auVar17 << uVar37;
            }
          }
          uVar50 = auVar51._4_4_ ^ auVar48._8_4_;
          auVar20._4_4_ = uVar50 & _UNK_140492be4;
          auVar20._0_4_ = (auVar51._0_4_ ^ uVar46) & _DAT_140492be0;
          auVar20._8_8_ = 0;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = _UNK_14047aaa8;
          auVar51 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar20 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar51 = auVar51 ^ auVar22 << uVar37;
            }
          }
          auVar10._4_4_ = auVar51._4_4_ & _UNK_140492be4;
          auVar10._0_4_ = auVar51._0_4_ & _DAT_140492be0;
          auVar10._8_8_ = 0;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = _DAT_14047aaa0;
          auVar51 = (undefined1  [16])0x0;
          for (uVar37 = 0; uVar37 < 0x40; uVar37 = uVar37 + 1) {
            if ((auVar10 & (undefined1  [16])0x1 << uVar37) != (undefined1  [16])0x0) {
              auVar51 = auVar51 ^ auVar18 << uVar37;
            }
          }
          uVar50 = auVar51._4_4_ ^ uVar50;
          if ((pauVar39 < pauVar41) && (pauVar39 <= (undefined1 (*) [16])param_2[1])) {
            uVar38 = *param_2;
            pbVar1 = *(undefined1 (*) [16])param_2[1] + uVar38;
            for (pbVar40 = *pauVar39 + uVar38; pbVar40 < pbVar1; pbVar40 = pbVar40 + 1) {
              uVar38 = 0;
              uVar50 = uVar50 >> 8 ^
                       *(uint *)(&DAT_14047ab10 + (ulonglong)(byte)((byte)uVar50 ^ *pbVar40) * 4);
            }
          }
          *(uint *)(param_1 + 0x28) = ~uVar50;
          return uVar38 & 0xffffffffffffff00;
        }
        break;
      }
      uVar38 = (ulonglong)
               ((uint)uVar38 >> 8 ^
               *(uint *)(&DAT_14047ab10 + (ulonglong)(byte)((byte)uVar38 ^ (*pauVar39)[0]) * 4));
      if (pauVar41 == (undefined1 (*) [16])0x0) {
        pauVar39 = (undefined1 (*) [16])0x0;
        *param_2 = 0;
        param_2[1] = 0;
        pauVar41 = pauVar39;
        break;
      }
      pauVar41 = (undefined1 (*) [16])(pauVar41[-1] + 0xf);
      param_2[1] = (ulonglong)pauVar41;
      pauVar39 = (undefined1 (*) [16])(*pauVar39 + 1);
      *param_2 = (ulonglong)pauVar39;
    } while (pauVar41 != (undefined1 (*) [16])0x0);
  }
  uVar37 = (uint)uVar38;
  puVar36 = *pauVar39;
  for (; pauVar39 < (undefined1 (*) [16])(puVar36 + (longlong)*pauVar41);
      pauVar39 = (undefined1 (*) [16])(*pauVar39 + 1)) {
    uVar37 = (uint)(uVar38 >> 8) ^
             *(uint *)(&DAT_14047ab10 + (ulonglong)(byte)((byte)uVar38 ^ (*pauVar39)[0]) * 4);
    uVar38 = (ulonglong)uVar37;
  }
  *(uint *)(param_1 + 0x28) = ~uVar37;
  return (ulonglong)(uint3)(~uVar37 >> 8) << 8;
}

