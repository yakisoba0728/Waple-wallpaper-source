// Function: FUN_14049fb98
// Addr: 14049fb98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fb98(longlong param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RSI;
  
  *(uint *)CONCAT71(in_register_00000001,in_AL) =
       *(uint *)CONCAT71(in_register_00000001,in_AL) & (uint)param_1;
  *(byte *)(param_1 + unaff_RSI) = *(byte *)(param_1 + unaff_RSI) | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

