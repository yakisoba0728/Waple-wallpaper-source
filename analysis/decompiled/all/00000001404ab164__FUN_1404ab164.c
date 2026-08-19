// Function: FUN_1404ab164
// Addr: 1404ab164
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab164(longlong param_1,longlong param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RDI;
  
  *(char *)(unaff_RBP + param_1) = *(char *)(unaff_RBP + param_1) + in_AH;
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + (char)param_2;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)((ulonglong)param_2 >> 8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *(char *)(unaff_RDI + -0x4e) = *(char *)(unaff_RDI + -0x4e) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

