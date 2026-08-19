// Function: FUN_1404d30fc
// Addr: 1404d30fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d30fc(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char in_AH;
  byte bVar3;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  pbVar1 = &stack0x00000000 + param_2;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  cRam0000000169d43145 = cRam0000000169d43145 + in_AH + CARRY1(bVar2,bVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

