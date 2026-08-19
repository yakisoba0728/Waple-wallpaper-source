// Function: FUN_1404c52e8
// Addr: 1404c52e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c52e8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  byte bVar2;
  undefined3 uVar3;
  uint uVar4;
  uint *in_RAX;
  char cVar5;
  int unaff_EBX;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + (longlong)in_RAX) =
       (*(char *)(unaff_RDI + (longlong)in_RAX) - cVar5) - in_CF;
  *(char *)in_RAX = (char)*in_RAX + (char)unaff_EBX;
  piVar1 = (int *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                            CONCAT11(cVar5,(byte)param_2 ^
                                           *(byte *)((longlong)in_RAX + unaff_RSI * 2))) + param_1);
  *piVar1 = *piVar1 + unaff_EBX;
  (&stack0x00000000)[(longlong)in_RAX * 8] =
       (&stack0x00000000)[(longlong)in_RAX * 8] + (char)unaff_EBX;
  uVar4 = (uint)in_RAX | *in_RAX;
  bVar2 = (char)uVar4 + 0x9c;
  uVar3 = (undefined3)(uVar4 >> 8);
  uVar4 = CONCAT31(uVar3,(bVar2 | *(byte *)(ulonglong)CONCAT31(uVar3,bVar2)) - 0x34);
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

