// Function: FUN_1404c3bf8
// Addr: 1404c3bf8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3bf8(char *param_1,byte param_2)

{
  byte in_AL;
  char cVar1;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  
  cVar1 = (in_AL & param_2) + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

