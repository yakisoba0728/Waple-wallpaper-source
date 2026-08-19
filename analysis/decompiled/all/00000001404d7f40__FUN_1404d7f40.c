// Function: FUN_1404d7f40
// Addr: 1404d7f40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7f40(char *param_1,char param_2,longlong param_3)

{
  char cVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RBX;
  char unaff_SPL;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  cVar1 = (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *(char *)(param_3 + 0x3e) = *(char *)(param_3 + 0x3e) + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *param_1 = *param_1 + (char)param_1;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

