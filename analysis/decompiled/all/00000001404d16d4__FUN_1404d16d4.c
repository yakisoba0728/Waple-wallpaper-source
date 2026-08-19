// Function: FUN_1404d16d4
// Addr: 1404d16d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d16d4(int param_1,longlong param_2)

{
  int *piVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  cVar2 = in_AL + -0x6c;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  piVar1 = (int *)(unaff_RSI + CONCAT71(in_register_00000001,cVar2));
  *piVar1 = *piVar1 + param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

