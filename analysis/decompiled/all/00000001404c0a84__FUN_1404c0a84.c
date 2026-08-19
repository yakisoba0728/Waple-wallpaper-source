// Function: FUN_1404c0a84
// Addr: 1404c0a84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c0a85) overlaps instruction at (ram,0x0001404c0a84)
    */

void FUN_1404c0a84(char *param_1,uint *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  char *pcVar7;
  uint *in_RAX;
  byte bVar8;
  char unaff_BH;
  undefined1 *puVar9;
  undefined1 *unaff_RBP;
  longlong unaff_RSI;
  char unaff_R12B;
  
  bVar8 = (byte)param_1;
  uVar3 = (uint)param_1;
  *param_1 = *param_1 - bVar8;
  *param_1 = *param_1 + unaff_R12B;
  while( true ) {
    bVar5 = (byte)in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + bVar5;
    *(char *)(unaff_RSI + -0x7c) = *(char *)(unaff_RSI + -0x7c) + (char)((ulonglong)param_2 >> 8);
    *(byte *)in_RAX = (byte)*in_RAX - bVar5;
    *(byte *)in_RAX = (byte)*in_RAX + (char)param_2;
    puVar1 = (uint *)((longlong)in_RAX * 2 + 0x21);
    *puVar1 = *puVar1 | uVar3;
    *(byte *)in_RAX = (byte)*in_RAX + bVar5;
    *(byte *)(in_RAX + -0x1f) = (byte)in_RAX[-0x1f] + (char)((ulonglong)in_RAX >> 8);
    uVar6 = *in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX - bVar5;
    if (bVar5 <= (byte)uVar6 && (byte)*in_RAX != 0) break;
    *(byte *)in_RAX = (byte)*in_RAX | bVar5;
    *(int *)((longlong)in_RAX + -0x67fafff6) =
         *(int *)((longlong)in_RAX + -0x67fafff6) + (int)unaff_RBP;
    uVar6 = (uint)in_RAX | *in_RAX;
    *(char *)(unaff_RSI + 0x28002884) = *(char *)(unaff_RSI + 0x28002884) + (char)(uVar6 >> 8);
    puVar1 = (uint *)((ulonglong)uVar6 * 2 + 0x21);
    *puVar1 = *puVar1 | uVar3;
    *param_2 = *param_2 | uVar6;
    *param_1 = *param_1 + bVar8;
    uVar6 = uRam21004c0940002885;
    cRam0000000084a60009 = cRam0000000084a60009 + -9;
    pcVar7 = (char *)(ulonglong)uRam21004c0940002885;
    cVar4 = (char)uRam21004c0940002885;
    *pcVar7 = *pcVar7 + cVar4;
    *(char *)(unaff_RSI + -0x5effd77c) = *(char *)(unaff_RSI + -0x5effd77c) + (char)(uVar6 >> 8);
    pcVar7[9] = pcVar7[9] + cVar4;
    *param_1 = *param_1 + unaff_R12B;
    *(char *)((longlong)pcVar7 * 2) = *(char *)((longlong)pcVar7 * 2) + bVar8;
    uVar6 = CONCAT31((int3)(uVar6 >> 8),cVar4 + unaff_BH) + 0x6e80000;
    in_RAX = (uint *)(ulonglong)uVar6;
    cVar4 = (char)uVar6;
    *(byte *)in_RAX = (byte)*in_RAX + cVar4;
    *(byte *)in_RAX = (byte)*in_RAX + cVar4;
    puVar9 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(undefined1 **)((longlong)register0x00000020 + -8) = unaff_RBP;
    register0x00000020 = (BADSPACEBASE *)((longlong)register0x00000020 + -0x10);
    *(byte *)in_RAX = (byte)*in_RAX + cVar4;
    *(byte *)((longlong)in_RAX * 2) = bVar8;
    *(char *)(unaff_RSI + 0x28002884) = *(char *)(unaff_RSI + 0x28002884) + (char)(uVar6 >> 8);
    puVar1 = (uint *)((longlong)in_RAX * 2 + 0x21);
    *puVar1 = *puVar1 | uVar3;
    unaff_RBP = puVar9;
  }
  *(byte *)in_RAX = (byte)*in_RAX - bVar5;
  pbVar2 = (byte *)((longlong)in_RAX * 2 + 1);
  *pbVar2 = *pbVar2 | bVar8;
  *(undefined8 *)((longlong)register0x00000020 + -8) = 0xffffffffb20b0005;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

