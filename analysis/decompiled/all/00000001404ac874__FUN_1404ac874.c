// Function: FUN_1404ac874
// Addr: 1404ac874
// Size: 1 bytes


void FUN_1404ac874(char *param_1,char *param_2)

{
  char in_AL;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(0x24,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

