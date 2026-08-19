// Function: FUN_1404aa968
// Addr: 1404aa968
// Size: 1 bytes


void FUN_1404aa968(void)

{
  char *pcVar1;
  uint *puVar2;
  uint uVar3;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BH;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  puVar2 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  uVar3 = *puVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + unaff_BH + in_AL;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + -0x5afff19d);
  *pcVar1 = *pcVar1 + in_AL;
  uVar3 = *puVar2;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + in_AH;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + in_AH;
  *(char *)puVar2 = (char)*puVar2 + (char)uVar3;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

