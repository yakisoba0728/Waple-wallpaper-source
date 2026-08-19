// Function: FUN_1404a16a4
// Addr: 1404a16a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a16a4(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  
  puVar1 = (uint *)(unaff_RSI + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 & param_2;
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)(param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

