// Function: FUN_1404d70d4
// Addr: 1404d70d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d70d4(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  *(undefined1 *)(unaff_RDI + 0x4d) = *(undefined1 *)(unaff_RDI + 0x4d);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  if (param_1 == 1 || *(char *)CONCAT44(in_register_00000004,in_EAX) == '\0') {
    pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + -0x20);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = TaskRegister();
  *(undefined2 *)CONCAT44(in_register_00000004,in_EAX) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

