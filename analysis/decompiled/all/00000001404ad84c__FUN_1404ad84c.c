// Function: FUN_1404ad84c
// Addr: 1404ad84c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad84c(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte bVar5;
  uint *in_RAX;
  undefined7 uVar6;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char *unaff_RDI;
  ulonglong unaff_retaddr;
  char *pcVar4;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX + (char)*in_RAX;
  pcVar4 = (char *)CONCAT71(uVar6,cVar2);
  pcVar4[(longlong)param_1] = pcVar4[(longlong)param_1] + (char)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(pcVar4 + 0x1c);
  bVar3 = *pbVar1;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar1 = *pbVar1 + bVar5;
  bVar3 = (cVar2 + *pcVar4 + CARRY1(bVar3,bVar5) + -0x12) - ((unaff_retaddr & 1) != 0);
  pcVar4 = (char *)CONCAT71(uVar6,bVar3);
  *pcVar4 = *pcVar4 + unaff_BH;
  bVar3 = *(byte *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (ulonglong)bVar3);
  *param_1 = *param_1 + bVar3;
  *unaff_RSI = *unaff_RSI + (bVar3 | (byte)*(undefined4 *)(CONCAT71(uVar6,bVar3) * 2));
  *unaff_RDI = *unaff_RDI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

