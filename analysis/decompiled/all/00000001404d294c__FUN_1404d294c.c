// Function: FUN_1404d294c
// Addr: 1404d294c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d294c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBP;
  char in_R11B;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8) + CARRY1(bVar2,(byte)in_EAX);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + unaff_RBP);
  *pcVar1 = *pcVar1 + (char)param_2;
  *param_4 = *param_4 + in_R11B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

