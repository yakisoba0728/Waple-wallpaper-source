// Function: FUN_1404d64a8
// Addr: 1404d64a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d64a8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined8 in_RAX;
  int *unaff_RBP;
  longlong unaff_RSI;
  int *unaff_RDI;
  bool in_OF;
  uint *puVar6;
  
  cVar4 = (char)((ulonglong)param_2 >> 8);
  if (!in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001854d9b19 = cRam00000001854d9b19 + (char)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + -0x36 + cVar4;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3);
  *puVar6 = *puVar6 & (uint)puVar6;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  uVar5 = (uint)puVar6 & 0x4500362c;
  cVar4 = (char)uVar5 + -0x36 + cVar4;
  uVar2 = CONCAT31((int3)(uVar5 >> 8),cVar4);
  puVar6 = (uint *)(ulonglong)uVar2;
  iVar1 = *unaff_RBP;
  *puVar6 = *puVar6 & uVar2;
  *(char *)puVar6 = (char)*puVar6 + cVar4;
  *(char *)(unaff_RSI * 2) = *(char *)(unaff_RSI * 2) + (char)((uint)iVar1 >> 8);
  cRam00000001244d9b3d = cRam00000001244d9b3d + (char)(uVar5 >> 8);
  *unaff_RDI = *unaff_RDI + *unaff_RBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

