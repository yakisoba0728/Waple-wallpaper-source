// Function: FUN_1404bea1c
// Addr: 1404bea1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bea1c(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined8 in_RAX;
  char *pcVar4;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  char in_CF;
  char cVar5;
  
  cVar5 = (char)((ulonglong)in_RAX >> 8) + *unaff_RSI + in_CF;
  pcVar4 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar5,(char)in_RAX));
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x12);
  *pcVar1 = *pcVar1 + unaff_BL;
  param_1[unaff_RBP * 8] = param_1[unaff_RBP * 8] + cVar5;
  *param_4 = *param_4 + -8;
  *pcVar4 = *pcVar4 + (char)in_RAX;
  pcVar4[0x12] = pcVar4[0x12] + (char)param_2;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x12);
  *pcVar1 = *pcVar1 + unaff_BL;
  param_1[unaff_RBP * 8] = param_1[unaff_RBP * 8] + cVar5;
  *param_4 = *param_4 + -8;
  iVar3 = (int)pcVar4 + 0x54050002;
  *unaff_RSI = *unaff_RSI;
  *(char *)(unaff_RDI + param_2) = *(char *)(unaff_RDI + param_2) + (char)param_1;
  *param_1 = *param_1 + -8;
  iVar3 = CONCAT31((int3)((uint)iVar3 >> 8),(char)iVar3 + '&') + 0x64050002;
  bVar2 = (byte)iVar3;
  pcVar1 = (char *)((ulonglong)
                    (CONCAT31((int3)((uint)iVar3 >> 8),
                              bVar2 + unaff_BH + '&' + CARRY1(bVar2,unaff_BH)) | 0x2614f300) - 0x17)
  ;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

