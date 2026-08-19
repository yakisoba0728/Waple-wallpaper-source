// Function: FUN_1404a1b40
// Addr: 1404a1b40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1b40(undefined8 param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  uint in_EAX;
  byte *pbVar3;
  int iVar4;
  byte *unaff_RDI;
  byte in_CF;
  
  iVar4 = param_2 + in_EAX + (uint)in_CF;
  pbVar3 = (byte *)(ulonglong)(in_EAX | 0x9e00bf0);
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  uVar1 = CONCAT22((short)((uint)iVar4 >> 0x10),
                   CONCAT11((char)((uint)iVar4 >> 8) + *pbVar3,(char)iVar4));
  bVar2 = (byte)(in_EAX | 0x9e00bf0);
  *pbVar3 = *pbVar3 + bVar2;
  *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + uVar1;
  *pbVar3 = *pbVar3 | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

