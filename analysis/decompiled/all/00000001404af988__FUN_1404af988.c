// Function: FUN_1404af988
// Addr: 1404af988
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af988(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar5;
  undefined8 in_RAX;
  undefined4 unaff_EBX;
  char unaff_SPL;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char *pcVar4;
  
  bVar3 = (byte)in_RAX ^ (byte)((uint)unaff_EBX >> 8);
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar4 = *pcVar4 + bVar3;
  pbVar1 = (byte *)(pcVar4 + -0x6d);
  bVar2 = *pbVar1;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + ((char)unaff_EBX + CARRY1(bVar3,CARRY1(bVar2,bVar5)) & 0xf8U);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

