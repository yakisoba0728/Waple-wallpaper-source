// Function: FUN_1404c6c78
// Addr: 1404c6c78
// Size: 1 bytes


void FUN_1404c6c78(char *param_1,undefined8 param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  uint unaff_EBX;
  longlong unaff_RSI;
  
  *param_1 = *param_1 + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(uint *)(unaff_RSI + 0xc) = *(uint *)(unaff_RSI + 0xc) & unaff_EBX;
  *(char *)(unaff_RSI + 0x74) = *(char *)(unaff_RSI + 0x74) + (char)unaff_EBX;
  *param_1 = *param_1 + (char)((ulonglong)param_2 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

