// Function: FUN_14049ec38
// Addr: 14049ec38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ec38(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char cVar3;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  
  cVar3 = (char)param_2;
  uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar3,(char)in_RAX)) + 0xdc40000;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  pcVar2 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_1);
  *pcVar2 = *pcVar2 + cVar3;
  *(byte *)(param_1 + (ulonglong)uVar1) = *(byte *)(param_1 + (ulonglong)uVar1) ^ unaff_BL;
  pcVar2 = (char *)(ulonglong)
                   CONCAT31((int3)(uVar1 >> 8),
                            ((char)uVar1 + -1) -
                            CARRY1((byte)((ulonglong)param_2 >> 8),(byte)((ulonglong)param_1 >> 8)))
  ;
  *pcVar2 = *pcVar2 + cVar3;
  pcVar2[unaff_RSI] = pcVar2[unaff_RSI] + (char)(uVar1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

