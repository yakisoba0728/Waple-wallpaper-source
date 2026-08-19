// Function: FUN_1404ae768
// Addr: 1404ae768
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae768(byte *param_1,longlong param_2)

{
  longlong lVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *in_RAX;
  uint *puVar8;
  byte bVar10;
  uint unaff_EBP;
  bool in_OF;
  byte *unaff_retaddr;
  undefined1 auStackX_8 [32];
  byte *pbVar7;
  char *pcVar9;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  if (in_OF) {
    uRam00000001b477e75c = uRam00000001b477e75c & unaff_EBP;
    *in_RAX = *in_RAX | (uint)in_RAX;
    param_1[param_2] = param_1[param_2] - (char)((ulonglong)in_RAX >> 8);
    *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar10;
    bVar3 = (byte)in_RAX;
    piVar6 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3 * '\x02');
    register0x00000020 = (BADSPACEBASE *)auStackX_8;
    in_RAX = (uint *)(ulonglong)((int)piVar6 + *piVar6 + (uint)CARRY1(bVar3,bVar3));
    unaff_retaddr[0x13] = -unaff_retaddr[0x13];
    *(char *)((longlong)in_RAX + -0x1a) = *(char *)((longlong)in_RAX + -0x1a) + bVar10;
    param_1 = unaff_retaddr;
  }
  *param_1 = *param_1 + (char)register0x00000020;
  uVar4 = (int)in_RAX + 0xc4050002;
  pbVar7 = (byte *)(ulonglong)uVar4;
  *pbVar7 = *pbVar7 | (byte)uVar4;
  param_1[0x13] = -param_1[0x13];
  bVar3 = *param_1;
  *param_1 = *param_1 + (byte)param_2;
  lVar1 = *(longlong *)register0x00000020;
  uVar4 = uVar4 + *(int *)pbVar7 + (uint)CARRY1(bVar3,(byte)param_2);
  puVar8 = (uint *)(ulonglong)uVar4;
  bVar10 = bVar10 & 0x4a;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *(char *)puVar8 = (char)*puVar8 + (char)uVar4;
  uVar5 = uVar4 + *puVar8 + (uint)CARRY1(bVar10,bVar10);
  pcVar9 = (char *)(ulonglong)uVar5;
  piVar6 = (int *)(lVar1 + 0x13);
  *piVar6 = *piVar6 + (int)lVar1 +
            (uint)(CARRY4(uVar4,*puVar8) || CARRY4(uVar4 + *puVar8,(uint)CARRY1(bVar10,bVar10)));
  bVar3 = (byte)uVar5;
  pcVar9[0x21004ae6] = pcVar9[0x21004ae6] + bVar3;
  *pcVar9 = *pcVar9 + bVar3;
  uVar4 = CONCAT31((int3)(uVar5 >> 8),bVar3 * '\x02');
  pcVar2 = *(char **)((longlong)register0x00000020 + 0x10);
  uVar4 = uVar4 + *(int *)(ulonglong)uVar4 + (uint)CARRY1(bVar3,bVar3);
  pcVar2[0x13] = -pcVar2[0x13];
  pcVar9 = (char *)((ulonglong)uVar4 - 0x1a);
  *pcVar9 = *pcVar9 + bVar10 * '\x02';
  *pcVar2 = *pcVar2 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

