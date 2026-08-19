// Function: FUN_1404c6208
// Addr: 1404c6208
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6208(char *param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char cVar3;
  char unaff_R12B;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  cVar2 = in_AL + 'a';
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar2) + -8);
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)(param_2 + -0xfffd108) = *(char *)(param_2 + -0xfffd108) + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

