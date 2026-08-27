// Function: thunk_FUN_14028cbb0
// Addr: 14028ed20
// Size: 5 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
thunk_FUN_14028cbb0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16]
                   ,ulonglong param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  uint uVar18;
  undefined1 auStack_d8 [32];
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 (**appauStack_a8 [2]) [16];
  undefined1 auStack_98 [16];
  undefined1 (*pauStack_88) [16];
  ulonglong uStack_80;
  undefined1 (*pauStack_78) [16];
  undefined8 uStack_70;
  ulonglong uStack_68;
  
  uStack_68 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  pauStack_b0 = param_2;
  if (param_4 != 0) {
    pauStack_b8 = param_1;
    if (param_4 == 1) {
      pauVar7 = (undefined1 (*) [16])FUN_14028d330(param_1,param_2,(*param_3)[0]);
      return pauVar7;
    }
    uVar11 = (longlong)param_2 - (longlong)param_1;
    if (param_4 <= uVar11) {
      if (((DAT_1404dc00c & 0x20) != 0) && (0x1f < uVar11)) {
        pauVar7 = (undefined1 (*) [16])FUN_14028c810();
        return pauVar7;
      }
      if (((DAT_1404dc00c & 4) == 0) || (uVar11 < 0x10)) {
        pauVar7 = (undefined1 (*) [16])((longlong)param_2 - param_4);
        while( true ) {
          if ((*pauVar7)[0] == (*param_3)[0]) {
            uVar11 = 1;
            while ((*pauVar7)[uVar11] == (*param_3)[uVar11]) {
              uVar11 = uVar11 + 1;
              if (uVar11 == param_4) {
                return pauVar7;
              }
            }
          }
          if (pauVar7 == param_1) break;
          pauVar7 = (undefined1 (*) [16])(pauVar7[-1] + 0xf);
        }
        return param_2;
      }
      iVar6 = (int)param_4;
      if (param_4 < 0x11) {
        uVar9 = (1 << (0x11U - (char)param_4 & 0x1f)) - 1;
        FUN_1404210f0(&pauStack_78,param_3,param_4);
        auVar13._8_8_ = uStack_70;
        auVar13._0_8_ = pauStack_78;
        param_2 = param_2 + -1;
        auVar12 = pcmpestrm(auVar13,*param_2,0xc,iVar6,0x10);
        uVar4 = auVar12._0_4_ & uVar9;
        if (uVar4 != 0) {
          uVar9 = 0x1f;
          if (uVar4 != 0) {
            for (; uVar4 >> uVar9 == 0; uVar9 = uVar9 - 1) {
            }
          }
          return (undefined1 (*) [16])(*param_2 + uVar9);
        }
        uVar4 = (uint)uVar11 & 0xf;
        puVar2 = *param_1;
        uVar17 = (uint)((ulonglong)pauStack_78 >> 0x20);
        uVar18 = (uint)((ulonglong)uStack_70 >> 0x20);
        if (param_2 != (undefined1 (*) [16])(puVar2 + uVar4)) {
          do {
            param_2 = param_2 + -1;
            auVar12 = pcmpestrm(auVar13,*param_2,0xc,iVar6,0x10);
            uVar10 = auVar12._0_4_;
            if (uVar10 != 0) {
              uVar8 = (uVar9 ^ 0xffff) & uVar10;
              if (uVar8 != 0) {
                do {
                  uVar1 = 0x1f;
                  if (uVar8 != 0) {
                    for (; uVar8 >> uVar1 == 0; uVar1 = uVar1 - 1) {
                    }
                  }
                  pauVar7 = (undefined1 (*) [16])(*param_2 + uVar1);
                  auVar15._0_4_ = (uint)pauStack_78 ^ *(uint *)*pauVar7;
                  auVar15._4_4_ = uVar17 ^ *(uint *)(*pauVar7 + 4);
                  auVar15._8_4_ = (uint)uStack_70 ^ *(uint *)(*pauVar7 + 8);
                  auVar15._12_4_ = uVar18 ^ *(uint *)(*pauVar7 + 0xc);
                  if ((*(undefined1 (*) [16])(&DAT_140429a80 + -param_4) & auVar15) ==
                      (undefined1  [16])0x0) {
                    return pauVar7;
                  }
                  uVar8 = uVar8 ^ 1 << ((byte)uVar1 & 0x1f);
                } while (uVar8 != 0);
              }
              uVar10 = uVar10 & uVar9;
              if (uVar10 != 0) {
                uVar4 = 0x1f;
                if (uVar10 != 0) {
                  for (; uVar10 >> uVar4 == 0; uVar4 = uVar4 - 1) {
                  }
                }
                return (undefined1 (*) [16])(*param_2 + uVar4);
              }
            }
            param_1 = pauStack_b8;
          } while (param_2 != (undefined1 (*) [16])(puVar2 + uVar4));
        }
        if ((ulonglong)uVar4 != 0) {
          auVar13 = pcmpestrm(auVar13,*param_1,0xc,iVar6,0x10);
          uVar4 = auVar13._0_4_ & (1 << (sbyte)uVar4) - 1U;
          if (uVar4 != 0) {
            uVar10 = (uVar9 ^ 0xffff) & uVar4;
            if (uVar10 != 0) {
              do {
                uVar8 = 0x1f;
                if (uVar10 != 0) {
                  for (; uVar10 >> uVar8 == 0; uVar8 = uVar8 - 1) {
                  }
                }
                pauVar7 = (undefined1 (*) [16])(*param_1 + uVar8);
                auVar14._0_4_ = *(uint *)*pauVar7 ^ (uint)pauStack_78;
                auVar14._4_4_ = *(uint *)(*pauVar7 + 4) ^ uVar17;
                auVar14._8_4_ = *(uint *)(*pauVar7 + 8) ^ (uint)uStack_70;
                auVar14._12_4_ = *(uint *)(*pauVar7 + 0xc) ^ uVar18;
                if ((*(undefined1 (*) [16])(&DAT_140429a80 + -param_4) & auVar14) ==
                    (undefined1  [16])0x0) {
                  return pauVar7;
                }
                uVar10 = uVar10 ^ 1 << ((byte)uVar8 & 0x1f);
              } while (uVar10 != 0);
            }
            uVar4 = uVar4 & uVar9;
            if (uVar4 != 0) {
              uVar9 = 0x1f;
              if (uVar4 != 0) {
                for (; uVar4 >> uVar9 == 0; uVar9 = uVar9 - 1) {
                }
              }
              return (undefined1 (*) [16])(*param_1 + uVar9);
            }
          }
        }
      }
      else {
        auVar13 = *param_3;
        param_2 = (undefined1 (*) [16])((longlong)param_2 - param_4);
        param_3 = param_3 + 1;
        appauStack_a8[0] = &pauStack_78;
        auVar12._0_4_ = *(uint *)*param_2 ^ auVar13._0_4_;
        auVar12._4_4_ = *(uint *)(*param_2 + 4) ^ auVar13._4_4_;
        auVar12._8_4_ = *(uint *)(*param_2 + 8) ^ auVar13._8_4_;
        auVar12._12_4_ = *(uint *)(*param_2 + 0xc) ^ auVar13._12_4_;
        auStack_98 = auVar13;
        pauStack_88 = param_3;
        uStack_80 = param_4;
        if ((auVar12 == (undefined1  [16])0x0) &&
           (pauStack_78 = param_2, iVar5 = memcmp(param_2 + 1,param_3,param_4 - 0x10), iVar5 == 0))
        {
          return param_2;
        }
        uVar4 = (uint)uVar11 - iVar6 & 0xf;
        uVar11 = (ulonglong)uVar4;
        if (param_2 != (undefined1 (*) [16])(*param_1 + uVar11)) {
          do {
            param_2 = param_2 + -1;
            auVar12 = pcmpestrm(auVar13,*param_2,0xc,0x10,0x10);
            pauStack_78 = param_2;
            for (uVar9 = auVar12._0_4_; uVar9 != 0; uVar9 = uVar9 ^ 1 << ((byte)uVar17 & 0x1f)) {
              uVar17 = 0x1f;
              if (uVar9 != 0) {
                for (; uVar9 >> uVar17 == 0; uVar17 = uVar17 - 1) {
                }
              }
              pauVar7 = param_2;
              if (((uVar17 == 0) ||
                  (pauVar7 = (undefined1 (*) [16])(*param_2 + uVar17),
                  auVar16._0_4_ = auVar13._0_4_ ^ *(uint *)*pauVar7,
                  auVar16._4_4_ = auVar13._4_4_ ^ *(uint *)(*pauVar7 + 4),
                  auVar16._8_4_ = auVar13._8_4_ ^ *(uint *)(*pauVar7 + 8),
                  auVar16._12_4_ = auVar13._12_4_ ^ *(uint *)(*pauVar7 + 0xc),
                  auVar16 == (undefined1  [16])0x0)) &&
                 (iVar6 = memcmp(pauVar7 + 1,param_3,param_4 - 0x10), iVar6 == 0)) {
                return pauVar7;
              }
              param_1 = pauStack_b8;
            }
          } while (param_2 != (undefined1 (*) [16])(*param_1 + uVar11));
        }
        if (((uVar11 != 0) &&
            (auVar13 = pcmpestrm(auVar13,*param_1,0xc,0x10,0x10),
            (auVar13._0_4_ & (1 << (sbyte)uVar4) - 1U) != 0)) &&
           (pauStack_78 = param_1, cVar3 = FUN_14028eb70(appauStack_a8), cVar3 != '\0')) {
          return pauStack_78;
        }
      }
    }
  }
  return pauStack_b0;
}

