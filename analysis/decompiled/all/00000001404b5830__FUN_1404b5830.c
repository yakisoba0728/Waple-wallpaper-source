// Function: FUN_1404b5830
// Addr: 1404b5830
// Size: 1 bytes


void FUN_1404b5830(char param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff57) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff57) + param_1;
  *(byte *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff57) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff57) + (in_AL & 0x57);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

