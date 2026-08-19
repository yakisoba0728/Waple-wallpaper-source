// Function: FUN_1404b5f10
// Addr: 1404b5f10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5f10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  char cVar7;
  undefined6 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  byte *pbVar3;
  
  uVar10 = (undefined1)((ulonglong)param_2 >> 8);
  uVar9 = (undefined1)param_2;
  uVar8 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar7 = (char)((ulonglong)param_1 >> 8);
  uVar6 = (undefined1)param_1;
  *param_4 = *param_4;
  uVar2 = (in_EAX | 0x5e) + 0xe4050002;
  pbVar3 = (byte *)(ulonglong)uVar2;
  bVar1 = (byte)uVar2;
  *pbVar3 = *pbVar3 | bVar1;
  *(char *)(param_1 + 0x1b) = *(char *)(param_1 + 0x1b) + bVar1;
  pcVar5 = (char *)(param_1 + 0x1b + (longlong)pbVar3 * 2);
  *pcVar5 = *pcVar5 + cVar7;
  pcVar4 = (char *)func_0x0001406c5f73();
  *pcVar4 = *pcVar4 + (char)pcVar4;
  pcVar5 = (char *)(CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) + 0x1b);
  *pcVar5 = *pcVar5 + (char)pcVar4;
  pcVar5 = (char *)(CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) + 0x1b + (longlong)pcVar4 * 2);
  *pcVar5 = *pcVar5 + cVar7;
  pcVar5 = (char *)func_0x0001406c5f83();
  bVar1 = (char)pcVar5 + *pcVar5;
  pbVar3 = (byte *)CONCAT62((int6)((ulonglong)pcVar5 >> 0x10),
                            CONCAT11((char)((ulonglong)pcVar5 >> 8) * '\x02',bVar1));
  *pbVar3 = *pbVar3 | bVar1;
  pcVar5 = (char *)(CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) + 0x1b);
  *pcVar5 = *pcVar5 + bVar1;
  pcVar5 = (char *)(CONCAT62(uVar8,CONCAT11(cVar7,uVar6)) + 0x1b + (longlong)pbVar3 * 2);
  *pcVar5 = *pcVar5 + cVar7;
  func_0x0001456c5f97();
  uVar2 = in(CONCAT11(uVar10,uVar9));
  *param_4 = *param_4;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  in(CONCAT11(uVar10,uVar9));
  *param_4 = *param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

