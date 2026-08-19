// Function: FUN_1404b439c
// Addr: 1404b439c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b439c(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AL;
  undefined7 in_register_00000001;
  byte bVar3;
  longlong unaff_RSI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  (&stack0x00000000)[param_2] = (&stack0x00000000)[param_2] | bVar3;
  pbVar1 = &stack0x00000000 + unaff_RSI * 8;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       (*(char *)CONCAT71(in_register_00000001,in_AL) - in_AL) - CARRY1(bVar2,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

