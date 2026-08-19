// Function: FUN_1404c4c5c
// Addr: 1404c4c5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4c5c(undefined8 param_1,int param_2)

{
  byte bVar1;
  byte in_AL;
  byte bVar2;
  undefined7 in_register_00000001;
  char unaff_BL;
  longlong unaff_RSI;
  
  bVar2 = in_AL & (byte)param_2;
  *(char *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + unaff_BL;
  bVar1 = *(byte *)CONCAT71(in_register_00000001,bVar2);
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(char *)CONCAT71(in_register_00000001,bVar2) + bVar2;
  *(uint *)(&stack0x00000000 + CONCAT71(in_register_00000001,bVar2)) =
       *(int *)(&stack0x00000000 + CONCAT71(in_register_00000001,bVar2)) + param_2 +
       (uint)CARRY1(bVar1,bVar2);
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + (byte)param_2;
  *(byte *)CONCAT71(in_register_00000001,bVar2) =
       *(byte *)CONCAT71(in_register_00000001,bVar2) | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

