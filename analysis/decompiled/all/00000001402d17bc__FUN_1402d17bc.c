// Function: FUN_1402d17bc
// Addr: 1402d17bc
// Size: 10 bytes


undefined8 FUN_1402d17bc(void)

{
  int iVar1;
  
  if (DAT_1404e4650 != (longlong *)0x0) {
    if (*DAT_1404e4650 == 0) {
      return 0;
    }
    iVar1 = FUN_1402dccd8(0,0,*DAT_1404e4650,0xffffffff,0,0,0,0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402dd8b0((longlong)iVar1,1);
    }
  }
  return 0xffffffff;
}

