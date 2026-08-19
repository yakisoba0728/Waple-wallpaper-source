// Function: FUN_1404b7af0
// Addr: 1404b7af0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7af0(byte *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined3 uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint in_EAX;
  uint uVar6;
  char cVar9;
  char *pcVar7;
  byte *pbVar8;
  uint unaff_EBX;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  cVar5 = (char)param_2;
  pbVar8 = (byte *)(ulonglong)unaff_EBX;
  bVar1 = *pbVar8;
  uRam0021004b7a00001d = unaff_EBX;
  *pbVar8 = *pbVar8 + (byte)unaff_EBX;
  if ((POPCOUNT(*pbVar8) & 1U) != 0) {
    uVar6 = in((short)param_2);
    pcVar7 = (char *)(ulonglong)uVar6;
    *param_4 = *param_4;
    *pcVar7 = *pcVar7 + (char)uVar6;
    pcVar7[-0x56ffe262] = pcVar7[-0x56ffe262] + cVar5;
    uVar6 = (uVar6 + 0xb6122000) - (uint)((uVar6 & 0x100) != 0);
    pcVar7 = (char *)(ulonglong)uVar6;
    bVar1 = *param_1;
    *param_1 = *param_1 + (byte)uVar6;
    *pcVar7 = *pcVar7 + (char)param_1 + CARRY1(bVar1,(byte)uVar6);
    *pcVar7 = *pcVar7 + cVar5;
    pcVar7 = (char *)((ulonglong)uVar6 ^ 0xf);
    *pcVar7 = *pcVar7 + cVar5;
    pbVar8 = (byte *)((ulonglong)
                      (CONCAT22((short)(uVar6 >> 0x10),
                                CONCAT11((byte)(uVar6 >> 8) | (byte)pcVar7 | 0xf0,(byte)pcVar7)) |
                      0xf0) + 7);
    *pbVar8 = *pbVar8 | (byte)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (unaff_EBX + 0xe25c6d00) - (uint)CARRY1(bVar1,(byte)unaff_EBX);
  pcVar7 = (char *)(ulonglong)uVar6;
  cVar5 = (char)uVar6;
  *pcVar7 = *pcVar7 + cVar5;
  uVar2 = (undefined3)(uVar6 >> 8);
  if ((POPCOUNT(*pcVar7) & 1U) != 0) {
    cVar9 = (char)(uVar6 >> 8);
    *param_1 = *param_1 + cVar9;
    *pcVar7 = *pcVar7 + cVar5;
    pcVar7[0x7b001d9f] = pcVar7[0x7b001d9f] + cVar9;
    uVar3 = CONCAT31(uVar2,cVar5 + *pcVar7);
    uRam0521004b79ec001d = uVar6;
    *unaff_RDI = *unaff_RSI;
    uVar6 = (uVar3 + 0x25ab1c4) - (uint)(0xdffff33b < uVar3);
    pcVar7 = (char *)(unaff_RBP + 0x21004a + (ulonglong)in_EAX);
    *pcVar7 = *pcVar7 + (char)param_1;
    *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
    *(byte *)(unaff_RBP + -0x5aa4ffe3) = *(byte *)(unaff_RBP + -0x5aa4ffe3) & (byte)(uVar6 >> 8);
    uVar6 = uVar6 + 0xb5e27400;
    *param_1 = *param_1 + (char)(uVar6 >> 8);
    *param_2 = *param_2 + (char)uVar6;
    *(char *)(ulonglong)uVar6 = *(char *)(ulonglong)uVar6 + (char)uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar4 = CONCAT31(uVar2,cVar5 + *pcVar7);
  *param_1 = *param_1 + (char)((uint)(iVar4 + 0x74a00834) >> 8);
  uVar6 = iVar4 + 0x68a50836;
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

