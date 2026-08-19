// Function: FUN_1404b1bd8
// Addr: 1404b1bd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1bd8(undefined8 param_1,longlong param_2)

{
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  undefined2 in_DS;
  
  uRam00000001406c1c28 = in_DS;
  *(byte *)(unaff_RSI + param_2) =
       *(byte *)(unaff_RSI + param_2) &
       in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

