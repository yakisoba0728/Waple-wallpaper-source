// Function: FUN_1404a29e0
// Addr: 1404a29e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a29e0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  longlong lVar3;
  char cVar5;
  longlong unaff_RSI;
  char cVar4;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)((ulonglong)in_RAX >> 8) + cVar5;
  pbVar2 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar4,(byte)in_RAX));
  lVar3 = CONCAT71((int7)((ulonglong)pbVar2 >> 8),(byte)in_RAX | *pbVar2);
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)param_2;
  *(char *)(lVar3 + param_1) = *(char *)(lVar3 + param_1) + cVar5;
  *(char *)(lVar3 + 0x33) = *(char *)(lVar3 + 0x33) + cVar4;
  pcVar1 = (char *)((ulonglong)((int)lVar3 + 0x5339200) + 0xe010049 + unaff_RSI * 8);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

