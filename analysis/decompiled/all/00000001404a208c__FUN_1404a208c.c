// Function: FUN_1404a208c
// Addr: 1404a208c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a20b7) overlaps instruction at (ram,0x0001404a20b5)
    */

void FUN_1404a208c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char unaff_BH;
  char unaff_SPL;
  
  *param_2 = *param_2 + -0x14;
  cRam00000000210049ec = cRam00000000210049ec + -0x14;
  if (cRam00000000210049ec == '\0') {
    cRam00000000420093d8 = cRam00000000420093d8 + unaff_BH;
  }
  else {
    cRam000000009a004ea4 = cRam000000009a004ea4 + 'I';
    *param_4 = *param_4 + unaff_SPL;
  }
  cRam00000000210049ec = cRam00000000210049ec + -0x14;
  cRam000000009a004ea4 = cRam000000009a004ea4 + 'I';
  *param_4 = *param_4 + -0x14;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

