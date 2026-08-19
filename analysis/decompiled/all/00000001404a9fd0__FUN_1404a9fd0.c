// Function: FUN_1404a9fd0
// Addr: 1404a9fd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9fd0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char cVar3;
  longlong unaff_RBP;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)(unaff_RBP + param_2) = *(char *)(unaff_RBP + param_2) + cVar3;
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] + cVar3;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x27fff281);
  *pcVar2 = *pcVar2 + (char)param_2;
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + 0xd);
  *piVar1 = *piVar1 + in_EAX;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x18);
  *pcVar2 = *pcVar2 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

