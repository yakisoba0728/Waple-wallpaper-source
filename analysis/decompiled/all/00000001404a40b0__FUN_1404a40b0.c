// Function: FUN_1404a40b0
// Addr: 1404a40b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a40b0(undefined8 param_1,uint param_2)

{
  byte *pbVar1;
  char *pcVar2;
  uint uVar3;
  byte bVar4;
  int in_EAX;
  uint unaff_ESP;
  longlong unaff_RBP;
  uint unaff_ESI;
  uint *unaff_RDI;
  
  bVar4 = (byte)(in_EAX - unaff_ESP);
  uVar3 = CONCAT22((short)(in_EAX - unaff_ESP >> 0x10),(ushort)bVar4);
  pcVar2 = (char *)((ulonglong)(unaff_ESI & *(uint *)(unaff_RBP + (longlong)unaff_RDI)) +
                   (longlong)unaff_RDI);
  *pcVar2 = *pcVar2 + (bVar4 < *(byte *)(ulonglong)uVar3);
  *(byte *)((longlong)unaff_RDI * 2) =
       *(byte *)((longlong)unaff_RDI * 2) | (byte)((param_2 ^ unaff_ESP) >> 8);
  pbVar1 = (byte *)(ulonglong)uVar3 + -0xafff8df;
  *pbVar1 = *pbVar1 + (char)(param_2 ^ unaff_ESP);
  *unaff_RDI = *unaff_RDI & uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

