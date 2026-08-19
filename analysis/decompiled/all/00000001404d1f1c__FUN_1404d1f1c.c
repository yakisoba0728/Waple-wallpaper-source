// Function: FUN_1404d1f1c
// Addr: 1404d1f1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1f1c(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RSI;
  char unaff_R12B;
  
  pcVar2 = (char *)(unaff_RSI + 4);
  *pcVar2 = (*pcVar2 - unaff_BL) - (*(uint *)CONCAT44(in_register_00000004,in_EAX) < in_EAX);
  *param_4 = *param_4 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x58ffc665);
  *pcVar1 = *pcVar1 + param_2;
  *pcVar2 = (*pcVar2 - unaff_BL) - (*(uint *)CONCAT44(in_register_00000004,in_EAX) < in_EAX);
  *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

