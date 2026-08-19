// Function: FUN_1404d2f9c
// Addr: 1404d2f9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2f9c(void)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BH;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 1);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

