// Function: FUN_1404a6ef0
// Addr: 1404a6ef0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6ef0(int param_1,undefined2 param_2)

{
  char cVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  uint uVar7;
  char *pcVar8;
  byte bVar9;
  int unaff_EBX;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  int iVar5;
  uint *puVar6;
  
  uVar7 = param_1 + unaff_EBX;
  *in_RAX = *in_RAX | (uint)in_RAX;
  bVar3 = (byte)uVar7;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + unaff_SPL;
  iVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'n');
  uVar4 = iVar5 + 0x64050002;
  puVar6 = (uint *)(ulonglong)uVar4;
  *(byte *)puVar6 = (byte)*puVar6 | (byte)uVar4;
  bVar9 = (byte)unaff_EBX | bVar3 | bVar3;
  *puVar6 = *puVar6 | uVar4;
  cVar1 = bVar3 + bVar9;
  uVar2 = (undefined3)(uVar7 >> 8);
  pcVar8 = (char *)(ulonglong)CONCAT31(uVar2,cVar1);
  *puVar6 = *puVar6 | uVar4;
  unaff_RSI[0x4a] = unaff_RSI[0x4a] - (char)(uVar7 >> 8);
  *pcVar8 = *pcVar8 + (char)(uVar4 >> 8);
  uVar7 = iVar5 + 0xd80a0004;
  uVar4 = CONCAT31((int3)(uVar7 >> 8),(byte)uVar7 + *(byte *)(ulonglong)uVar7);
  pcVar8 = (char *)(ulonglong)
                   CONCAT31(uVar2,cVar1 + bVar9 + CARRY1((byte)uVar7,*(byte *)(ulonglong)uVar7));
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  uVar4 = uVar4 + 0x2c0009d9;
  out(*unaff_RSI,param_2);
  *pcVar8 = *pcVar8 + unaff_SPL;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  *pcVar8 = *pcVar8 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

