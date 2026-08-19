// Function: FUN_1404b4c68
// Addr: 1404b4c68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4c68(undefined8 param_1,int *param_2)

{
  byte in_AL;
  byte in_AH;
  undefined6 in_register_00000002;
  int unaff_EBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  
  *(char *)(unaff_RSI + (longlong)param_2) =
       *(char *)(unaff_RSI + (longlong)param_2) + (char)((ulonglong)param_2 >> 8);
  *param_2 = (*param_2 - unaff_EBX) - (uint)CARRY1(in_AL,in_AH);
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL + in_AH)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL + in_AH)) +
       (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

