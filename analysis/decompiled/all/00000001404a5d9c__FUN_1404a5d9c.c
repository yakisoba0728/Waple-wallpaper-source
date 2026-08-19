// Function: FUN_1404a5d9c
// Addr: 1404a5d9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5d9c(char *param_1)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  char unaff_SPL;
  char *unaff_RSI;
  
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  cVar1 = in(5);
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

