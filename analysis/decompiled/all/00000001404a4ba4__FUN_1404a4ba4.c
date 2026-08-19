// Function: FUN_1404a4ba4
// Addr: 1404a4ba4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4ba4(void)

{
  byte in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  
  cVar1 = in_AL + 0x34;
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1 + (0xcb < in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

