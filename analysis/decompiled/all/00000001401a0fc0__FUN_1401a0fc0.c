// Function: FUN_1401a0fc0
// Addr: 1401a0fc0
// Size: 272 bytes


void FUN_1401a0fc0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  uVar5 = lVar1 - lVar2 >> 3;
  if (param_2 < uVar5) {
    param_1[1] = lVar2 + param_2 * 8;
  }
  else if (uVar5 < param_2) {
    uVar4 = param_1[2] - lVar2 >> 3;
    if (uVar4 < param_2) {
      if (0x1fffffffffffffff < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_140013050();
      }
      uVar6 = 0x1fffffffffffffff;
      if ((uVar4 <= 0x1fffffffffffffff - (uVar4 >> 1)) &&
         (uVar6 = (uVar4 >> 1) + uVar4, uVar6 < param_2)) {
        uVar6 = param_2;
      }
      lVar3 = FUN_140038540(uVar4,uVar6);
      FUN_1404217a0(lVar3 + (lVar1 - lVar2 & 0xfffffffffffffff8U),0,(param_2 - uVar5) * 8);
      FUN_1404210f0(lVar3,*param_1,param_1[1] - *param_1);
      FUN_1400384c0(param_1,lVar3,param_2,uVar6);
    }
    else {
      lVar2 = (param_2 - uVar5) * 8;
      FUN_1404217a0(lVar1,0,lVar2);
      param_1[1] = lVar2 + lVar1;
    }
  }
  return;
}

