// Function: FUN_1404a1958
// Addr: 1404a1958
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1958(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  uint in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  puVar1 = (uint *)(param_2 + CONCAT44(in_register_00000004,in_EAX));
  *puVar1 = *puVar1 & in_EAX;
  pbVar2 = &stack0x00000000 + unaff_RSI;
  bVar3 = *pbVar2;
  bVar4 = (byte)in_EAX;
  *pbVar2 = *pbVar2 + bVar4;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar4 + CARRY1(bVar3,bVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

