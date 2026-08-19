// Function: FUN_1404c8bd8
// Addr: 1404c8bd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8bd8(char *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar7;
  ulonglong in_RAX;
  ulonglong uVar4;
  uint *puVar5;
  char *pcVar6;
  char cVar8;
  char cVar9;
  char cVar11;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_R12B;
  byte *pbVar10;
  
  cVar8 = (char)param_1;
  uVar4 = in_RAX | 0x60;
  param_2 = param_2 | *(uint *)(uVar4 + 1);
  uVar1 = *(uint *)CONCAT71((int7)(in_RAX >> 8),
                            (byte)uVar4 + *(byte *)(uVar4 * 2) + *param_1 +
                            CARRY1((byte)uVar4,*(byte *)(uVar4 * 2)));
  puVar5 = (uint *)(ulonglong)uVar1;
  cVar9 = (char)param_2 + *(char *)((longlong)puVar5 + 0x21);
  pbVar10 = (byte *)(ulonglong)CONCAT31((int3)(param_2 >> 8),cVar9);
  bVar3 = (byte)uVar1;
  *pbVar10 = *pbVar10 | bVar3;
  *(char *)puVar5 = (char)*puVar5 + cVar8;
  if ((char)*puVar5 == '\0') {
    *puVar5 = *puVar5 & uVar1;
    *(byte *)puVar5 = (char)*puVar5 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar7 = (byte)(uVar1 >> 8);
  *(byte *)(puVar5 + -0x19) = (char)puVar5[-0x19] + bVar7;
  *puVar5 = *puVar5 ^ uVar1;
  cVar11 = (char)(param_2 >> 8);
  if (*puVar5 == 0) {
    *puVar5 = *puVar5 ^ uVar1;
    pcVar6 = (char *)((ulonglong)uVar1 | 0x8b);
    *param_1 = *param_1 + unaff_R12B;
    *pbVar10 = *pbVar10 | (byte)pcVar6;
    *pcVar6 = *pcVar6 + cVar8;
    bVar3 = in(0x5e);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),bVar3);
    *(char *)(unaff_RBP + -100) = *(char *)(unaff_RBP + -100) + cVar11;
    *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 ^ uVar2;
    uVar1 = CONCAT22((short)(uVar1 >> 0x10),CONCAT11(0x9f,bVar3));
    puVar5 = (uint *)(ulonglong)uVar1;
    *puVar5 = *puVar5 ^ uVar1;
    *(char *)(unaff_RBX + 0x2721004c) = *(char *)(unaff_RBX + 0x2721004c) - cVar8;
    *(byte *)puVar5 = (byte)*puVar5 | bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + bVar3;
  param_1[0x31] = param_1[0x31] ^ bVar7;
  param_1[-0x7563ffcf] = param_1[-0x7563ffcf] + cVar9;
  *param_1 = *param_1 + unaff_R12B;
  *(byte *)puVar5 = (char)*puVar5 + bVar3;
  *(char *)puVar5 = (char)*puVar5 + cVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

