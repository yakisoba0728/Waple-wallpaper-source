// Function: FUN_1404d1948
// Addr: 1404d1948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1948(undefined8 param_1)

{
  char in_AL;
  char *pcVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  pcVar1 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),CONCAT11(0x4a,(char)param_1));
  *pcVar1 = *pcVar1 + in_AL;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

