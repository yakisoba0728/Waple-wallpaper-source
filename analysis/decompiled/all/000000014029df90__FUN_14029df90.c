// Function: FUN_14029df90
// Addr: 14029df90
// Size: 13 bytes


void FUN_14029df90(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uStackX_8;
  
  uVar2 = param_2[2];
  if (7 < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar3 = param_1[3];
  lVar4 = param_1[2];
  if (uVar3 - lVar4 < uVar2) {
    func_0x00014029c970(param_1,uVar2,uStackX_8,param_2,uVar2);
    return;
  }
  lVar1 = lVar4 + uVar2;
  if (((lVar4 != lVar1) && (7 < uVar3)) && (DAT_140472300 != '\0')) {
    lVar5 = *param_1;
    uVar8 = uVar3 * 2 + 9 + lVar5 & 0xfffffffffffffff8;
    uVar3 = lVar5 + (lVar4 + 1) * 2;
    uVar6 = lVar5 + 2 + lVar1 * 2;
    uVar7 = uVar8;
    if (uVar6 <= uVar8) {
      uVar7 = uVar6;
    }
    uVar6 = uVar8;
    if (uVar3 <= uVar8) {
      uVar6 = uVar3;
    }
    func_0x00014000ed00(lVar5,uVar8,uVar6,uVar7);
  }
  param_1[2] = lVar1;
  if (7 < (ulonglong)param_1[3]) {
    param_1 = (longlong *)*param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0((longlong)param_1 + lVar4 * 2,param_2,uVar2 * 2);
}

