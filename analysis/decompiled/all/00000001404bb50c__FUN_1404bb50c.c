// Function: FUN_1404bb50c
// Addr: 1404bb50c
// Size: 1 bytes


void FUN_1404bb50c(char *param_1)

{
  undefined6 in_register_00000002;
  char *unaff_RSI;
  
  *param_1 = *param_1 + 'K';
  *unaff_RSI = *unaff_RSI + cRam0c00215c2500215b;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(0x4b,cRam0c00215c2500215b)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0x4b,cRam0c00215c2500215b)) +
       cRam0c00215c2500215b;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

