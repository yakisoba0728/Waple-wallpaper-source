// Function: FUN_1404aeb68
// Addr: 1404aeb68
// Size: 1 bytes


void FUN_1404aeb68(char *param_1)

{
  char in_AL;
  byte bVar1;
  char in_AH;
  undefined6 in_register_00000002;
  
  bVar1 = in_AL + 0x70;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) ^ bVar1;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) - (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar1)) +
       (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

