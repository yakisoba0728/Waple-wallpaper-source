// Function: FUN_1404bb940
// Addr: 1404bb940
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb940(byte *param_1,uint param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte *in_RAX;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  char cVar10;
  uint *puVar9;
  char unaff_BH;
  ulonglong uVar11;
  uint *unaff_RDI;
  undefined2 in_SS;
  char in_CF;
  
  in_RAX[0x3821004b] = in_RAX[0x3821004b] + unaff_BH + in_CF;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  uVar5 = (uint)puVar6;
  uVar11 = (ulonglong)((uint)&stack0x00000000 & uVar5);
  uVar5 = uVar5 | *puVar6;
  bVar3 = (char)uVar5 + 0x8c;
  uVar2 = (undefined3)(uVar5 >> 8);
  uVar5 = CONCAT31(uVar2,bVar3 | *(byte *)(ulonglong)CONCAT31(uVar2,bVar3)) | 0x5000954;
  puVar6 = (uint *)((ulonglong)uVar5 ^ 8);
  cVar10 = (char)(param_2 >> 8);
  *(char *)puVar6 = (char)*puVar6 + cVar10;
  *(uint *)(ulonglong)param_2 = *(uint *)(ulonglong)param_2 & param_2;
  *(byte **)(uVar11 - 8) = param_1;
  puVar9 = (uint *)(ulonglong)param_2;
  *puVar6 = *puVar6 & (uint)puVar6;
  *(char *)((longlong)puVar6 + 0x21004b) = *(char *)((longlong)puVar6 + 0x21004b) + unaff_BH;
  *(byte *)puVar6 = (char)*puVar6 + (byte)puVar6;
  bVar8 = (byte)param_2;
  *(byte *)((longlong)puVar9 + -0x6daeffdf) = *(byte *)((longlong)puVar9 + -0x6daeffdf) ^ bVar8;
  *puVar6 = *puVar6 & (uint)puVar6;
  *(char *)((longlong)puVar6 + 0x21004b) = *(char *)((longlong)puVar6 + 0x21004b) + unaff_BH;
  bVar3 = (byte)puVar6 | (byte)*puVar6;
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11((char)(uVar5 >> 8) + cVar10 + bVar3,bVar3));
  uVar5 = uVar5 | *(uint *)(ulonglong)uVar5;
  pcVar7 = (char *)(ulonglong)uVar5;
  *(byte *)((longlong)puVar9 + (longlong)param_1) =
       *(byte *)((longlong)puVar9 + (longlong)param_1) + cVar10;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + bVar8;
  pcVar7[(longlong)param_1] = pcVar7[(longlong)param_1] + cVar10;
  *pcVar7 = *pcVar7 + cVar10;
  *puVar9 = *puVar9 & param_2;
  *(byte **)(uVar11 - 0x10) = param_1;
  puVar6 = (uint *)(ulonglong)uVar5;
  *puVar6 = *puVar6 & uVar5;
  *(char *)((longlong)puVar6 + 0x521004b) = *(char *)((longlong)puVar6 + 0x521004b) + unaff_BH;
  puVar6 = (uint *)(uVar11 - 0x10 & 0xffffffff);
  uVar5 = (uint)(uVar11 - 0x10);
  *puVar6 = *puVar6 & uVar5;
  *(undefined2 *)(param_1 + 0x49ede000) = in_SS;
  *param_1 = *param_1 + (char)((ulonglong)puVar6 >> 8);
  bVar4 = (byte)puVar6;
  *(byte *)puVar6 = (char)*puVar6 + bVar4;
  *(char *)(puVar6 + -0x1b) = (char)puVar6[-0x1b] + cVar10;
  *puVar6 = *puVar6 & uVar5;
  *(undefined2 *)(param_1 + 0x49ede000) = in_SS;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar4;
  uVar5 = (uVar5 - iRam00000001524cd4c7) - (uint)CARRY1(bVar3,bVar4);
  pcVar7 = (char *)(ulonglong)uVar5;
  *pcVar7 = *pcVar7 + bVar8;
  if (param_1 == (byte *)0x1 || *pcVar7 == '\0') {
    pbVar1 = (byte *)(pcVar7 + (longlong)puVar9 * 2);
    *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
    *pcVar7 = *pcVar7 + (char)uVar5;
    *unaff_RDI = *unaff_RDI & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

