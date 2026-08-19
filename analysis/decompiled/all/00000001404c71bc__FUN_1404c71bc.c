// Function: FUN_1404c71bc
// Addr: 1404c71bc
// Size: 1 bytes


void FUN_1404c71bc(char *param_1)

{
  undefined7 in_register_00000001;
  char unaff_BH;
  char unaff_R12B;
  
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT71(in_register_00000001,0x70) = *(char *)CONCAT71(in_register_00000001,0x70) + 'p';
  *(char *)CONCAT71(in_register_00000001,0x70) =
       *(char *)CONCAT71(in_register_00000001,0x70) + unaff_BH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

