// Function: FUN_1404c9da4
// Addr: 1404c9da4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9da4(undefined8 param_1,char param_2)

{
  byte bVar1;
  byte extraout_AL;
  char extraout_AH;
  undefined6 extraout_var;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  func_0x0001406d9df3();
  bVar1 = *(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL));
  *(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
       *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + extraout_AL;
  *(char *)(unaff_RBP + 0x32) = *(char *)(unaff_RBP + 0x32) + param_2 + CARRY1(bVar1,extraout_AL);
  cRam00000000e44cd00a = cRam00000000e44cd00a + extraout_AH;
  func_0x000165659e03();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

