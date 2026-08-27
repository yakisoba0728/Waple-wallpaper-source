// Function: FUN_1401310e0
// Addr: 1401310e0
// Size: 272 bytes


void FUN_1401310e0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar5 = lVar1 - lVar2 >> 2;
  if (param_2 < uVar5) {
    param_1[1] = lVar2 + param_2 * 4;
  }
  else if (uVar5 < param_2) {
    uVar4 = param_1[2] - lVar2 >> 2;
    if (uVar4 < param_2) {
      if (0x3fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar6 = 0x3fffffffffffffff;
      if ((uVar4 <= 0x3fffffffffffffff - (uVar4 >> 1)) &&
         (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < param_2)) {
        uVar6 = param_2;
      }
      lVar3 = FUN_1400399f0(uVar4,uVar6);
      FUN_1404217a0(lVar3 + (lVar1 - lVar2 & 0xfffffffffffffffcU),0,(param_2 - uVar5) * 4);
      FUN_1404210f0(lVar3,*param_1,param_1[1] - *param_1);
      FUN_140038af0(param_1,lVar3,param_2,uVar6);
    }
    else {
      lVar2 = (param_2 - uVar5) * 4;
      FUN_1404217a0(lVar1,0,lVar2);
      param_1[1] = lVar2 + lVar1;
    }
  }
  return;
}

