// Function: FUN_1404a3cf8
// Addr: 1404a3cf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3cf8(char *param_1,int param_2)

{
  char cVar1;
  undefined7 in_register_00000001;
  
  cVar1 = cRamf40006d2b40006ce;
  *(int *)CONCAT71(in_register_00000001,cRamf40006d2b40006ce) =
       *(int *)CONCAT71(in_register_00000001,cRamf40006d2b40006ce) + param_2;
  *param_1 = *param_1 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

