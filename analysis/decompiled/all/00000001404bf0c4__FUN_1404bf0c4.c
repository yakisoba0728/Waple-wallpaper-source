// Function: FUN_1404bf0c4
// Addr: 1404bf0c4
// Size: 1 bytes


void FUN_1404bf0c4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x21004bef);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_2 = *param_2 + -0x59;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

