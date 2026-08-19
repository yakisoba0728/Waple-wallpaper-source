// Function: FUN_1404bef98
// Addr: 1404bef98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bef98(void)

{
  char cVar1;
  undefined7 in_register_00000001;
  char unaff_SPL;
  char *unaff_RSI;
  char *in_R9;
  
  cVar1 = cRameea00026a0fe0026;
  *in_R9 = *in_R9 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + cVar1;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  cVar1 = in(0xc);
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

