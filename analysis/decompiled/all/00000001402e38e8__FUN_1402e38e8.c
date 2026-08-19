// Function: FUN_1402e38e8
// Addr: 1402e38e8
// Size: 153 bytes


undefined8 FUN_1402e38e8(void)

{
  short sVar1;
  short *psVar2;
  longlong lVar3;
  longlong lVar4;
  short *psVar5;
  
  psVar2 = (short *)(*DAT_1404263f0)();
  if (psVar2 != (short *)0x0) {
    sVar1 = *psVar2;
    psVar5 = psVar2;
    while (sVar1 != 0) {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (psVar5[lVar3] != 0);
      psVar5 = psVar5 + lVar4 + 2;
      sVar1 = *psVar5;
    }
    lVar3 = ((longlong)psVar5 + (2 - (longlong)psVar2) >> 1) * 2;
    lVar4 = FUN_1402da070(lVar3);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(lVar4,psVar2,lVar3);
    }
    FUN_1402d9110(0);
    (*DAT_1404263e8)(psVar2);
  }
  return 0;
}

