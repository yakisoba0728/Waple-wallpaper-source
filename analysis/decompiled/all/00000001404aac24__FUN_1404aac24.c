// Function: FUN_1404aac24
// Addr: 1404aac24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aac24(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *(char *)(unaff_RSI + 0xe) =
       *(char *)(unaff_RSI + 0xe) + (char)((ulonglong)param_1 >> 8) + CARRY1(bVar1,(byte)in_EAX);
  *(char *)(param_2 + 0x6e) = *(char *)(param_2 + 0x6e) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

