// Function: FUN_1404c2b10
// Addr: 1404c2b10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2b10(undefined8 param_1,char *param_2)

{
  int in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  byte *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  param_2[unaff_RBP + 0x4c] = param_2[unaff_RBP + 0x4c] + (byte)param_1;
  *param_2 = *param_2 + (char)in_EAX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

