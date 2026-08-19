// Function: FUN_1404bf270
// Addr: 1404bf270
// Size: 1 bytes


void FUN_1404bf270(char *param_1,char param_2)

{
  char *pcVar1;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  char unaff_SPL;
  
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,0x26)) + 0x15);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RBX = *unaff_RBX + in_AH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

