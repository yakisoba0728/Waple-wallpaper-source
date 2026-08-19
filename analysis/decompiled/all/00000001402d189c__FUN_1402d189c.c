// Function: FUN_1402d189c
// Addr: 1402d189c
// Size: 5 bytes


undefined8 FUN_1402d189c(void)

{
  int iVar1;
  
  if (DAT_1404e4648 != (longlong *)0x0) {
    if (*DAT_1404e4648 == 0) {
      return 0;
    }
    iVar1 = FUN_1402dcc48(0,0,*DAT_1404e4648,0xffffffff,0,0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402dd8b0((longlong)iVar1,2);
    }
  }
  return 0xffffffff;
}

