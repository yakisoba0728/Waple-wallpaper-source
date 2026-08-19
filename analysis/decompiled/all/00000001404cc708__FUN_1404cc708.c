// Function: FUN_1404cc708
// Addr: 1404cc708
// Size: 1 bytes


void FUN_1404cc708(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  int *piVar2;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  int unaff_ESP;
  byte *unaff_RSI;
  byte in_CF;
  
  piVar2 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x18011200);
  *piVar2 = (*piVar2 - unaff_ESP) - (uint)in_CF;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) ^ in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AH;
  *unaff_RSI = *unaff_RSI >> 1;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21000040);
  *pcVar1 = *pcVar1 + in_AH;
  *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

