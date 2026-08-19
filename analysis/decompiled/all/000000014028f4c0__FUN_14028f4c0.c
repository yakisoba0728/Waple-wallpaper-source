// Function: FUN_14028f4c0
// Addr: 14028f4c0
// Size: 5 bytes


void FUN_14028f4c0(undefined1 (*param_1) [16],longlong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  ulonglong uVar4;
  undefined1 (*pauVar5) [16];
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_1404dc110 ^ (ulonglong)auStack_78;
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_14028d040(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar4 = param_2 - (longlong)param_1;
      if (param_4 <= uVar4) {
        if ((((byte)DAT_1404dc0dc & 4) == 0) || (uVar4 < 0x10)) {
          pauVar5 = (undefined1 (*) [16])((longlong)param_1 + uVar4 + (1 - param_4));
          if (param_1 != pauVar5) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVar4 = 1;
                while ((*param_1)[uVar4] == (*param_3)[uVar4]) {
                  uVar4 = uVar4 + 1;
                  if (uVar4 == param_4) goto code_r0x00014028e9a7;
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            } while (param_1 != pauVar5);
          }
        }
        else {
          if (param_4 < 0x11) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(auStack_58,param_3,param_4);
          }
          auVar1 = *param_3;
          bVar6 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar5 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar6) {
              if (iVar3 == 0) {
code_r0x00014028e979:
                iVar3 = func_0x0001404210c0(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVar3 == 0) break;
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
                if (pauVar5 < param_1) break;
                auVar2 = *param_1;
                auVar7._0_4_ = auVar1._0_4_ ^ auVar2._0_4_;
                auVar7._4_4_ = auVar1._4_4_ ^ auVar2._4_4_;
                auVar7._8_4_ = auVar1._8_4_ ^ auVar2._8_4_;
                auVar7._12_4_ = auVar1._12_4_ ^ auVar2._12_4_;
                if (auVar7 == (undefined1  [16])0x0) goto code_r0x00014028e979;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar6 = param_1 < pauVar5;
          } while (param_1 <= pauVar5);
        }
      }
    }
  }
code_r0x00014028e9a7:
  func_0x0001402ed2f0(uStack_48 ^ (ulonglong)auStack_78);
  return;
}

