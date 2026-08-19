// Function: FUN_1404cbf08
// Addr: 1404cbf08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbf08(char *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char cVar5;
  char unaff_BL;
  char *unaff_RDI;
  
  uVar2 = in_EAX + 0x30000664;
  if (uVar2 == 0 || in_EAX < -0x30000664) {
    *param_1 = *param_1 + unaff_BL;
    bRam5409000409010000 = (byte)uVar2 | *(byte *)(ulonglong)uVar2;
    *unaff_RDI = *unaff_RDI + bRam5409000409010000;
  }
  else {
    param_1[-0x1fffcb82] = param_1[-0x1fffcb82] + (char)(uVar2 >> 8);
    uVar2 = in(param_2);
    pcVar4 = (char *)(ulonglong)uVar2;
    *param_4 = *param_4;
    *pcVar4 = *pcVar4 + (char)uVar2;
    cVar1 = *pcVar4;
    cVar5 = (char)((ushort)param_2 >> 8);
    *pcVar4 = *pcVar4 + cVar5;
    if (*pcVar4 != '\0' && SCARRY1(cVar1,cVar5) == *pcVar4 < '\0') {
      param_1[-0x1fffcb82] = param_1[-0x1fffcb82] + (char)(uVar2 >> 8);
      uVar3 = in(param_2);
      *param_4 = *param_4 + (char)uVar3;
      *param_1 = *param_1 + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *param_1 = *param_1 + (char)param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

