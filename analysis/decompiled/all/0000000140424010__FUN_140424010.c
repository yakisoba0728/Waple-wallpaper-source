// Function: FUN_140424010
// Addr: 140424010
// Size: 118 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140424010(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (7 < DAT_1404e9088) {
    lVar2 = CONCAT62(DAT_1404e9070._2_6_,(undefined2)DAT_1404e9070);
    uVar4 = DAT_1404e9088 * 2 + 2;
    lVar3 = lVar2;
    if (0xfff < uVar4) {
      lVar3 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar3) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = DAT_1404e9088 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar3,uVar4);
  }
  _DAT_1404e9080 = 0;
  DAT_1404e9070._0_2_ = 0;
  DAT_1404e9088 = 7;
  return;
}

