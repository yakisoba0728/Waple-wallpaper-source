// Function: FUN_14028e940
// Addr: 14028e940
// Size: 553 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 (*) [16]
FUN_14028e940(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             longlong param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  pauVar3 = param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      pauVar3 = (undefined1 (*) [16])FUN_14028d070(param_1,param_2,*(undefined2 *)*param_3);
    }
    else {
      uVar5 = (longlong)param_2 - (longlong)param_1;
      uVar9 = param_4 * 2;
      pauVar3 = param_2;
      if (uVar9 <= uVar5) {
        if (((DAT_1404dc00c & 0x20) == 0) || (uVar5 < 0x20)) {
          if (((DAT_1404dc00c & 4) == 0) || (uVar5 < 0x10)) {
            pauVar8 = (undefined1 (*) [16])((longlong)param_1 + uVar5 + param_4 * -2 + 2);
            if (param_1 != pauVar8) {
              do {
                if (*(short *)*param_1 == *(short *)*param_3) {
                  lVar6 = 1;
                  while (*(short *)(*param_1 + lVar6 * 2) == *(short *)(*param_3 + lVar6 * 2)) {
                    lVar6 = lVar6 + 1;
                    if (lVar6 == param_4) {
                      return param_1;
                    }
                  }
                }
                param_1 = (undefined1 (*) [16])(*param_1 + 2);
              } while (param_1 != pauVar8);
            }
          }
          else if (uVar9 < 0x11) {
            uVar2 = (uint)param_4;
            uVar10 = 8 < uVar2;
            FUN_1404210f0(local_58,param_3,uVar9);
            auVar1 = local_58;
            do {
              iVar4 = pcmpestri(local_58,*param_1,0xd,uVar2,8);
              if ((bool)uVar10) {
                param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
                if (iVar4 <= (int)(8 - uVar2)) {
                  return param_1;
                }
              }
              else {
                param_1 = param_1 + 1;
              }
              uVar10 = param_1 < param_2 + -1;
            } while (param_1 <= param_2 + -1);
            uVar9 = (longlong)param_2 - (longlong)param_1;
            if (uVar9 != 0) {
              bVar11 = (uVar9 & 1) != 0;
              FUN_1404210f0(local_58,param_1);
              iVar4 = pcmpestri(auVar1,local_58,0xd,uVar2,(int)(uVar9 >> 1));
              if (bVar11) {
                pauVar3 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
              }
            }
          }
          else {
            auVar1 = *param_3;
            puVar7 = (undefined1 *)((longlong)param_1 + param_4 * -2);
            bVar11 = CARRY8((ulonglong)puVar7,uVar5);
            pauVar8 = (undefined1 (*) [16])(puVar7 + uVar5);
            do {
              iVar4 = pcmpestri(auVar1,*param_1,0xd,8,8);
              if (bVar11) {
                if (iVar4 == 0) {
LAB_14028eacb:
                  iVar4 = memcmp(param_1 + 1,param_3 + 1,uVar9 - 0x10);
                  if (iVar4 == 0) {
                    return param_1;
                  }
                }
                else {
                  param_1 = (undefined1 (*) [16])(*param_1 + (longlong)iVar4 * 2);
                  if (pauVar8 < param_1) {
                    return param_2;
                  }
                  auVar12._0_4_ = auVar1._0_4_ ^ *(uint *)*param_1;
                  auVar12._4_4_ = auVar1._4_4_ ^ *(uint *)(*param_1 + 4);
                  auVar12._8_4_ = auVar1._8_4_ ^ *(uint *)(*param_1 + 8);
                  auVar12._12_4_ = auVar1._12_4_ ^ *(uint *)(*param_1 + 0xc);
                  if (auVar12 == (undefined1  [16])0x0) goto LAB_14028eacb;
                }
                param_1 = (undefined1 (*) [16])(*param_1 + 2);
              }
              else {
                param_1 = param_1 + 1;
              }
              bVar11 = param_1 < pauVar8;
            } while (param_1 <= pauVar8);
          }
        }
        else {
          pauVar3 = (undefined1 (*) [16])FUN_14028e4d0(param_1,param_2,param_3,uVar9);
        }
      }
    }
  }
  return pauVar3;
}

