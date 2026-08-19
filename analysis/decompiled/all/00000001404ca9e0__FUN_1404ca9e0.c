// Function: FUN_1404ca9e0
// Addr: 1404ca9e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca9e0(undefined8 param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar5;
  char *pcVar3;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  char unaff_BL;
  longlong unaff_RSI;
  char unaff_R12B;
  byte *pbVar4;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  cVar8 = (char)((uint)param_2 >> 8);
  pcVar3 = (char *)func_0x0001614cf68d();
  bVar1 = (byte)pcVar3;
  *pcVar3 = *pcVar3 + bVar1;
  (&stack0x00000033)[CONCAT44(uVar7,uVar6)] = (&stack0x00000033)[CONCAT44(uVar7,uVar6)] + cVar8;
  cVar5 = (char)((ulonglong)pcVar3 >> 8);
  (&stack0xffffffffa8e80033)[CONCAT44(uVar7,uVar6)] =
       (&stack0xffffffffa8e80033)[CONCAT44(uVar7,uVar6)] + cVar5;
  *(char *)CONCAT44(uVar7,uVar6) = *(char *)CONCAT44(uVar7,uVar6) + unaff_R12B;
  *pcVar3 = *pcVar3 + bVar1;
  *pcVar3 = *pcVar3 + bVar1;
  (&stack0x00000033)[CONCAT44(uVar7,uVar6)] = (&stack0x00000033)[CONCAT44(uVar7,uVar6)] + cVar8;
  *(char *)CONCAT44(uVar7,uVar6) = *(char *)CONCAT44(uVar7,uVar6) + cVar5;
  uVar2 = (int)CONCAT71((int7)((ulonglong)pcVar3 >> 8),(bVar1 | 0x33) + unaff_BL) + 0x74050002;
  pbVar4 = (byte *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  *pbVar4 = *pbVar4 | bVar1;
  bRam000000014de6aa46 = bRam000000014de6aa46 | 0x33;
  cVar5 = (char)uVar6;
  pbVar4[unaff_RSI * 8 + 0x210049] = pbVar4[unaff_RSI * 8 + 0x210049] + cVar5;
  *pbVar4 = *pbVar4 + bVar1;
  bRam000000014de6aa56 = bRam000000014de6aa56 | 0x33;
  pbVar4[unaff_RSI * 8 + 0xa210049] = pbVar4[unaff_RSI * 8 + 0xa210049] + cVar5;
  rdpmc(uVar6);
  rdpmc(CONCAT31((int3)((uint)uVar6 >> 8),cVar5 + unaff_BL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

