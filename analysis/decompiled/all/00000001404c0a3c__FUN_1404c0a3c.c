// Function: FUN_1404c0a3c
// Addr: 1404c0a3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c0a3d) overlaps instruction at (ram,0x0001404c0a3c)
    */

void FUN_1404c0a3c(uint *param_1,uint *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  char *in_RAX;
  byte bVar10;
  char unaff_BH;
  undefined1 *puVar11;
  undefined1 *unaff_RBP;
  longlong unaff_RSI;
  uint unaff_EDI;
  char unaff_R12B;
  char *pcVar8;
  uint *puVar9;
  
  bVar10 = (byte)param_1;
  while( true ) {
    uVar3 = (uint)param_1;
    *param_1 = *param_1 & uVar3;
    cVar5 = (char)in_RAX + *in_RAX;
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5);
    *(uint *)(pcVar8 + -0x7b59fff7) = *(uint *)(pcVar8 + -0x7b59fff7) | unaff_EDI;
    *pcVar8 = *pcVar8 - cVar5;
    uVar4 = uRam21004c0940002885;
    pcVar8 = (char *)(ulonglong)uRam21004c0940002885;
    cVar5 = (char)uRam21004c0940002885;
    *pcVar8 = *pcVar8 + cVar5;
    *(char *)(unaff_RSI + -0x5effd77c) = *(char *)(unaff_RSI + -0x5effd77c) + (char)(uVar4 >> 8);
    pcVar8[9] = pcVar8[9] + cVar5;
    *(char *)param_1 = (char)*param_1 + unaff_R12B;
    *(char *)((longlong)pcVar8 * 2) = *(char *)((longlong)pcVar8 * 2) + bVar10;
    uVar7 = CONCAT31((int3)(uVar4 >> 8),cVar5 + unaff_BH) + 0x6e80000;
    puVar9 = (uint *)(ulonglong)uVar7;
    bVar6 = (byte)uVar7;
    *(byte *)puVar9 = (byte)*puVar9 + bVar6;
    *(byte *)puVar9 = (byte)*puVar9 + bVar6;
    puVar11 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(undefined1 **)((longlong)register0x00000020 + -8) = unaff_RBP;
    *(byte *)puVar9 = (byte)*puVar9 + bVar6;
    *(byte *)((longlong)puVar9 * 2) = bVar10;
    cVar5 = (char)(uVar7 >> 8);
    *(char *)(unaff_RSI + 0x28002884) = *(char *)(unaff_RSI + 0x28002884) + cVar5;
    puVar1 = (uint *)((longlong)puVar9 * 2 + 0x21);
    *puVar1 = *puVar1 | uVar3;
    *(byte *)puVar9 = (byte)*puVar9 + bVar6;
    *(char *)(unaff_RSI + -0x7c) = *(char *)(unaff_RSI + -0x7c) + (char)((ulonglong)param_2 >> 8);
    *(byte *)puVar9 = (byte)*puVar9 - bVar6;
    *(byte *)puVar9 = (byte)*puVar9 + (char)param_2;
    puVar1 = (uint *)((longlong)puVar9 * 2 + 0x21);
    *puVar1 = *puVar1 | uVar3;
    *(byte *)puVar9 = (byte)*puVar9 + bVar6;
    *(byte *)(puVar9 + -0x1f) = (byte)puVar9[-0x1f] + cVar5;
    uVar4 = *puVar9;
    *(byte *)puVar9 = (byte)*puVar9 - bVar6;
    if (bVar6 <= (byte)uVar4 && (byte)*puVar9 != 0) break;
    *(byte *)puVar9 = (byte)*puVar9 | bVar6;
    *(int *)((longlong)puVar9 + -0x67fafff6) =
         *(int *)((longlong)puVar9 + -0x67fafff6) +
         (int)(undefined1 *)((longlong)register0x00000020 + -8);
    uVar7 = uVar7 | *puVar9;
    *(char *)(unaff_RSI + 0x28002884) = *(char *)(unaff_RSI + 0x28002884) + (char)(uVar7 >> 8);
    puVar1 = (uint *)((ulonglong)uVar7 * 2 + 0x21);
    *puVar1 = *puVar1 | uVar3;
    *param_2 = *param_2 | uVar7;
    *(byte *)param_1 = (char)*param_1 + bVar10;
    in_RAX = (char *)0x84a60009;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x10);
    unaff_RBP = puVar11;
  }
  *(byte *)puVar9 = (byte)*puVar9 - bVar6;
  pbVar2 = (byte *)((longlong)puVar9 * 2 + 1);
  *pbVar2 = *pbVar2 | bVar10;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0xffffffffb20b0005;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

