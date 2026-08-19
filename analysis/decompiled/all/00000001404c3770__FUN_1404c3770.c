// Function: FUN_1404c3770
// Addr: 1404c3770
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3770(void)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  char in_CF;
  
  cVar1 = in_AL + '0' + in_CF;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

