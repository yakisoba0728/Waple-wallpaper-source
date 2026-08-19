// Function: FUN_1404bec24
// Addr: 1404bec24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bec24(byte param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined8 in_RAX;
  byte bVar7;
  char cVar8;
  longlong unaff_RBX;
  undefined8 *puVar9;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  byte *unaff_retaddr;
  undefined8 auStack_10 [2];
  byte *pbVar6;
  
  bVar7 = (byte)param_2;
  uVar5 = ((uint)CONCAT61((int6)((ulonglong)in_RAX >> 0x10),
                          (char)((ulonglong)in_RAX >> 8) + (char)in_RAX + in_CF) & 0x2b5408) * 0x100
  ;
  pbVar6 = (byte *)(ulonglong)uVar5;
  pbVar1 = pbVar6 + -0x14ffd98b;
  *pbVar1 = *pbVar1;
  if (*pbVar1 == 0) {
    bVar3 = *pbVar6;
    *pbVar6 = *pbVar6 + bVar7;
    verr();
    *pbVar6 = *pbVar6 + CARRY1(bVar3,bVar7);
    pbVar1 = (byte *)(unaff_RDI + -0x68);
    bVar3 = *pbVar1;
    *pbVar1 = *pbVar1 + param_1;
    bVar4 = *pbVar6;
    *unaff_retaddr = bVar7;
    *unaff_RSI = *unaff_RSI + (char)((ulonglong)param_2 >> 8);
    (&stack0x00000000)
    [(ulonglong)(CONCAT31((int3)(uVar5 >> 8),bVar4 + CARRY1(bVar3,param_1)) + 0xd12be800) * 8] =
         (&stack0x00000000)
         [(ulonglong)(CONCAT31((int3)(uVar5 >> 8),bVar4 + CARRY1(bVar3,param_1)) + 0xd12be800) * 8]
         + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar6 = *pbVar6;
  cVar8 = (char)((ulonglong)unaff_RBX >> 8);
  *(char *)(unaff_RDI + 0x26) = *(char *)(unaff_RDI + 0x26) + cVar8;
  pcVar2 = (char *)(unaff_RDI * 3 + 0x26);
  *pcVar2 = *pcVar2 + cVar8;
  pcVar2 = (char *)(unaff_RBX + 0x21004b + unaff_RBP * 8);
  *pcVar2 = *pcVar2 + param_1;
  *pbVar6 = *pbVar6;
  *(char *)(unaff_RDI + 0x26) = *(char *)(unaff_RDI + 0x26) + cVar8;
  pcVar2 = (char *)(unaff_RDI * 3 + 0x26);
  *pcVar2 = *pcVar2 + cVar8;
  pbVar1 = (byte *)(unaff_RBX + 0x7c01004b + unaff_RBP * 8);
  bVar7 = *pbVar1;
  *pbVar1 = *pbVar1 + param_1;
  *(char *)(unaff_RBX + -0x18) =
       *(char *)(unaff_RBX + -0x18) + (char)(uVar5 + 0x2f87c00 + (uint)CARRY1(bVar7,param_1) >> 8);
  puVar9 = auStack_10 + 1;
  cVar8 = '\x05';
  do {
    unaff_retaddr = unaff_retaddr + -8;
    puVar9 = puVar9 + -1;
    *puVar9 = *(undefined8 *)unaff_retaddr;
    cVar8 = cVar8 + -1;
  } while ('\0' < cVar8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

