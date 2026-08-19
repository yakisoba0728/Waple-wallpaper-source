// Function: FUN_1404d1b58
// Addr: 1404d1b58
// Size: 1 bytes


void FUN_1404d1b58(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_DIL;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21004abf);
  *pcVar1 = *pcVar1 + unaff_DIL;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

