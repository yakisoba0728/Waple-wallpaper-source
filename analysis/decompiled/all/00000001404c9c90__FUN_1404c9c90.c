// Function: FUN_1404c9c90
// Addr: 1404c9c90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9c90(char *param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_BL;
  char unaff_BH;
  longlong unaff_RSI;
  char unaff_R12B;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  param_1[0x32] = param_1[0x32] & (byte)param_1;
  param_1[0x70003249] = param_1[0x70003249] + unaff_BL;
  *param_1 = *param_1 + unaff_R12B;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

