// Function: FUN_1404bf7ac
// Addr: 1404bf7ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf7ac(longlong param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  char *unaff_RDI;
  
  (&stack0x00000000)[param_1] = (&stack0x00000000)[param_1] + param_2;
  cVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI << 1;
  *(char *)(unaff_RBP + 0x27) = *(char *)(unaff_RBP + 0x27) + in_AH + (cVar2 < '\0');
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21004bf6);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

