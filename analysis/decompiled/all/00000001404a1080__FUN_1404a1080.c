// Function: FUN_1404a1080
// Addr: 1404a1080
// Size: 1 bytes


void FUN_1404a1080(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  longlong unaff_RBP;
  char *unaff_RSI;
  undefined2 in_DS;
  
  *(undefined2 *)(unaff_RBP + -0x1a9bfffd) = in_DS;
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + param_1;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

