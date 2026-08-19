// Function: FUN_1404c9d94
// Addr: 1404c9d94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9d94(undefined8 param_1,char param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong unaff_RBP;
  
  pbVar2 = (byte *)func_0x0001406d9df3();
  bVar1 = *pbVar2;
  *pbVar2 = *pbVar2 + (byte)pbVar2;
  *(char *)(unaff_RBP + 0x32) = *(char *)(unaff_RBP + 0x32) + param_2 + CARRY1(bVar1,(byte)pbVar2);
  cRam00000000e44cd00a = cRam00000000e44cd00a + (char)((ulonglong)pbVar2 >> 8);
  func_0x000165659e03();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

