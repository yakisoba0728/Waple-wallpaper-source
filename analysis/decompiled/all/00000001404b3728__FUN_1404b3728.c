// Function: FUN_1404b3728
// Addr: 1404b3728
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3728(void)

{
  char in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  char unaff_SPL;
  char *in_R9;
  
  bVar1 = in_AL - 0x36;
  *in_R9 = *in_R9 + unaff_SPL;
  cRam00000001454b439d =
       cRam00000001454b439d +
       (bVar1 | *(byte *)(CONCAT71(in_register_00000001,bVar1) +
                         CONCAT71(in_register_00000001,bVar1)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

