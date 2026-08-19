// Function: FUN_1404c98dc
// Addr: 1404c98dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c98dc(char *param_1)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_SPL;
  char *unaff_RSI;
  char in_CF;
  
  *unaff_RSI = (*unaff_RSI + -0x32) - in_CF;
  unaff_RSI[-0xbffcde2] = unaff_RSI[-0xbffcde2] + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x61ffcde2);
  *pcVar1 = *pcVar1 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

