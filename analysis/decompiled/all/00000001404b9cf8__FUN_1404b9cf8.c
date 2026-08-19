// Function: FUN_1404b9cf8
// Addr: 1404b9cf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9cf8(void)

{
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  bool in_OF;
  
  if (!in_OF) {
    pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + -0x38);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

