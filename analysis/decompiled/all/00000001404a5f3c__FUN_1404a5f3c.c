// Function: FUN_1404a5f3c
// Addr: 1404a5f3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5f3c(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  cVar2 = in_AL + -0x5e;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar2) + 0x7a0008c5);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

