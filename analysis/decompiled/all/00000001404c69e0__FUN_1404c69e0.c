// Function: FUN_1404c69e0
// Addr: 1404c69e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c69e0(undefined8 param_1,undefined2 param_2)

{
  byte in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  undefined1 *unaff_RSI;
  bool in_CF;
  
  if (in_CF) {
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) | in_AL;
    out(*unaff_RSI,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

