// Function: FUN_1404c5f24
// Addr: 1404c5f24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c5f3c) overlaps instruction at (ram,0x0001404c5f37)
    */

void FUN_1404c5f24(char *param_1,longlong param_2)

{
  undefined1 uVar1;
  int *in_RAX;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  undefined6 uVar5;
  longlong unaff_RSI;
  
  uVar5 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar4 = (char)((ulonglong)param_2 >> 8);
  *(int *)(param_2 + (longlong)in_RAX) = *(int *)(param_2 + (longlong)in_RAX) + (int)param_1;
  *(char *)(in_RAX + unaff_RSI * 2) = (char)in_RAX[unaff_RSI * 2] + (char)param_1;
  bVar3 = (byte)param_2 | *(byte *)((longlong)in_RAX + 0x21);
  *in_RAX = *in_RAX - (int)param_1;
  *param_1 = *param_1 + (char)((ulonglong)param_1 >> 8);
  uVar1 = in(6);
  *(byte *)CONCAT62(uVar5,CONCAT11(cVar4,bVar3)) =
       *(char *)CONCAT62(uVar5,CONCAT11(cVar4,bVar3)) + bVar3;
  if (*(char *)CONCAT62(uVar5,CONCAT11(cVar4,bVar3)) != '\0') {
    cRam00000001454c63a1 = cRam00000001454c63a1 + (char)param_1;
    pcVar2 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) ^ 3);
    *pcVar2 = *pcVar2 + cVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

