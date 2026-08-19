// Function: FUN_1404bea0c
// Addr: 1404bea0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bea0c(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  uint in_EAX;
  int iVar5;
  char *pcVar7;
  char unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char cVar8;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_RDI;
  byte in_CF;
  undefined1 auStack_8 [8];
  byte *pbVar6;
  
  uVar3 = in_EAX + (uint)&stack0x00000000;
  iVar5 = uVar3 + in_CF;
  bVar4 = (char)iVar5 - (CARRY4(in_EAX,(uint)&stack0x00000000) || CARRY4(uVar3,(uint)in_CF));
  pbVar6 = (byte *)(ulonglong)CONCAT31((int3)((uint)iVar5 >> 8),bVar4);
  unaff_RSI[(longlong)&stack0x00000000] = unaff_RSI[(longlong)&stack0x00000000] + bVar4;
  *pbVar6 = *pbVar6 & bVar4;
  cVar2 = (char)((uint)iVar5 >> 8) + *unaff_RSI;
  uVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(cVar2,bVar4));
  pcVar7 = (char *)(ulonglong)uVar3;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x12);
  *pcVar1 = *pcVar1 + unaff_BL;
  param_1[unaff_RBP * 8] = param_1[unaff_RBP * 8] + cVar2;
  cVar8 = (char)auStack_8;
  *param_4 = *param_4 + cVar8;
  *pcVar7 = *pcVar7 + bVar4;
  pcVar7[0x12] = pcVar7[0x12] + (char)param_2;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x12);
  *pcVar1 = *pcVar1 + unaff_BL;
  param_1[unaff_RBP * 8] = param_1[unaff_RBP * 8] + cVar2;
  *param_4 = *param_4 + cVar8;
  iVar5 = uVar3 + 0x54050002;
  *unaff_RSI = *unaff_RSI;
  *(char *)(unaff_RDI + param_2) = *(char *)(unaff_RDI + param_2) + (char)param_1;
  *param_1 = *param_1 + cVar8;
  iVar5 = CONCAT31((int3)((uint)iVar5 >> 8),(char)iVar5 + '&') + 0x64050002;
  bVar4 = (byte)iVar5;
  pcVar1 = (char *)((ulonglong)
                    (CONCAT31((int3)((uint)iVar5 >> 8),
                              bVar4 + unaff_BH + '&' + CARRY1(bVar4,unaff_BH)) | 0x2614f300) - 0x17)
  ;
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + cVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

