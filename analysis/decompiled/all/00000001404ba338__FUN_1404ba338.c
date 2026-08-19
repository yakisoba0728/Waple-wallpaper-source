// Function: FUN_1404ba338
// Addr: 1404ba338
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba338(void)

{
  char in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  char in_CF;
  
  bVar1 = (in_AL + 'x') - in_CF;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) & bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

