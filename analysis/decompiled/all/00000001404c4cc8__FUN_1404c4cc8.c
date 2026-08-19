// Function: FUN_1404c4cc8
// Addr: 1404c4cc8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4cc8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint in_EAX;
  byte *pbVar3;
  int *unaff_RDI;
  
  pbVar3 = (byte *)(ulonglong)(in_EAX ^ 0x42);
  bVar1 = *pbVar3;
  bVar2 = (byte)(in_EAX ^ 0x42);
  *pbVar3 = *pbVar3 + bVar2;
  *unaff_RDI = *unaff_RDI + param_1 + (uint)CARRY1(bVar1,bVar2);
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

