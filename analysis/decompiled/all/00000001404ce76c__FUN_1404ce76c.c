// Function: FUN_1404ce76c
// Addr: 1404ce76c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce76c(char *param_1,char *param_2)

{
  undefined3 uVar1;
  char cVar2;
  char *pcVar3;
  int *piVar4;
  char cVar5;
  char *unaff_RBX;
  int unaff_ESP;
  char *unaff_RSI;
  int unaff_EDI;
  
  cVar5 = (char)param_2;
  *param_1 = *param_1 + (char)unaff_ESP;
  cVar2 = (char)(unaff_EDI + 0x34050002) + cVar5;
  uVar1 = (undefined3)((uint)(unaff_EDI + 0x34050002) >> 8);
  pcVar3 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  pcVar3[0x210049e1] = pcVar3[0x210049e1] + cVar2;
  *param_2 = *param_2 + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  pcVar3 = (char *)((ulonglong)CONCAT31(uVar1,cVar2) ^ 4);
  *pcVar3 = *pcVar3 + cVar5;
  cRam000000017e1d0893 = cRam000000017e1d0893 >> 1;
  cVar2 = (char)pcVar3;
  pcVar3[0x210049e1] = pcVar3[0x210049e1] + cVar2;
  *pcVar3 = *pcVar3 + cVar2;
  *pcVar3 = *pcVar3 + cVar5;
  cRam000000017e1d08a3 = cRam000000017e1d08a3 >> 1;
  pcVar3[0x190049e1] = pcVar3[0x190049e1] + cVar2;
  piVar4 = (int *)((ulonglong)CONCAT31(uVar1,cVar2) & 0xffffffffffffff07);
  *unaff_RSI = *unaff_RSI + cVar5;
  *piVar4 = *piVar4 + unaff_ESP;
  *unaff_RBX = *unaff_RBX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

