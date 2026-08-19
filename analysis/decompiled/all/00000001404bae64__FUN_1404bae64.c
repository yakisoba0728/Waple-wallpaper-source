// Function: FUN_1404bae64
// Addr: 1404bae64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bae64(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  longlong unaff_RSI;
  
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar1 = (char *)(unaff_RSI + 0x6d50021 + CONCAT44(in_register_00000004,in_EAX));
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(char *)(param_2 + -0x53ffdefa) = *(char *)(param_2 + -0x53ffdefa) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

