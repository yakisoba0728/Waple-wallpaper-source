// Function: FUN_1404a3064
// Addr: 1404a3064
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3064(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char cVar6;
  longlong in_RAX;
  char *pcVar5;
  undefined7 uVar7;
  char cVar8;
  byte bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  byte *pbVar4;
  
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)param_2;
  uVar7 = (undefined7)((ulonglong)param_1 >> 8);
  *(uint *)(unaff_RSI + in_RAX) = *(uint *)(unaff_RSI + in_RAX) & (uint)param_2;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar8;
  uVar3 = (int)in_RAX + 0x7d40c00;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar9 = (byte)uVar3;
  (&stack0x00000000)[(longlong)pbVar4 * 8] = (&stack0x00000000)[(longlong)pbVar4 * 8] + bVar9;
  *pbVar4 = *pbVar4 | bVar9;
  bVar9 = (byte)((ulonglong)param_2 >> 8) & param_1[-0x4eabfffb];
  uVar3 = (int)in_RAX + 0x52038c00;
  pcVar5 = (char *)(ulonglong)uVar3;
  cVar6 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar6;
  cVar2 = (char)uVar3;
  *pcVar5 = *pcVar5 + cVar2;
  *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8))) =
       *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(bVar9,cVar8))) + cVar6;
  pcVar1 = (char *)(CONCAT71(uVar7,5) + 5 + unaff_RSI * 4);
  *pcVar1 = *pcVar1 + cVar8;
  pcVar5[0x21004a2f] = pcVar5[0x21004a2f] + cVar2;
  *pcVar5 = *pcVar5 + cVar2;
  cRam00000001624a364a = cRam00000001624a364a + cVar2;
  pcVar1 = (char *)(unaff_RDI + 0x4a + unaff_RBP);
  *pcVar1 = *pcVar1 + cVar6;
  *(char *)CONCAT71(uVar7,5) = *(char *)CONCAT71(uVar7,5) + cVar6;
  *pcVar5 = *pcVar5 + cVar2;
  cRam000000010c4a365e = cRam000000010c4a365e + '\x05';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

