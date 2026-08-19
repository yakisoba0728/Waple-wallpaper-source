// Function: FUN_1404b64b0
// Addr: 1404b64b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b64b0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  longlong lVar4;
  char cVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  
  cVar5 = (char)param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = in_RAX + -0x18ffe490;
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar5;
  if (!SCARRY1(cVar2,cVar5)) {
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x21004b);
    *pcVar1 = *pcVar1 + unaff_BH;
    lVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + *in_RAX);
    *(char *)(unaff_RSI + lVar4) = *(char *)(unaff_RSI + lVar4) + (char)((ulonglong)param_2 >> 8);
    pcVar1 = (char *)(lVar4 + -0x18ffe490);
    cVar2 = *pcVar1;
    *pcVar1 = *pcVar1 + cVar5;
    if (SCARRY1(cVar2,cVar5)) {
      *param_1 = *param_1 + 'c';
      uVar3 = (int)lVar4 + 0x74050002;
      *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0xe21004b);
    *pcVar1 = *pcVar1 + unaff_BH;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

