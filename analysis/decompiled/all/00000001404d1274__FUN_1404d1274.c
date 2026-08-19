// Function: FUN_1404d1274
// Addr: 1404d1274
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1274(longlong param_1)

{
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  longlong *unaff_RBP;
  int *unaff_RSI;
  
  out(0x22,in_EAX);
  *unaff_RBP = *unaff_RBP + param_1 +
               (ulonglong)((byte)in_EAX < *(byte *)CONCAT44(in_register_00000004,in_EAX));
  *unaff_RSI = *unaff_RSI + (int)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

