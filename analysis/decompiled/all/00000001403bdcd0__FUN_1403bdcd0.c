// Function: FUN_1403bdcd0
// Addr: 1403bdcd0
// Size: 53 bytes


void FUN_1403bdcd0(char *param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = (uint)param_2;
  if (((*param_1 != '\0') && (uVar8 <= (uint)param_3)) && (uVar8 != 0xffffffff)) {
    uVar1 = (uint)(param_2 >> 9);
    uVar3 = uVar1 & 0x7fffff;
    uVar2 = (uint)(param_3 >> 9);
    uVar7 = uVar2 & 0x7fffff;
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    uVar6 = uVar3;
    if (uVar8 != uVar1 << 9) {
      uVar6 = uVar3 + 1;
    }
    uVar8 = uVar7;
    if ((uint)param_3 != uVar2 * 0x200 + 0x1ff) {
      uVar8 = uVar7 - 1;
    }
    if (((int)uVar8 < (int)uVar6) || (uVar3 < uVar6)) {
      lVar4 = FUN_1403ed630(param_1,param_2,0);
      if (lVar4 != 0) {
        if (uVar3 == uVar7) {
          uVar5 = param_3 & 0xffffffff;
        }
        else {
          uVar5 = (ulonglong)(uVar1 * 0x200 + 0x1ff);
        }
        func_0x0001403bdc10(lVar4,param_2 & 0xffffffff,uVar5);
      }
    }
    if (((int)uVar8 < (int)uVar7) && (uVar3 != uVar7)) {
      lVar4 = FUN_1403ed630(param_1,param_3 & 0xffffffff,0);
      if (lVar4 != 0) {
        func_0x0001403bdc10(lVar4,uVar2 << 9,param_3 & 0xffffffff);
      }
    }
    func_0x0001403bd9d0(param_1,uVar6,uVar8);
  }
  return;
}

