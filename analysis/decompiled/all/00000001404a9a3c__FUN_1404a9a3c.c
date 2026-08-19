// Function: FUN_1404a9a3c
// Addr: 1404a9a3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9a3c(char *param_1,byte param_2)

{
  int *piVar1;
  byte in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char *unaff_RDI;
  
  cVar2 = in_AL + param_2;
  piVar1 = (int *)(CONCAT71(in_register_00000001,cVar2) + CONCAT71(in_register_00000001,cVar2));
  *piVar1 = *piVar1 + -1;
  *param_1 = *param_1 + ((cVar2 + 'g') - CARRY1(in_AL,param_2));
  *unaff_RDI = *unaff_RDI + (char)param_1;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

