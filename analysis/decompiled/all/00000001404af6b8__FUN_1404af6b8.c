// Function: FUN_1404af6b8
// Addr: 1404af6b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404af6b8(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  undefined3 uVar5;
  byte bVar6;
  byte bVar7;
  int in_EAX;
  char cVar9;
  ulonglong uVar8;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  uVar4 = in_EAX + 0x21004a;
  bVar7 = (byte)uVar4;
  *(byte *)(ulonglong)uVar4 = *(byte *)(ulonglong)uVar4 | bVar7;
  bVar6 = ((char)(uVar4 >> 8) + cVar9) * '\x02';
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar6,bVar7));
  uVar5 = (undefined3)(uVar4 >> 8);
  bVar7 = bVar7 | *(byte *)(ulonglong)uVar4;
  uVar8 = (ulonglong)CONCAT31(uVar5,bVar7);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  pcVar2 = (char *)(uVar8 + param_1);
  *pcVar2 = *pcVar2 + cVar9;
  pbVar1 = (byte *)(uVar8 + 0x5e);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar6;
  uVar4 = CONCAT31(uVar5,bVar7 + CARRY1(bVar3,bVar6)) + 0x21004a;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

