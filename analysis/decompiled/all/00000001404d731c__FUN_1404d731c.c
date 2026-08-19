// Function: FUN_1404d731c
// Addr: 1404d731c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d731c(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char cVar2;
  int *unaff_RBX;
  longlong unaff_RDI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  *unaff_RBX = *unaff_RBX - (int)param_1;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + cVar2;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x73);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

