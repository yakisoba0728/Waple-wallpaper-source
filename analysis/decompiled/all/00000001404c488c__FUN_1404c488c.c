// Function: FUN_1404c488c
// Addr: 1404c488c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c488c(undefined8 param_1,char *param_2)

{
  int in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RDI;
  
  *param_2 = *param_2 + (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *unaff_RDI = *unaff_RDI + in_EAX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

