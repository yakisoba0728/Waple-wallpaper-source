// Function: FUN_1404d7dc4
// Addr: 1404d7dc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7dc4(void)

{
  byte *pbVar1;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  pbVar1 = (byte *)(unaff_RSI + 0x37);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

