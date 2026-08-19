// Function: FUN_1404aa978
// Addr: 1404aa978
// Size: 1 bytes


void FUN_1404aa978(void)

{
  uint *puVar1;
  uint uVar2;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *(undefined1 *)(unaff_RBX + 0xe) = 0;
  puVar1 = unaff_RSI + 1;
  *unaff_RDI = *unaff_RSI;
  uVar2 = *puVar1;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + in_AH;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + in_AH;
  *(char *)puVar1 = (char)*puVar1 + (char)uVar2;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

