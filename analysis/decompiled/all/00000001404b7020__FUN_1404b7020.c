// Function: FUN_1404b7020
// Addr: 1404b7020
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7020(undefined8 param_1,undefined2 param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  undefined4 *unaff_RSI;
  
  pcVar1 = (char *)func_0x0001604b8c4c();
  out(*unaff_RSI,param_2);
  *param_4 = *param_4;
  *pcVar1 = *pcVar1 + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

