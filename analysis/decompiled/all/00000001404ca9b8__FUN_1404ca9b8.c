// Function: FUN_1404ca9b8
// Addr: 1404ca9b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca9b8(char *param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar5;
  undefined8 in_RAX;
  undefined7 uVar7;
  char *pcVar3;
  char cVar6;
  byte *pbVar4;
  char cVar8;
  char cVar9;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  longlong unaff_RSI;
  char unaff_R12B;
  
  uRam000000012451a9c0 = uRam000000012451a9c0 & (uint)in_RAX;
  uVar7 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar3 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + unaff_RSI);
  cVar8 = (char)param_1;
  *pcVar3 = *pcVar3 + cVar8;
  cVar9 = (char)((uint)param_2 >> 8);
  (&stack0x00000033)[(longlong)param_1] = (&stack0x00000033)[(longlong)param_1] + cVar9;
  bVar1 = (char)in_RAX + unaff_BL;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar5;
  bVar1 = bVar1 | *(byte *)(CONCAT71(uVar7,bVar1) * 2);
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(bVar5 | *(byte *)(unaff_RBP + CONCAT71(uVar7,bVar1)),bVar1)) +
          0x74000d34;
  pcVar3 = (char *)((ulonglong)uVar2 | 0x33);
  cVar6 = (char)(uVar2 >> 8);
  (&stack0xffffffffa8e80033)[(longlong)param_1] =
       (&stack0xffffffffa8e80033)[(longlong)param_1] + cVar6;
  *param_1 = *param_1 + unaff_R12B;
  bVar1 = (byte)pcVar3;
  *pcVar3 = *pcVar3 + bVar1;
  (&stack0x00000033)[(longlong)param_1] = (&stack0x00000033)[(longlong)param_1] + cVar9;
  (&stack0xffffffffa8e80033)[(longlong)param_1] =
       (&stack0xffffffffa8e80033)[(longlong)param_1] + cVar6;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar3 = *pcVar3 + bVar1;
  *pcVar3 = *pcVar3 + bVar1;
  (&stack0x00000033)[(longlong)param_1] = (&stack0x00000033)[(longlong)param_1] + cVar9;
  *param_1 = *param_1 + cVar6;
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(bVar1 | 0x33) + unaff_BL) + 0x74050002;
  pbVar4 = (byte *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  *pbVar4 = *pbVar4 | bVar1;
  bRam000000014de6aa46 = bRam000000014de6aa46 | 0x33;
  pbVar4[unaff_RSI * 8 + 0x210049] = pbVar4[unaff_RSI * 8 + 0x210049] + cVar8;
  *pbVar4 = *pbVar4 + bVar1;
  bRam000000014de6aa56 = bRam000000014de6aa56 | 0x33;
  pbVar4[unaff_RSI * 8 + 0xa210049] = pbVar4[unaff_RSI * 8 + 0xa210049] + cVar8;
  rdpmc((int)param_1);
  rdpmc(CONCAT31((int3)((ulonglong)param_1 >> 8),cVar8 + unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

