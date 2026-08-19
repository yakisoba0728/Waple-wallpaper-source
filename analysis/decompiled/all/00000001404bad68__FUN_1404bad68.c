// Function: FUN_1404bad68
// Addr: 1404bad68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bad68(char *param_1,undefined8 param_2)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RBX;
  longlong unaff_RBP;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar1 = (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar1;
  *param_1 = *param_1 + cVar1;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_2 >> 8);
  (&stack0x0000004b)[unaff_RBP * 4] = (&stack0x0000004b)[unaff_RBP * 4] + (char)param_2;
  *param_1 = *param_1 + cVar1 + '!';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

