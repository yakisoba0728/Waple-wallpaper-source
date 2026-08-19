// Function: FUN_1404b2d60
// Addr: 1404b2d60
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2d60(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_SPL;
  
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  cVar2 = in_AL + in_AH;
  cRam06a80017a2f60017 = cVar2;
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) +
                   CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)));
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

