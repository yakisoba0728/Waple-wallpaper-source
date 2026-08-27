// Function: thunk_FUN_14028e750
// Addr: 14028f3f0
// Size: 5 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
thunk_FUN_14028e750(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16]
                   ,ulonglong param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  pauVar2 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pauVar2 = (undefined1 (*) [16])FUN_14028cf70(param_1,param_2,(*param_3)[0]);
    }
    else {
      uVar4 = (longlong)param_2 - (longlong)param_1;
      pauVar2 = param_2;
      if (param_4 <= uVar4) {
        if ((((byte)DAT_1404dc00c & 4) == 0) || (uVar4 < 0x10)) {
          pauVar6 = (undefined1 (*) [16])((longlong)param_1 + uVar4 + (1 - param_4));
          if (param_1 != pauVar6) {
            do {
              if ((*param_1)[0] == (*param_3)[0]) {
                uVar4 = 1;
                while ((*param_1)[uVar4] == (*param_3)[uVar4]) {
                  uVar4 = uVar4 + 1;
                  if (uVar4 == param_4) {
                    return param_1;
                  }
                }
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            } while (param_1 != pauVar6);
          }
        }
        else if (param_4 < 0x11) {
          uVar7 = (uint)param_4;
          uVar8 = 0x10 < uVar7;
          FUN_1404210f0(auStack_58,param_3,param_4);
          auVar1 = auStack_58;
          do {
            iVar3 = pcmpestri(auStack_58,*param_1,0xc,uVar7,0x10);
            if ((bool)uVar8) {
              param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
              if (iVar3 <= (int)(0x10 - uVar7)) {
                return param_1;
              }
            }
            else {
              param_1 = param_1 + 1;
            }
            uVar8 = param_1 < param_2 + -1;
          } while (param_1 <= param_2 + -1);
          bVar9 = param_2 < param_1;
          lVar5 = (longlong)param_2 - (longlong)param_1;
          if (lVar5 != 0) {
            FUN_1404210f0(auStack_58,param_1,lVar5);
            iVar3 = pcmpestri(auVar1,auStack_58,0xc,uVar7,(int)lVar5);
            if (bVar9) {
              pauVar2 = (undefined1 (*) [16])(*param_1 + iVar3);
            }
          }
        }
        else {
          auVar1 = *param_3;
          bVar9 = CARRY8((longlong)param_1 - param_4,uVar4);
          pauVar6 = (undefined1 (*) [16])(((longlong)param_1 - param_4) + uVar4);
          do {
            iVar3 = pcmpestri(auVar1,*param_1,0xc,0x10,0x10);
            if (bVar9) {
              if (iVar3 == 0) {
LAB_14028e8a9:
                iVar3 = memcmp(param_1 + 1,param_3 + 1,param_4 - 0x10);
                if (iVar3 == 0) {
                  return param_1;
                }
              }
              else {
                param_1 = (undefined1 (*) [16])(*param_1 + iVar3);
                if (pauVar6 < param_1) {
                  return param_2;
                }
                auVar10._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
                auVar10._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
                auVar10._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
                auVar10._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                if (auVar10 == (undefined1  [16])0x0) goto LAB_14028e8a9;
              }
              param_1 = (undefined1 (*) [16])(*param_1 + 1);
            }
            else {
              param_1 = param_1 + 1;
            }
            bVar9 = param_1 < pauVar6;
          } while (param_1 <= pauVar6);
        }
      }
    }
  }
  return pauVar2;
}

