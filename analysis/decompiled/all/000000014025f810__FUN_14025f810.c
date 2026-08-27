// Function: FUN_14025f810
// Addr: 14025f810
// Size: 139 bytes


longlong * FUN_14025f810(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *param_2;
  lVar3 = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = lVar3 - lVar1;
  if (lVar3 != 0) {
    uVar4 = (lVar3 >> 2) * -0x5555555555555555;
    if (0x1555555555555555 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    FUN_1401dca60(param_1,uVar4);
    lVar2 = *param_1;
    FUN_1404210f0(lVar2,lVar1,lVar3);
    param_1[1] = lVar2 + (lVar3 >> 2) * 4;
  }
  return param_1;
}

