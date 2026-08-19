// Function: FUN_1404b00cc
// Addr: 1404b00cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b00cc(char *param_1)

{
  byte in_AL;
  char cVar1;
  undefined1 in_AH;
  char cVar2;
  undefined6 in_register_00000002;
  byte unaff_BL;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  cVar1 = in_AL + (unaff_BL & 1);
  cVar2 = (char)(CONCAT11(in_AH,cVar1) % (short)((char)unaff_BL >> 1));
  cVar1 = (char)(CONCAT11(in_AH,cVar1) / (short)((char)unaff_BL >> 1)) + CARRY1(in_AL,unaff_BL & 1);
  *(char *)(unaff_RDI + 0x4a) = *(char *)(unaff_RDI + 0x4a) - cVar1;
  *param_1 = *param_1 + cVar2;
  *unaff_RSI = *unaff_RSI + (char)param_1;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,cVar1)) + cVar1;
  cVar1 = in(7);
  *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,cVar1)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(cVar2,cVar1)) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

