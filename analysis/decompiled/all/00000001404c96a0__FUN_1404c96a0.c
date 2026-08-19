// Function: FUN_1404c96a0
// Addr: 1404c96a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c96a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  uint in_EAX;
  undefined4 in_register_00000004;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) +
       (CARRY1(bVar1,(byte)in_EAX) | (char)param_2 << 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

