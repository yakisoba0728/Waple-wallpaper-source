// Function: FUN_1404c76a8
// Addr: 1404c76a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c76a8(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  byte bVar3;
  int in_EAX;
  byte *pbVar4;
  char unaff_BH;
  longlong unaff_RBP;
  int unaff_ESI;
  char *unaff_RDI;
  byte in_CF;
  
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  iVar2 = *(int *)(param_1 * 2);
  pbVar4 = (byte *)(ulonglong)(in_EAX + 0x30000864U);
  *pbVar4 = *pbVar4 | bVar3;
  *unaff_RDI = *unaff_RDI + unaff_BH;
  *pbVar4 = *pbVar4 | bVar3;
  pcVar1 = (char *)(unaff_RBP + 0x21004c + (ulonglong)((unaff_ESI - iVar2) - (uint)in_CF) * 2);
  *pcVar1 = *pcVar1 + unaff_BH;
  bVar3 = (byte)(in_EAX + 0x30000864U);
  *pbVar4 = *pbVar4 + bVar3;
  *pbVar4 = *pbVar4 ^ (byte)param_1;
  *pbVar4 = *pbVar4 ^ bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

