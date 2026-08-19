// Function: FUN_1404b7620
// Addr: 1404b7620
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7620(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined8 in_RAX;
  undefined6 uVar7;
  uint *puVar6;
  byte bVar8;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  char in_CF;
  byte *pbVar5;
  
  bVar8 = (byte)((ulonglong)param_1 >> 8);
  uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar4 = (byte)in_RAX;
  pbVar5 = (byte *)CONCAT62(uVar7,CONCAT11(-in_CF,bVar4));
  *pbVar5 = *pbVar5 ^ bVar4;
  bVar2 = -in_CF + (char)param_2;
  puVar6 = (uint *)CONCAT62(uVar7,CONCAT11(bVar2,bVar4));
  *puVar6 = *puVar6 ^ (uint)puVar6;
  pbVar5 = (byte *)CONCAT62(uVar7,CONCAT11(bVar2 | bVar4,bVar4));
  uVar1 = in((short)CONCAT71((int7)((ulonglong)pbVar5 >> 8),bVar4 ^ *pbVar5));
  *unaff_RDI = uVar1;
  uVar3 = param_2 + 0xe2924000;
  pbVar5 = (byte *)(unaff_RSI * 2 + 0x5521004b);
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3 + CARRY1(bVar2,bVar8);
  *(char *)(unaff_RBX + -0x28) = *(char *)(unaff_RBX + -0x28) + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

