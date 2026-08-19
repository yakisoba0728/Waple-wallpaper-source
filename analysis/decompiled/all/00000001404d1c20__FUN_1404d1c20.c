// Function: FUN_1404d1c20
// Addr: 1404d1c20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1c20(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  pcVar1 = (char *)(unaff_RSI + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)in_EAX;
  pcVar1 = (char *)(param_2 + CONCAT44(in_register_00000004,in_EAX));
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  uRam00000001b4521c30 = uRam00000001b4521c30 & in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

