// Function: FUN_1404b00b0
// Addr: 1404b00b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b00b0(char *param_1)

{
  byte in_AL;
  char cVar1;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  cVar1 = in_AL + (in_AL < 0xfc);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

