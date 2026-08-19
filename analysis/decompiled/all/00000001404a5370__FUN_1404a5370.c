// Function: FUN_1404a5370
// Addr: 1404a5370
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5370(void)

{
  char in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  
  bVar1 = in_AL - 0x1c;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

