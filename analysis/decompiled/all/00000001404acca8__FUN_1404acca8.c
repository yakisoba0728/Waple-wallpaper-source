// Function: FUN_1404acca8
// Addr: 1404acca8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acca8(undefined8 param_1,char *param_2)

{
  char cVar1;
  longlong in_RAX;
  undefined7 uVar3;
  undefined4 unaff_ESP;
  undefined4 unaff_00000024;
  int unaff_EBP;
  int *unaff_RDI;
  char *pcVar2;
  
  pcVar2 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + in_RAX);
  *pcVar2 = *pcVar2 + (char)((ulonglong)param_2 >> 8);
  uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar1 = (char)in_RAX + (char)param_2;
  pcVar2 = (char *)CONCAT71(uVar3,cVar1);
  pcVar2[0x210049e1] = pcVar2[0x210049e1] + cVar1;
  *pcVar2 = *pcVar2 + cVar1;
  cVar1 = cVar1 + (char)param_2;
  pcVar2 = (char *)(CONCAT71(uVar3,cVar1) + 0x10049e1);
  *pcVar2 = *pcVar2 + cVar1;
  *param_2 = *param_2 + (char)((ulonglong)param_1 >> 8);
  *unaff_RDI = *unaff_RDI + unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

