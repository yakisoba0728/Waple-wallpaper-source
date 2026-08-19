// Function: FUN_1404cc718
// Addr: 1404cc718
// Size: 1 bytes


void FUN_1404cc718(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL & (byte)param_2)) +
                   0x21000040);
  *pcVar1 = *pcVar1 + in_AH;
  *param_2 = *param_2 + (char)((ulonglong)param_2 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

