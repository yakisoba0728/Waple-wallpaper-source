// Function: FUN_1404cefc8
// Addr: 1404cefc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cefc8(uint param_1,uint *param_2)

{
  char *unaff_RDI;
  
  *param_2 = *param_2 & param_1;
  *(char *)((longlong)param_2 + -0x76) = *(char *)((longlong)param_2 + -0x76) + *unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

