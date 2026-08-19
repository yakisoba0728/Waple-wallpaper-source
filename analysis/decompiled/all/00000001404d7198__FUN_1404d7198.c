// Function: FUN_1404d7198
// Addr: 1404d7198
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

char FUN_1404d7198(longlong param_1)

{
  char cVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *pcVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RBP;
  char *unaff_RSI;
  char in_ZF;
  undefined8 uStack_10;
  
  pcVar2 = (char *)(param_1 + -1);
  if (pcVar2 != (char *)0x0 && in_ZF == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + '\x01';
  cVar1 = *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  if (cVar1 < in_AL) {
    *pcVar2 = *pcVar2 + in_AH;
    *unaff_RSI = *unaff_RSI + (char)pcVar2;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (cVar1 != in_AL) {
    puVar3 = (undefined8 *)&stack0xfffffffffffffff8;
    cVar1 = '\x11';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar3 = puVar3 + -1;
      *puVar3 = *unaff_RBP;
      cVar1 = cVar1 + -1;
    } while ('\0' < cVar1);
    return in_AL + in_AH;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

