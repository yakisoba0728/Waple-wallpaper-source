// Function: FUN_1404a7344
// Addr: 1404a7344
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7344(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  byte *pbVar4;
  undefined1 uVar6;
  undefined6 uVar7;
  char unaff_SPL;
  uint unaff_EBP;
  longlong unaff_RSI;
  uint *puVar5;
  
  uVar7 = (undefined6)((ulonglong)param_1 >> 0x10);
  uVar6 = (undefined1)param_1;
  *in_RAX = *in_RAX & unaff_EBP;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  *(byte *)(unaff_RSI + (longlong)in_RAX) =
       *(byte *)(unaff_RSI + (longlong)in_RAX) - (char)((ulonglong)param_2 >> 8);
  bVar1 = (byte)in_RAX - 0x2c;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar4 = *pbVar4 | bVar1;
  uVar3 = (int)pbVar4 + 0x800007c4;
  puVar5 = (uint *)(ulonglong)uVar3;
  *puVar5 = *puVar5 | uVar3;
  *puVar5 = *puVar5 | uVar3;
  cVar2 = (char)uVar3 + -0x71;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
  puVar5 = (uint *)(ulonglong)uVar3;
  *(char *)CONCAT62(uVar7,CONCAT11(0xfd,uVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(0xfd,uVar6)) + unaff_SPL;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  *(char *)((longlong)puVar5 + -0x4afff603) = *(char *)((longlong)puVar5 + -0x4afff603) + cVar2;
  *puVar5 = *puVar5 | uVar3;
  *(char *)CONCAT62(uVar7,CONCAT11(0xfd,uVar6)) =
       *(char *)CONCAT62(uVar7,CONCAT11(0xfd,uVar6)) + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

