// Function: FUN_1404b3908
// Addr: 1404b3908
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3908(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char in_AL;
  undefined7 in_register_00000001;
  byte bVar3;
  byte *unaff_RSI;
  byte in_CF;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  bVar1 = *unaff_RSI;
  bVar2 = *unaff_RSI + bVar3;
  *unaff_RSI = bVar2 + in_CF;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       (*(char *)CONCAT71(in_register_00000001,in_AL) - in_AL) -
       (CARRY1(bVar1,bVar3) || CARRY1(bVar2,in_CF));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

