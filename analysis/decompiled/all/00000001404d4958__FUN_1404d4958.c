// Function: FUN_1404d4958
// Addr: 1404d4958
// Size: 1 bytes


void FUN_1404d4958(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char cVar4;
  undefined8 in_RAX;
  char cVar5;
  char in_CF;
  char *pcVar3;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *param_2 = *param_2 + (char)param_1;
  uVar2 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x1c + in_CF) + 0xedc41a34;
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[(longlong)param_1 * 2 + 0x4d] = pcVar3[(longlong)param_1 * 2 + 0x4d] + cVar5;
  cVar4 = (char)(uVar2 >> 8);
  *param_1 = *param_1 + cVar4;
  *pcVar3 = *pcVar3 + (char)uVar2;
  cVar1 = (char)uVar2 + cVar4;
  pcVar3 = (char *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),cVar1);
  pcVar3[(longlong)param_1 * 2 + 0x4d] = pcVar3[(longlong)param_1 * 2 + 0x4d] + cVar5;
  *param_1 = *param_1 + cVar4;
  *param_2 = *param_2 + (char)param_1;
  *pcVar3 = *pcVar3 + cVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

