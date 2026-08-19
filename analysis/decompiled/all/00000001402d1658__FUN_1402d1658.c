// Function: FUN_1402d1658
// Addr: 1402d1658
// Size: 40 bytes


void FUN_1402d1658(short *param_1)

{
  longlong lVar1;
  longlong lVar2;
  short sVar4;
  longlong lVar3;
  
  sVar4 = *param_1;
  lVar2 = 0;
  while (sVar4 != 0) {
    lVar1 = lVar2 + 1;
    if (sVar4 == 0x3d) {
      lVar1 = lVar2;
    }
    lVar2 = -1;
    do {
      lVar3 = lVar2;
      lVar2 = lVar3 + 1;
    } while (param_1[lVar2] != 0);
    param_1 = param_1 + lVar3 + 2;
    lVar2 = lVar1;
    sVar4 = *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402dd8b0(lVar2 + 1,8);
}

