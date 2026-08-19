// Function: FUN_1404b9334
// Addr: 1404b9334
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9334(undefined8 param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  char *unaff_RDI;
  bool in_OF;
  undefined8 in_XMM3_Qb;
  
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined8 *)unaff_RDI = in_XMM3_Qb;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x210049 + unaff_RBP * 8)
  ;
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *unaff_RDI = *unaff_RDI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

