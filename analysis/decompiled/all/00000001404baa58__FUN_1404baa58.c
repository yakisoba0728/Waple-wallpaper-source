// Function: FUN_1404baa58
// Addr: 1404baa58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404baa58(longlong param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  char *pcVar7;
  char unaff_BL;
  undefined1 *unaff_RDI;
  char in_CF;
  byte *pbVar6;
  
  (&stack0x00000000)[param_1] = ((&stack0x00000000)[param_1] - (char)((ushort)param_2 >> 8)) - in_CF
  ;
  uVar5 = in_EAX + 0x7000a54;
  pbVar6 = (byte *)(ulonglong)uVar5;
  bVar4 = (byte)uVar5;
  *pbVar6 = *pbVar6 & bVar4;
  pcVar7 = (char *)(ulonglong)(uint)((int)param_1 - (int)unaff_RDI);
  *pbVar6 = *pbVar6 & bVar4;
  pcVar1 = unaff_RDI + 1;
  uVar2 = in(param_2);
  *unaff_RDI = uVar2;
  uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar4 + *pbVar6) + 0x19000b64;
  pbVar6 = (byte *)(ulonglong)uVar5;
  bVar4 = (byte)uVar5;
  *pbVar6 = *pbVar6 & bVar4;
  *pbVar6 = *pbVar6 & bVar4;
  pcVar7[0x21004b] = pcVar7[0x21004b];
  *pcVar7 = *pcVar7 + unaff_BL;
  *pbVar6 = *pbVar6 & bVar4;
  *pbVar6 = *pbVar6 & bVar4;
  pcVar7[0x21004b] = pcVar7[0x21004b];
  *pcVar1 = *pcVar1 + bVar4;
  *pbVar6 = *pbVar6 & bVar4;
  *pbVar6 = *pbVar6 & bVar4;
  cVar3 = in(param_2);
  *pcVar1 = cVar3;
  *pbVar6 = *pbVar6 + bVar4;
  *pbVar6 = *pbVar6 & bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

