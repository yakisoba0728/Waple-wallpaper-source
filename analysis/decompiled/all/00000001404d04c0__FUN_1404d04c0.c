// Function: FUN_1404d04c0
// Addr: 1404d04c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d04c0(int param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined8 in_RAX;
  char *pcVar4;
  undefined1 uVar5;
  undefined6 uVar6;
  char unaff_BL;
  char unaff_BH;
  int *unaff_RBP;
  int *unaff_RSI;
  
  uVar6 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar5 = (undefined1)param_2;
  cVar3 = (char)in_RAX + unaff_BH;
  iVar2 = *unaff_RBP;
  pcVar4 = (char *)(ulonglong)(uint)(param_1 + iVar2);
  *pcVar4 = *pcVar4 - cVar3;
  *pcVar4 = *pcVar4 + unaff_BL;
  cVar3 = cVar3 + -0x66;
  pcVar1 = pcVar4 + CONCAT62(uVar6,CONCAT11(0x2b,uVar5));
  *pcVar1 = *pcVar1 + (char)(param_1 + iVar2);
  if (pcVar4 + -1 == (char *)0x0 || *pcVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(uVar6,CONCAT11(0x2b,uVar5)) = *(char *)CONCAT62(uVar6,CONCAT11(0x2b,uVar5)) >> 2
  ;
  *(char *)(unaff_RSI + CONCAT62(uVar6,CONCAT11(0x2b,uVar5)) * 2) =
       (char)unaff_RSI[CONCAT62(uVar6,CONCAT11(0x2b,uVar5)) * 2] + cVar3;
  *unaff_RSI = *unaff_RSI -
               (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                             CONCAT11((char)((ulonglong)in_RAX >> 8) + (char)(pcVar4 + -1),cVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

