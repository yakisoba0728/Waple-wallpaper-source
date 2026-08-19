// Function: FUN_1404bef14
// Addr: 1404bef14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bef14(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  char *pcVar3;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)(unaff_RDI + -0x27ffd964) = *(char *)(unaff_RDI + -0x27ffd964) + unaff_BL;
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0) {
    pbVar2 = (byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
    *pbVar2 = *pbVar2 | in_AL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  pcVar1 = (char *)(unaff_RDI + 0x49 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)pcVar3;
  *pcVar3 = *pcVar3 + in_AL;
  *(char *)(param_2 + unaff_RSI) = *(char *)(param_2 + unaff_RSI) + (char)pcVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

