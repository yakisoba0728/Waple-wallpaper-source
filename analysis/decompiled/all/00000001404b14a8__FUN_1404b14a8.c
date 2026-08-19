// Function: FUN_1404b14a8
// Addr: 1404b14a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b14a8(void)

{
  char *pcVar1;
  undefined7 in_register_00000001;
  char unaff_SPL;
  char *in_R9;
  
  *in_R9 = *in_R9 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,0x13) =
       *(char *)CONCAT71(in_register_00000001,0x13) + '\x13';
  pcVar1 = (char *)(CONCAT71(in_register_00000001,0x13) + -0x46ffea3c);
  *pcVar1 = *pcVar1 + '\x13';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

