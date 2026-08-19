// Function: FUN_1404b7610
// Addr: 1404b7610
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b7610(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong in_RAX;
  byte bVar6;
  char unaff_BL;
  longlong unaff_RBP;
  longlong unaff_RDI;
  char in_CF;
  char *pcVar5;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + 0x4b) = (*(char *)(unaff_RBP + 0x4b) - bVar6) - in_CF;
  *param_1 = *param_1 + (char)(in_RAX >> 8);
  pbVar1 = (byte *)((in_RAX ^ 10) + unaff_RDI * 2);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  uVar4 = (int)(in_RAX ^ 10) + 0x16682400 + (uint)CARRY1(bVar2,bVar6);
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + unaff_BL;
  uVar3 = in(0x30);
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar3);
  *pcVar5 = *pcVar5 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

