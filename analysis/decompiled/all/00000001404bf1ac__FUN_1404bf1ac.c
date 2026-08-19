// Function: FUN_1404bf1ac
// Addr: 1404bf1ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bf1ac(char *param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  undefined8 in_RAX;
  char cVar7;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  
  cVar7 = (char)((ulonglong)param_2 >> 8);
  uVar5 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)param_2,(char)in_RAX)) +
          0x6c40000;
  bVar4 = (byte)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + bVar4;
  param_1[CONCAT44(unaff_0000001c,unaff_EBX)] =
       param_1[CONCAT44(unaff_0000001c,unaff_EBX)] + (char)param_2;
  param_1[param_2] = param_1[param_2] + cVar7;
  cVar6 = (char)(uVar5 >> 8);
  *(char *)((ulonglong)uVar5 - 0x54) = *(char *)((ulonglong)uVar5 - 0x54) + cVar6;
  pbVar1 = (byte *)(param_1 + 0x7c0026ac);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  if (CARRY1(bVar3,bVar4) || *pbVar1 == 0) {
    *param_1 = *param_1 + cVar6;
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pcVar2 = (char *)(((ulonglong)uVar5 ^ 8) - 0x2fffd952);
  *pcVar2 = *pcVar2 + cVar7;
  *(uint *)(param_1 + param_2) = *(uint *)(param_1 + param_2) & unaff_EBX;
  (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

