// Function: FUN_1404ad0c4
// Addr: 1404ad0c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad0c4(longlong param_1)

{
  int in_EAX;
  char cVar1;
  char *unaff_RDI;
  
  cVar1 = (char)((ulonglong)param_1 >> 8);
  *(int *)(param_1 + 0x12) = *(int *)(param_1 + 0x12) + in_EAX;
  *(char *)(param_1 + -0x68) = *(char *)(param_1 + -0x68) + (char)in_EAX;
  *unaff_RDI = *unaff_RDI + cVar1;
  if (-1 < *unaff_RDI) {
    *(char *)(ulonglong)(in_EAX + 0x6883400) = *(char *)(ulonglong)(in_EAX + 0x6883400) + cVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

