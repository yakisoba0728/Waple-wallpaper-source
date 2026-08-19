// Function: FUN_140294680
// Addr: 140294680
// Size: 58 bytes


void FUN_140294680(void)

{
  undefined8 uVar1;
  
  if (DAT_1404dc440 != 0) {
    uVar1 = (*DAT_140426560)();
    DAT_1404dc440 = DAT_1404dc440 + -1;
    *(undefined8 *)(&DAT_1404e4200 + DAT_1404dc440 * 8) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c98b4();
}

