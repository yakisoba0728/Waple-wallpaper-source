// Function: FUN_1404af07c
// Addr: 1404af07c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af07c(char *param_1,char param_2)

{
  char *pcVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  char unaff_SPL;
  
  *(byte *)(unaff_RBX + -0x745affed) = *(byte *)(unaff_RBX + -0x745affed) | 0x13;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x11);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + unaff_SPL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX));
  *pcVar1 = *pcVar1 + (char)param_1;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 7);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  in(0x10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

