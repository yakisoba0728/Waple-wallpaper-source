// Function: FUN_1404bb604
// Addr: 1404bb604
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb604(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(param_2 + CONCAT44(in_register_00000004,in_EAX) * 8);
  cVar2 = (char)in_EAX;
  *pcVar1 = *pcVar1 + cVar2;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar2;
  *(int *)(unaff_RDI + -0x778ffea) = *(int *)(unaff_RDI + -0x778ffea) + in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

