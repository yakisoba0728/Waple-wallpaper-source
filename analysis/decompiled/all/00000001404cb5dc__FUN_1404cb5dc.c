// Function: FUN_1404cb5dc
// Addr: 1404cb5dc
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404cb5df) overlaps instruction at (ram,0x0001404cb5de)
    */

void FUN_1404cb5dc(longlong param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  uint *in_RAX;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  byte *pbVar10;
  uint *unaff_RBX;
  ulonglong unaff_RSI;
  undefined2 in_FPUControlWord;
  undefined2 in_FPUStatusWord;
  undefined2 in_FPUTagWord;
  undefined2 in_FPULastInstructionOpcode;
  undefined8 in_FPUDataPointer;
  float10 in_ST0;
  unkbyte10 in_ST1;
  unkbyte10 in_ST2;
  unkbyte10 in_ST3;
  unkbyte10 in_ST4;
  unkbyte10 in_ST5;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  pcVar8 = (char *)(param_1 + -1);
  if (pcVar8 != (char *)0x0 && (char)*in_RAX != '\0') {
    while( true ) {
      *(char *)in_RAX = (char)*in_RAX + (char)param_2;
      bVar3 = in(0xb);
      (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)pcVar8;
      uVar5 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3) | 0xe640800;
      pbVar10 = &stack0x00000000 + unaff_RSI;
      bVar4 = *pbVar10;
      *pbVar10 = *pbVar10 + bVar3;
      uVar5 = uVar5 + *(int *)(ulonglong)uVar5 + (uint)CARRY1(bVar4,bVar3);
      puVar6 = (uint *)(ulonglong)uVar5;
      pcVar8 = pcVar8 + -1;
      if (pcVar8 == (char *)0x0 || uVar5 == 0) break;
      pbVar10 = (byte *)((longlong)puVar6 + param_2 * 2);
      *pbVar10 = *pbVar10 >> 1 | *pbVar10 << 7;
      *(byte *)puVar6 = (char)*puVar6 + (byte)uVar5;
      *unaff_RBX = *unaff_RBX & (uint)&stack0x00000000;
      unaff_RSI = (ulonglong)((uint)unaff_RSI & (uint)&stack0x00000000);
      uVar5 = CONCAT22((short)(uVar5 >> 0x10),
                       CONCAT11((char)(uVar5 >> 8) * '\x02',
                                ((byte)uVar5 | *(byte *)(ulonglong)uVar5) + 0x3c));
      in_RAX = (uint *)((ulonglong)(uVar5 | *(uint *)(ulonglong)uVar5) | 0x74);
    }
    uVar2 = (int)unaff_RBX - (uint)unaff_RSI;
    pbVar10 = (byte *)(ulonglong)uVar2;
    uVar5 = uVar5 ^ *puVar6 ^ *(uint *)(ulonglong)(uVar5 ^ *puVar6);
    fVar1 = *(float *)(&stack0x00002100 + (longlong)pcVar8 * 2);
    *(undefined2 *)pbVar10 = in_FPUControlWord;
    *(undefined2 *)(pbVar10 + 4) = in_FPUStatusWord;
    *(undefined2 *)(pbVar10 + 8) = in_FPUTagWord;
    *(undefined8 *)(pbVar10 + 0x14) = in_FPUDataPointer;
    *(undefined **)(pbVar10 + 0xc) = &UNK_1404cb5d8;
    *(undefined2 *)(pbVar10 + 0x12) = in_FPULastInstructionOpcode;
    *(float10 *)(pbVar10 + 0x1c) = in_ST0 / (float10)fVar1;
    *(unkbyte10 *)(pbVar10 + 0x26) = in_ST1;
    *(unkbyte10 *)(pbVar10 + 0x30) = in_ST2;
    *(unkbyte10 *)(pbVar10 + 0x3a) = in_ST3;
    *(unkbyte10 *)(pbVar10 + 0x44) = in_ST4;
    *(unkbyte10 *)(pbVar10 + 0x4e) = in_ST5;
    *(unkbyte10 *)(pbVar10 + 0x58) = in_ST6;
    *(unkbyte10 *)(pbVar10 + 0x62) = in_ST7;
    cVar9 = (char)uVar2;
    *pbVar10 = *pbVar10 + cVar9;
    bVar4 = (char)uVar5 + (char)(uVar5 >> 8) + cVar9;
    in_RAX = (uint *)(ulonglong)CONCAT22((short)(uVar5 >> 0x10),CONCAT11(0x4c,bVar4));
    *pcVar8 = *pcVar8 + bVar4;
    *pbVar10 = *pbVar10 | bVar4;
  }
  uVar5 = (uint)in_RAX ^ *in_RAX;
  pcVar7 = (char *)(ulonglong)(uVar5 ^ *(uint *)(ulonglong)uVar5);
  *pcVar7 = *pcVar7 + (char)pcVar8;
  return;
}

