// Function: FUN_1404ba030
// Addr: 1404ba030
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba030(void)

{
  char *pcVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x77fffedd);
  *pcVar1 = *pcVar1 + unaff_BL;
  in(0xdf);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

