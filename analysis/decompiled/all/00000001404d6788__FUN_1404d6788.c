// Function: FUN_1404d6788
// Addr: 1404d6788
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6788(undefined1 *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  char cVar5;
  char unaff_BH;
  char *unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  bool in_SF;
  char *pcVar4;
  
  cVar5 = (char)param_2;
  cVar1 = (char)in_RAX;
  if (!in_SF) {
    *param_4 = *param_4 + unaff_R12B;
    *param_2 = *param_2 + cVar1;
    *in_RAX = *in_RAX + cVar1;
    *unaff_RDI = *unaff_RDI + cVar5;
    in_RAX[0x66] = in_RAX[0x66] + unaff_BH;
    *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + unaff_R12B;
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1 + unaff_BH) + 0xe4050002;
  uVar3 = uVar3 | *(uint *)(ulonglong)uVar3;
  pcVar4 = (char *)(ulonglong)uVar3;
  unaff_RSI[(longlong)unaff_RDI * 8 + 0x36] = unaff_RSI[(longlong)unaff_RDI * 8 + 0x36] + cVar5;
  *unaff_RDI = *unaff_RDI + cVar5;
  *param_4 = *param_4 + unaff_R12B;
  cVar1 = (char)uVar3;
  *pcVar4 = *pcVar4 + cVar1;
  *pcVar4 = *pcVar4 + cVar1;
  *unaff_RSI = *unaff_RSI + '\x01';
  unaff_RSI[(longlong)unaff_RDI * 8 + 0x36] = unaff_RSI[(longlong)unaff_RDI * 8 + 0x36] + cVar5;
  *unaff_RDI = *unaff_RDI + cVar5;
  *param_4 = *param_4 + unaff_R12B;
  *pcVar4 = *pcVar4 + cVar1;
  *pcVar4 = *pcVar4 + cVar1;
  *unaff_RSI = *unaff_RSI + '\x01';
  cVar2 = cVar1 + unaff_BH;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x3dffc904] = pcVar4[-0x3dffc904] + (char)(uVar3 >> 8);
  pcVar4[0x15] = pcVar4[0x15] + cVar5 + cVar1;
  *param_1 = *param_1;
  *unaff_RSI = *unaff_RSI + cVar2;
  *pcVar4 = *pcVar4 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

