// Function: FUN_1404b64c8
// Addr: 1404b64c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b64c8(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  longlong in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + in_RAX) = *(char *)(unaff_RSI + in_RAX) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(in_RAX + -0x18ffe490);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + (char)param_2;
  if (!SCARRY1(cVar2,(char)param_2)) {
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0xe21004b);
    *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_SPL;
  uVar3 = (int)in_RAX + 0x74050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

