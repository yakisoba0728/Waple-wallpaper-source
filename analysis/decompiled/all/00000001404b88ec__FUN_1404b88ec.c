// Function: FUN_1404b88ec
// Addr: 1404b88ec
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b88ec(byte *param_1)

{
  char in_AL;
  char cVar1;
  byte in_AH;
  undefined6 in_register_00000002;
  int *unaff_RBX;
  char *unaff_RSI;
  
  cVar1 = in_AL + 'B';
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
  *unaff_RBX = *unaff_RBX + (int)param_1;
  *unaff_RSI = *unaff_RSI + cVar1;
  *param_1 = *param_1 ^ in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

