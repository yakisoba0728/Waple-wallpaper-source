// Function: FUN_1404b1bc8
// Addr: 1404b1bc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1bc8(undefined8 param_1,longlong param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  undefined2 in_DS;
  
  uRam00000001406c1c18 = in_DS;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(byte *)(unaff_RSI + param_2) = *(byte *)(unaff_RSI + param_2) & in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

