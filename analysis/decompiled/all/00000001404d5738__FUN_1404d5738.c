// Function: FUN_1404d5738
// Addr: 1404d5738
// Size: 1 bytes


void FUN_1404d5738(uint *param_1,char param_2)

{
  uint *puVar1;
  byte in_AL;
  undefined7 in_register_00000001;
  uint unaff_ESP;
  uint unaff_EBP;
  char *unaff_RSI;
  
  *param_1 = *param_1 & unaff_ESP;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  puVar1 = (uint *)(CONCAT71(in_register_00000001,in_AL) + 2);
  *puVar1 = *puVar1 & unaff_EBP;
  *unaff_RSI = *unaff_RSI + param_2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

