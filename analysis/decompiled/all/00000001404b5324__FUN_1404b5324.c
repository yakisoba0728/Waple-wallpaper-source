// Function: FUN_1404b5324
// Addr: 1404b5324
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5324(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 unaff_BH;
  uint *unaff_RSI;
  longlong unaff_RDI;
  
  LOCK();
  *(undefined1 *)(unaff_RDI + 0x1a) = unaff_BH;
  UNLOCK();
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + param_2;
  *param_4 = *param_4 + -8;
  *unaff_RSI = *unaff_RSI & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_1 = *param_1 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

