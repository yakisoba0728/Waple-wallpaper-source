// Function: FUN_1404ae524
// Addr: 1404ae524
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae524(char *param_1,char param_2)

{
  char *pcVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  byte *unaff_RBX;
  char unaff_SPL;
  
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x3cffecc3);
  *pcVar1 = *pcVar1 + param_2;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

