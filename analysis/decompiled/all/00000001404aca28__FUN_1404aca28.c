// Function: FUN_1404aca28
// Addr: 1404aca28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aca28(undefined8 param_1,ulonglong param_2)

{
  int iVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  char *pcVar4;
  uint unaff_EBX;
  char unaff_BPL;
  longlong unaff_RSI;
  char in_CF;
  char *unaff_retaddr;
  char acStackX_8 [32];
  byte *pbVar5;
  uint *puVar6;
  
  pcVar4 = (char *)(param_2 & 0xffffffff);
  bVar2 = (byte)pcVar4;
  *pcVar4 = *pcVar4 + bVar2 + in_CF;
  *unaff_retaddr = *unaff_retaddr + bVar2;
  *(byte *)(ulonglong)in_EAX = *(byte *)(ulonglong)in_EAX | bVar2;
  *pcVar4 = *pcVar4 + (char)unaff_retaddr;
  bVar2 = (char)in_EAX + 0x70;
  pbVar5 = (byte *)(ulonglong)CONCAT31((int3)(in_EAX >> 8),bVar2);
  *(uint *)(pbVar5 + (longlong)unaff_retaddr) =
       *(uint *)(pbVar5 + (longlong)unaff_retaddr) & unaff_EBX;
  acStackX_8[unaff_RSI * 8] = acStackX_8[unaff_RSI * 8] + (char)unaff_EBX;
  *pbVar5 = *pbVar5 | bVar2;
  iVar1 = CONCAT31(CONCAT21((short)(in_EAX >> 0x10),(char)(in_EAX >> 8) + unaff_retaddr[unaff_RSI]),
                   uRam6000109aa800109a);
  *unaff_retaddr = *unaff_retaddr + unaff_BPL + '\b';
  uVar3 = iVar1 + 0xe4050002;
  puVar6 = (uint *)(ulonglong)uVar3;
  *puVar6 = *puVar6 | uVar3;
  *(char *)puVar6 = (char)*puVar6 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

