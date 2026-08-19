// Function: FUN_1404c5da8
// Addr: 1404c5da8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5da8(void)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar1 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar2 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  *unaff_RSI = *unaff_RSI + bVar2 + CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

