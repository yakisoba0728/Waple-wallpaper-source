// Function: FUN_1404cee58
// Addr: 1404cee58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cee58(char *param_1,undefined2 param_2)

{
  char *unaff_RDI;
  char in_R11B;
  
  in(param_2);
  *param_1 = *param_1 + in_R11B;
  *unaff_RDI = *unaff_RDI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

