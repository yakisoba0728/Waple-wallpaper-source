// Function: FUN_1404cacfc
// Addr: 1404cacfc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cacfc(void)

{
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  char unaff_SIL;
  undefined7 unaff_00000031;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000031,unaff_SIL - *(char *)CONCAT71(unaff_00000019,unaff_BL))
                   + 0x2a);
  *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

