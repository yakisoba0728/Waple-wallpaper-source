// Function: FUN_1404d64d0
// Addr: 1404d64d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d64d0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  byte bVar7;
  uint *unaff_RBP;
  longlong unaff_RSI;
  int *unaff_RDI;
  uint *puVar6;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  uVar4 = in_EAX & 0xe400362c;
  uVar5 = *unaff_RBP;
  puVar6 = (uint *)(unaff_RSI + (longlong)(ulonglong)uVar4);
  *puVar6 = *puVar6 & uVar5;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + (char)uVar5;
  uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
  *(byte *)((longlong)unaff_RBP + (ulonglong)uVar5) =
       *(byte *)((longlong)unaff_RBP + (ulonglong)uVar5) | bVar7;
  bVar2 = (byte)uVar4;
  uVar5 = CONCAT31((int3)(uVar4 >> 8),bVar2 + 100 + (0x9b < bVar2)) & 0x4500362c;
  cVar3 = (char)uVar5 + -0x36 + bVar7;
  uVar4 = CONCAT31((int3)(uVar5 >> 8),cVar3);
  puVar6 = (uint *)(ulonglong)uVar4;
  *puVar6 = *puVar6 & uVar4;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  uVar4 = uVar4 & 0x4500362c;
  cVar3 = (char)uVar4 + -0x36 + bVar7;
  uVar1 = CONCAT31((int3)(uVar4 >> 8),cVar3);
  puVar6 = (uint *)(ulonglong)uVar1;
  uVar5 = *unaff_RBP;
  *puVar6 = *puVar6 & uVar1;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  *(char *)(unaff_RSI * 2) = *(char *)(unaff_RSI * 2) + (char)(uVar5 >> 8);
  cRam00000001244d9b3d = cRam00000001244d9b3d + (char)(uVar4 >> 8);
  *unaff_RDI = *unaff_RDI + *unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

