// Function: FUN_1404cb5cc
// Addr: 1404cb5cc
// Size: 1 bytes


void FUN_1404cb5cc(char *param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  int *piVar5;
  char *pcVar7;
  char cVar8;
  uint *unaff_RBX;
  byte *pbVar9;
  ulonglong unaff_RSI;
  bool bVar10;
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
  uint *puVar6;
  
  bVar10 = 0xcb < (byte)in_RAX;
  piVar5 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 0x34);
  while( true ) {
    uVar4 = (int)piVar5 + *piVar5 + (uint)bVar10;
    puVar6 = (uint *)(ulonglong)uVar4;
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0 || uVar4 == 0) break;
    pbVar9 = (byte *)((longlong)puVar6 + param_2 * 2);
    *pbVar9 = *pbVar9 >> 1 | *pbVar9 << 7;
    *(byte *)puVar6 = (char)*puVar6 + (byte)uVar4;
    *unaff_RBX = *unaff_RBX & (uint)&stack0x00000000;
    unaff_RSI = (ulonglong)((uint)unaff_RSI & (uint)&stack0x00000000);
    uVar4 = CONCAT22((short)(uVar4 >> 0x10),
                     CONCAT11((char)(uVar4 >> 8) * '\x02',
                              ((byte)uVar4 | *(byte *)(ulonglong)uVar4) + 0x3c));
    uVar4 = uVar4 | *(uint *)(ulonglong)uVar4;
    bVar3 = (byte)uVar4 | 0x74;
    piVar5 = (int *)(ulonglong)(uVar4 | 0xe640874);
    pbVar9 = &stack0x00000000 + unaff_RSI;
    bVar10 = CARRY1(*pbVar9,bVar3);
    *pbVar9 = *pbVar9 + bVar3;
  }
  uVar2 = (int)unaff_RBX - (uint)unaff_RSI;
  pbVar9 = (byte *)(ulonglong)uVar2;
  uVar4 = uVar4 ^ *puVar6 ^ *(uint *)(ulonglong)(uVar4 ^ *puVar6);
  fVar1 = *(float *)(&stack0x00002100 + (longlong)param_1 * 2);
  *(undefined2 *)pbVar9 = in_FPUControlWord;
  *(undefined2 *)(pbVar9 + 4) = in_FPUStatusWord;
  *(undefined2 *)(pbVar9 + 8) = in_FPUTagWord;
  *(undefined8 *)(pbVar9 + 0x14) = in_FPUDataPointer;
  *(undefined **)(pbVar9 + 0xc) = &UNK_1404cb5d8;
  *(undefined2 *)(pbVar9 + 0x12) = in_FPULastInstructionOpcode;
  *(float10 *)(pbVar9 + 0x1c) = in_ST0 / (float10)fVar1;
  *(unkbyte10 *)(pbVar9 + 0x26) = in_ST1;
  *(unkbyte10 *)(pbVar9 + 0x30) = in_ST2;
  *(unkbyte10 *)(pbVar9 + 0x3a) = in_ST3;
  *(unkbyte10 *)(pbVar9 + 0x44) = in_ST4;
  *(unkbyte10 *)(pbVar9 + 0x4e) = in_ST5;
  *(unkbyte10 *)(pbVar9 + 0x58) = in_ST6;
  *(unkbyte10 *)(pbVar9 + 0x62) = in_ST7;
  cVar8 = (char)uVar2;
  *pbVar9 = *pbVar9 + cVar8;
  bVar3 = (char)uVar4 + (char)(uVar4 >> 8) + cVar8;
  pcVar7 = (char *)(ulonglong)CONCAT22((short)(uVar4 >> 0x10),CONCAT11(0x4c,bVar3));
  *param_1 = *param_1 + bVar3;
  *pbVar9 = *pbVar9 | bVar3;
  *pcVar7 = *pcVar7 + (char)param_1;
  return;
}

