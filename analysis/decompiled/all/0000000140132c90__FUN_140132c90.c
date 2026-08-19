// Function: FUN_140132c90
// Addr: 140132c90
// Size: 421 bytes


/* WARNING: Removing unreachable block (ram,0x000140132e2c) */
/* WARNING: Removing unreachable block (ram,0x000140132e35) */
/* WARNING: Removing unreachable block (ram,0x000140132dfc) */
/* WARNING: Removing unreachable block (ram,0x000140132e0b) */
/* WARNING: Removing unreachable block (ram,0x000140132d66) */
/* WARNING: Removing unreachable block (ram,0x000140132db0) */
/* WARNING: Removing unreachable block (ram,0x000140132dc8) */
/* WARNING: Removing unreachable block (ram,0x000140132e1f) */
/* WARNING: Removing unreachable block (ram,0x000140132e81) */

void FUN_140132c90(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = DAT_1404e8fa0 - DAT_1404e8f98 >> 3;
  uVar2 = lVar1 * -0xf0f0f0f0f0f0f0f;
  if (1 < uVar2) {
    if (DAT_1404e8f98 + 0x88 == DAT_1404e8fa0) {
      DAT_1404e8fa0 = DAT_1404e8f98 + 0x88;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140017310(DAT_1404e8f98 + 0xe0);
  }
  if (uVar2 == 0) {
    if ((DAT_1404e8fa8 - DAT_1404e8f98 >> 3) * -0xf0f0f0f0f0f0f0f == 0) {
      func_0x00014028aff0(0x88);
      return;
    }
    DAT_1404e8fa0 = FUN_140133980(DAT_1404e8fa0,lVar1 * 0xf0f0f0f0f0f0f0f + 1);
  }
  return;
}

