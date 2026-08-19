// Function: FUN_14049e634
// Addr: 14049e634
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e634(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_RAX;
  undefined7 uVar9;
  byte bVar10;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  uint *puVar7;
  char *pcVar8;
  
  bVar10 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX + (int)param_1;
  uVar9 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX + (char)*in_RAX;
  bVar3 = cVar2 + 0x50;
  puVar7 = (uint *)CONCAT71(uVar9,bVar3);
  *puVar7 = *puVar7 & unaff_EBX;
  *(byte *)puVar7 = (byte)*puVar7 | bVar3;
  pbVar1 = (byte *)(param_1 + CONCAT44(unaff_0000001c,unaff_EBX));
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 - bVar10;
  uVar5 = (uint)CONCAT71(uVar9,cVar2 + -0x4c + (bVar3 < bVar10)) | 0x8e40434;
  pcVar8 = (char *)(ulonglong)uVar5;
  pcVar8[-0x2a] = pcVar8[-0x2a] + (char)(uVar5 >> 8);
  cVar2 = *pcVar8;
  cVar4 = (char)uVar5;
  *pcVar8 = *pcVar8 + cVar4;
  if (SCARRY1(cVar2,cVar4) == *pcVar8 < '\0') {
    *pcVar8 = *pcVar8 + cVar4;
    uVar6 = in(0x49);
    *param_1 = *param_1 + (char)((uint)uVar6 >> 8);
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)uVar6 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

