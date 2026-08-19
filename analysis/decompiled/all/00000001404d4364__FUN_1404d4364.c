// Function: FUN_1404d4364
// Addr: 1404d4364
// Size: 1 bytes


void FUN_1404d4364(char param_1,byte *param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  
  *param_2 = *param_2 | in_AL | 0x70;
  *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x70) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) | 0x70) + param_1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

