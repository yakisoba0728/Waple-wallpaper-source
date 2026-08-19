// Function: FUN_1404bb968
// Addr: 1404bb968
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb968(byte *param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  uint *puVar6;
  char cVar8;
  ulonglong uVar7;
  char unaff_BH;
  uint *unaff_RDI;
  undefined2 in_SS;
  undefined1 auStack_8 [8];
  char *pcVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  *(byte *)(param_2 - 0x6daeffdf) = *(byte *)(param_2 - 0x6daeffdf) ^ (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)((longlong)in_RAX + 0x21004b) = *(char *)((longlong)in_RAX + 0x21004b) + unaff_BH;
  bVar2 = (byte)in_RAX | (byte)*in_RAX;
  cVar8 = (char)(param_2 >> 8);
  puVar6 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar8 + bVar2,bVar2));
  uVar4 = (uint)puVar6 | *puVar6;
  pcVar5 = (char *)(ulonglong)uVar4;
  param_1[param_2] = param_1[param_2] + cVar8;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (byte)param_2;
  pcVar5[(longlong)param_1] = pcVar5[(longlong)param_1] + cVar8;
  *pcVar5 = *pcVar5 + cVar8;
  *(uint *)(param_2 & 0xffffffff) = *(uint *)(param_2 & 0xffffffff) & (uint)param_2;
  puVar6 = (uint *)(ulonglong)uVar4;
  uVar7 = param_2 & 0xffffffff;
  *puVar6 = *puVar6 & uVar4;
  *(char *)((longlong)puVar6 + 0x521004b) = *(char *)((longlong)puVar6 + 0x521004b) + unaff_BH;
  puVar6 = (uint *)((ulonglong)auStack_8 & 0xffffffff);
  uVar4 = (uint)auStack_8;
  *puVar6 = *puVar6 & uVar4;
  *(undefined2 *)(param_1 + 0x49ede000) = in_SS;
  *param_1 = *param_1 + (char)((ulonglong)puVar6 >> 8);
  bVar3 = (byte)puVar6;
  *(byte *)puVar6 = (char)*puVar6 + bVar3;
  *(char *)(puVar6 + -0x1b) = (char)puVar6[-0x1b] + (char)(uVar7 >> 8);
  *puVar6 = *puVar6 & uVar4;
  *(undefined2 *)(param_1 + 0x49ede000) = in_SS;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar3;
  uVar4 = (uVar4 - iRam00000001524cd4c7) - (uint)CARRY1(bVar2,bVar3);
  pcVar5 = (char *)(ulonglong)uVar4;
  *pcVar5 = *pcVar5 + (char)uVar7;
  if (param_1 == (byte *)0x1 || *pcVar5 == '\0') {
    pbVar1 = (byte *)(pcVar5 + uVar7 * 2);
    *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
    *pcVar5 = *pcVar5 + (char)uVar4;
    *unaff_RDI = *unaff_RDI & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

