// Function: FUN_1404d341c
// Addr: 1404d341c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d341c(longlong param_1,char param_2,undefined8 param_3,undefined1 *param_4)

{
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 *puVar1;
  char *unaff_RSI;
  char in_ZF;
  
  puVar1 = (undefined1 *)(param_1 + -1);
  if (puVar1 == (undefined1 *)0x0 || in_ZF != '\0') {
    *puVar1 = *puVar1;
    cRam00000001604d3a95 =
         cRam00000001604d3a95 +
         (in_AL | *(byte *)(CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                           CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))));
    *unaff_RSI = *unaff_RSI + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(param_1 + -0x3ffc3be) = *(char *)(param_1 + -0x3ffc3be) + in_AL;
  *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

