// Function: FUN_1404a7158
// Addr: 1404a7158
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a71de) overlaps instruction at (ram,0x0001404a71dd)
    */
/* WARNING: Removing unreachable block (ram,0x0001404a71dd) */

void FUN_1404a7158(char *param_1,char *param_2)

{
  code *pcVar1;
  undefined3 uVar2;
  undefined7 uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  int in_EAX;
  uint uVar8;
  undefined2 uVar10;
  char cVar11;
  undefined8 unaff_RSI;
  char *unaff_RDI;
  bool in_OF;
  bool bVar12;
  uint *puVar9;
  
  cVar6 = (char)param_1;
  if (in_OF) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + (char)((uint)in_EAX >> 8);
  uVar8 = in_EAX + 0x74050002;
  *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
  uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar10 = SUB82(param_2,0);
  uVar5 = in(uVar10);
  puVar9 = (uint *)(CONCAT71(uVar3,uVar5) & 0xffffffff);
  *puVar9 = *puVar9 | (uint)CONCAT71(uVar3,uVar5);
  uVar5 = in(uVar10);
  puVar9 = (uint *)(CONCAT71(uVar3,uVar5) & 0xffffffff);
  uVar8 = (uint)CONCAT71(uVar3,uVar5);
  *puVar9 = *puVar9 | uVar8;
  cVar11 = (char)((ulonglong)param_2 >> 8);
  if (-1 < (int)*puVar9) {
    *param_1 = *param_1;
    uVar8 = uVar8 + 0xc4050002;
    uVar2 = (undefined3)(uVar8 + *(int *)(ulonglong)uVar8 >> 8);
    uVar5 = in(uVar10);
    uVar8 = CONCAT31(uVar2,uVar5);
    *(uint *)(ulonglong)uVar8 = *(uint *)(ulonglong)uVar8 | uVar8;
    uVar8 = CONCAT31(uVar2,cRam21004a708c0009ec);
    puVar9 = (uint *)(ulonglong)uVar8;
    *(char *)puVar9 = (char)*puVar9 + cRam21004a708c0009ec;
    unaff_RDI[-0x14] = unaff_RDI[-0x14] + cVar11;
    *puVar9 = *puVar9 | uVar8;
    cVar6 = in((short)uVar8);
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),cVar6);
    puVar9 = (uint *)(uVar4 & 0xffffffff);
    *puVar9 = *puVar9 | (uint)uVar4;
    *param_1 = *param_1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar12 = false;
  puVar9 = (uint *)(CONCAT71(uVar3,uVar5) & 0xffffffff);
  do {
    if (!bVar12) {
      uRam01004a6fe40009f1 = (uint)puVar9;
      *puVar9 = *puVar9 | uRam01004a6fe40009f1;
      uRam21004a6fe40009f1 = uRam01004a6fe40009f1;
      *(char *)puVar9 = (char)*puVar9 + (char)puVar9;
      *(char *)((longlong)puVar9 + -0xf) = *(char *)((longlong)puVar9 + -0xf) + cVar11;
      *puVar9 = *puVar9 | uRam01004a6fe40009f1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_RDI = *unaff_RDI + cVar6;
    cVar7 = in(6);
    puVar9 = (uint *)CONCAT71((int7)((ulonglong)puVar9 >> 8),cVar7);
    bVar12 = SCARRY1(*param_2,cVar6);
    *param_2 = *param_2 + cVar6;
  } while (*param_2 == '\0');
  cRam00000001b04a7615 = cRam00000001b04a7615 + cVar7;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

