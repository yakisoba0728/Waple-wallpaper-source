// Function: FUN_1404cbce8
// Addr: 1404cbce8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbce8(undefined8 param_1,longlong param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char cVar1;
  longlong unaff_RSI;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + 0x34) = *(char *)(unaff_RSI + 0x34) + cVar1;
  *(char *)(param_2 + 0x76) = *(char *)(param_2 + 0x76) + (char)param_2;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(unaff_RSI + 0x34) = *(char *)(unaff_RSI + 0x34) + cVar1;
  *(char *)(param_2 + 0x76) = *(char *)(param_2 + 0x76) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

