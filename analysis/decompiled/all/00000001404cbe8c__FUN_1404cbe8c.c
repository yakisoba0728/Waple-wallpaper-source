// Function: FUN_1404cbe8c
// Addr: 1404cbe8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbe8c(char *param_1,undefined2 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined8 in_RAX;
  char *pcVar4;
  char unaff_BL;
  char *unaff_RSI;
  longlong unaff_RDI;
  char unaff_R12B;
  
  bVar1 = (char)in_RAX + CARRY4((uint)&stack0x00000000,(uint)&stack0x00000000);
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar1,bVar1)) + 0x34ec1e00;
  *(char *)(unaff_RDI + -0x13) = *(char *)(unaff_RDI + -0x13) + (char)(uVar3 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  in(param_2);
  uVar3 = in(param_2);
  pcVar4 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + unaff_R12B;
  *pcVar4 = *pcVar4 + (char)param_1;
  *pcVar4 = *pcVar4 + (char)uVar3;
  cVar2 = in(0x14);
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *pcVar4 = *pcVar4 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

