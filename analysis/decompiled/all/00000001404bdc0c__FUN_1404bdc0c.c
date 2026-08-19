// Function: FUN_1404bdc0c
// Addr: 1404bdc0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdc0c(void)

{
  char cVar1;
  undefined7 in_register_00000001;
  
  cVar1 = in(0x1a);
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

