// Function: FUN_1404d79f0
// Addr: 1404d79f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404d79ee) */

void FUN_1404d79f0(char *param_1,char *param_2)

{
  byte bVar1;
  char in_AL;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  longlong unaff_RSI;
  undefined1 in_CF;
  
  bVar1 = *(byte *)(unaff_RSI + -0x6036ffc9);
  *(byte *)(unaff_RSI + -0x6036ffc9) = (byte)(CONCAT11(in_CF,bVar1) >> 5) | bVar1 << 4;
  cVar2 = in_AL + unaff_BL;
  if (cVar2 < '\0') {
    param_2[CONCAT62(in_register_00000002,
                     CONCAT11(in_AH,cVar2 + *(char *)CONCAT62(in_register_00000002,
                                                              CONCAT11(in_AH,cVar2))))] =
         param_2[CONCAT62(in_register_00000002,
                          CONCAT11(in_AH,cVar2 + *(char *)CONCAT62(in_register_00000002,
                                                                   CONCAT11(in_AH,cVar2))))] |
         (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + in_AH;
  *param_2 = *param_2 + unaff_BL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

