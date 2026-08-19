// Function: FUN_1404cfd88
// Addr: 1404cfd88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfd88(char *param_1)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  char cVar2;
  undefined6 in_register_00000002;
  char unaff_R12B;
  
  cVar2 = in_AH + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  do {
  } while ((char)(in_AL - *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL))) < '\0');
  *param_1 = *param_1 + unaff_R12B;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(cVar2,in_AL)) + -0x17ffc5e1);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

