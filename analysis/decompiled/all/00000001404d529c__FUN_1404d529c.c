// Function: FUN_1404d529c
// Addr: 1404d529c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d529c(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined8 in_RAX;
  char *pcVar2;
  char *unaff_RBX;
  char *unaff_RSI;
  char unaff_R12B;
  undefined7 uVar3;
  
  cVar1 = *unaff_RSI;
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  pcVar2 = (char *)CONCAT71(uVar3,cVar1);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + cVar1;
  *unaff_RBX = *unaff_RBX + (char)((ulonglong)param_1 >> 8);
  cVar1 = unaff_RSI[1];
  pcVar2 = (char *)CONCAT71(uVar3,cVar1);
  *param_4 = *param_4 + unaff_R12B;
  *pcVar2 = *pcVar2 + cVar1;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

