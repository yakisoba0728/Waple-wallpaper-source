// Function: FUN_1404cbb6c
// Addr: 1404cbb6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbb6c(undefined8 param_1,undefined2 param_2)

{
  longlong in_RAX;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  
  out(*unaff_RSI,
      CONCAT11((byte)((ushort)param_2 >> 8) | *(byte *)(unaff_RBP + in_RAX),(char)param_2));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

