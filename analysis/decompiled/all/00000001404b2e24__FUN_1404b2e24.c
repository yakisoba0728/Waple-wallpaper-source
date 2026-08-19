// Function: FUN_1404b2e24
// Addr: 1404b2e24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2e24(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  cVar2 = cRamcc0017a5e70017a5 + -0x4b;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + -0x18ffe85b);
  *pcVar1 = *pcVar1 + in_AH;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

