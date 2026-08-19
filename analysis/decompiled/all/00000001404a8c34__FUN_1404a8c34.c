// Function: FUN_1404a8c34
// Addr: 1404a8c34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8c34(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  
  *param_1 = *param_1 + unaff_SPL;
  cVar2 = in_AL + '\x02';
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + cVar2;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

