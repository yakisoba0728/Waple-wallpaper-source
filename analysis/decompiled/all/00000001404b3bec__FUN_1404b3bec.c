// Function: FUN_1404b3bec
// Addr: 1404b3bec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3bec(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  char cVar2;
  undefined6 in_register_00000002;
  uint unaff_EBP;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & unaff_EBP;
  cVar2 = in_AH - (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)CONCAT62(in_register_00000002,
                            CONCAT11(cVar2,in_AL | *(byte *)CONCAT62(in_register_00000002,
                                                                     CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

