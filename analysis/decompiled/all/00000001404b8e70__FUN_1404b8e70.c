// Function: FUN_1404b8e70
// Addr: 1404b8e70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8e70(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  int in_EAX;
  byte bVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(int *)(unaff_RDI + 0x1d) = *(int *)(unaff_RDI + 0x1d) + unaff_ESI;
  pbVar1 = (byte *)(unaff_RDI + -8);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar3;
  *(char *)(unaff_RDI + -0x28) =
       *(char *)(unaff_RDI + -0x28) +
       (char)((in_EAX + -0x1ee86f00) - (uint)CARRY1(bVar2,bVar3) >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

