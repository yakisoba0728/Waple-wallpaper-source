// Function: FUN_1404b27ac
// Addr: 1404b27ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b27ac(undefined8 param_1,char param_2)

{
  char *pcVar1;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RSI;
  char in_CF;
  
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + cRama2640800a1740c00;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,
                             CONCAT11(in_AH + param_2 + in_CF,cRama2640800a1740c00)) + 0x14);
  *pcVar1 = *pcVar1 + cRama2640800a1740c00;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

