// Function: FUN_1404ba404
// Addr: 1404ba404
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba404(longlong param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  undefined8 in_RAX;
  byte bVar6;
  uint unaff_EBX;
  longlong unaff_RSI;
  char *pcVar5;
  
  bVar4 = (char)in_RAX + 0x70;
  pcVar5 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar4);
  *pcVar5 = *pcVar5 + bVar4;
  *(uint *)(unaff_RSI + param_1) = *(uint *)(unaff_RSI + param_1) & unaff_EBX;
  pbVar1 = &stack0x00000000 + unaff_RSI * 8;
  bVar2 = *pbVar1;
  bVar6 = (byte)unaff_EBX;
  *pbVar1 = *pbVar1 + bVar6;
  bVar3 = CARRY1(bVar4,CARRY1(bVar2,bVar6));
  pcVar5 = (char *)(ulonglong)
                   ((int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                  CONCAT11(-bVar3,bVar4 + CARRY1(bVar2,bVar6))) + 0x16d41400 +
                   (uint)bVar3);
  *pcVar5 = *pcVar5 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

