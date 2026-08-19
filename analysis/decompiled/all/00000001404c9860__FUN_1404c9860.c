// Function: FUN_1404c9860
// Addr: 1404c9860
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9860(void)

{
  char *pcVar1;
  char in_AL;
  byte bVar2;
  char in_AH;
  undefined6 in_register_00000002;
  uint unaff_EBX;
  byte *unaff_RSI;
  
  bVar2 = in_AL + 0x70;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) ^ bVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + in_AH;
  *unaff_RSI = *unaff_RSI >> 1;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + 1);
  *pcVar1 = *pcVar1 + in_AH;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) + bVar2;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar2)) & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

