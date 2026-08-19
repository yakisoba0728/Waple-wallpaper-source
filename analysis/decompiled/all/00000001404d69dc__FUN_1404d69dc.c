// Function: FUN_1404d69dc
// Addr: 1404d69dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d69dc(void)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *in_R9;
  char unaff_R12B;
  char in_CF;
  
  cRam00000001a9216a19 = cRam00000001a9216a19 + in_AL + in_CF;
  *in_R9 = *in_R9 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 3);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

