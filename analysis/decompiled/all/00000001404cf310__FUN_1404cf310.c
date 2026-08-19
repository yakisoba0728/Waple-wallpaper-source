// Function: FUN_1404cf310
// Addr: 1404cf310
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf310(char *param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char unaff_R12B;
  
  cVar2 = in_AL + -0xe;
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar2) + 0x76);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

