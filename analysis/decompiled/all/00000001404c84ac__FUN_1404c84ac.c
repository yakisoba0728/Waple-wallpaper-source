// Function: FUN_1404c84ac
// Addr: 1404c84ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c84ac(char *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RBX;
  char unaff_R12B;
  char in_CF;
  
  *unaff_RBX = *unaff_RBX + (char)param_1 + in_CF;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x7d);
  cVar2 = (char)in_EAX;
  *pcVar1 = *pcVar1 + cVar2;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + cVar2;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

