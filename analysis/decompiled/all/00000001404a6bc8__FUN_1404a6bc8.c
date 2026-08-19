// Function: FUN_1404a6bc8
// Addr: 1404a6bc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6bc8(char *param_1,longlong param_2)

{
  char *pcVar1;
  int *piVar2;
  char in_AL;
  char cVar3;
  undefined7 in_register_00000001;
  char unaff_BH;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + 0x6aa40009) = *(char *)(unaff_RSI + 0x6aa40009) + unaff_BH;
  *param_1 = *param_1 + in_AL;
  cVar3 = in_AL + '\x01';
  pcVar1 = (char *)(param_2 + CONCAT71(in_register_00000001,cVar3) * 4);
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)CONCAT71(in_register_00000001,cVar3) =
       *(char *)CONCAT71(in_register_00000001,cVar3) + cVar3;
  piVar2 = (int *)(unaff_RSI + CONCAT71(in_register_00000001,cVar3));
  *piVar2 = *piVar2 + (int)param_1;
  *(char *)(param_2 * 3) = *(char *)(param_2 * 3) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

