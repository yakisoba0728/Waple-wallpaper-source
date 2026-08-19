// Function: FUN_1404af100
// Addr: 1404af100
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af100(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBP;
  char *unaff_RDI;
  
  *param_4 = *param_4 + in_AL;
  *unaff_RDI = *unaff_RDI - (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
       (char)((ulonglong)param_1 >> 8);
  if (-1 < *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) {
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_RBP * 2);
    *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

