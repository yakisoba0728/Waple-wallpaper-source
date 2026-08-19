// Function: FUN_1404a2838
// Addr: 1404a2838
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2838(char *param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  uint *in_RAX;
  byte *pbVar3;
  byte bVar6;
  char *unaff_RBX;
  byte *unaff_RDI;
  char *pcVar4;
  byte bVar5;
  
  *in_RAX = *in_RAX & (uint)param_1;
  bVar1 = (char)in_RAX + (char)*in_RAX;
  bVar5 = (byte)((ulonglong)in_RAX >> 8) | bVar1;
  pbVar3 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar5,bVar1));
  cVar2 = (bVar1 - *pbVar3) + cRam00000001455d2d47 + (bVar1 < *pbVar3);
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)pbVar3 >> 8),cVar2);
  bVar6 = (byte)param_1;
  unaff_RDI[0x4a] = unaff_RDI[0x4a] + bVar6;
  *param_1 = *param_1 + bVar5;
  *pcVar4 = *pcVar4 + cVar2;
  pbVar3 = (byte *)(pcVar4 + 0x5000512);
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + param_2;
  *param_1 = *param_1 + cVar2 + (char)uRam000000018a71745b + CARRY1(bVar1,param_2);
  *unaff_RBX = *unaff_RBX + bVar6;
  *unaff_RDI = *unaff_RDI << (bVar6 & 7) | *unaff_RDI >> 8 - (bVar6 & 7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

