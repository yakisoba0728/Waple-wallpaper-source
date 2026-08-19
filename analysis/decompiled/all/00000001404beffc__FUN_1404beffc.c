// Function: FUN_1404beffc
// Addr: 1404beffc
// Size: 1 bytes


void FUN_1404beffc(char *param_1,undefined8 param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  char unaff_SPL;
  
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)param_2;
  param_1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] =
       param_1[CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))] +
       (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RBX = *unaff_RBX + in_AH;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

