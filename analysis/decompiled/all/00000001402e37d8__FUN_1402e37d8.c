// Function: FUN_1402e37d8
// Addr: 1402e37d8
// Size: 87 bytes


longlong FUN_1402e37d8(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  longlong lVar4;
  short *psVar6;
  ulonglong uVar7;
  longlong lVar5;
  
  psVar3 = (short *)(*DAT_1404263f0)();
  if (psVar3 != (short *)0x0) {
    sVar1 = *psVar3;
    psVar6 = psVar3;
    while (sVar1 != 0) {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (psVar6[lVar4] != 0);
      psVar6 = psVar6 + lVar5 + 2;
      sVar1 = *psVar6;
    }
    uVar7 = (longlong)psVar6 + (2 - (longlong)psVar3) >> 1;
    iVar2 = FUN_1402dccd8(0,0,psVar3,uVar7 & 0xffffffff,0,0,0,0);
    if (iVar2 != 0) {
      lVar4 = FUN_1402da070((longlong)iVar2);
      if (lVar4 != 0) {
        iVar2 = FUN_1402dccd8(0,0,psVar3,uVar7 & 0xffffffff,lVar4,iVar2,0,0);
        if (iVar2 == 0) {
          FUN_1402d9110(lVar4);
          lVar4 = 0;
        }
        else {
          FUN_1402d9110(0);
        }
        (*DAT_1404263e8)(psVar3);
        return lVar4;
      }
      FUN_1402d9110(0);
    }
    (*DAT_1404263e8)(psVar3);
  }
  return 0;
}

