// Function: FUN_1404d676c
// Addr: 1404d676c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d676c(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int in_EAX;
  uint uVar4;
  char cVar6;
  char unaff_BH;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  char unaff_R12B;
  char *pcVar5;
  
  cVar6 = (char)param_2;
  uVar4 = in_EAX + 0x20000668;
  pcVar5 = (char *)(ulonglong)uVar4;
  pcVar1 = (char *)(unaff_RDI + 1);
  *unaff_RDI = *unaff_RSI;
  *pcVar1 = *pcVar1 + cVar6;
  pcVar5[0x66] = pcVar5[0x66] + unaff_BH;
  *param_4 = *param_4 + unaff_R12B;
  cVar3 = (char)uVar4;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar5 = *pcVar5 + (char)(uVar4 >> 8);
  pcVar2 = (char *)(unaff_RDI + 2);
  *(undefined4 *)pcVar1 = unaff_RSI[1];
  *pcVar2 = *pcVar2 + cVar6;
  pcVar5[0x66] = pcVar5[0x66] + unaff_BH;
  *param_4 = *param_4 + unaff_R12B;
  *param_2 = *param_2 + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  *pcVar2 = *pcVar2 + cVar6;
  pcVar5[0x66] = pcVar5[0x66] + unaff_BH;
  *param_4 = *param_4 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

