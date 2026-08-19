// Function: FUN_1404bf558
// Addr: 1404bf558
// Size: 1 bytes


void FUN_1404bf558(undefined8 param_1,char param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(unaff_RSI + -0x1f) = *(char *)(unaff_RSI + -0x1f) + param_2;
  *(char *)(unaff_RBP + 0x680026e1) = *(char *)(unaff_RBP + 0x680026e1) + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

