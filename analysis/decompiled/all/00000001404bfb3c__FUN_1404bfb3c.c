// Function: FUN_1404bfb3c
// Addr: 1404bfb3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfb3c(void)

{
  int *piVar1;
  char *pcVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + 9);
  *piVar1 = *piVar1 + in_EAX;
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x58);
  *pcVar2 = *pcVar2 + (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

