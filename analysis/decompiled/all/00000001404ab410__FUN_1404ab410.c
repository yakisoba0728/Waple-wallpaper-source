// Function: FUN_1404ab410
// Addr: 1404ab410
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab410(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  
  cVar2 = cRam34000efbb9000efb;
  out(0x49,cRam34000efbb9000efb);
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + -0x46fff105);
  *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

