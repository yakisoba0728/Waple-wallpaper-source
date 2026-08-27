// Function: FUN_14000f6c0
// Addr: 14000f6c0
// Size: 267 bytes


undefined8 FUN_14000f6c0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  do {
    lVar1 = FUN_1402913f0();
    lVar2 = FUN_1402913d0();
    if (lVar1 == 10000000) {
      lVar2 = lVar2 * 100;
    }
    else {
      if (lVar1 == 24000000) {
        lVar3 = (lVar2 * 2) / 3;
        lVar2 = lVar2 * 0x29;
      }
      else {
        lVar3 = ((lVar2 % lVar1) * 1000000000) / lVar1;
        lVar2 = (lVar2 / lVar1) * 1000000000;
      }
      lVar2 = lVar3 + lVar2;
    }
    if ((param_3 == lVar2) || (param_3 < lVar2)) {
      return 1;
    }
    lVar2 = param_3 - lVar2;
    if (lVar2 < 0x4e94914f0001) {
      uVar5 = lVar2 / 1000000;
      if ((longlong)(uVar5 * 1000000) < lVar2) {
        uVar5 = uVar5 + 1;
      }
    }
    else {
      uVar5 = 86400000;
    }
    uVar4 = FUN_140291fe0(param_1,*param_2,uVar5 & 0xffffffff);
  } while ((int)uVar4 != 0);
  return uVar4;
}

