// Function: FUN_1404d7a84
// Addr: 1404d7a84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7a84(uint param_1,longlong param_2)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & param_1;
  cVar2 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] | (byte)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + -0x4dffc84b);
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + 0x21004d79);
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + -0x4dffc84b);
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + 0x21004d79);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

