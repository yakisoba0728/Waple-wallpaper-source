// Function: FUN_1404ca394
// Addr: 1404ca394
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca394(char *param_1,longlong param_2)

{
  char cVar1;
  char in_AH;
  undefined6 in_register_00000002;
  
  *(char *)(param_2 + 0x4c) = *(char *)(param_2 + 0x4c) + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,0x32)) + '2';
  cVar1 = in(8);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

