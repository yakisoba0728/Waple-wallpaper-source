// Function: FUN_1404c89c8
// Addr: 1404c89c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c89c8(uint param_1)

{
  char cVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  cVar1 = *(char *)CONCAT44(in_register_00000004,in_EAX);
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  if (!SCARRY1(cVar1,(char)in_EAX)) {
    *(uint *)CONCAT44(in_register_00000004,in_EAX) =
         *(uint *)CONCAT44(in_register_00000004,in_EAX) ^ in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(&stack0x00000000 + CONCAT44(in_register_00000004,in_EAX)) =
       *(uint *)(&stack0x00000000 + CONCAT44(in_register_00000004,in_EAX)) & param_1;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

